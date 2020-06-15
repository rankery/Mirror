#include "Characters/Abilities/MRRDamageExecCalculation.h"
#include "Characters/Abilities/MRRAbilitySystemComponent.h"
#include "Characters/Abilities/AttributeSets/MRRAttributeSetBase.h"

struct GDDamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Damage);

	GDDamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UMRRAttributeSetBase, Damage, Target, false);
	}
};

static const GDDamageStatics& DamageStatics()
{
	static GDDamageStatics DStatics;
	return DStatics;
}

UMRRDamageExecCalculation::UMRRDamageExecCalculation()
{
}

void UMRRDamageExecCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters & ExecutionParams, OUT FGameplayEffectCustomExecutionOutput & OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceAbilitySystemComponent = ExecutionParams.GetSourceAbilitySystemComponent();

	AActor* SourceActor = SourceAbilitySystemComponent ? SourceAbilitySystemComponent->AvatarActor : nullptr;
	AActor* TargetActor = TargetAbilitySystemComponent ? TargetAbilitySystemComponent->AvatarActor : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Damage = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Damage")), false, -1.0f), 0.0f);

	float UnmitigatedDamage = Damage;
	
	float MitigatedDamage = (UnmitigatedDamage);

	if (MitigatedDamage > 0.f)
	{
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(DamageStatics().DamageProperty, EGameplayModOp::Additive, MitigatedDamage));
	}

	UMRRAbilitySystemComponent* TargetASC = Cast<UMRRAbilitySystemComponent>(TargetAbilitySystemComponent);
	if (TargetASC)
	{
		UMRRAbilitySystemComponent* SourceASC = Cast<UMRRAbilitySystemComponent>(SourceAbilitySystemComponent);
		TargetASC->ReceiveDamage(SourceASC, UnmitigatedDamage, MitigatedDamage);
	}
}
