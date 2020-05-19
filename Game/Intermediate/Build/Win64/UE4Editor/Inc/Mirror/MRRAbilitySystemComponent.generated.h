// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMRRAbilitySystemComponent;
#ifdef MIRROR_MRRAbilitySystemComponent_generated_h
#error "MRRAbilitySystemComponent.generated.h already included, missing '#pragma once' in MRRAbilitySystemComponent.h"
#endif
#define MIRROR_MRRAbilitySystemComponent_generated_h

#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_9_DELEGATE \
struct _Script_Mirror_eventReceivedDamageDelegate_Parms \
{ \
	UMRRAbilitySystemComponent* SourceASC; \
	float UnmitigatedDamage; \
	float MitigatedDamage; \
}; \
static inline void FReceivedDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceivedDamageDelegate, UMRRAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage) \
{ \
	_Script_Mirror_eventReceivedDamageDelegate_Parms Parms; \
	Parms.SourceASC=SourceASC; \
	Parms.UnmitigatedDamage=UnmitigatedDamage; \
	Parms.MitigatedDamage=MitigatedDamage; \
	ReceivedDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_SPARSE_DATA
#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_RPC_WRAPPERS
#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRRAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UMRRAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UMRRAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(UMRRAbilitySystemComponent)


#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMRRAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UMRRAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UMRRAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mirror"), NO_API) \
	DECLARE_SERIALIZER(UMRRAbilitySystemComponent)


#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRRAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRRAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRRAbilitySystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRRAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRRAbilitySystemComponent(UMRRAbilitySystemComponent&&); \
	NO_API UMRRAbilitySystemComponent(const UMRRAbilitySystemComponent&); \
public:


#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRRAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRRAbilitySystemComponent(UMRRAbilitySystemComponent&&); \
	NO_API UMRRAbilitySystemComponent(const UMRRAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRRAbilitySystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRRAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRRAbilitySystemComponent)


#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_15_PROLOG
#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_SPARSE_DATA \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_RPC_WRAPPERS \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_INCLASS \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_SPARSE_DATA \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_INCLASS_NO_PURE_DECLS \
	Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRROR_API UClass* StaticClass<class UMRRAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Mirror_Public_Characters_MRRAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
