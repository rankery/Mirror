#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Mirror/Mirror.h"
#include "MRRGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class MIRROR_API UMRRGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UMRRGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EMRRAbilityInputID AbilityInputID = EMRRAbilityInputID::None;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EMRRAbilityInputID AbilityID = EMRRAbilityInputID::None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
	bool ActivateAbilityOnGranted = false;

	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
