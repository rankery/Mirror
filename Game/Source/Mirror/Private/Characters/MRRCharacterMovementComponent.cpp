	#include "Characters/MRRCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "Characters/MRRCharacterBase.h"
#include "GameplayTagContainer.h"

UMRRCharacterMovementComponent::UMRRCharacterMovementComponent()
{
	SprintSpeedMultiplier = 1.4f;
}

float UMRRCharacterMovementComponent::GetMaxSpeed() const
{
	AMRRCharacterBase* Owner = Cast<AMRRCharacterBase>(GetOwner());
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

	if (RequestToStartSprinting)
	{
		return Owner->GetMoveSpeed() * SprintSpeedMultiplier;
	}

	return Owner->GetMoveSpeed();
}

void UMRRCharacterMovementComponent::UpdateFromCompressedFlags(uint8 Flags)
{
	Super::UpdateFromCompressedFlags(Flags);

	RequestToStartSprinting = (Flags & FSavedMove_Character::FLAG_Custom_0) != 0;

}

FNetworkPredictionData_Client * UMRRCharacterMovementComponent::GetPredictionData_Client() const
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

void UMRRCharacterMovementComponent::StartSprinting()
{
	RequestToStartSprinting = true;
}

void UMRRCharacterMovementComponent::StopSprinting()
{
	RequestToStartSprinting = false;
}


void UMRRCharacterMovementComponent::FMRRSavedMove::Clear()
{
	Super::Clear();

	SavedRequestToStartSprinting = false;
}

uint8 UMRRCharacterMovementComponent::FMRRSavedMove::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();

	if (SavedRequestToStartSprinting)
	{
		Result |= FLAG_Custom_0;
	}

	return Result;
}

bool UMRRCharacterMovementComponent::FMRRSavedMove::CanCombineWith(const FSavedMovePtr & NewMove, ACharacter * Character, float MaxDelta) const
{
	//Set which moves can be combined together. This will depend on the bit flags that are used.
	if (SavedRequestToStartSprinting != ((FMRRSavedMove*)&NewMove)->SavedRequestToStartSprinting)
	{
		return false;
	}

	return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void UMRRCharacterMovementComponent::FMRRSavedMove::SetMoveFor(ACharacter * Character, float InDeltaTime, FVector const & NewAccel, FNetworkPredictionData_Client_Character & ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);

	UMRRCharacterMovementComponent* CharacterMovement = Cast<UMRRCharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharacterMovement)
	{
		SavedRequestToStartSprinting = CharacterMovement->RequestToStartSprinting;
	}
}

void UMRRCharacterMovementComponent::FMRRSavedMove::PrepMoveFor(ACharacter * Character)
{
	Super::PrepMoveFor(Character);

	UMRRCharacterMovementComponent* CharacterMovement = Cast<UMRRCharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharacterMovement)
	{
	}
}

UMRRCharacterMovementComponent::FMRRNetworkPredictionData_Client::FMRRNetworkPredictionData_Client(const UCharacterMovementComponent & ClientMovement)
	: Super(ClientMovement)
{
}

FSavedMovePtr UMRRCharacterMovementComponent::FMRRNetworkPredictionData_Client::AllocateNewMove()
{
	return FSavedMovePtr(new FMRRSavedMove());
}
