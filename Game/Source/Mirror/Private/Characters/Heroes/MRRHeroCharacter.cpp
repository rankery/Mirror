// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRHeroCharacter.h"
#include "Animation/AnimInstance.h"

#include "AI/MRRHeroAIController.h"

#include "Camera/CameraComponent.h"

#include "Characters/Abilities/AttributeSets/MRRAttributeSet.h"
#include "Characters/Abilities/MRRAbilitySystemComponent.h"

#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Components/WidgetComponent.h"

#include "GameFramework/SpringArmComponent.h"

#include "Mirror/MirrorGameMode.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Sound/SoundCue.h"
#include "TimerManager.h"

#include "Player/MRRPlayerController.h"
#include "Player/MRRPlayerState.h"

#include "UI/MRRFloatingStatusBarWidget.h"

#include "Weapons/MRRWeapon.h"


AMRRHeroCharacter::AMRRHeroCharacter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;
	
	NoWeaponTag = FGameplayTag::RequestGameplayTag(FName("Weapon.Equipped.None"));
	WeaponChangingDelayReplicationTag = FGameplayTag::RequestGameplayTag(FName("Ability.Weapon.IsChangingDelayReplication"));
	CurrentWeaponLeftTag = NoWeaponTag;
	CurrentWeaponRightTag = NoWeaponTag;
	Inventory = FMRRHeroInventory();

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->SetRelativeLocation(FVector(0, 50, 68.492264));

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(FName("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	FollowCamera->FieldOfView = 80.0f;

	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionProfileName(FName("NoCollision"));
	GetMesh()->bCastHiddenShadow = true;
	GetMesh()->bReceivesDecals = false;

	UIFloatingStatusBarComponent = CreateDefaultSubobject<UWidgetComponent>(FName("UIFloatingStatusBarComponent"));
	UIFloatingStatusBarComponent->SetupAttachment(RootComponent);
	UIFloatingStatusBarComponent->SetRelativeLocation(FVector(0, 0, 120));
	UIFloatingStatusBarComponent->SetWidgetSpace(EWidgetSpace::Screen);
	UIFloatingStatusBarComponent->SetDrawSize(FVector2D(500, 500));

	UIFloatingStatusBarClass = StaticLoadClass(UObject::StaticClass(), nullptr, TEXT("/Game/Mirror/UI/UI_FloatingStatusBar_Hero.UI_FloatingStatusBar_Hero_C"));
	if (!UIFloatingStatusBarClass)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Failed to find UIFloatingStatusBarClass. If it was moved, please update the reference location in C++."), *FString(__FUNCTION__));
	}

	AutoPossessAI = EAutoPossessAI::PlacedInWorld;
	AIControllerClass = AMRRHeroAIController::StaticClass();
}

void AMRRHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMRRHeroCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMRRHeroCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &AMRRHeroCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMRRHeroCharacter::LookUpRate);
	PlayerInputComponent->BindAxis("Turn", this, &AMRRHeroCharacter::Turn);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMRRHeroCharacter::TurnRate);

	// Bind player input to the AbilitySystemComponent. Also called in OnRep_PlayerState because of a potential race condition.
	BindASCInput();
}

// Server only
void AMRRHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AMRRPlayerState* PS = GetPlayerState<AMRRPlayerState>();
	if (PS)
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<UMRRAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);

		// Set the AttributeSet for convenience attribute functions
		AttributeSet = PS->GetAttributeSet();

		// If we handle players disconnecting and rejoining in the future, we'll have to change this so that possession from rejoining doesn't reset attributes.
		// For now assume possession = spawn/respawn.
		InitializeAttributes();

		AddStartupEffects();

		AddCharacterAbilities();

		AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetController());
		if (PC)
		{
			PC->CreateHUD();
		}
		if (AbilitySystemComponent->GetTagCount(DeadTag) > 0)
		{
			// Set Health/Mana/Stamina to their max. This is only necessary for *Respawn*.
			SetHealth(GetMaxHealth());
		}

		// Forcibly set the DeadTag count to 0. This is only necessary for *Respawn*.
		AbilitySystemComponent->SetTagMapCount(DeadTag, 0);


		InitializeFloatingStatusBar();


		if (IsLocallyControlled() && IsPlayerControlled() && UIFloatingStatusBarComponent && UIFloatingStatusBar)
		{
			UIFloatingStatusBarComponent->SetVisibility(false, true);
		}
	}
	SetupStartupPerspective();
}

void AMRRHeroCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMRRHeroCharacter, Inventory);
	// Only replicate CurrentWeaponLeft and CurrentWeaponRight to simulated clients and manually sync CurrentWeeapon with Owner when we're ready.
	// This allows us to predict weapon changing.
	DOREPLIFETIME_CONDITION(AMRRHeroCharacter, CurrentWeaponLeft, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(AMRRHeroCharacter, CurrentWeaponRight, COND_SimulatedOnly);
}

UMRRFloatingStatusBarWidget* AMRRHeroCharacter::GetFloatingStatusBar()
{
	return UIFloatingStatusBar;
}

void AMRRHeroCharacter::Die()
{
	AbilitySystemComponent->RegisterGameplayTagEvent(WeaponChangingDelayReplicationTag).Remove(WeaponChangingDelayReplicationTagChangedDelegateHandle);

	Super::Die();
}

void AMRRHeroCharacter::FinishDying()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		AMirrorGameMode* GM = Cast<AMirrorGameMode>(GetWorld()->GetAuthGameMode());

		if (GM)
		{
			GM->HeroDied(GetController());
		}
	}

	Super::FinishDying();
}

AMRRWeapon* AMRRHeroCharacter::GetCurrentWeaponLeft() const
{
	return CurrentWeaponLeft;
}

AMRRWeapon* AMRRHeroCharacter::GetCurrentWeaponRight() const
{
	return CurrentWeaponRight;
}

bool AMRRHeroCharacter::AddWeaponToInventory(AMRRWeapon* NewWeapon)
{
	if (GetLocalRole() < ROLE_Authority)
	{
		return false;
	}

	Inventory.Weapons.Add(NewWeapon);
	NewWeapon->SetOwningCharacter(this);

	return true;
}

bool AMRRHeroCharacter::RemoveWeaponFromInventory(AMRRWeapon* WeaponToRemove)
{
	if (DoesWeaponExistInInventory(WeaponToRemove))
	{
		
		Inventory.Weapons.Remove(WeaponToRemove);
		WeaponToRemove->SetOwningCharacter(nullptr);

		// Add parameter to drop weapon?

		return true;
	}

	return false;
}

bool AMRRHeroCharacter::DoesWeaponExistInInventory(AMRRWeapon* InWeapon)
{

	for (AMRRWeapon* Weapon : Inventory.Weapons)
	{
		if (Weapon && InWeapon && Weapon->GetClass() == InWeapon->GetClass())
		{
			return true;
		}
	}

	return false;
}


void AMRRHeroCharacter::EquipWeaponLeft(AMRRWeapon* NewWeapon)
{
	if (GetLocalRole() < ROLE_Authority)
	{
		ServerEquipWeaponLeft(NewWeapon);
		SetCurrentWeaponLeft(NewWeapon);
	}
	else
	{
		SetCurrentWeaponLeft(NewWeapon);
	}
}

void AMRRHeroCharacter::EquipWeaponRight(AMRRWeapon* NewWeapon)
{
	if (GetLocalRole() < ROLE_Authority)
	{
		ServerEquipWeaponRight(NewWeapon);
		SetCurrentWeaponLeft(NewWeapon);
	}
	else
	{
		ServerEquipWeaponRight(NewWeapon);
	}
}

void AMRRHeroCharacter::SetCurrentWeaponLeft(AMRRWeapon* NewWeapon)
{

	UnEquipWeapon(CurrentWeaponLeft);

	if (NewWeapon)
	{
		// Weapons coming from OnRep_CurrentWeapon won't have the owner set
		CurrentWeaponLeft = NewWeapon;
		CurrentWeaponLeft->SetOwningCharacter(this);
		CurrentWeaponLeft->EquipLeft();

		AMRRPlayerController* PC = GetController<AMRRPlayerController>();
		if (PC && PC->IsLocalController())
		{
			// TO DO: Set HUD currently not working
			/*	PC->SetEquippedWeaponPrimaryIconFromSprite(CurrentWeapon->PrimaryIcon);
			PC->SetHUDReticle(CurrentWeapon->GetPrimaryHUDReticleClass());*/
		}

		UAnimMontage* EquipMontage = CurrentWeaponLeft->GetEquipMontage();
		if (EquipMontage && GetMesh())
		{
			GetMesh()->GetAnimInstance()->Montage_Play(EquipMontage);
		}
	}
	else
	{
		// This will clear HUD, tags etc
		UnEquipCurrentWeaponLeft();
	}
}

void AMRRHeroCharacter::SetCurrentWeaponRight(AMRRWeapon* NewWeapon)
{

	UnEquipWeapon(CurrentWeaponRight);

	if (NewWeapon)
	{
		// Weapons coming from OnRep_CurrentWeapon won't have the owner set
		CurrentWeaponRight = NewWeapon;
		CurrentWeaponRight->SetOwningCharacter(this);
		CurrentWeaponRight->EquipRight();

		AMRRPlayerController* PC = GetController<AMRRPlayerController>();
		if (PC && PC->IsLocalController())
		{
			// TO DO: Set HUD currently not working
			/*	PC->SetEquippedWeaponPrimaryIconFromSprite(CurrentWeapon->PrimaryIcon);
			PC->SetHUDReticle(CurrentWeapon->GetPrimaryHUDReticleClass());*/
		}

		UAnimMontage* EquipMontage = CurrentWeaponRight->GetEquipMontage();
		if (EquipMontage && GetMesh())
		{
			GetMesh()->GetAnimInstance()->Montage_Play(EquipMontage);
		}
	}
	else
	{
		// This will clear HUD, tags etc
		UnEquipCurrentWeaponRight();
	}
}

void AMRRHeroCharacter::UnEquipWeapon(AMRRWeapon* WeaponToUnEquip)
{
	//TODO this will run into issues when calling UnEquipWeapon explicitly and the WeaponToUnEquip == CurrentWeapon

	if (WeaponToUnEquip)
	{
		WeaponToUnEquip->UnEquip();
	}
}

void AMRRHeroCharacter::UnEquipCurrentWeaponLeft()
{

	UnEquipWeapon(CurrentWeaponLeft);
	CurrentWeaponLeft = nullptr;

	AMRRPlayerController* PC = GetController<AMRRPlayerController>();
	if (PC && PC->IsLocalController())
	{
		// TO DO: Set HUD currently not working
		//PC->SetEquippedWeaponPrimaryIconFromSprite(nullptr);
		//PC->SetHUDReticle(nullptr);
	}
}

void AMRRHeroCharacter::UnEquipCurrentWeaponRight()
{

	UnEquipWeapon(CurrentWeaponRight);
	CurrentWeaponRight = nullptr;

	AMRRPlayerController* PC = GetController<AMRRPlayerController>();
	if (PC && PC->IsLocalController())
	{
		// TO DO: Set HUD currently not working
		//PC->SetEquippedWeaponPrimaryIconFromSprite(nullptr);
		//PC->SetHUDReticle(nullptr);
	}
}

void AMRRHeroCharacter::RemoveAllWeaponsFromInventory()
{
	if (GetLocalRole() < ROLE_Authority)
	{
		return;
	}

	float radius = 50.0f;
	float NumWeapons = Inventory.Weapons.Num();

	for (int32 i = Inventory.Weapons.Num() - 1; i >= 0; i--)
	{
		AMRRWeapon* Weapon = Inventory.Weapons[i];
		RemoveWeaponFromInventory(Weapon);

		// Set the weapon up as a pickup

		float OffsetX = radius * FMath::Cos((i / NumWeapons) * 2.0f * PI);
		float OffsetY = radius * FMath::Sin((i / NumWeapons) * 2.0f * PI);
		Weapon->OnDropped(GetActorLocation() + FVector(OffsetX, OffsetY, 0.0f));
	}
}

void AMRRHeroCharacter::ServerEquipWeaponLeft_Implementation(AMRRWeapon* NewWeapon)
{
	EquipWeaponLeft(NewWeapon);
}

bool AMRRHeroCharacter::ServerEquipWeaponLeft_Validate(AMRRWeapon* NewWeapon)
{
	return true;
}

void AMRRHeroCharacter::ServerEquipWeaponRight_Implementation(AMRRWeapon* NewWeapon)
{
	EquipWeaponRight(NewWeapon);
}

bool AMRRHeroCharacter::ServerEquipWeaponRight_Validate(AMRRWeapon* NewWeapon)
{
	return true;
}

FName AMRRHeroCharacter::GetWeaponLeftAttachPoint()
{
	return WeaponLeftAttachPoint;
}

FName AMRRHeroCharacter::GetWeaponRightAttachPoint()
{
	return WeaponRightAttachPoint;
}

int32 AMRRHeroCharacter::GetNumWeapons() const
{
	return Inventory.Weapons.Num();
}

void AMRRHeroCharacter::OnRep_CurrentWeaponLeft(AMRRWeapon* LastWeapon)
{
	SetCurrentWeaponLeft(CurrentWeaponLeft);
}

void AMRRHeroCharacter::OnRep_CurrentWeaponRight(AMRRWeapon* LastWeapon)
{
	SetCurrentWeaponLeft(CurrentWeaponLeft);
}

void AMRRHeroCharacter::OnRep_Inventory()
{
	if (GetLocalRole() == ROLE_AutonomousProxy && Inventory.Weapons.Num() > 0 && !CurrentWeaponLeft)
	{
		// Since we don't replicate the CurrentWeaponLeft to the owning client, this is a way to ask the Server to sync
		// the CurrentWeaponLeft after it's been spawned via replication from the Server.
		// The weapon spawning is replicated but the variable CurrentWeaponLeft is not on the owning client.
		ServerSyncCurrentWeaponLeft();
	}
	if (GetLocalRole() == ROLE_AutonomousProxy && Inventory.Weapons.Num() > 0 && !CurrentWeaponRight)
	{
		// Since we don't replicate the CurrentWeaponRight to the owning client, this is a way to ask the Server to sync
		// the CurrentWeaponRight after it's been spawned via replication from the Server.
		// The weapon spawning is replicated but the variable CurrentWeaponRight is not on the owning client.
		ServerSyncCurrentWeaponRight();
	}
}

void AMRRHeroCharacter::ServerSyncCurrentWeaponLeft_Implementation()
{
	ClientSyncCurrentWeaponLeft(CurrentWeaponLeft);
}

bool AMRRHeroCharacter::ServerSyncCurrentWeaponLeft_Validate()
{
	return true;
}

void AMRRHeroCharacter::ServerSyncCurrentWeaponRight_Implementation()
{
	ClientSyncCurrentWeaponRight(CurrentWeaponRight);
}

bool AMRRHeroCharacter::ServerSyncCurrentWeaponRight_Validate()
{
	return true;
}

void AMRRHeroCharacter::ClientSyncCurrentWeaponLeft_Implementation(AMRRWeapon* InWeapon)
{
	AMRRWeapon* LastWeapon = CurrentWeaponLeft;
	CurrentWeaponLeft = InWeapon;
	OnRep_CurrentWeaponLeft(LastWeapon);
}

bool AMRRHeroCharacter::ClientSyncCurrentWeaponLeft_Validate(AMRRWeapon* InWeapon)
{
	return true;
}

void AMRRHeroCharacter::ClientSyncCurrentWeaponRight_Implementation(AMRRWeapon* InWeapon)
{
	AMRRWeapon* LastWeapon = CurrentWeaponRight;
	CurrentWeaponRight = InWeapon;
	OnRep_CurrentWeaponRight(LastWeapon);
}

bool AMRRHeroCharacter::ClientSyncCurrentWeaponRight_Validate(AMRRWeapon* InWeapon)
{
	return true;
}

void AMRRHeroCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Only needed for Heroes placed in world and when the player is the Server.
	// On respawn, they are set up in PossessedBy.
	// When the player a client, the floating status bars are all set up in OnRep_PlayerState.
	InitializeFloatingStatusBar();

	// CurrentWeapon is replicated only to Simulated clients so sync the current weapon manually
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		ServerSyncCurrentWeaponLeft();
		ServerSyncCurrentWeaponRight();
	}
}

void AMRRHeroCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	StartingCameraBoomArmLength = CameraBoom->TargetArmLength;
	StartingCameraBoomLocation = CameraBoom->GetRelativeLocation();
	StartingMeshLocation = GetMesh()->GetRelativeLocation();

	GetWorldTimerManager().SetTimerForNextTick(this, &AMRRHeroCharacter::SpawnDefaultInventory);
}

void AMRRHeroCharacter::SpawnDefaultInventory()
{
	if (GetLocalRole() < ROLE_Authority)
	{
		return;
	}

	int32 NumWeaponClasses = DefaultInventoryWeaponClasses.Num();
	for (int32 i = 0; i < NumWeaponClasses; i++)
	{
		if (!DefaultInventoryWeaponClasses[i])
		{
			// An empty item was added to the Array in blueprint
			continue;
		}

		AMRRWeapon* NewWeapon = GetWorld()->SpawnActorDeferred<AMRRWeapon>(DefaultInventoryWeaponClasses[i],
		FTransform::Identity, this, this, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
		NewWeapon->bSpawnWithCollision = false;
		NewWeapon->FinishSpawning(FTransform::Identity);

		AddWeaponToInventory(NewWeapon);
	}
}

void AMRRHeroCharacter::LookUp(float Value)
{
	if (IsAlive())
	{
		AddControllerPitchInput(Value);
	}
}

void AMRRHeroCharacter::LookUpRate(float Value)
{
	if (IsAlive())
	{
		AddControllerPitchInput(Value * BaseLookUpRate * GetWorld()->DeltaTimeSeconds);
	}
}

void AMRRHeroCharacter::Turn(float Value)
{
	if (IsAlive())
	{
		AddControllerYawInput(Value);
	}
}

void AMRRHeroCharacter::TurnRate(float Value)
{
	if (IsAlive())
	{
		AddControllerYawInput(Value * BaseTurnRate * GetWorld()->DeltaTimeSeconds);
	}
}

void AMRRHeroCharacter::MoveForward(float Value)
{
	if (IsAlive())
	{
		AddMovementInput(UKismetMathLibrary::GetForwardVector(FRotator(0, GetControlRotation().Yaw, 0)), Value);
	}
}

void AMRRHeroCharacter::MoveRight(float Value)
{
	if (IsAlive())
	{
		AddMovementInput(UKismetMathLibrary::GetRightVector(FRotator(0, GetControlRotation().Yaw, 0)), Value);
	}
}

void AMRRHeroCharacter::BindASCInput()
{
	if (!bASCInputBound && IsValid(AbilitySystemComponent) && IsValid(InputComponent))
	{
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"),
			FString("CancelTarget"), FString("EMRRAbilityInputID"), static_cast<int32>(EMRRAbilityInputID::Confirm), static_cast<int32>(EMRRAbilityInputID::Cancel)));

		bASCInputBound = true;
	}
}

void AMRRHeroCharacter::OnRep_Controller()
{
	Super::OnRep_Controller();

	SetupStartupPerspective();
}

// Client only
void AMRRHeroCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AMRRPlayerState* PS = GetPlayerState<AMRRPlayerState>();
	if (PS)
	{
		// Set the ASC for clients. Server does this in PossessedBy.
		AbilitySystemComponent = Cast<UMRRAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);

		// Bind player input to the AbilitySystemComponent. Also called in SetupPlayerInputComponent because of a potential race condition.
		BindASCInput();


		// Set the AttributeSetBase for convenience attribute functions
		AttributeSet = PS->GetAttributeSet();


		// If we handle players disconnecting and rejoining in the future, we'll have to change this so that posession from rejoining doesn't reset attributes.
		// For now assume possession = spawn/respawn.
		InitializeAttributes();

		AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetController());
		if (PC)
		{
			PC->CreateHUD();
		}

		if (CurrentWeaponLeft)
		{
			// If current weapon repped before PlayerState, set tag on ASC
			AbilitySystemComponent->AddLooseGameplayTag(CurrentWeaponLeftTag);
			// Update owning character and ASC just in case it repped before PlayerState
			CurrentWeaponLeft->SetOwningCharacter(this);
		}

		if (CurrentWeaponRight)
		{
			// If current weapon repped before PlayerState, set tag on ASC
			AbilitySystemComponent->AddLooseGameplayTag(CurrentWeaponRightTag);
			// Update owning character and ASC just in case it repped before PlayerState
			CurrentWeaponRight->SetOwningCharacter(this);
		}

		if (AbilitySystemComponent->GetTagCount(DeadTag) > 0)
		{
			// Set Health to max. This is only necessary for *Respawn*.
			SetHealth(GetMaxHealth());
	
		}

		// Forcibly set the DeadTag count to 0. This is only necessary for *Respawn*.
		AbilitySystemComponent->SetTagMapCount(DeadTag, 0);

		// Simulated on proxies don't have their PlayerStates yet when BeginPlay is called so we call it again here
		InitializeFloatingStatusBar();
	}
}

void AMRRHeroCharacter::SetupStartupPerspective()
{
	APlayerController* PC = Cast<APlayerController>(GetController());

	if (PC && PC->IsLocalController())
	{
		SetPerspective();
	}
}

void AMRRHeroCharacter::SetPerspective()
{
	// Only change perspective for the locally controlled player. Simulated proxies should stay in third person.
	// To swap cameras, deactivate current camera (defaults to ThirdPersonCamera), activate desired camera, and call PlayerController->SetViewTarget() on self
	AMRRPlayerController* PC = GetController<AMRRPlayerController>();
	if (PC && PC->IsLocalPlayerController())
	{
		FollowCamera->Activate();
		PC->SetViewTarget(this);

		GetMesh()->SetVisibility(true, true);

		// Reset the third person mesh
		GetMesh()->SetRelativeLocation(StartingMeshLocation);
	}
}

void AMRRHeroCharacter::InitializeFloatingStatusBar()
{
	// Only create once
	if (UIFloatingStatusBar || !IsValid(AbilitySystemComponent))
	{
		return;
	}

	// Don't create for locally controlled player. We could add a game setting to toggle this later.
	if (IsPlayerControlled() && IsLocallyControlled())
	{
		return;
	}

	// Need a valid PlayerState
	if (!GetPlayerState())
	{
		return;
	}

	// Setup UI for Locally Owned Players only, not AI or the server's copy of the PlayerControllers
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (PC && PC->IsLocalPlayerController())
	{
		if (UIFloatingStatusBarClass)
		{
			UIFloatingStatusBar = CreateWidget<UMRRFloatingStatusBarWidget>(PC, UIFloatingStatusBarClass);
			if (UIFloatingStatusBar && UIFloatingStatusBarComponent)
			{
				UIFloatingStatusBarComponent->SetWidget(UIFloatingStatusBar);

				// Setup the floating status bar
				UIFloatingStatusBar->SetHealthPercentage(GetHealth() / GetMaxHealth());
				UIFloatingStatusBar->OwningCharacter = this;
				UIFloatingStatusBar->SetCharacterName(CharacterName);
			}
		}
	}
}