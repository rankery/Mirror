// Fill out your copyright notice in the Description page of Project Settings.


#include "MRRHeroCharacter.h"
#include "Camera/CameraComponent.h"
#include "Characters/MRRAttributeSetBase.h"
#include "Characters/MRRAbilitySystemComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Mirror/MirrorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Player/MRRPlayerController.h"
#include "Player/MRRPlayerState.h"
//#include "UI/MRRFloatingStatusBarWidget.h" TO DO: Add status bar

#include "UObject/ConstructorHelpers.h"


