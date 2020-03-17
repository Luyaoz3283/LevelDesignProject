// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/switchActivation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeswitchActivation() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AswitchActivation_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AswitchActivation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AswitchActivation::StaticRegisterNativesAswitchActivation()
	{
	}
	UClass* Z_Construct_UClass_AswitchActivation_NoRegister()
	{
		return AswitchActivation::StaticClass();
	}
	struct Z_Construct_UClass_AswitchActivation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AswitchActivation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AswitchActivation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "switchActivation.h" },
		{ "ModuleRelativePath", "switchActivation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AswitchActivation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AswitchActivation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AswitchActivation_Statics::ClassParams = {
		&AswitchActivation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AswitchActivation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AswitchActivation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AswitchActivation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AswitchActivation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AswitchActivation, 80750864);
	template<> MYPROJECT_API UClass* StaticClass<AswitchActivation>()
	{
		return AswitchActivation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AswitchActivation(Z_Construct_UClass_AswitchActivation, &AswitchActivation::StaticClass, TEXT("/Script/MyProject"), TEXT("AswitchActivation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AswitchActivation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
