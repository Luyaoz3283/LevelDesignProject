// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/doorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedoorBase() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AdoorBase_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AdoorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AdoorBase::StaticRegisterNativesAdoorBase()
	{
	}
	UClass* Z_Construct_UClass_AdoorBase_NoRegister()
	{
		return AdoorBase::StaticClass();
	}
	struct Z_Construct_UClass_AdoorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AdoorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AdoorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "doorBase.h" },
		{ "ModuleRelativePath", "doorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AdoorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AdoorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AdoorBase_Statics::ClassParams = {
		&AdoorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AdoorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AdoorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AdoorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AdoorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AdoorBase, 2865010331);
	template<> MYPROJECT_API UClass* StaticClass<AdoorBase>()
	{
		return AdoorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AdoorBase(Z_Construct_UClass_AdoorBase, &AdoorBase::StaticClass, TEXT("/Script/MyProject"), TEXT("AdoorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AdoorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
