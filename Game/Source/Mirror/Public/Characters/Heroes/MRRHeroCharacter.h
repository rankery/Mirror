// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/MRRCharacter.h"
#include "GameplayEffectTypes.h"
#include "MRRHeroCharacter.generated.h"

class AMRRWeapon;

UENUM(BlueprintType)
enum class EMRRHeroWeaponState : uint8
{
	// 0
	Melee					UMETA(DisplayName = "Melee Weapon"),
	// 1
	Magic				UMETA(DisplayName = "Magic Weapon"),
	// 2
	Bow			UMETA(DisplayName = "Bow Weapon"),
};

USTRUCT()
struct MIRROR_API FMRRHeroInventory
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY()
		TArray<AMRRWeapon*> Weapons;

	// Consumable items

	// Passive items like armor

	// Door keys

	// Etc
};

/**
 * 
 */
UCLASS()
class MIRROR_API AMRRHeroCharacter : public AMRRCharacter
{
	GENERATED_BODY()
public:
	AMRRHeroCharacter(const class FObjectInitializer& ObjectInitializer);

	/**
	* Character 
	*  All public character functions like meshes, camera etc
	*/

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Only called on the Server. Calls before Server's AcknowledgePossession.
	virtual void PossessedBy(AController* NewController) override;

	class UMRRFloatingStatusBarWidget* GetFloatingStatusBar();

	virtual void Die() override;

	virtual void FinishDying() override;

	/**
	* Weapon
	*  All public weapons functions and properties
	*/

	FGameplayTag CurrentWeaponLeftTag;
	FGameplayTag CurrentWeaponRightTag;

	UFUNCTION(BlueprintCallable, Category = "Mirror|Inventory")
	AMRRWeapon* GetCurrentWeaponLeft() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|Inventory")
	AMRRWeapon* GetCurrentWeaponRight() const;

	UFUNCTION(BlueprintCallable, Category = "GASShooter|Inventory")
	int32 GetNumWeapons() const;

	UFUNCTION(BlueprintCallable, Category = "Mirror|Inventory")
	bool AddWeaponToInventory(AMRRWeapon* NewWeapon);

	UFUNCTION(BlueprintCallable, Category = "Mirror|Inventory")
	bool RemoveWeaponFromInventory(AMRRWeapon* WeaponToRemove);

	UFUNCTION(BlueprintCallable, Category = "Mirror|Inventory")
	void RemoveAllWeaponsFromInventory();

	UFUNCTION(BlueprintCallable, Category = "Mirror|Inventory")
	void EquipWeaponLeft(AMRRWeapon* NewWeapon);

	UFUNCTION(BlueprintCallable, Category = "Mirror|Inventory")
	void EquipWeaponRight(AMRRWeapon* NewWeapon);

	UFUNCTION(Server, Reliable)
	void ServerEquipWeaponLeft(AMRRWeapon* NewWeapon);
	void ServerEquipWeaponLeft_Implementation(AMRRWeapon* NewWeapon);
	bool ServerEquipWeaponLeft_Validate(AMRRWeapon* NewWeapon);

	UFUNCTION(Server, Reliable)
	void ServerEquipWeaponRight(AMRRWeapon* NewWeapon);
	void ServerEquipWeaponRight_Implementation(AMRRWeapon* NewWeapon);
	bool ServerEquipWeaponRight_Validate(AMRRWeapon* NewWeapon);


	FName GetWeaponLeftAttachPoint();
	FName GetWeaponRightAttachPoint();

protected:

	/**
	* Character
	*  All public character functions like meshes, camera etc
	*/
	bool bASCInputBound;

	UPROPERTY(BlueprintReadOnly, Category = "Mirror|MRRHeroCharacter")
	FVector StartingMeshLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|Camera")
	float BaseTurnRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|Camera")
	float BaseLookUpRate;

	UPROPERTY(BlueprintReadOnly, Category = "Mirror|Camera")
	float StartingCameraBoomArmLength;

	UPROPERTY(BlueprintReadOnly, Category = "Mirror|Camera")
	FVector StartingCameraBoomLocation;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mirror|Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mirror|Camera")
	class UCameraComponent* FollowCamera;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void PostInitializeComponents() override;

	// Mouse
	void LookUp(float Value);

	// Gamepad
	void LookUpRate(float Value);

	// Mouse
	void Turn(float Value);

	// Gamepad
	void TurnRate(float Value);

	// Mouse + Gamepad
	void MoveForward(float Value);

	// Mouse + Gamepad
	void MoveRight(float Value);

	void SetupStartupPerspective();

	void SetPerspective();

	// Called from both SetupPlayerInputComponent and OnRep_PlayerState because of a potential race condition where the PlayerController might
	// call ClientRestart which calls SetupPlayerInputComponent before the PlayerState is repped to the client so the PlayerState would be null in SetupPlayerInputComponent.
	// Conversely, the PlayerState might be repped before the PlayerController calls ClientRestart so the Actor's InputComponent would be null in OnRep_PlayerState.
	void BindASCInput();

	// Client only
	virtual void OnRep_PlayerState() override;
	virtual void OnRep_Controller() override;

	/**
	* Weapon
	*  All weapons functions and properties
	*/

	// Cache tags
	FGameplayTag NoWeaponTag;
	FGameplayTag WeaponChangingDelayReplicationTag;

	// Tag changed delegate handles
	FDelegateHandle WeaponChangingDelayReplicationTagChangedDelegateHandle;

	UPROPERTY(ReplicatedUsing = OnRep_Inventory)
	FMRRHeroInventory Inventory;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Mirror|Inventory")
	TArray<TSubclassOf<AMRRWeapon>> DefaultInventoryWeaponClasses;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentWeaponLeft)
	AMRRWeapon* CurrentWeaponLeft;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentWeaponRight)
	AMRRWeapon* CurrentWeaponRight;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|MRRHeroCharacter")
	FName WeaponLeftAttachPoint;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mirror|MRRHeroCharacter")
	FName WeaponRightAttachPoint;

	bool DoesWeaponExistInInventory(AMRRWeapon* InWeapon);

	void SpawnDefaultInventory();

	void SetCurrentWeaponLeft(AMRRWeapon* NewWeapon);
	void SetCurrentWeaponRight(AMRRWeapon* NewWeapon);

	void UnEquipWeapon(AMRRWeapon* WeaponToUnEquip);
	void UnEquipCurrentWeaponLeft();
	void UnEquipCurrentWeaponRight();

	UFUNCTION()
	void OnRep_CurrentWeaponLeft(AMRRWeapon* LastWeapon);

	UFUNCTION()
	void OnRep_CurrentWeaponRight(AMRRWeapon* LastWeapon);

	UFUNCTION()
	void OnRep_Inventory();

	// The CurrentWeapon is only automatically replicated to simulated clients.
	// The autonomous client can use this to request the proper CurrentWeapon from the server when it knows it may be
	// out of sync with it from predictive client-side changes.
	UFUNCTION(Server, Reliable)
	void ServerSyncCurrentWeaponLeft();
	void ServerSyncCurrentWeaponLeft_Implementation();
	bool ServerSyncCurrentWeaponLeft_Validate();

	UFUNCTION(Server, Reliable)
	void ServerSyncCurrentWeaponRight();
	void ServerSyncCurrentWeaponRight_Implementation();
	bool ServerSyncCurrentWeaponRight_Validate();

	// The CurrentWeapon is only automatically replicated to simulated clients.
	// Use this function to manually sync the autonomous client's CurrentWeapon when we're ready to.
	// This allows us to predict weapon changes (changing weapons fast multiple times in a row so that the server doesn't
	// replicate and clobber our CurrentWeapon).
	UFUNCTION(Client, Reliable)
	void ClientSyncCurrentWeaponLeft(AMRRWeapon* InWeapon);
	void ClientSyncCurrentWeaponLeft_Implementation(AMRRWeapon* InWeapon);
	bool ClientSyncCurrentWeaponLeft_Validate(AMRRWeapon* InWeapon);

	UFUNCTION(Client, Reliable)
	void ClientSyncCurrentWeaponRight(AMRRWeapon* InWeapon);
	void ClientSyncCurrentWeaponRight_Implementation(AMRRWeapon* InWeapon);
	bool ClientSyncCurrentWeaponRight_Validate(AMRRWeapon* InWeapon);

	/**
	* UI
	*  All ui functions and props
	*/

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mirror|UI")
	TSubclassOf<class UMRRFloatingStatusBarWidget> UIFloatingStatusBarClass;

	UPROPERTY()
	class UMRRFloatingStatusBarWidget* UIFloatingStatusBar;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mirror|UI")
	class UWidgetComponent* UIFloatingStatusBarComponent;

	// Creates and initializes the floating status bar for heroes.
	// Safe to call many times because it checks to make sure it only executes once.
	UFUNCTION()
	void InitializeFloatingStatusBar();

};
