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
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ShowAbilityConfirmCancelText(bool ShowText);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetRespawnCountdown(float RespawnTimeRemaining);


	/**
	* Attribute setters
	*/

	/**
	* Resources
	*/

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxHealth(float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentHealth(float CurrentHealth);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetHealthRegenRate(float HealthRegenRate);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetHealthPercentage(float HealthPercentage);
	
	/**
	* Attack
	*/

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetPhysicalDamageIncrease(float PhysicalDamageIncrease);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetAttackSpeed(float AttackSpeed);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMagicalDamageIncrease(float MagicalDamageIncrease);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCastSpeed(float CastSpeed);

	/**
	* Defence
	*/

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetPhysicalDamageReduction(float PhysicalDamageReduction);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMagicalDamageReduction(float MagicalDamageReduction);

	/**
	* Utility
	*/

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetWeight(float Weight);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxWeight(float MaxWeight);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetGold(int32 Gold);

	/**
	* Action
	*/

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMovementSpeed(float MovementSpeed);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetTimeModifier(float TimeModifier);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetGravityX(float GravityX);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetGravityY(float GravityY);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetGravityZ(float GravityZ);

};
