// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Abilities/MRRGameplayEffectTypes.h"

bool FMRRGameplayEffectContext::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	return Super::NetSerialize(Ar, Map, bOutSuccess) && TargetData.NetSerialize(Ar, Map, bOutSuccess);
}