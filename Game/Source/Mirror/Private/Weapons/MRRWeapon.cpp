// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/MRRWeapon.h"

#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

#include "Characters/Abilities/MRRAbilitySystemComponent.h"

#include "Characters/Heroes/MRRHeroCharacter.h"

#include "Net/UnrealNetwork.h"



// Sets default values
AMRRWeapon::AMRRWeapon()
{
	// Set this actor to never tick
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;
	bNetUseOwnerRelevancy = true;
	NetUpdateFrequency = 100.0f; // Set this to a value that's appropriate for your game
	bSpawnWithCollision = true;

	CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(FName("CollisionComponent"));
	CollisionComp->InitCapsuleSize(40.0f, 50.0f);
	CollisionComp->SetCollisionObjectType(COLLISION_PICKUP);
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Manually enable when in pickup mode
	CollisionComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	RootComponent = CollisionComp;

	WeaponMeshPickupRelativeLocation = FVector(0.0f, -25.0f, 0.0f);

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("WeaponMesh3P"));
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponMesh->SetupAttachment(CollisionComp);
	WeaponMesh->SetRelativeLocation(WeaponMeshPickupRelativeLocation);
	WeaponMesh->CastShadow = true;
	WeaponMesh->SetVisibility(true, true);
	WeaponMesh->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
}

AMRRWeapon::~AMRRWeapon()
{
}

UAbilitySystemComponent* AMRRWeapon::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

USkeletalMeshComponent* AMRRWeapon::GetWeaponMesh() const
{
	return WeaponMesh;
}

void AMRRWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AMRRWeapon, OwningCharacter, COND_OwnerOnly);
}

void AMRRWeapon::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);
}

void AMRRWeapon::SetOwningCharacter(AMRRHeroCharacter* InOwningCharacter)
{
	OwningCharacter = InOwningCharacter;
	if (OwningCharacter)
	{
		// Called when added to inventory
		AbilitySystemComponent = Cast<UMRRAbilitySystemComponent>(OwningCharacter->GetAbilitySystemComponent());
		SetOwner(InOwningCharacter);
		AttachToComponent(OwningCharacter->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		CollisionComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
		WeaponMesh->CastShadow = false;
		WeaponMesh->SetVisibility(true, true);
		WeaponMesh->SetVisibility(false, true);
	}
	else
	{
		AbilitySystemComponent = nullptr;
		SetOwner(nullptr);
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}
}

void AMRRWeapon::NotifyActorBeginOverlap(AActor* Other)
{
	Super::NotifyActorBeginOverlap(Other);

	if (!IsPendingKill() && !OwningCharacter)
	{
		PickUpOnTouch(Cast<AMRRHeroCharacter>(Other));
	}
}

void AMRRWeapon::EquipLeft()
{
	if (!OwningCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("%s %s OwningCharacter is nullptr"), *FString(__FUNCTION__), *GetName());
		return;
	}

	FName AttachPoint = OwningCharacter->GetWeaponLeftAttachPoint();

	
	WeaponMesh->AttachToComponent(OwningCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, AttachPoint);
	WeaponMesh->SetRelativeLocation(WeaponMeshEquippedRelativeLocation);
	WeaponMesh->SetRelativeRotation(FRotator(0, 0, -90.0f));
	WeaponMesh->CastShadow = true;
	WeaponMesh->bCastHiddenShadow = true;

	WeaponMesh->SetVisibility(true, true);
}

void AMRRWeapon::EquipRight()
{
	if (!OwningCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("%s %s OwningCharacter is nullptr"), *FString(__FUNCTION__), *GetName());
		return;
	}

	FName AttachPoint = OwningCharacter->GetWeaponRightAttachPoint();


	WeaponMesh->AttachToComponent(OwningCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, AttachPoint);
	WeaponMesh->SetRelativeLocation(WeaponMeshEquippedRelativeLocation);
	WeaponMesh->SetRelativeRotation(FRotator(0, 0, -90.0f));
	WeaponMesh->CastShadow = true;
	WeaponMesh->bCastHiddenShadow = true;

	WeaponMesh->SetVisibility(true, true);
}

void AMRRWeapon::UnEquip()
{
	if (OwningCharacter == nullptr)
	{
		return;
	}

	WeaponMesh->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
	WeaponMesh->CastShadow = false;
	WeaponMesh->bCastHiddenShadow = false;
	WeaponMesh->SetVisibility(true, true); // Without this, the unequipped weapon's 3p shadow hangs around
	WeaponMesh->SetVisibility(false, true);
}

void AMRRWeapon::OnDropped_Implementation(FVector NewLocation)
{
	SetOwningCharacter(nullptr);

	SetActorLocation(NewLocation);
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	WeaponMesh->AttachToComponent(CollisionComp, FAttachmentTransformRules::SnapToTargetIncludingScale);
	WeaponMesh->SetRelativeLocation(WeaponMeshPickupRelativeLocation);
	WeaponMesh->CastShadow = true;
	WeaponMesh->SetVisibility(true, true);
}

bool AMRRWeapon::OnDropped_Validate(FVector NewLocation)
{
	return true;
}

UAnimMontage* AMRRWeapon::GetEquipMontage() const
{
	return EquipMontage;
}

USoundCue* AMRRWeapon::GetPickupSound() const
{
	return PickupSound;
}

void AMRRWeapon::BeginPlay()
{
	if (!OwningCharacter && bSpawnWithCollision)
	{
		// Spawned into the world without an owner, enable collision as we are in pickup mode
		CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}

	Super::BeginPlay();
}

void AMRRWeapon::PickUpOnTouch(AMRRHeroCharacter* InCharacter)
{
	if (!InCharacter || !InCharacter->IsAlive())
	{
		return;
	}

	if (InCharacter->AddWeaponToInventory(this))
	{
		WeaponMesh->CastShadow = false;
		WeaponMesh->SetVisibility(true, true);
		WeaponMesh->SetVisibility(false, true);
	}
}