// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "MRRPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MIRROR_API AMRRPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AMRRPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UMRRAttributeSet* GetAttributeSet() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|UI")
	void ShowAbilityConfirmCancelText(bool ShowText);


	/**
	* Getters for attributes from AttributeSet. Returns Current Value unless otherwise specified.
	*/

	/**
	* Resources
	*/

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Resources")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Resources")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Resources")
	float GetHealthRegenRate() const;

	/**
	* Attack
	*/

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Attack")
	float GetPhysicalDamageIncrease() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Attack")
	float GetAttackSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Attack")
	float GetMagicalDamageIncrease() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Attack")
	float GetCastSpeed() const;

	/**
	* Defence
	*/

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Defence")
	float GetPhysicalDamageReduction() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Defence")
	float GetMagicalDamageReduction() const;

	/**
	* Utility
	*/

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Utility")
	float GetWeight() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Utility")
	float GetMaxWeight() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Utility")
	int32  GetGold() const;

	/**
	* Action
	*/

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Action")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Action")
	float GetTimeModifier() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Action")
	float GetGravityX() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Action")
	float GetGravityY() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes|Action")
	float GetGravityZ() const;

protected:
	UPROPERTY()
	class UMRRAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UMRRAttributeSet* AttributeSet;

	FGameplayTag DeadTag;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle HealthRegenRateChangedDelegateHandle;

	FDelegateHandle PhysicalDamageIncreaseChangedDelegateHandle;
	FDelegateHandle AttackSpeedChangedDelegateHandle;
	FDelegateHandle MagicalDamageIncreaseChangedDelegateHandle;
	FDelegateHandle CastSpeedChangedDelegateHandle;

	FDelegateHandle PhysicalDamageReductionChangedDelegateHandle;
	FDelegateHandle MagicalDamageReductionChangedDelegateHandle;

	FDelegateHandle WeightChangedDelegateHandle;
	FDelegateHandle MaxWeightChangedDelegateHandle;
	FDelegateHandle GoldChangedDelegateHandle;
	
	FDelegateHandle MovementSpeedChangedDelegateHandle;
	FDelegateHandle TimeModifierChangedDelegateHandle;
	FDelegateHandle GravityXChangedDelegateHandle;
	FDelegateHandle GravityYChangedDelegateHandle;
	FDelegateHandle GravityZChangedDelegateHandle;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Attribute changed callbacks
	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenRateChanged(const FOnAttributeChangeData& Data);

	virtual void PhysicalDamageIncreaseChanged(const FOnAttributeChangeData& Data);
	virtual void AttackSpeedChanged(const FOnAttributeChangeData& Data);
	virtual void MagicalDamageIncreaseChanged(const FOnAttributeChangeData& Data);
	virtual void CastSpeedChanged(const FOnAttributeChangeData& Data);
	
	virtual void PhysicalDamageReductionChanged(const FOnAttributeChangeData& Data);
	virtual void MagicalDamageReductionChanged(const FOnAttributeChangeData& Data);
	
	virtual void WeightChanged(const FOnAttributeChangeData& Data);
	virtual void MaxWeightChanged(const FOnAttributeChangeData& Data);
	virtual void GoldChanged(const FOnAttributeChangeData& Data);

	virtual void MovementSpeedChanged(const FOnAttributeChangeData& Data);
	virtual void TimeModifierChanged(const FOnAttributeChangeData& Data);
	virtual void GravityXChanged(const FOnAttributeChangeData& Data);
	virtual void GravityYChanged(const FOnAttributeChangeData& Data);
	virtual void GravityZChanged(const FOnAttributeChangeData& Data);

	// Tag change callbacks
	virtual void StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
};
