// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/MRRCharacterBase.h"
#include "MRRHeroCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MIRROR_API AMRRHeroCharacter : public AMRRCharacterBase
{
	GENERATED_BODY()
public:
	AMRRHeroCharacter(const class FObjectInitializer& ObjectInitializer);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController* NewController) override;

	class USpringArmComponent* GetCameraBoom();

	class UCameraComponent* GetFollowCamera();

	UFUNCTION(BlueprintCallable, Category = "Mirror|Camera")
	float GetStartingCameraBoomArmLength();

	UFUNCTION(BlueprintCallable, Category = "Mirror|Camera")
	FVector GetStartingCameraBoomLocation();

	class UGDFloatingStatusBarWidget* GetFloatingStatusBar();

	USkeletalMeshComponent* GetGunComponent() const;

	virtual void FinishDying() override;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|Camera")
	float BaseTurnRate = 45.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|Camera")
	float BaseLookUpRate = 45.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Mirror|Camera")
	float StartingCameraBoomArmLength;

	UPROPERTY(BlueprintReadOnly, Category = "Mirror|Camera")
	FVector StartingCameraBoomLocation;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mirror|Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mirror|Camera")
	class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	USkeletalMeshComponent* WeaponLeftComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	USkeletalMeshComponent* WeaponRightComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|UI")
	TSubclassOf<class UGDFloatingStatusBarWidget> UIFloatingStatusBarClass;

	UPROPERTY()
	class UGDFloatingStatusBarWidget* UIFloatingStatusBar;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mirror|UI")
	class UWidgetComponent* UIFloatingStatusBarComponent;

	bool ASCInputBound = false;

	FGameplayTag DeadTag;

	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	void LookUp(float Value);

	void LookUpRate(float Value);

	void Turn(float Value);

	void TurnRate(float Value);

	void MoveForward(float Value);

	void MoveRight(float Value);

	UFUNCTION()
	void InitializeFloatingStatusBar();

	virtual void OnRep_PlayerState() override;

	void BindASCInput();
};
