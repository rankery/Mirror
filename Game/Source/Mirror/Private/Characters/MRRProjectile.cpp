#include "Characters/MRRProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

AMRRProjectile::AMRRProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(FName("ProjectileMovement"));
}

void AMRRProjectile::BeginPlay()
{
	Super::BeginPlay();
}