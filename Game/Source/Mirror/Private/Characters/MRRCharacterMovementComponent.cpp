// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "Characters/MRRCharacter.h"
#include "GameplayTagContainer.h"

UMRRCharacterMovementComponent::UMRRCharacterMovementComponent()
{
	SlinkSpeedMultiplier = 0.7f;
}


float UMRRCharacterMovementComponent::GetMaxSpeed() const
{
	AMRRCharacter* Owner = Cast<AMRRCharacter>(GetOwner());
	if (!Owner)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), TEXT(__FUNCTION__));
		return Super::GetMaxSpeed();
	}

	if (!Owner->IsAlive())
	{
		return 0.0f;
	}

	if (Owner->GetAbilitySystemComponent()->HasMatchingGameplayTag(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun"))))
	{
		return 0.0f;
	}

	if (RequestToStartSlinking)
	{
		return Owner->GetMovementSpeed() * SlinkSpeedMultiplier;
	}

	return Owner->GetMovementSpeed();
}

void UMRRCharacterMovementComponent::UpdateFromCompressedFlags(uint8 Flags)
{
	Super::UpdateFromCompressedFlags(Flags);

	//The Flags parameter contains the compressed input flags that are stored in the saved move.
	//UpdateFromCompressed flags simply copies the flags from the saved move into the movement component.
	//It basically just resets the movement component to the state when the move was made so it can simulate from there.
	RequestToStartSlinking = (Flags & FSavedMove_Character::FLAG_Custom_0) != 0;
}

FNetworkPredictionData_Client* UMRRCharacterMovementComponent::GetPredictionData_Client() const
{
	check(PawnOwner != NULL);

	if (!ClientPredictionData)
	{
		UMRRCharacterMovementComponent* MutableThis = const_cast<UMRRCharacterMovementComponent*>(this);

		MutableThis->ClientPredictionData = new FMRRNetworkPredictionData_Client(*this);
		MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
		MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
	}

	return ClientPredictionData;
}

void UMRRCharacterMovementComponent::StartSlinking()
{
	RequestToStartSlinking = true;
}

void UMRRCharacterMovementComponent::StopSlinking()
{
	RequestToStartSlinking = false;
}

void UMRRCharacterMovementComponent::FMRRSavedMove::Clear()
{
	Super::Clear();

	SavedRequestToStartSlinking = false;
}

uint8 UMRRCharacterMovementComponent::FMRRSavedMove::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();

	if (SavedRequestToStartSlinking)
	{
		Result |= FLAG_Custom_0;
	}

	return Result;
}

bool UMRRCharacterMovementComponent::FMRRSavedMove::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	//Set which moves can be combined together. This will depend on the bit flags that are used.
	if (SavedRequestToStartSlinking != ((FMRRSavedMove*)&NewMove)->SavedRequestToStartSlinking)
	{
		return false;
	}

	return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void UMRRCharacterMovementComponent::FMRRSavedMove::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, FNetworkPredictionData_Client_Character& ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);

	UMRRCharacterMovementComponent* CharacterMovement = Cast<UMRRCharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharacterMovement)
	{
		SavedRequestToStartSlinking = CharacterMovement->RequestToStartSlinking;
	}
}

void UMRRCharacterMovementComponent::FMRRSavedMove::PrepMoveFor(ACharacter* Character)
{
	Super::PrepMoveFor(Character);

	UMRRCharacterMovementComponent* CharacterMovement = Cast<UMRRCharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharacterMovement)
	{
	}
}

UMRRCharacterMovementComponent::FMRRNetworkPredictionData_Client::FMRRNetworkPredictionData_Client(const UCharacterMovementComponent& ClientMovement)
	: Super(ClientMovement)
{
}

FSavedMovePtr UMRRCharacterMovementComponent::FMRRNetworkPredictionData_Client::AllocateNewMove()
{
	return FSavedMovePtr(new FMRRSavedMove());
}