// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameplayEffect.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "MRRGameplayEffectTypes.generated.h"

/**
 * 
 */
USTRUCT()
struct MIRROR_API FMRRGameplayEffectContext : public FGameplayEffectContext
{
	GENERATED_USTRUCT_BODY()
public:

	virtual FGameplayAbilityTargetDataHandle GetTargetData()
	{
		return TargetData;
	}

	virtual void AddTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle)
	{
		TargetData.Append(TargetDataHandle);
	}

	/**
	* Functions that subclasses of FGameplayEffectContext need to override
	*/

	virtual UScriptStruct* GetScriptStruct() const override
	{
		return FMRRGameplayEffectContext::StaticStruct();
	}

	virtual FMRRGameplayEffectContext* Duplicate() const override
	{
		FMRRGameplayEffectContext* NewContext = new FMRRGameplayEffectContext();
		*NewContext = *this;
		NewContext->AddActors(Actors);
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		// Shallow copy of TargetData, is this okay?
		NewContext->TargetData.Append(TargetData);
		return NewContext;
	}

	virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess) override;

protected:
	FGameplayAbilityTargetDataHandle TargetData;
};

template<>
struct TStructOpsTypeTraits<FMRRGameplayEffectContext> : public TStructOpsTypeTraitsBase2<FMRRGameplayEffectContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true		// Necessary so that TSharedPtr<FHitResult> Data is copied around
	};
};