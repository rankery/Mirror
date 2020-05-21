// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRPlayerController.h"
#include "AbilitySystemComponent.h"
#include "Characters/MRRHeroCharacter.h"
#include "Player/MRRPlayerState.h"
#include "UI/MRRDamageTextWidgetComponent.h"
#include "UI/MRRHUDWidget.h"

void AMRRPlayerController::CreateHUD()
{
	// Only create once
	if (UIHUDWidget)
	{
		return;
	}

	if (!UIHUDWidgetClass)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing UIHUDWidgetClass. Please fill in on the Blueprint of the PlayerController."), TEXT(__FUNCTION__));
		return;
	}

	// Only create a HUD for local player
	if (!IsLocalPlayerController())
	{
		return;
	}

	// Need a valid PlayerState to get attributes from
	AMRRPlayerState* PS = GetPlayerState<AMRRPlayerState>();
	if (!PS)
	{
		return;
	}

	UIHUDWidget = CreateWidget<UMRRHUDWidget>(this, UIHUDWidgetClass);
	UIHUDWidget->AddToViewport();

	// Set attributes
	UIHUDWidget->SetCurrentHealth(PS->GetHealth());
	UIHUDWidget->SetMaxHealth(PS->GetMaxHealth());
	UIHUDWidget->SetHealthPercentage(PS->GetHealth() / PS->GetMaxHealth());
	UIHUDWidget->SetHealthRegenRate(PS->GetHealthRegenRate());

	UIHUDWidget->SetPhysicalDamageIncrease(PS->GetPhysicalDamageIncrease());
	UIHUDWidget->SetAttackSpeed(PS->GetAttackSpeed());
	UIHUDWidget->SetMagicalDamageIncrease(PS->GetMagicalDamageIncrease());
	UIHUDWidget->SetCastSpeed(PS->GetCastSpeed());

	UIHUDWidget->SetPhysicalDamageReduction(PS->GetPhysicalDamageReduction());
	UIHUDWidget->SetMagicalDamageReduction(PS->GetMagicalDamageReduction());

	UIHUDWidget->SetWeight(PS->GetWeight());
	UIHUDWidget->SetMaxWeight(PS->GetMaxWeight());
	UIHUDWidget->SetGold(PS->GetGold());

	UIHUDWidget->SetMovementSpeed(PS->GetMovementSpeed());
	UIHUDWidget->SetTimeModifier(PS->GetTimeModifier());
	UIHUDWidget->SetGravityX(PS->GetGravityX());
	UIHUDWidget->SetGravityY(PS->GetGravityY());
	UIHUDWidget->SetGravityZ(PS->GetGravityZ());

	DamageNumberClass = StaticLoadClass(UObject::StaticClass(), nullptr, TEXT("/Game/Mirror/UI/WC_DamageText.WC_DamageText_C"));
	if (!DamageNumberClass)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Failed to find DamageNumberClass. If it was moved, please update the reference location in C++."), TEXT(__FUNCTION__));
	}
}

UMRRHUDWidget* AMRRPlayerController::GetHUD()
{
	return UIHUDWidget;
}

void AMRRPlayerController::ShowDamageNumber_Implementation(float DamageAmount, AMRRCharacter* TargetCharacter)
{
	UMRRDamageTextWidgetComponent* DamageText = NewObject<UMRRDamageTextWidgetComponent>(TargetCharacter, DamageNumberClass);
	DamageText->RegisterComponent();
	DamageText->AttachToComponent(TargetCharacter->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	DamageText->SetDamageText(DamageAmount);
}

bool AMRRPlayerController::ShowDamageNumber_Validate(float DamageAmount, AMRRCharacter* TargetCharacter)
{
	return true;
}

void AMRRPlayerController::SetRespawnCountdown_Implementation(float RespawnTimeRemaining)
{
	if (UIHUDWidget)
	{
		UIHUDWidget->SetRespawnCountdown(RespawnTimeRemaining);
	}
}

bool AMRRPlayerController::SetRespawnCountdown_Validate(float RespawnTimeRemaining)
{
	return true;
}

// Server only
void AMRRPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AMRRPlayerState* PS = GetPlayerState<AMRRPlayerState>();
	if (PS)
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, InPawn);
	}
}

void AMRRPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	// For edge cases where the PlayerState is repped before the Hero is possessed.
	CreateHUD();
}