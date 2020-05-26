// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Abilities/MRRDamageExecutionCalculation.h"
#include "Characters/Abilities/AttributeSets/MRRAttributeSet.h"
#include "Characters/Abilities/MRRAbilitySystemComponent.h"

struct MRRDamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(IncomingPhysicalDamageMultiplier);
	DECLARE_ATTRIBUTE_CAPTUREDEF(IncomingMagicalDamageMultiplier);

	// Meta attribute that we're passing into the ExecCalc via SetByCaller on the GESpec so we don't capture it.
	// We still need to declare and define it so that we can output to it.
	DECLARE_ATTRIBUTE_CAPTUREDEF(PhysicalDamage);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicalDamage);


	MRRDamageStatics()
	{
		// Snapshot happens at time of GESpec creation

		// We're not capturing anything from the Source in this example, but there could be like AttackPower attributes that you might want.

		// Capture the Target's Armor. Don't snapshot (the false).
		DEFINE_ATTRIBUTE_CAPTUREDEF(UMRRAttributeSet, IncomingPhysicalDamageMultiplier, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UMRRAttributeSet, IncomingMagicalDamageMultiplier, Target, false);

		// The Target's received Damage. This is the value of health that will be subtracted on the Target. We're not capturing this.
		DEFINE_ATTRIBUTE_CAPTUREDEF(UMRRAttributeSet, PhysicalDamage, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UMRRAttributeSet, MagicalDamage, Target, false);


	}
};

static const MRRDamageStatics& DamageStatics()
{
	static MRRDamageStatics DStatics;
	return DStatics;
}

UMRRDamageExecutionCalculation::UMRRDamageExecutionCalculation()
{
	RelevantAttributesToCapture.Add(DamageStatics().IncomingPhysicalDamageMultiplierDef);
	RelevantAttributesToCapture.Add(DamageStatics().IncomingMagicalDamageMultiplierDef);

	// We don't include Damage here because we're not capturing it. It is generated inside the ExecCalc.
}

void UMRRDamageExecutionCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceAbilitySystemComponent = ExecutionParams.GetSourceAbilitySystemComponent();

	AActor* SourceActor = SourceAbilitySystemComponent ? SourceAbilitySystemComponent->AvatarActor : nullptr;
	AActor* TargetActor = TargetAbilitySystemComponent ? TargetAbilitySystemComponent->AvatarActor : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	FGameplayTagContainer AssetTags;
	Spec.GetAllAssetTags(AssetTags);

	// Gather the tags from the source and target as that can affect which buffs should be used
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	// Defence

	float IncomingPhysicalDamageMultiplier = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().IncomingPhysicalDamageMultiplierDef, EvaluationParameters, IncomingPhysicalDamageMultiplier);
	

	float IncomingMagicalDamageMultiplier = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().IncomingMagicalDamageMultiplierDef, EvaluationParameters, IncomingMagicalDamageMultiplier);


	// SetByCaller Damage
	float PhysicalDamage = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.PhysicalDamage")), false, -1.0f), 0.0f);
	float MagicalDamage = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.MagicalDamage")), false, -1.0f), 0.0f);

	float MitigatedPhysicalDamage = PhysicalDamage * IncomingPhysicalDamageMultiplier;
	float MitigatedMagicalDamage = MagicalDamage * IncomingMagicalDamageMultiplier;

	if (MitigatedPhysicalDamage > 0.f)
	{
		// Set the Target's damage meta attribute
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(DamageStatics().PhysicalDamageProperty, EGameplayModOp::Additive, MitigatedPhysicalDamage));
	}
	if (MitigatedMagicalDamage > 0.f)
	{
		// Set the Target's damage meta attribute
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(DamageStatics().MagicalDamageProperty, EGameplayModOp::Additive, MitigatedMagicalDamage));
	}
}