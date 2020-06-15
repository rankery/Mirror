#include "Characters/Abilities/AbilityTasks/MRRAT_WaitReceiveDamage.h"
#include "Characters/Abilities/MRRAbilitySystemComponent.h"

UMRRAT_WaitReceiveDamage::UMRRAT_WaitReceiveDamage(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TriggerOnce = false;
}

UMRRAT_WaitReceiveDamage* UMRRAT_WaitReceiveDamage::WaitReceiveDamage(UGameplayAbility* OwningAbility, bool InTriggerOnce)
{
	UMRRAT_WaitReceiveDamage* MyObj = NewAbilityTask<UMRRAT_WaitReceiveDamage>(OwningAbility);
	MyObj->TriggerOnce = InTriggerOnce;
	return MyObj;
}

void UMRRAT_WaitReceiveDamage::Activate()
{
	UMRRAbilitySystemComponent* MRRASC = Cast<UMRRAbilitySystemComponent>(AbilitySystemComponent);

	if (MRRASC)
	{
		MRRASC->ReceivedDamage.AddDynamic(this, &UMRRAT_WaitReceiveDamage::OnDamageReceived);
	}
}

void UMRRAT_WaitReceiveDamage::OnDestroy(bool AbilityIsEnding)
{
	UMRRAbilitySystemComponent* MRRASC = Cast<UMRRAbilitySystemComponent>(AbilitySystemComponent);

	if (MRRASC)
	{
		MRRASC->ReceivedDamage.RemoveDynamic(this, &UMRRAT_WaitReceiveDamage::OnDamageReceived);
	}

	Super::OnDestroy(AbilityIsEnding);
}

void UMRRAT_WaitReceiveDamage::OnDamageReceived(UMRRAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
	}

	if (TriggerOnce)
	{
		EndTask();
	}
}
