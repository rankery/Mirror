// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRROR_MirrorGameMode_generated_h
#error "MirrorGameMode.generated.h already included, missing '#pragma once' in MirrorGameMode.h"
#endif
#define MIRROR_MirrorGameMode_generated_h

#define Game_Source_Mirror_MirrorGameMode_h_12_SPARSE_DATA
#define Game_Source_Mirror_MirrorGameMode_h_12_RPC_WRAPPERS
#define Game_Source_Mirror_MirrorGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Mirror_MirrorGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMirrorGameMode(); \
	friend struct Z_Construct_UClass_AMirrorGameMode_Statics; \
public: \
	DECLARE_CLASS(AMirrorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), MIRROR_API) \
	DECLARE_SERIALIZER(AMirrorGameMode)


#define Game_Source_Mirror_MirrorGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMirrorGameMode(); \
	friend struct Z_Construct_UClass_AMirrorGameMode_Statics; \
public: \
	DECLARE_CLASS(AMirrorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), MIRROR_API) \
	DECLARE_SERIALIZER(AMirrorGameMode)


#define Game_Source_Mirror_MirrorGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MIRROR_API AMirrorGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMirrorGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIRROR_API, AMirrorGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMirrorGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MIRROR_API AMirrorGameMode(AMirrorGameMode&&); \
	MIRROR_API AMirrorGameMode(const AMirrorGameMode&); \
public:


#define Game_Source_Mirror_MirrorGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MIRROR_API AMirrorGameMode(AMirrorGameMode&&); \
	MIRROR_API AMirrorGameMode(const AMirrorGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIRROR_API, AMirrorGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMirrorGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMirrorGameMode)


#define Game_Source_Mirror_MirrorGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Mirror_MirrorGameMode_h_9_PROLOG
#define Game_Source_Mirror_MirrorGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_MirrorGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_MirrorGameMode_h_12_SPARSE_DATA \
	Game_Source_Mirror_MirrorGameMode_h_12_RPC_WRAPPERS \
	Game_Source_Mirror_MirrorGameMode_h_12_INCLASS \
	Game_Source_Mirror_MirrorGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Mirror_MirrorGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_MirrorGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_MirrorGameMode_h_12_SPARSE_DATA \
	Game_Source_Mirror_MirrorGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Mirror_MirrorGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Game_Source_Mirror_MirrorGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRROR_API UClass* StaticClass<class AMirrorGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Mirror_MirrorGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
