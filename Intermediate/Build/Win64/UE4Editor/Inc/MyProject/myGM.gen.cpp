// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/myGM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemyGM() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AmyGM_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AmyGM();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AmyGM_pressE();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AmyGM_setCurBall();
	MYPROJECT_API UClass* Z_Construct_UClass_AcollectableBall_NoRegister();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AmyGM_setCurRegSwitch();
	MYPROJECT_API UClass* Z_Construct_UClass_AregularSwitch_NoRegister();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AmyGM_setCurSwitch();
	MYPROJECT_API UClass* Z_Construct_UClass_Aswitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AmyGM::StaticRegisterNativesAmyGM()
	{
		UClass* Class = AmyGM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "pressE", &AmyGM::execpressE },
			{ "setCurBall", &AmyGM::execsetCurBall },
			{ "setCurRegSwitch", &AmyGM::execsetCurRegSwitch },
			{ "setCurSwitch", &AmyGM::execsetCurSwitch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AmyGM_pressE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AmyGM_pressE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "myGM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AmyGM_pressE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmyGM, nullptr, "pressE", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AmyGM_pressE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AmyGM_pressE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AmyGM_pressE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AmyGM_pressE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AmyGM_setCurBall_Statics
	{
		struct myGM_eventsetCurBall_Parms
		{
			AcollectableBall* input;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AmyGM_setCurBall_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(myGM_eventsetCurBall_Parms, input), Z_Construct_UClass_AcollectableBall_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AmyGM_setCurBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AmyGM_setCurBall_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AmyGM_setCurBall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "myGM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AmyGM_setCurBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmyGM, nullptr, "setCurBall", nullptr, nullptr, sizeof(myGM_eventsetCurBall_Parms), Z_Construct_UFunction_AmyGM_setCurBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AmyGM_setCurBall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AmyGM_setCurBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AmyGM_setCurBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AmyGM_setCurBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AmyGM_setCurBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics
	{
		struct myGM_eventsetCurRegSwitch_Parms
		{
			AregularSwitch* input;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(myGM_eventsetCurRegSwitch_Parms, input), Z_Construct_UClass_AregularSwitch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "myGM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmyGM, nullptr, "setCurRegSwitch", nullptr, nullptr, sizeof(myGM_eventsetCurRegSwitch_Parms), Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AmyGM_setCurRegSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AmyGM_setCurRegSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AmyGM_setCurSwitch_Statics
	{
		struct myGM_eventsetCurSwitch_Parms
		{
			Aswitch* input;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(myGM_eventsetCurSwitch_Parms, input), Z_Construct_UClass_Aswitch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//functions\n" },
		{ "ModuleRelativePath", "myGM.h" },
		{ "ToolTip", "functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmyGM, nullptr, "setCurSwitch", nullptr, nullptr, sizeof(myGM_eventsetCurSwitch_Parms), Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AmyGM_setCurSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AmyGM_setCurSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AmyGM_NoRegister()
	{
		return AmyGM::StaticClass();
	}
	struct Z_Construct_UClass_AmyGM_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curBall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curBall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmyGM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AmyGM_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AmyGM_pressE, "pressE" }, // 2592489363
		{ &Z_Construct_UFunction_AmyGM_setCurBall, "setCurBall" }, // 4076041892
		{ &Z_Construct_UFunction_AmyGM_setCurRegSwitch, "setCurRegSwitch" }, // 2715375015
		{ &Z_Construct_UFunction_AmyGM_setCurSwitch, "setCurSwitch" }, // 872310302
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmyGM_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "myGM.h" },
		{ "ModuleRelativePath", "myGM.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmyGM_Statics::NewProp_curBall_MetaData[] = {
		{ "Category", "myGM" },
		{ "ModuleRelativePath", "myGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyGM_Statics::NewProp_curBall = { "curBall", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmyGM, curBall), Z_Construct_UClass_AcollectableBall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AmyGM_Statics::NewProp_curBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AmyGM_Statics::NewProp_curBall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmyGM_Statics::NewProp_parent_MetaData[] = {
		{ "Category", "myGM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "myGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyGM_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmyGM, parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AmyGM_Statics::NewProp_parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AmyGM_Statics::NewProp_parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmyGM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyGM_Statics::NewProp_curBall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyGM_Statics::NewProp_parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmyGM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmyGM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AmyGM_Statics::ClassParams = {
		&AmyGM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AmyGM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AmyGM_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AmyGM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AmyGM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmyGM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AmyGM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AmyGM, 3567991718);
	template<> MYPROJECT_API UClass* StaticClass<AmyGM>()
	{
		return AmyGM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AmyGM(Z_Construct_UClass_AmyGM, &AmyGM::StaticClass, TEXT("/Script/MyProject"), TEXT("AmyGM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmyGM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
