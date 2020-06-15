#pragma once

#include "CoreMinimal.h"
#include "Characters/Abilities/MRRGameplayAbility.h"
#include "Characters/Abilities/AbilityTasks/MRRAT_PlayMontageAndWaitForEvent.h"
#include "Characters/MRRProjectile.h"
#include "MRRGA_FireSkillshot.generated.h"

UCLASS()
class MIRROR_API UMRRGA_FireSkillshot : public UMRRGameplayAbility
{
	GENERATED_BODY()
	
public:
	UMRRGA_FireSkillshot();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UAnimMontage* FireHipMontage;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<AMRRProjectile> ProjectileClass;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<UGameplayEffect> DamageGameplayEffect;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float Range;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float Damage;

	UFUNCTION()
	void OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void EventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
};
