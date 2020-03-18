// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/RegularGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegularGate() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ARegularGate_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ARegularGate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ARegularGate::StaticRegisterNativesARegularGate()
	{
	}
	UClass* Z_Construct_UClass_ARegularGate_NoRegister()
	{
		return ARegularGate::StaticClass();
	}
	struct Z_Construct_UClass_ARegularGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveUpward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_moveUpward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARegularGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularGate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RegularGate.h" },
		{ "ModuleRelativePath", "RegularGate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularGate_Statics::NewProp_moveUpward_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "RegularGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARegularGate_Statics::NewProp_moveUpward = { "moveUpward", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularGate, moveUpward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARegularGate_Statics::NewProp_moveUpward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularGate_Statics::NewProp_moveUpward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularGate_Statics::NewProp_meshOffset_MetaData[] = {
		{ "Category", "RegularGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RegularGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARegularGate_Statics::NewProp_meshOffset = { "meshOffset", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularGate, meshOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARegularGate_Statics::NewProp_meshOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularGate_Statics::NewProp_meshOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularGate_Statics::NewProp_parent_MetaData[] = {
		{ "Category", "RegularGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RegularGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARegularGate_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularGate, parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARegularGate_Statics::NewProp_parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularGate_Statics::NewProp_parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularGate_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "RegularGate" },
		{ "Comment", "//components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RegularGate.h" },
		{ "ToolTip", "components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARegularGate_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularGate, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARegularGate_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularGate_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARegularGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularGate_Statics::NewProp_moveUpward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularGate_Statics::NewProp_meshOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularGate_Statics::NewProp_parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularGate_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARegularGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARegularGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARegularGate_Statics::ClassParams = {
		&ARegularGate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARegularGate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARegularGate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARegularGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARegularGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARegularGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARegularGate, 119213344);
	template<> MYPROJECT_API UClass* StaticClass<ARegularGate>()
	{
		return ARegularGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARegularGate(Z_Construct_UClass_ARegularGate, &ARegularGate::StaticClass, TEXT("/Script/MyProject"), TEXT("ARegularGate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARegularGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
