// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRPlayerState.h"
#include "Characters/MRRAttributeSet.h"
#include "Characters/MRRAbilitySystemComponent.h"
#include "Characters/MRRHeroCharacter.h"
#include "Player/MRRPlayerController.h"
#include "UI/MRRFloatingStatusBarWidget.h"
#include "UI/MRRHUDWidget.h"

AMRRPlayerState::AMRRPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UMRRAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies. If another GDPlayerState (Hero) receives a GE,
	// we won't be told about it by the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSet = CreateDefaultSubobject<UMRRAttributeSet>(TEXT("AttributeSetBase"));

	// Set PlayerState's NetUpdateFrequency to the same as the Character.
	// Default is very low for PlayerStates and introduces perceived lag in the ability system.
	// 100 is probably way too high for a shipping game, you can adjust to fit your needs.
	NetUpdateFrequency = 100.0f;

	// Cache tags
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}

UAbilitySystemComponent* AMRRPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UMRRAttributeSet* AMRRPlayerState::GetAttributeSet() const
{
	return AttributeSet;
}

bool AMRRPlayerState::IsAlive() const
{
	return GetHealth() > 0.0f;
}

void AMRRPlayerState::ShowAbilityConfirmCancelText(bool ShowText)
{
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->ShowAbilityConfirmCancelText(ShowText);
		}
	}
}

/**
* Resources
*/

float AMRRPlayerState::GetHealth() const
{
	return AttributeSet->GetHealth();
}

float AMRRPlayerState::GetMaxHealth() const
{
	return AttributeSet->GetMaxHealth();
}

float AMRRPlayerState::GetHealthRegenRate() const
{
	return AttributeSet->GetHealthRegenRate();
}

/**
* Attack
*/

float AMRRPlayerState::GetPhysicalDamageIncrease() const
{
	return AttributeSet->GetPhysicalDamageIncrease();
}

float AMRRPlayerState::GetAttackSpeed() const
{
	return AttributeSet->GetAttackSpeed();
}

float AMRRPlayerState::GetMagicalDamageIncrease() const
{
	return AttributeSet->GetMagicalDamageIncrease();
}

float AMRRPlayerState::GetCastSpeed() const
{
	return AttributeSet->GetCastSpeed();
}

/**
* Defence
*/

float AMRRPlayerState::GetPhysicalDamageReduction() const
{
	return AttributeSet->GetPhysicalDamageReduction();
}

float AMRRPlayerState::GetMagicalDamageReduction() const
{
	return AttributeSet->GetMagicalDamageReduction();
}

/**
* Utility
*/

float AMRRPlayerState::GetWeight() const
{
	return AttributeSet->GetWeight();
}

float AMRRPlayerState::GetMaxWeight() const
{
	return AttributeSet->GetMaxWeight();
}

int32 AMRRPlayerState::GetGold() const
{
	return AttributeSet->GetGold();
}

/**
* Action
*/

float AMRRPlayerState::GetMovementSpeed() const
{
	return AttributeSet->GetMovementSpeed();
}

float AMRRPlayerState::GetTimeModifier() const
{
	return AttributeSet->GetTimeModifier();
}

float AMRRPlayerState::GetGravityX() const
{
	return AttributeSet->GetGravityX();
}

float AMRRPlayerState::GetGravityY() const
{
	return AttributeSet->GetGravityY();
}

float AMRRPlayerState::GetGravityZ() const
{
	return AttributeSet->GetGravityZ();
}

void AMRRPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetHealthAttribute()).AddUObject(this, &AMRRPlayerState::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxHealthAttribute()).AddUObject(this, &AMRRPlayerState::MaxHealthChanged);
		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetHealthRegenRateAttribute()).AddUObject(this, &AMRRPlayerState::HealthRegenRateChanged);
		
		PhysicalDamageIncreaseChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetPhysicalDamageIncreaseAttribute()).AddUObject(this, &AMRRPlayerState::PhysicalDamageIncreaseChanged);
		AttackSpeedChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetAttackSpeedAttribute()).AddUObject(this, &AMRRPlayerState::AttackSpeedChanged);
		MagicalDamageIncreaseChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMagicalDamageIncreaseAttribute()).AddUObject(this, &AMRRPlayerState::MagicalDamageIncreaseChanged);
		CastSpeedChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCastSpeedAttribute()).AddUObject(this, &AMRRPlayerState::CastSpeedChanged);
		
		PhysicalDamageReductionChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetPhysicalDamageReductionAttribute()).AddUObject(this, &AMRRPlayerState::PhysicalDamageReductionChanged);
		MagicalDamageReductionChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMagicalDamageReductionAttribute()).AddUObject(this, &AMRRPlayerState::MagicalDamageReductionChanged);
		
		WeightChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetWeightAttribute()).AddUObject(this, &AMRRPlayerState::WeightChanged);
		MaxWeightChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxWeightAttribute()).AddUObject(this, &AMRRPlayerState::MaxWeightChanged);
		GoldChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetGoldAttribute()).AddUObject(this, &AMRRPlayerState::GoldChanged);

		MovementSpeedChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMovementSpeedAttribute()).AddUObject(this, &AMRRPlayerState::MovementSpeedChanged);
		TimeModifierChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetTimeModifierAttribute()).AddUObject(this, &AMRRPlayerState::TimeModifierChanged);
		GravityXChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetGravityXAttribute()).AddUObject(this, &AMRRPlayerState::GravityXChanged);
		GravityYChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetGravityYAttribute()).AddUObject(this, &AMRRPlayerState::GravityYChanged);
		GravityZChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetGravityZAttribute()).AddUObject(this, &AMRRPlayerState::GravityZChanged);


		// Tag change callbacks
		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun")), EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AMRRPlayerState::StunTagChanged);
	}
}

void AMRRPlayerState::HealthChanged(const FOnAttributeChangeData& Data)
{
	float Health = Data.NewValue;

	// Update floating status bar
	AMRRHeroCharacter* Hero = Cast<AMRRHeroCharacter>(GetPawn());
	if (Hero)
	{
		UMRRFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			 HeroFloatingStatusBar->SetHealthPercentage(Health / GetMaxHealth());
		}
	}

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint

	// If the player died, handle death
	if (!IsAlive() && !AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
	{
		if (Hero)
		{
			Hero->Die();
		}
	}
}

void AMRRPlayerState::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	float MaxHealth = Data.NewValue;

	// Update floating status bar
	AMRRHeroCharacter* Hero = Cast<AMRRHeroCharacter>(GetPawn());
	if (Hero)
	{
		UMRRFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			 HeroFloatingStatusBar->SetHealthPercentage(GetHealth() / MaxHealth);
		}
	}

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMaxHealth(MaxHealth);
		}
	}
}

void AMRRPlayerState::HealthRegenRateChanged(const FOnAttributeChangeData& Data)
{
	float HealthRegenRate = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}
}

void AMRRPlayerState::PhysicalDamageIncreaseChanged(const FOnAttributeChangeData& Data)
{
	float PhysicalDamageIncrease = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetPhysicalDamageIncrease(PhysicalDamageIncrease);
		}
	}
}

void AMRRPlayerState::AttackSpeedChanged(const FOnAttributeChangeData& Data)
{
	float AttackSpeed = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetAttackSpeed(AttackSpeed);
		}
	}
}

void AMRRPlayerState::MagicalDamageIncreaseChanged(const FOnAttributeChangeData& Data)
{
	float MagicalDamageIncrease = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMagicalDamageIncrease(MagicalDamageIncrease);
		}
	}
}

void AMRRPlayerState::CastSpeedChanged(const FOnAttributeChangeData& Data)
{
	float CastSpeed = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetCastSpeed(CastSpeed);
		}
	}
}

void AMRRPlayerState::PhysicalDamageReductionChanged(const FOnAttributeChangeData& Data)
{
	float PhysicalDamageReduction = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetPhysicalDamageReduction(PhysicalDamageReduction);
		}
	}
}

void AMRRPlayerState::MagicalDamageReductionChanged(const FOnAttributeChangeData& Data)
{
	float MagicalDamageReduction = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMagicalDamageReduction(MagicalDamageReduction);
		}
	}
}

void AMRRPlayerState::WeightChanged(const FOnAttributeChangeData& Data)
{
	float Weight = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetWeight(Weight);
		}
	}
}

void AMRRPlayerState::MaxWeightChanged(const FOnAttributeChangeData& Data)
{
	float MaxWeight = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMaxWeight(MaxWeight);
		}
	}
}

void AMRRPlayerState::GoldChanged(const FOnAttributeChangeData& Data)
{
	float Gold = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetGold(Gold);
		}
	}
}

void AMRRPlayerState::MovementSpeedChanged(const FOnAttributeChangeData& Data)
{
	float MovementSpeed = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMovementSpeed(MovementSpeed);
		}
	}
}

void AMRRPlayerState::TimeModifierChanged(const FOnAttributeChangeData& Data)
{
	float TimeModifier = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetTimeModifier(TimeModifier);
		}
	}
}

void AMRRPlayerState::GravityXChanged(const FOnAttributeChangeData& Data)
{
	float GravityX = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetGravityX(GravityX);
		}
	}
}

void AMRRPlayerState::GravityYChanged(const FOnAttributeChangeData& Data)
{
	float GravityY = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetGravityY(GravityY);
		}
	}
}

void AMRRPlayerState::GravityZChanged(const FOnAttributeChangeData& Data)
{
	float GravityZ = Data.NewValue;

	// Update the HUD
	AMRRPlayerController* PC = Cast<AMRRPlayerController>(GetOwner());
	if (PC)
	{
		UMRRHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetGravityZ(GravityZ);
		}
	}
}