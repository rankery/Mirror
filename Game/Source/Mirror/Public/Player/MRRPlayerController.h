// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Characters/MRRCharacter.h"
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

	UPROPERTY(EditAnywhere, Category = "Mirror|UI")
	TSubclassOf<class UMRRDamageTextWidgetComponent> DamageNumberClass;

	class UMRRHUDWidget* GetHUD();

	UFUNCTION(Client, Reliable, WithValidation)
	void ShowDamageNumber(float DamageAmount, AMRRCharacter* TargetCharacter);
	void ShowDamageNumber_Implementation(float DamageAmount, AMRRCharacter* TargetCharacter);
	bool ShowDamageNumber_Validate(float DamageAmount, AMRRCharacter* TargetCharacter);

	// Simple way to RPC to the client the countdown until they respawn from the GameMode. Will be latency amount of out sync with the Server.
	UFUNCTION(Client, Reliable, WithValidation)
	void SetRespawnCountdown(float RespawnTimeRemaining);
	void SetRespawnCountdown_Implementation(float RespawnTimeRemaining);
	bool SetRespawnCountdown_Validate(float RespawnTimeRemaining);

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|UI")
	TSubclassOf<class UMRRHUDWidget> UIHUDWidgetClass;

	UPROPERTY(BlueprintReadWrite, Category = "Mirror|UI")
	class UMRRHUDWidget* UIHUDWidget;

	// Server only
	virtual void OnPossess(APawn* InPawn) override;

	virtual void OnRep_PlayerState() override;
};
