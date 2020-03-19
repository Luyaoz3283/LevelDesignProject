// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/switch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeswitch() {}
// Cross Module References
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_connectTypeList();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_switchColorList();
	MYPROJECT_API UClass* Z_Construct_UClass_Aswitch_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_Aswitch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UFunction* Z_Construct_UFunction_Aswitch_onOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYPROJECT_API UFunction* Z_Construct_UFunction_Aswitch_OnOverlapEnd();
	MYPROJECT_API UClass* Z_Construct_UClass_Adoor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MYPROJECT_API UClass* Z_Construct_UClass_AcollectableBall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AmyGM_NoRegister();
// End Cross Module References
	static UEnum* connectTypeList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject_connectTypeList, Z_Construct_UPackage__Script_MyProject(), TEXT("connectTypeList"));
		}
		return Singleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<connectTypeList>()
	{
		return connectTypeList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_connectTypeList(connectTypeList_StaticEnum, TEXT("/Script/MyProject"), TEXT("connectTypeList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject_connectTypeList_Hash() { return 4274924144U; }
	UEnum* Z_Construct_UEnum_MyProject_connectTypeList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("connectTypeList"), 0, Get_Z_Construct_UEnum_MyProject_connectTypeList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "plateOnly", (int64)plateOnly },
				{ "switchOnly", (int64)switchOnly },
				{ "Both", (int64)Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Both.Name", "Both" },
				{ "ModuleRelativePath", "switch.h" },
				{ "plateOnly.Name", "plateOnly" },
				{ "switchOnly.Name", "switchOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
				nullptr,
				"connectTypeList",
				"connectTypeList",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* switchColorList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject_switchColorList, Z_Construct_UPackage__Script_MyProject(), TEXT("switchColorList"));
		}
		return Singleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<switchColorList>()
	{
		return switchColorList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_switchColorList(switchColorList_StaticEnum, TEXT("/Script/MyProject"), TEXT("switchColorList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject_switchColorList_Hash() { return 1670451539U; }
	UEnum* Z_Construct_UEnum_MyProject_switchColorList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("switchColorList"), 0, Get_Z_Construct_UEnum_MyProject_switchColorList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "orangeSwitch", (int64)orangeSwitch },
				{ "blueSwitch", (int64)blueSwitch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "blueSwitch.Name", "blueSwitch" },
				{ "ModuleRelativePath", "switch.h" },
				{ "orangeSwitch.Name", "orangeSwitch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
				nullptr,
				"switchColorList",
				"switchColorList",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void Aswitch::StaticRegisterNativesAswitch()
	{
		UClass* Class = Aswitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onOverlapBegin", &Aswitch::execonOverlapBegin },
			{ "OnOverlapEnd", &Aswitch::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics
	{
		struct switch_eventonOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventonOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((switch_eventonOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(switch_eventonOverlapBegin_Parms), &Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventonOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventonOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventonOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventonOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//when press the switch\n" },
		{ "ModuleRelativePath", "switch.h" },
		{ "ToolTip", "when press the switch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aswitch, nullptr, "onOverlapBegin", nullptr, nullptr, sizeof(switch_eventonOverlapBegin_Parms), Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aswitch_onOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aswitch_onOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics
	{
		struct switch_eventOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(switch_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aswitch, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(switch_eventOnOverlapEnd_Parms), Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aswitch_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aswitch_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aswitch_NoRegister()
	{
		return Aswitch::StaticClass();
	}
	struct Z_Construct_UClass_Aswitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_connectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_controlList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controlList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lightColorOrange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lightColorOrange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lightColorBlue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lightColorBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwitchColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ballIfHasPlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ballIfHasPlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plateTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_plateTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plateMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_plateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plateLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_plateLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plateOffSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_plateOffSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyGM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aswitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aswitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aswitch_onOverlapBegin, "onOverlapBegin" }, // 762932336
		{ &Z_Construct_UFunction_Aswitch_OnOverlapEnd, "OnOverlapEnd" }, // 1137514501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "switch.h" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_connectType_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_connectType = { "connectType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, connectType), Z_Construct_UEnum_MyProject_connectTypeList, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_connectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_connectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_controlList_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_controlList = { "controlList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, controlList), METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_controlList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_controlList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_controlList_Inner = { "controlList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_Adoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorOrange_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorOrange = { "lightColorOrange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, lightColorOrange), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorOrange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorOrange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorBlue_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorBlue = { "lightColorBlue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, lightColorBlue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_SwitchColor_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_SwitchColor = { "SwitchColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, SwitchColor), Z_Construct_UEnum_MyProject_switchColorList, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_SwitchColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_SwitchColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_ballIfHasPlate_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "Comment", "//variables\n" },
		{ "ModuleRelativePath", "switch.h" },
		{ "ToolTip", "variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_ballIfHasPlate = { "ballIfHasPlate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, ballIfHasPlate), Z_Construct_UClass_AcollectableBall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_ballIfHasPlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_ballIfHasPlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_plateTrigger_MetaData[] = {
		{ "Category", "switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_plateTrigger = { "plateTrigger", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, plateTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_plateTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_plateTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_plateMesh_MetaData[] = {
		{ "Category", "switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_plateMesh = { "plateMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, plateMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_plateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_plateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_ButtonLight_MetaData[] = {
		{ "Category", "switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_ButtonLight = { "ButtonLight", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, ButtonLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_ButtonLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_ButtonLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_plateLight_MetaData[] = {
		{ "Category", "switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_plateLight = { "plateLight", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, plateLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_plateLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_plateLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_plateOffSet_MetaData[] = {
		{ "Category", "switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_plateOffSet = { "plateOffSet", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, plateOffSet), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_plateOffSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_plateOffSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_parent_MetaData[] = {
		{ "Category", "switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_buttonTrigger_MetaData[] = {
		{ "Category", "switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_buttonTrigger = { "buttonTrigger", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, buttonTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_buttonTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_buttonTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_buttonMesh_MetaData[] = {
		{ "Category", "switch" },
		{ "Comment", "//components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "switch.h" },
		{ "ToolTip", "components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_buttonMesh = { "buttonMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, buttonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_buttonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_buttonMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aswitch_Statics::NewProp_MyGM_MetaData[] = {
		{ "Category", "switch" },
		{ "Comment", "//GM\n" },
		{ "ModuleRelativePath", "switch.h" },
		{ "ToolTip", "GM" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aswitch_Statics::NewProp_MyGM = { "MyGM", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aswitch, MyGM), Z_Construct_UClass_AmyGM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::NewProp_MyGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::NewProp_MyGM_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aswitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_connectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_controlList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_controlList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorOrange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_lightColorBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_SwitchColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_ballIfHasPlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_plateTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_plateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_ButtonLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_plateLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_plateOffSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_buttonTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_buttonMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aswitch_Statics::NewProp_MyGM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aswitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aswitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aswitch_Statics::ClassParams = {
		&Aswitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aswitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aswitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aswitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aswitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aswitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aswitch, 242122362);
	template<> MYPROJECT_API UClass* StaticClass<Aswitch>()
	{
		return Aswitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aswitch(Z_Construct_UClass_Aswitch, &Aswitch::StaticClass, TEXT("/Script/MyProject"), TEXT("Aswitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aswitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
