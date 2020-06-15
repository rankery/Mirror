#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "Mirror/Mirror.h"
#include "MRRCharacterBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterDiedDelegate, AMRRCharacterBase*, Character);

UCLASS()
class MIRROR_API AMRRCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AMRRCharacterBase(const class FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintAssignable, Category = "Mirror|MRRCharacter")
	FCharacterDiedDelegate OnCharacterDied;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter")
	virtual bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter")
	virtual int32 GetAbilityLevel(EMRRAbilityInputID AbilityID) const;

	virtual void RemoveCharacterAbilities();

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter|Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter|Attributes")
	float GetMana() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter|Attributes")
	float GetMaxMana() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter|Attributes")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter|Attributes")
	float GetMaxStamina() const;
	
	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter|Attributes")
	float GetMoveSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter|Attributes")
	float GetMoveSpeedBaseValue() const;


	virtual void Die();

	UFUNCTION(BlueprintCallable, Category = "Mirror|MRRCharacter")
	virtual void FinishDying();

protected:
	virtual void BeginPlay() override;

	TWeakObjectPtr<class UMRRAbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class UMRRAttributeSetBase> AttributeSetBase;

	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnDeathTag;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|MRRCharacter")
	FText CharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|Animation")
	UAnimMontage* DeathMontage;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|Abilities")
	TArray<TSubclassOf<class UMRRGameplayAbility>> CharacterAbilities;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|Abilities")
	TArray<TSubclassOf<class UGameplayEffect>> StartupEffects;

	virtual void AddCharacterAbilities();

	virtual void InitializeAttributes();

	virtual void AddStartupEffects();

	virtual void SetHealth(float Health);
	virtual void SetMana(float Mana);
	virtual void SetStamina(float Stamina);
};
