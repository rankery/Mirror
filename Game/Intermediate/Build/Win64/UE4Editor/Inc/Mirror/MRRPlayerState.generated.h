// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRROR_MRRPlayerState_generated_h
#error "MRRPlayerState.generated.h already included, missing '#pragma once' in MRRPlayerState.h"
#endif
#define MIRROR_MRRPlayerState_generated_h

#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_SPARSE_DATA
#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive(); \
		P_NATIVE_END; \
	}


#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive(); \
		P_NATIVE_END; \
	}


#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRRPlayerState(); \
	friend struct Z_Construct_UClass_AMRRPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMRRPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(AMRRPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AMRRPlayerState*>(this); }


#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMRRPlayerState(); \
	friend struct Z_Construct_UClass_AMRRPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMRRPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(AMRRPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AMRRPlayerState*>(this); }


#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRRPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRRPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRRPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRRPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRRPlayerState(AMRRPlayerState&&); \
	NO_API AMRRPlayerState(const AMRRPlayerState&); \
public:


#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRRPlayerState(AMRRPlayerState&&); \
	NO_API AMRRPlayerState(const AMRRPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRRPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRRPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMRRPlayerState)


#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(AMRRPlayerState, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSetBase() { return STRUCT_OFFSET(AMRRPlayerState, AttributeSetBase); }


#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_14_PROLOG
#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_SPARSE_DATA \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_RPC_WRAPPERS \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_INCLASS \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_SPARSE_DATA \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_INCLASS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Player_MRRPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRROR_API UClass* StaticClass<class AMRRPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Mirror_Public_Player_MRRPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
