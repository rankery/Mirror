// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRROR_MRRHUDWidget_generated_h
#error "MRRHUDWidget.generated.h already included, missing '#pragma once' in MRRHUDWidget.h"
#endif
#define MIRROR_MRRHUDWidget_generated_h

#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_SPARSE_DATA
#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_RPC_WRAPPERS
#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_EVENT_PARMS \
	struct MRRHUDWidget_eventSetCurrentHealth_Parms \
	{ \
		float CurrentHealth; \
	}; \
	struct MRRHUDWidget_eventSetCurrentWeight_Parms \
	{ \
		float CurrentWeight; \
	}; \
	struct MRRHUDWidget_eventSetGold_Parms \
	{ \
		int32 Gold; \
	}; \
	struct MRRHUDWidget_eventSetHealthPercentage_Parms \
	{ \
		float HealthPercentage; \
	}; \
	struct MRRHUDWidget_eventSetHealthRegenRate_Parms \
	{ \
		float HealthRegenRate; \
	}; \
	struct MRRHUDWidget_eventSetMaxHealth_Parms \
	{ \
		float MaxHealth; \
	}; \
	struct MRRHUDWidget_eventSetMaxWeight_Parms \
	{ \
		float MaxWeight; \
	}; \
	struct MRRHUDWidget_eventSetWeightPercentage_Parms \
	{ \
		float StaminaWeight; \
	};


#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_CALLBACK_WRAPPERS
#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRRHUDWidget(); \
	friend struct Z_Construct_UClass_UMRRHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UMRRHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(UMRRHUDWidget)


#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMRRHUDWidget(); \
	friend struct Z_Construct_UClass_UMRRHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UMRRHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(UMRRHUDWidget)


#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRRHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRRHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRRHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRRHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRRHUDWidget(UMRRHUDWidget&&); \
	NO_API UMRRHUDWidget(const UMRRHUDWidget&); \
public:


#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRRHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRRHUDWidget(UMRRHUDWidget&&); \
	NO_API UMRRHUDWidget(const UMRRHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRRHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRRHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRRHUDWidget)


#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_12_PROLOG \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_EVENT_PARMS


#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_SPARSE_DATA \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_RPC_WRAPPERS \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_CALLBACK_WRAPPERS \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_INCLASS \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_SPARSE_DATA \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_CALLBACK_WRAPPERS \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_INCLASS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_UI_MRRHUDWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRROR_API UClass* StaticClass<class UMRRHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Mirror_Public_UI_MRRHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
