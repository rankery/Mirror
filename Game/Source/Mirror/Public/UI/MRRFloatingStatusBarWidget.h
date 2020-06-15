#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MRRFloatingStatusBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class MIRROR_API UMRRFloatingStatusBarWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetHealthPercentage(float HealthPercentage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetManaPercentage(float ManaPercentage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCharacterName(const FText& NewName);
};
