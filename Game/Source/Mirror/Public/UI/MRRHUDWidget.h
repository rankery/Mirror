// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MRRHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class MIRROR_API UMRRHUDWidget : public UUserWidget
{
	GENERATED_BODY()
public:
		/**
		* Attribute setters
		*/
		UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetMaxHealth(float MaxHealth);

		UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetCurrentHealth(float CurrentHealth);

		UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetHealthPercentage(float HealthPercentage);

		UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetHealthRegenRate(float HealthRegenRate);

		UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetMaxWeight(float MaxWeight);

		UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetCurrentWeight(float CurrentWeight);

		UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetWeightPercentage(float StaminaWeight);

		UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SetGold(int32 Gold);
};
