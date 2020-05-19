// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MRRPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MIRROR_API AMRRPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void CreateHUD();

	//UPROPERTY(EditAnywhere, Category = "Mirror|UI")
	//TSubclassOf<class UGDDamageTextWidgetComponent> DamageNumberClass;
};
