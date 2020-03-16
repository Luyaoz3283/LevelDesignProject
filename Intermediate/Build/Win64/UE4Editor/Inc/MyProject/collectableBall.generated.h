// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYPROJECT_collectableBall_generated_h
#error "collectableBall.generated.h already included, missing '#pragma once' in collectableBall.h"
#endif
#define MYPROJECT_collectableBall_generated_h

#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_SPARSE_DATA
#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAcollectableBall(); \
	friend struct Z_Construct_UClass_AcollectableBall_Statics; \
public: \
	DECLARE_CLASS(AcollectableBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AcollectableBall)


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAcollectableBall(); \
	friend struct Z_Construct_UClass_AcollectableBall_Statics; \
public: \
	DECLARE_CLASS(AcollectableBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AcollectableBall)


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AcollectableBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AcollectableBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AcollectableBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AcollectableBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AcollectableBall(AcollectableBall&&); \
	NO_API AcollectableBall(const AcollectableBall&); \
public:


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AcollectableBall(AcollectableBall&&); \
	NO_API AcollectableBall(const AcollectableBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AcollectableBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AcollectableBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AcollectableBall)


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_9_PROLOG
#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_SPARSE_DATA \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_RPC_WRAPPERS \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_INCLASS \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_SPARSE_DATA \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AcollectableBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_collectableBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
