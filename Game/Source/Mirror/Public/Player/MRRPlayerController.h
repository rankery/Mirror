#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Characters/MRRCharacterBase.h"
#include "MRRPlayerController.generated.h"


UCLASS()
class MIRROR_API AMRRPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void CreateHUD();

	UPROPERTY(EditAnywhere, Category = "Mirror|UI")
	TSubclassOf<class UMRRDamageTextWidgetComponent> DamageNumberClass;

	class UMRRHUDWidget* GetHUD();

	UFUNCTION(Client, Reliable, WithValidation)
	void ShowDamageNumber(float DamageAmount, AMRRCharacterBase* TargetCharacter);
	void ShowDamageNumber_Implementation(float DamageAmount, AMRRCharacterBase* TargetCharacter);
	bool ShowDamageNumber_Validate(float DamageAmount, AMRRCharacterBase* TargetCharacter);

	UFUNCTION(Client, Reliable, WithValidation)
	void SetRespawnCountdown(float RespawnTimeRemaining);
	void SetRespawnCountdown_Implementation(float RespawnTimeRemaining);
	bool SetRespawnCountdown_Validate(float RespawnTimeRemaining);

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|UI")
	TSubclassOf<class UMRRHUDWidget> UIHUDWidgetClass;

	UPROPERTY(BlueprintReadWrite, Category = "Mirror|UI")
	class UMRRHUDWidget* UIHUDWidget;

	virtual void OnPossess(APawn* InPawn) override;

	virtual void OnRep_PlayerState() override;
};
