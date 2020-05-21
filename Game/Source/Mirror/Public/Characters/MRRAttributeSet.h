// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MRRAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 *
 */
UCLASS()
class MIRROR_API UMRRAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UMRRAttributeSet();

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/**
	* Resources
	*/

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, Health)

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, MaxHealth)

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_HealthRegenRate)
	FGameplayAttributeData HealthRegenRate;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, HealthRegenRate)

	/**
	* Attack
	*/

	UPROPERTY(BlueprintReadOnly, Category = "Attack|PhysicalDamageIncrease", ReplicatedUsing = OnRep_PhysicalDamageIncrease)
	FGameplayAttributeData PhysicalDamageIncrease;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, PhysicalDamageIncrease)

	UPROPERTY(BlueprintReadOnly, Category = "Attack|AttackSpeed", ReplicatedUsing = OnRep_AttackSpeed)
	FGameplayAttributeData AttackSpeed;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, AttackSpeed)

	UPROPERTY(BlueprintReadOnly, Category = "Attack|MagicalDamageIncrease", ReplicatedUsing = OnRep_MagicalDamageIncrease)
	FGameplayAttributeData MagicalDamageIncrease;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, MagicalDamageIncrease)

	UPROPERTY(BlueprintReadOnly, Category = "Attack|CastSpeed", ReplicatedUsing = OnRep_CastSpeed)
	FGameplayAttributeData CastSpeed;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, CastSpeed)

	/**
	* Defence
	*/

	UPROPERTY(BlueprintReadOnly, Category = "Defence|PhysicalDamageReduction", ReplicatedUsing = OnRep_PhysicalDamageReduction)
	FGameplayAttributeData PhysicalDamageReduction;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, PhysicalDamageReduction)

	UPROPERTY(BlueprintReadOnly, Category = "Defence|MagicalDamageReduction", ReplicatedUsing = OnRep_MagicalDamageReduction)
	FGameplayAttributeData MagicalDamageReduction;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, MagicalDamageReduction)

	/**
	* Utility
	*/

	UPROPERTY(BlueprintReadOnly, Category = "Weight", ReplicatedUsing = OnRep_Weight)
	FGameplayAttributeData Weight;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, Weight)

	UPROPERTY(BlueprintReadOnly, Category = "Weight", ReplicatedUsing = OnRep_MaxWeight)
	FGameplayAttributeData MaxWeight;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, MaxWeight)

	UPROPERTY(BlueprintReadOnly, Category = "Gold", ReplicatedUsing = OnRep_Gold)
	FGameplayAttributeData Gold;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, Gold)

	/**
	* Action
	*/

	UPROPERTY(BlueprintReadOnly, Category = "MovementSpeed", ReplicatedUsing = OnRep_MovementSpeed)
	FGameplayAttributeData MovementSpeed;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, MovementSpeed)

	UPROPERTY(BlueprintReadOnly, Category = "TimeModifier", ReplicatedUsing = OnRep_TimeModifier)
	FGameplayAttributeData TimeModifier;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, TimeModifier)

	UPROPERTY(BlueprintReadOnly, Category = "GravityX", ReplicatedUsing = OnRep_GravityX)
	FGameplayAttributeData GravityX;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, GravityX)

	UPROPERTY(BlueprintReadOnly, Category = "GravityY", ReplicatedUsing = OnRep_GravityY)
	FGameplayAttributeData GravityY;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, GravityY)

	UPROPERTY(BlueprintReadOnly, Category = "GravityZ", ReplicatedUsing = OnRep_GravityZ)
	FGameplayAttributeData GravityZ;
	ATTRIBUTE_ACCESSORS(UMRRAttributeSet, GravityZ)

protected:
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	UFUNCTION()
	virtual void OnRep_Health();

	UFUNCTION()
	virtual void OnRep_MaxHealth();

	UFUNCTION()
	virtual void OnRep_HealthRegenRate();

	UFUNCTION()
	virtual void OnRep_Weight();

	UFUNCTION()
	virtual void OnRep_MaxWeight();

	UFUNCTION()
	virtual void OnRep_Gold();

	UFUNCTION()
	virtual void OnRep_PhysicalDamageIncrease();

	UFUNCTION()
	virtual void OnRep_AttackSpeed();

	UFUNCTION()
	virtual void OnRep_MagicalDamageIncrease();

	UFUNCTION()
	virtual void OnRep_CastSpeed();

	UFUNCTION()
	virtual void OnRep_PhysicalDamageReduction();

	UFUNCTION()
	virtual void OnRep_MagicalDamageReduction();

	UFUNCTION()
	virtual void OnRep_MovementSpeed();

	UFUNCTION()
	virtual void OnRep_TimeModifier();

	UFUNCTION()
	virtual void OnRep_GravityX();

	UFUNCTION()
	virtual void OnRep_GravityY();

	UFUNCTION()
	virtual void OnRep_GravityZ();
private:
	FGameplayTag HitDirectionFrontTag;
	FGameplayTag HitDirectionBackTag;
	FGameplayTag HitDirectionRightTag;
	FGameplayTag HitDirectionLeftTag;
};
