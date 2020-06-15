#include "Characters/Abilities/MRRAbilitySystemComponent.h"

void UMRRAbilitySystemComponent::ReceiveDamage(UMRRAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	ReceivedDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
}
