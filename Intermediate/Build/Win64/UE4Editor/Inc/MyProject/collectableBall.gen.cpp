// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/collectableBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecollectableBall() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AcollectableBall_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AcollectableBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AcollectableBall_Dropped();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AcollectableBall_onOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AcollectableBall_OnOverlapEnd();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AmyGM_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AcollectableBall::StaticRegisterNativesAcollectableBall()
	{
		UClass* Class = AcollectableBall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dropped", &AcollectableBall::execDropped },
			{ "onOverlapBegin", &AcollectableBall::execonOverlapBegin },
			{ "OnOverlapEnd", &AcollectableBall::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AcollectableBall_Dropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcollectableBall_Dropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "collectableBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AcollectableBall_Dropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcollectableBall, nullptr, "Dropped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcollectableBall_Dropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_Dropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcollectableBall_Dropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AcollectableBall_Dropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics
	{
		struct collectableBall_eventonOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventonOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((collectableBall_eventonOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(collectableBall_eventonOverlapBegin_Parms), &Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventonOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventonOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventonOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventonOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "collectableBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcollectableBall, nullptr, "onOverlapBegin", nullptr, nullptr, sizeof(collectableBall_eventonOverlapBegin_Parms), Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcollectableBall_onOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AcollectableBall_onOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics
	{
		struct collectableBall_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(collectableBall_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "collectableBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcollectableBall, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(collectableBall_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcollectableBall_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AcollectableBall_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AcollectableBall_NoRegister()
	{
		return AcollectableBall::StaticClass();
	}
	struct Z_Construct_UClass_AcollectableBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ballTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ballTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ballMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ballMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_downward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_downward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_beingHeld_MetaData[];
#endif
		static void NewProp_beingHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_beingHeld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcollectableBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AcollectableBall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AcollectableBall_Dropped, "Dropped" }, // 2335710337
		{ &Z_Construct_UFunction_AcollectableBall_onOverlapBegin, "onOverlapBegin" }, // 1985256603
		{ &Z_Construct_UFunction_AcollectableBall_OnOverlapEnd, "OnOverlapEnd" }, // 340736810
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcollectableBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "collectableBall.h" },
		{ "ModuleRelativePath", "collectableBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcollectableBall_Statics::NewProp_parent_MetaData[] = {
		{ "Category", "collectableBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "collectableBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcollectableBall_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcollectableBall, parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcollectableBall_Statics::NewProp_parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcollectableBall_Statics::NewProp_parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballTrigger_MetaData[] = {
		{ "Category", "collectableBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "collectableBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballTrigger = { "ballTrigger", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcollectableBall, ballTrigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballMesh_MetaData[] = {
		{ "Category", "collectableBall" },
		{ "Comment", "//components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "collectableBall.h" },
		{ "ToolTip", "components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballMesh = { "ballMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcollectableBall, ballMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcollectableBall_Statics::NewProp_MyGM_MetaData[] = {
		{ "Category", "collectableBall" },
		{ "ModuleRelativePath", "collectableBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcollectableBall_Statics::NewProp_MyGM = { "MyGM", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcollectableBall, MyGM), Z_Construct_UClass_AmyGM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcollectableBall_Statics::NewProp_MyGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcollectableBall_Statics::NewProp_MyGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcollectableBall_Statics::NewProp_downward_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "collectableBall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AcollectableBall_Statics::NewProp_downward = { "downward", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcollectableBall, downward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AcollectableBall_Statics::NewProp_downward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcollectableBall_Statics::NewProp_downward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcollectableBall_Statics::NewProp_beingHeld_MetaData[] = {
		{ "Category", "collectableBall" },
		{ "Comment", "//variables\n" },
		{ "ModuleRelativePath", "collectableBall.h" },
		{ "ToolTip", "variables" },
	};
#endif
	void Z_Construct_UClass_AcollectableBall_Statics::NewProp_beingHeld_SetBit(void* Obj)
	{
		((AcollectableBall*)Obj)->beingHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcollectableBall_Statics::NewProp_beingHeld = { "beingHeld", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AcollectableBall), &Z_Construct_UClass_AcollectableBall_Statics::NewProp_beingHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcollectableBall_Statics::NewProp_beingHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcollectableBall_Statics::NewProp_beingHeld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AcollectableBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcollectableBall_Statics::NewProp_parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcollectableBall_Statics::NewProp_ballMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcollectableBall_Statics::NewProp_MyGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcollectableBall_Statics::NewProp_downward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcollectableBall_Statics::NewProp_beingHeld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcollectableBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcollectableBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcollectableBall_Statics::ClassParams = {
		&AcollectableBall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AcollectableBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AcollectableBall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AcollectableBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcollectableBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcollectableBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcollectableBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcollectableBall, 2176914979);
	template<> MYPROJECT_API UClass* StaticClass<AcollectableBall>()
	{
		return AcollectableBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcollectableBall(Z_Construct_UClass_AcollectableBall, &AcollectableBall::StaticClass, TEXT("/Script/MyProject"), TEXT("AcollectableBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcollectableBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
