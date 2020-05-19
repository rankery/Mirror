// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRROR_MirrorCharacter_generated_h
#error "MirrorCharacter.generated.h already included, missing '#pragma once' in MirrorCharacter.h"
#endif
#define MIRROR_MirrorCharacter_generated_h

#define Game_Source_Mirror_MirrorCharacter_h_12_SPARSE_DATA
#define Game_Source_Mirror_MirrorCharacter_h_12_RPC_WRAPPERS
#define Game_Source_Mirror_MirrorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Mirror_MirrorCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMirrorCharacter(); \
	friend struct Z_Construct_UClass_AMirrorCharacter_Statics; \
public: \
	DECLARE_CLASS(AMirrorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(AMirrorCharacter)


#define Game_Source_Mirror_MirrorCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMirrorCharacter(); \
	friend struct Z_Construct_UClass_AMirrorCharacter_Statics; \
public: \
	DECLARE_CLASS(AMirrorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(AMirrorCharacter)


#define Game_Source_Mirror_MirrorCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMirrorCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMirrorCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMirrorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMirrorCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMirrorCharacter(AMirrorCharacter&&); \
	NO_API AMirrorCharacter(const AMirrorCharacter&); \
public:


#define Game_Source_Mirror_MirrorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMirrorCharacter(AMirrorCharacter&&); \
	NO_API AMirrorCharacter(const AMirrorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMirrorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMirrorCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMirrorCharacter)


#define Game_Source_Mirror_MirrorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMirrorCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMirrorCharacter, FollowCamera); }


#define Game_Source_Mirror_MirrorCharacter_h_9_PROLOG
#define Game_Source_Mirror_MirrorCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_MirrorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_MirrorCharacter_h_12_SPARSE_DATA \
	Game_Source_Mirror_MirrorCharacter_h_12_RPC_WRAPPERS \
	Game_Source_Mirror_MirrorCharacter_h_12_INCLASS \
	Game_Source_Mirror_MirrorCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Mirror_MirrorCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_MirrorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_MirrorCharacter_h_12_SPARSE_DATA \
	Game_Source_Mirror_MirrorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Mirror_MirrorCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Game_Source_Mirror_MirrorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRROR_API UClass* StaticClass<class AMirrorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Mirror_MirrorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
