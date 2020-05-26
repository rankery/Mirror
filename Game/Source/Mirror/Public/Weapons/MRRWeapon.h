// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "GameplayAbilitySpec.h"
#include "Mirror/Mirror.h"
#include "MRRWeapon.generated.h"

class AMRRHeroCharacter;
class UAnimMontage;
class UMRRAbilitySystemComponent;
class UMRRGameplayAbility;
class USkeletalMeshComponent;

UCLASS(Blueprintable, BlueprintType)
class MIRROR_API AMRRWeapon : public AActor, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMRRWeapon();

	~AMRRWeapon();

	// Whether or not to spawn this weapon with collision enabled (pickup mode).
	// Set to false when spawning directly into a player's inventory or true when spawning into the world in pickup mode.
	UPROPERTY(BlueprintReadWrite)
	bool bSpawnWithCollision;

	// This tag is primarily used by the first person Animation Blueprint to determine which animations to play
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Mirror|MRRWeapon")
	FGameplayTag WeaponTag;

	// UI HUD Primary Icon when equipped. Using Sprites because of the texture atlas from Mirror.
	//UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|UI")
	//UPaperSprite* PrimaryIcon;

	//UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|UI")
	//UPaperSprite* SecondaryIcon;

	//// UI HUD Primary Clip Icon when equipped
	//UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|UI")
	//UPaperSprite* PrimaryClipIcon;

	//UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|UI")
	//UPaperSprite* SecondaryClipIcon;

	// Implement IAbilitySystemInterface
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mirror|GSWeapon")
	virtual USkeletalMeshComponent* GetWeaponMesh() const;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;

	void SetOwningCharacter(AMRRHeroCharacter* InOwningCharacter);

	// Pickup on touch
	virtual void NotifyActorBeginOverlap(class AActor* Other) override;

	// Called when the player equips this weapon
	virtual void EquipLeft();
	virtual void EquipRight();

	// Called when the player unequips this weapon
	virtual void UnEquip();


	UFUNCTION(NetMulticast, Reliable)
	void OnDropped(FVector NewLocation);
	virtual void OnDropped_Implementation(FVector NewLocation);
	virtual bool OnDropped_Validate(FVector NewLocation);

	/*UFUNCTION(BlueprintCallable, Category = "Mirror|GSWeapon")
	TSubclassOf<class UMRRHUDReticle> GetPrimaryHUDReticleClass() const;*/

	UFUNCTION(BlueprintCallable, Category = "Mirror|Animation")
	UAnimMontage* GetEquipMontage() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|Audio")
	class USoundCue* GetPickupSound() const;

protected:
	UPROPERTY()
	UMRRAbilitySystemComponent* AbilitySystemComponent;

	/*UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|UI")
	TSubclassOf<class UMRRHUDReticle> PrimaryHUDReticleClass;*/

	// Collision capsule for when weapon is in pickup mode
	
	UPROPERTY(VisibleAnywhere)
	class UCapsuleComponent* CollisionComp;

	UPROPERTY(VisibleAnywhere, Category = "Mirror|MRRWeapon")
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Mirror|MRRWeapon")
	FVector WeaponMeshPickupRelativeLocation;

	UPROPERTY(EditDefaultsOnly, Category = "Mirror|MRRWeapon")
	FVector WeaponMeshEquippedRelativeLocation;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Mirror|MRRWeapon")
	AMRRHeroCharacter* OwningCharacter;

	UPROPERTY(BlueprintReadonly, EditAnywhere, Category = "Mirror|Animation")
	UAnimMontage* EquipMontage;

	// Sound played when player picks it up
	UPROPERTY(EditDefaultsOnly, Category = "Mirror|Audio")
	class USoundCue* PickupSound;


	virtual void BeginPlay() override;

	// Called when the player picks up this weapon
	virtual void PickUpOnTouch(AMRRHeroCharacter* InCharacter);

};
