// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MRRCharacterBase.generated.h"

UCLASS()
class MIRROR_API AMRRCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AMRRCharacterBase();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
