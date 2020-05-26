// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRAttributeSet.h"
#include "Characters/MRRCharacter.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"
#include "Player/MRRPlayerController.h"

UMRRAttributeSet::UMRRAttributeSet()
{

}

void UMRRAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	if (Attribute == GetMaxHealthAttribute())
	{
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
	}
	else if (Attribute == GetMaxWeightAttribute())
	{
		AdjustAttributeForMaxChange(Weight, MaxWeight, NewValue, GetWeightAttribute());
	}
}

void UMRRAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

}

void UMRRAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, HealthRegenRate, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, OutgoingPhysicalDamageMultiplier, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, AttackSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, OutgoingMagicalDamageMultiplier, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, CastSpeed, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, IncomingPhysicalDamageMultiplier, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, IncomingMagicalDamageMultiplier, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, Weight, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, MaxWeight, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, Gold, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, MovementSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, TimeModifier, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, GravityX, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, GravityY, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSet, GravityZ, COND_None, REPNOTIFY_Always);
}

void UMRRAttributeSet::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}

void UMRRAttributeSet::OnRep_Health()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, Health);
}

void UMRRAttributeSet::OnRep_MaxHealth()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, MaxHealth);
}

void UMRRAttributeSet::OnRep_HealthRegenRate()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, HealthRegenRate);
}

void UMRRAttributeSet::OnRep_OutgoingPhysicalDamageMultiplier()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, OutgoingPhysicalDamageMultiplier);
}

void UMRRAttributeSet::OnRep_AttackSpeed()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, AttackSpeed);
}

void UMRRAttributeSet::OnRep_OutgoingMagicalDamageMultiplier()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, OutgoingMagicalDamageMultiplier);
}

void UMRRAttributeSet::OnRep_CastSpeed()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, CastSpeed);
}

void UMRRAttributeSet::OnRep_IncomingPhysicalDamageMultiplier()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, IncomingPhysicalDamageMultiplier);
}

void UMRRAttributeSet::OnRep_IncomingMagicalDamageMultiplier()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, IncomingMagicalDamageMultiplier);
}

void UMRRAttributeSet::OnRep_Weight()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, Weight);
}

void UMRRAttributeSet::OnRep_MaxWeight()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, MaxWeight);
}

void UMRRAttributeSet::OnRep_Gold()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, Gold);
}

void UMRRAttributeSet::OnRep_MovementSpeed()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, MovementSpeed);
}

void UMRRAttributeSet::OnRep_TimeModifier()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, TimeModifier);
}

void UMRRAttributeSet::OnRep_GravityX()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, GravityX);
}

void UMRRAttributeSet::OnRep_GravityY()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, GravityY);
}

void UMRRAttributeSet::OnRep_GravityZ()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSet, GravityZ);
}