// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRCharacterBase.h"

AMRRCharacterBase::AMRRCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMRRCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void AMRRCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMRRCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

