// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRROR_MRRAttributeSetBase_generated_h
#error "MRRAttributeSetBase.generated.h already included, missing '#pragma once' in MRRAttributeSetBase.h"
#endif
#define MIRROR_MRRAttributeSetBase_generated_h

#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_SPARSE_DATA
#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Gold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Gold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Weight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Weight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Armor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Armor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HealthRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	}


#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Gold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Gold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Weight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Weight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Armor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Armor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HealthRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	}


#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRRAttributeSetBase(); \
	friend struct Z_Construct_UClass_UMRRAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UMRRAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(UMRRAttributeSetBase)


#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMRRAttributeSetBase(); \
	friend struct Z_Construct_UClass_UMRRAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UMRRAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(UMRRAttributeSetBase)


#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRRAttributeSetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRRAttributeSetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRRAttributeSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRRAttributeSetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRRAttributeSetBase(UMRRAttributeSetBase&&); \
	NO_API UMRRAttributeSetBase(const UMRRAttributeSetBase&); \
public:


#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRRAttributeSetBase(UMRRAttributeSetBase&&); \
	NO_API UMRRAttributeSetBase(const UMRRAttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRRAttributeSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRRAttributeSetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMRRAttributeSetBase)


#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_18_PROLOG
#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_SPARSE_DATA \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_RPC_WRAPPERS \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_INCLASS \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_SPARSE_DATA \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_INCLASS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRROR_API UClass* StaticClass<class UMRRAttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Mirror_Public_Characters_MRRAttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
