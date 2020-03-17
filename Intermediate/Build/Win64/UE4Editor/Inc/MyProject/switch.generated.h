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
#ifdef MYPROJECT_switch_generated_h
#error "switch.generated.h already included, missing '#pragma once' in switch.h"
#endif
#define MYPROJECT_switch_generated_h

#define LevelDesignProject_Source_MyProject_switch_h_24_SPARSE_DATA
#define LevelDesignProject_Source_MyProject_switch_h_24_RPC_WRAPPERS \
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


#define LevelDesignProject_Source_MyProject_switch_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define LevelDesignProject_Source_MyProject_switch_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAswitch(); \
	friend struct Z_Construct_UClass_Aswitch_Statics; \
public: \
	DECLARE_CLASS(Aswitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(Aswitch)


#define LevelDesignProject_Source_MyProject_switch_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAswitch(); \
	friend struct Z_Construct_UClass_Aswitch_Statics; \
public: \
	DECLARE_CLASS(Aswitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(Aswitch)


#define LevelDesignProject_Source_MyProject_switch_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aswitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aswitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aswitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aswitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aswitch(Aswitch&&); \
	NO_API Aswitch(const Aswitch&); \
public:


#define LevelDesignProject_Source_MyProject_switch_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aswitch(Aswitch&&); \
	NO_API Aswitch(const Aswitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aswitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aswitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aswitch)


#define LevelDesignProject_Source_MyProject_switch_h_24_PRIVATE_PROPERTY_OFFSET
#define LevelDesignProject_Source_MyProject_switch_h_21_PROLOG
#define LevelDesignProject_Source_MyProject_switch_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LevelDesignProject_Source_MyProject_switch_h_24_PRIVATE_PROPERTY_OFFSET \
	LevelDesignProject_Source_MyProject_switch_h_24_SPARSE_DATA \
	LevelDesignProject_Source_MyProject_switch_h_24_RPC_WRAPPERS \
	LevelDesignProject_Source_MyProject_switch_h_24_INCLASS \
	LevelDesignProject_Source_MyProject_switch_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LevelDesignProject_Source_MyProject_switch_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LevelDesignProject_Source_MyProject_switch_h_24_PRIVATE_PROPERTY_OFFSET \
	LevelDesignProject_Source_MyProject_switch_h_24_SPARSE_DATA \
	LevelDesignProject_Source_MyProject_switch_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	LevelDesignProject_Source_MyProject_switch_h_24_INCLASS_NO_PURE_DECLS \
	LevelDesignProject_Source_MyProject_switch_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class Aswitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LevelDesignProject_Source_MyProject_switch_h


#define FOREACH_ENUM_SWITCHCOLORLIST(op) \
	op(orangeSwitch) \
	op(blueSwitch) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
