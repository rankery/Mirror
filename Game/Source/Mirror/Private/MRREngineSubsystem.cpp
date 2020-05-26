// Fill out your copyright notice in the Description page of Project Settings.


#include "MRREngineSubsystem.h"
#include "AbilitySystemGlobals.h"

void UMRREngineSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UAbilitySystemGlobals::Get().InitGlobalData();
}