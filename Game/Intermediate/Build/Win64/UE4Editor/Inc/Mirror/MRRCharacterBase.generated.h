// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRROR_MRRCharacterBase_generated_h
#error "MRRCharacterBase.generated.h already included, missing '#pragma once' in MRRCharacterBase.h"
#endif
#define MIRROR_MRRCharacterBase_generated_h

#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_SPARSE_DATA
#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_RPC_WRAPPERS
#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRRCharacterBase(); \
	friend struct Z_Construct_UClass_AMRRCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AMRRCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(AMRRCharacterBase)


#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMRRCharacterBase(); \
	friend struct Z_Construct_UClass_AMRRCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AMRRCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(AMRRCharacterBase)


#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRRCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRRCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRRCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRRCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRRCharacterBase(AMRRCharacterBase&&); \
	NO_API AMRRCharacterBase(const AMRRCharacterBase&); \
public:


#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRRCharacterBase(AMRRCharacterBase&&); \
	NO_API AMRRCharacterBase(const AMRRCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRRCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRRCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMRRCharacterBase)


#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_9_PROLOG
#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_SPARSE_DATA \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_RPC_WRAPPERS \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_INCLASS \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_SPARSE_DATA \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Characters_MRRCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRROR_API UClass* StaticClass<class AMRRCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Mirror_Public_Characters_MRRCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
