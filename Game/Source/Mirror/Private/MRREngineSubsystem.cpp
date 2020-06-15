#include "MRREngineSubsystem.h"
#include "AbilitySystemGlobals.h"

void UMRREngineSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UAbilitySystemGlobals::Get().InitGlobalData();
}
