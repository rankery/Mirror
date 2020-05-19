// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRAttributeSetBase.h"
#include "Characters/MRRCharacterBase.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"
#include "Player/MRRPlayerController.h"

UMRRAttributeSetBase::UMRRAttributeSetBase()
{
	HitDirectionFrontTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Front"));
	HitDirectionBackTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Back"));
	HitDirectionRightTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Right"));
	HitDirectionLeftTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Left"));
}

void UMRRAttributeSetBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	if (Attribute == GetMaxHealthAttribute()) 
	{
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
	}else if (Attribute == GetMaxWeightAttribute())
	{
		AdjustAttributeForMaxChange(Weight, MaxWeight, NewValue, GetWeightAttribute());
	}
}

void UMRRAttributeSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

}

void UMRRAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSetBase, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSetBase, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSetBase, HealthRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSetBase, Armor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSetBase, Weight, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSetBase, MaxWeight, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMRRAttributeSetBase, Gold, COND_None, REPNOTIFY_Always);
}

void UMRRAttributeSetBase::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
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

void UMRRAttributeSetBase::OnRep_Health()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSetBase, Health);
}

void UMRRAttributeSetBase::OnRep_MaxHealth()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSetBase, MaxHealth);
}

void UMRRAttributeSetBase::OnRep_HealthRegenRate()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSetBase, HealthRegenRate);
}

void UMRRAttributeSetBase::OnRep_Weight()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSetBase, Weight);
}

void UMRRAttributeSetBase::OnRep_MaxWeight()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSetBase, MaxWeight);
}

void UMRRAttributeSetBase::OnRep_Armor()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSetBase, Armor);
}

void UMRRAttributeSetBase::OnRep_Gold()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMRRAttributeSetBase, Gold);
}
