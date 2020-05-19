// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/UI/MRRDamageTextWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRDamageTextWidgetComponent() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_UMRRDamageTextWidgetComponent_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_UMRRDamageTextWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Mirror();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText();
// End Cross Module References
	static FName NAME_UMRRDamageTextWidgetComponent_SetDamageText = FName(TEXT("SetDamageText"));
	void UMRRDamageTextWidgetComponent::SetDamageText(float Damage)
	{
		MRRDamageTextWidgetComponent_eventSetDamageText_Parms Parms;
		Parms.Damage=Damage;
		ProcessEvent(FindFunctionChecked(NAME_UMRRDamageTextWidgetComponent_SetDamageText),&Parms);
	}
	void UMRRDamageTextWidgetComponent::StaticRegisterNativesUMRRDamageTextWidgetComponent()
	{
	}
	struct Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRDamageTextWidgetComponent_eventSetDamageText_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MRRDamageTextWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRDamageTextWidgetComponent, nullptr, "SetDamageText", nullptr, nullptr, sizeof(MRRDamageTextWidgetComponent_eventSetDamageText_Parms), Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMRRDamageTextWidgetComponent_NoRegister()
	{
		return UMRRDamageTextWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRRDamageTextWidgetComponent_SetDamageText, "SetDamageText" }, // 3849559153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/MRRDamageTextWidgetComponent.h" },
		{ "ModuleRelativePath", "Public/UI/MRRDamageTextWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRRDamageTextWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics::ClassParams = {
		&UMRRDamageTextWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMRRDamageTextWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMRRDamageTextWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMRRDamageTextWidgetComponent, 858574233);
	template<> MIRROR_API UClass* StaticClass<UMRRDamageTextWidgetComponent>()
	{
		return UMRRDamageTextWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMRRDamageTextWidgetComponent(Z_Construct_UClass_UMRRDamageTextWidgetComponent, &UMRRDamageTextWidgetComponent::StaticClass, TEXT("/Script/Mirror"), TEXT("UMRRDamageTextWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRRDamageTextWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
