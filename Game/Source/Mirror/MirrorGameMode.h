// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MirrorGameMode.generated.h"

UCLASS(minimalapi)
class AMirrorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMirrorGameMode();

	void HeroDied(AController* Controller);
protected:
	float RespawnDelay;

	TSubclassOf<class AMRRHeroCharacter> HeroClass;

	AActor* EnemySpawnPoint;

	virtual void BeginPlay() override;

	void RespawnHero(AController* Controller);
};
