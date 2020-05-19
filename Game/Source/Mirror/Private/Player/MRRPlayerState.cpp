// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRPlayerState.h"
#include "Characters/MRRAttributeSetBase.h"
#include "MRRAbilitySystemComponent.h"

AMRRPlayerState::AMRRPlayerState() {

	AbilitySystemComponent = CreateDefaultSubobject<UMRRAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSetBase = CreateDefaultSubobject<UMRRAttributeSetBase>(TEXT("AttributeSetBase"));
	NetUpdateFrequency = 100.0f;

	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}

UAbilitySystemComponent* AMRRPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UMRRAttributeSetBase* AMRRPlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

bool AMRRPlayerState::IsAlive() const
{
	return GetHealth() > 0.0f;
}

float AMRRPlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}

float AMRRPlayerState::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}

float AMRRPlayerState::GetHealthRegenRate() const
{
	return AttributeSetBase->GetHealthRegenRate();
}

float AMRRPlayerState::GetWeight() const
{
	return AttributeSetBase->GetWeight();
}

float AMRRPlayerState::GetMaxWeight() const
{
	return AttributeSetBase->GetMaxWeight();
}

float AMRRPlayerState::GetArmor() const
{
	return AttributeSetBase->GetArmor();
}

int32 AMRRPlayerState::GetGold() const
{
	return AttributeSetBase->GetGold();
}

void AMRRPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AMRRPlayerState::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxHealthAttribute()).AddUObject(this, &AMRRPlayerState::MaxHealthChanged);
		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthRegenRateAttribute()).AddUObject(this, &AMRRPlayerState::HealthRegenRateChanged);
		WeightChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetWeightAttribute()).AddUObject(this, &AMRRPlayerState::WeightChanged);
		MaxWeightChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxWeightAttribute()).AddUObject(this, &AMRRPlayerState::MaxWeightChanged);
		ArmorChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetArmorAttribute()).AddUObject(this, &AMRRPlayerState::ArmorChanged);
		GoldChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetGoldAttribute()).AddUObject(this, &AMRRPlayerState::GoldChanged);

		// Tag change callbacks
		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun")), EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AMRRPlayerState::StunTagChanged);
	}
}

void AMRRPlayerState::HealthChanged(const FOnAttributeChangeData& Data)
{
	//float Health = Data.NewValue;

	//// Update floating status bar
	//AGDHeroCharacter* Hero = Cast<AGDHeroCharacter>(GetPawn());
	//if (Hero)
	//{
	//	UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
	//	if (HeroFloatingStatusBar)
	//	{
	//		HeroFloatingStatusBar->SetHealthPercentage(Health / GetMaxHealth());
	//	}
	//}

	//// Update the HUD
	//// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint

	//// If the player died, handle death
	//if (!IsAlive() && !AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
	//{
	//	if (Hero)
	//	{
	//		Hero->Die();
	//	}
	//}
}

void AMRRPlayerState::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	//float MaxHealth = Data.NewValue;

	//// Update floating status bar
	//AGDHeroCharacter* Hero = Cast<AGDHeroCharacter>(GetPawn());
	//if (Hero)
	//{
	//	UMRRFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
	//	if (HeroFloatingStatusBar)
	//	{
	//		HeroFloatingStatusBar->SetHealthPercentage(GetHealth() / MaxHealth);
	//	}
	//}

	//// Update the HUD
	//AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	//if (PC)
	//{
	//	UGDHUDWidget* HUD = PC->GetHUD();
	//	if (HUD)
	//	{
	//		HUD->SetMaxHealth(MaxHealth);
	//	}
	//}
}

void AMRRPlayerState::HealthRegenRateChanged(const FOnAttributeChangeData& Data)
{
	//float HealthRegenRate = Data.NewValue;

	// Update the HUD
	/*AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}*/
}

void AMRRPlayerState::WeightChanged(const FOnAttributeChangeData& Data)
{
	//float HealthRegenRate = Data.NewValue;

	// Update the HUD
	/*AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}*/
}

void AMRRPlayerState::MaxWeightChanged(const FOnAttributeChangeData& Data)
{
	//float HealthRegenRate = Data.NewValue;

	// Update the HUD
	/*AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}*/
}

void AMRRPlayerState::ArmorChanged(const FOnAttributeChangeData& Data)
{
	//float HealthRegenRate = Data.NewValue;

	// Update the HUD
	/*AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}*/
}

void AMRRPlayerState::GoldChanged(const FOnAttributeChangeData& Data)
{
	//float HealthRegenRate = Data.NewValue;

	// Update the HUD
	/*AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}*/
}

void AMRRPlayerState::StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	if (NewCount > 0)
	{
		FGameplayTagContainer AbilityTagsToCancel;
		AbilityTagsToCancel.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability")));

		FGameplayTagContainer AbilityTagsToIgnore;
		AbilityTagsToIgnore.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.NotCanceledByStun")));

		AbilitySystemComponent->CancelAbilities(&AbilityTagsToCancel, &AbilityTagsToIgnore);
	}
}