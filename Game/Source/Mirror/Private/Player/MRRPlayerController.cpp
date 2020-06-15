#include "Player/MRRPlayerController.h"
#include "AbilitySystemComponent.h"
#include "Characters/Heroes/MRRHeroCharacter.h"
#include "Player/MRRPlayerState.h"
#include "UI/MRRDamageTextWidgetComponent.h"
#include "UI/MRRHUDWidget.h"

void AMRRPlayerController::CreateHUD()
{
	if (UIHUDWidget)
	{
		return;
	}

	if (!UIHUDWidgetClass)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing UIHUDWidgetClass. Please fill in on the Blueprint of the PlayerController."), TEXT(__FUNCTION__));
		return;
	}

	if (!IsLocalPlayerController())
	{
		return;
	}

	AMRRPlayerState* PS = GetPlayerState<AMRRPlayerState>();
	if (!PS)
	{
		return;
	}

	UIHUDWidget = CreateWidget<UMRRHUDWidget>(this, UIHUDWidgetClass);
	UIHUDWidget->AddToViewport();

	UIHUDWidget->SetCurrentHealth(PS->GetHealth());
	UIHUDWidget->SetMaxHealth(PS->GetMaxHealth());
	UIHUDWidget->SetHealthPercentage(PS->GetHealth() / PS->GetMaxHealth());
	UIHUDWidget->SetCurrentMana(PS->GetMana());
	UIHUDWidget->SetMaxMana(PS->GetMaxMana());
	UIHUDWidget->SetManaPercentage(PS->GetMana() / PS->GetMaxMana());
	UIHUDWidget->SetHealthRegenRate(PS->GetHealthRegenRate());
	UIHUDWidget->SetManaRegenRate(PS->GetManaRegenRate());
	UIHUDWidget->SetCurrentStamina(PS->GetStamina());
	UIHUDWidget->SetMaxStamina(PS->GetMaxStamina());
	UIHUDWidget->SetStaminaPercentage(PS->GetStamina() / PS->GetMaxStamina());
	UIHUDWidget->SetStaminaRegenRate(PS->GetStaminaRegenRate());
	UIHUDWidget->SetGold(PS->GetGold());

	DamageNumberClass = StaticLoadClass(UObject::StaticClass(), nullptr, TEXT("/Game/Mirror/UI/WC_DamageText.WC_DamageText_C"));
	if (!DamageNumberClass)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Failed to find DamageNumberClass. If it was moved, please update the reference location in C++."), TEXT(__FUNCTION__));
	}
}

UMRRHUDWidget * AMRRPlayerController::GetHUD()
{
	return UIHUDWidget;
}

void AMRRPlayerController::ShowDamageNumber_Implementation(float DamageAmount, AMRRCharacterBase * TargetCharacter)
{
	UMRRDamageTextWidgetComponent* DamageText = NewObject<UMRRDamageTextWidgetComponent>(TargetCharacter, DamageNumberClass);
	DamageText->RegisterComponent();
	DamageText->AttachToComponent(TargetCharacter->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	DamageText->SetDamageText(DamageAmount);
}

bool AMRRPlayerController::ShowDamageNumber_Validate(float DamageAmount, AMRRCharacterBase * TargetCharacter)
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

void AMRRPlayerController::OnPossess(APawn * InPawn)
{
	Super::OnPossess(InPawn);

	AMRRPlayerState* PS = GetPlayerState<AMRRPlayerState>();
	if (PS)
	{
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, InPawn);
	}
}

void AMRRPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	CreateHUD();
}
