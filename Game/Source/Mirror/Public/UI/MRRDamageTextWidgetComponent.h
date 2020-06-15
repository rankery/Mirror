#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "MRRDamageTextWidgetComponent.generated.h"

UCLASS()
class MIRROR_API UMRRDamageTextWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetDamageText(float Damage);
};
