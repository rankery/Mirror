// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRAbilitySystemComponent.h"

void UMRRAbilitySystemComponent::ReceiveDamage(UMRRAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	ReceivedDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
}