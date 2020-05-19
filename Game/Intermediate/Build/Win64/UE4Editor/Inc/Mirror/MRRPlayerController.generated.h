// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRROR_MRRPlayerController_generated_h
#error "MRRPlayerController.generated.h already included, missing '#pragma once' in MRRPlayerController.h"
#endif
#define MIRROR_MRRPlayerController_generated_h

#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_SPARSE_DATA
#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_RPC_WRAPPERS
#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRRPlayerController(); \
	friend struct Z_Construct_UClass_AMRRPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMRRPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(AMRRPlayerController)


#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMRRPlayerController(); \
	friend struct Z_Construct_UClass_AMRRPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMRRPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(AMRRPlayerController)


#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRRPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRRPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRRPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRRPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRRPlayerController(AMRRPlayerController&&); \
	NO_API AMRRPlayerController(const AMRRPlayerController&); \
public:


#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRRPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRRPlayerController(AMRRPlayerController&&); \
	NO_API AMRRPlayerController(const AMRRPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRRPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRRPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRRPlayerController)


#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_12_PROLOG
#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_SPARSE_DATA \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_RPC_WRAPPERS \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_INCLASS \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_SPARSE_DATA \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Player_MRRPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRROR_API UClass* StaticClass<class AMRRPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Mirror_Public_Player_MRRPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
