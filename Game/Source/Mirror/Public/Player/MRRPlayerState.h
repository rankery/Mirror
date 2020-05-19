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

	// IAbilitySystemInterface implementation
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UMRRAttributeSetBase* GetAttributeSetBase() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState")
	bool IsAlive() const;

	/**
	* Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified.
	*/

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes")
		float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes")
		float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes")
		float GetHealthRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes")
		float GetWeight() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes")
		float GetMaxWeight() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes")
		float GetArmor() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRPlayerState|Attributes")
		int32 GetGold() const;

protected:
	UPROPERTY()
		class UMRRAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
		class UMRRAttributeSetBase* AttributeSetBase;

	FGameplayTag DeadTag;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle HealthRegenRateChangedDelegateHandle;
	FDelegateHandle WeightChangedDelegateHandle;
	FDelegateHandle MaxWeightChangedDelegateHandle;
	FDelegateHandle ArmorChangedDelegateHandle;
	FDelegateHandle GoldChangedDelegateHandle;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Attribute changed callbacks
	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void WeightChanged(const FOnAttributeChangeData& Data);
	virtual void MaxWeightChanged(const FOnAttributeChangeData& Data);
	virtual void ArmorChanged(const FOnAttributeChangeData& Data);
	virtual void GoldChanged(const FOnAttributeChangeData& Data);

	// Tag change callbacks
	virtual void StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
};
