// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedoor() {}
// Cross Module References
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_doorColorStock();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UClass* Z_Construct_UClass_Adoor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_Adoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UFunction* Z_Construct_UFunction_Adoor_onOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYPROJECT_API UFunction* Z_Construct_UFunction_Adoor_turnOn();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AmyGM_NoRegister();
// End Cross Module References
	static UEnum* doorColorStock_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject_doorColorStock, Z_Construct_UPackage__Script_MyProject(), TEXT("doorColorStock"));
		}
		return Singleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<doorColorStock>()
	{
		return doorColorStock_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_doorColorStock(doorColorStock_StaticEnum, TEXT("/Script/MyProject"), TEXT("doorColorStock"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject_doorColorStock_Hash() { return 2130366264U; }
	UEnum* Z_Construct_UEnum_MyProject_doorColorStock()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("doorColorStock"), 0, Get_Z_Construct_UEnum_MyProject_doorColorStock_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "helper", (int64)helper },
				{ "red", (int64)red },
				{ "yellow", (int64)yellow },
				{ "blue", (int64)blue },
				{ "green", (int64)green },
				{ "grey", (int64)grey },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "blue.Name", "blue" },
				{ "BlueprintType", "true" },
				{ "green.Name", "green" },
				{ "grey.Name", "grey" },
				{ "helper.Name", "helper" },
				{ "ModuleRelativePath", "door.h" },
				{ "red.Name", "red" },
				{ "yellow.Name", "yellow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
				nullptr,
				"doorColorStock",
				"doorColorStock",
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
	void Adoor::StaticRegisterNativesAdoor()
	{
		UClass* Class = Adoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onOverlapBegin", &Adoor::execonOverlapBegin },
			{ "turnOn", &Adoor::execturnOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Adoor_onOverlapBegin_Statics
	{
		struct door_eventonOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(door_eventonOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((door_eventonOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(door_eventonOverlapBegin_Parms), &Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(door_eventonOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(door_eventonOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(door_eventonOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(door_eventonOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//FUNCTIONS\n" },
		{ "ModuleRelativePath", "door.h" },
		{ "ToolTip", "FUNCTIONS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Adoor, nullptr, "onOverlapBegin", nullptr, nullptr, sizeof(door_eventonOverlapBegin_Parms), Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Adoor_onOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Adoor_onOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Adoor_turnOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Adoor_turnOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Adoor_turnOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Adoor, nullptr, "turnOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Adoor_turnOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Adoor_turnOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Adoor_turnOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Adoor_turnOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Adoor_NoRegister()
	{
		return Adoor::StaticClass();
	}
	struct Z_Construct_UClass_Adoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noDisplayMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_noDisplayMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewCaptureCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewCaptureCam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_renderMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_renderMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_renderTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_renderTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_greyMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_greyMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_greenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_greenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_redMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_redMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yellowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_yellowMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_colorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_colorList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_colorList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerClose_MetaData[];
#endif
		static void NewProp_playerClose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playerClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_light;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enterTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enterTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_screen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_screenOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Adoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Adoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Adoor_onOverlapBegin, "onOverlapBegin" }, // 2238018170
		{ &Z_Construct_UFunction_Adoor_turnOn, "turnOn" }, // 3403276319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "door.h" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_noDisplayMat_MetaData[] = {
		{ "Category", "door" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_noDisplayMat = { "noDisplayMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, noDisplayMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_noDisplayMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_noDisplayMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_camParent_MetaData[] = {
		{ "Category", "door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_camParent = { "camParent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, camParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_camParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_camParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_viewCaptureCam_MetaData[] = {
		{ "Category", "door" },
		{ "Comment", "//camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
		{ "ToolTip", "camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_viewCaptureCam = { "viewCaptureCam", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, viewCaptureCam), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_viewCaptureCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_viewCaptureCam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_renderMat_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_renderMat = { "renderMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, renderMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_renderMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_renderMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_renderTex_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_renderTex = { "renderTex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, renderTex), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_renderTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_renderTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_targetDoor_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_targetDoor = { "targetDoor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, targetDoor), Z_Construct_UClass_Adoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_targetDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_targetDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_greyMaterial_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_greyMaterial = { "greyMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, greyMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_greyMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_greyMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_greenMaterial_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_greenMaterial = { "greenMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, greenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_greenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_greenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_redMaterial_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_redMaterial = { "redMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, redMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_redMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_redMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_blueMaterial_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_blueMaterial = { "blueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, blueMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_blueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_blueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_yellowMaterial_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_yellowMaterial = { "yellowMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, yellowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_yellowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_yellowMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_colorList_MetaData[] = {
		{ "Category", "Need To Set" },
		{ "Comment", "//custom variables\n" },
		{ "ModuleRelativePath", "door.h" },
		{ "ToolTip", "custom variables" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_colorList = { "colorList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, colorList), METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_colorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_colorList_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_colorList_Inner = { "colorList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MyProject_doorColorStock, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_playerClose_MetaData[] = {
		{ "Category", "door" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	void Z_Construct_UClass_Adoor_Statics::NewProp_playerClose_SetBit(void* Obj)
	{
		((Adoor*)Obj)->playerClose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_playerClose = { "playerClose", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Adoor), &Z_Construct_UClass_Adoor_Statics::NewProp_playerClose_SetBit, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_playerClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_playerClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_destination_MetaData[] = {
		{ "Category", "door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, destination), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_destination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_light_MetaData[] = {
		{ "Category", "door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, light), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_light_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_parent_MetaData[] = {
		{ "Category", "door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_enterTrigger_MetaData[] = {
		{ "Category", "door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_enterTrigger = { "enterTrigger", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, enterTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_enterTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_enterTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_screen_MetaData[] = {
		{ "Category", "door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_screen = { "screen", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, screen), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_screen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_screen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_screenOffset_MetaData[] = {
		{ "Category", "door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_screenOffset = { "screenOffset", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, screenOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_screenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_screenOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_doorMesh_MetaData[] = {
		{ "Category", "door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_doorMesh = { "doorMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, doorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_doorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_doorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "door" },
		{ "Comment", "//components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "door.h" },
		{ "ToolTip", "components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, offset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_GM_MetaData[] = {
		{ "Category", "door" },
		{ "Comment", "//GM\n" },
		{ "ModuleRelativePath", "door.h" },
		{ "ToolTip", "GM" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_GM = { "GM", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Adoor, GM), Z_Construct_UClass_AmyGM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::NewProp_GM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_GM_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Adoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_noDisplayMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_camParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_viewCaptureCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_renderMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_renderTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_targetDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_greyMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_greenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_redMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_blueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_yellowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_colorList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_colorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_playerClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_light,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_enterTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_screen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_screenOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_doorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_GM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Adoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Adoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Adoor_Statics::ClassParams = {
		&Adoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Adoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Adoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Adoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Adoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Adoor, 4135793227);
	template<> MYPROJECT_API UClass* StaticClass<Adoor>()
	{
		return Adoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Adoor(Z_Construct_UClass_Adoor, &Adoor::StaticClass, TEXT("/Script/MyProject"), TEXT("Adoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Adoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
