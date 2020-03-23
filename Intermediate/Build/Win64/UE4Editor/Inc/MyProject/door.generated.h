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
#ifdef MYPROJECT_door_generated_h
#error "door.generated.h already included, missing '#pragma once' in door.h"
#endif
#define MYPROJECT_door_generated_h

#define LevelDesignProject_Source_MyProject_door_h_28_SPARSE_DATA
#define LevelDesignProject_Source_MyProject_door_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execupdateScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->updateScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execturnOn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->turnOn(); \
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


#define LevelDesignProject_Source_MyProject_door_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execupdateScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->updateScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execturnOn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->turnOn(); \
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


#define LevelDesignProject_Source_MyProject_door_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAdoor(); \
	friend struct Z_Construct_UClass_Adoor_Statics; \
public: \
	DECLARE_CLASS(Adoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(Adoor)


#define LevelDesignProject_Source_MyProject_door_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAdoor(); \
	friend struct Z_Construct_UClass_Adoor_Statics; \
public: \
	DECLARE_CLASS(Adoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(Adoor)


#define LevelDesignProject_Source_MyProject_door_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Adoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Adoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Adoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Adoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Adoor(Adoor&&); \
	NO_API Adoor(const Adoor&); \
public:


#define LevelDesignProject_Source_MyProject_door_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Adoor(Adoor&&); \
	NO_API Adoor(const Adoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Adoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Adoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Adoor)


#define LevelDesignProject_Source_MyProject_door_h_28_PRIVATE_PROPERTY_OFFSET
#define LevelDesignProject_Source_MyProject_door_h_25_PROLOG
#define LevelDesignProject_Source_MyProject_door_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LevelDesignProject_Source_MyProject_door_h_28_PRIVATE_PROPERTY_OFFSET \
	LevelDesignProject_Source_MyProject_door_h_28_SPARSE_DATA \
	LevelDesignProject_Source_MyProject_door_h_28_RPC_WRAPPERS \
	LevelDesignProject_Source_MyProject_door_h_28_INCLASS \
	LevelDesignProject_Source_MyProject_door_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LevelDesignProject_Source_MyProject_door_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LevelDesignProject_Source_MyProject_door_h_28_PRIVATE_PROPERTY_OFFSET \
	LevelDesignProject_Source_MyProject_door_h_28_SPARSE_DATA \
	LevelDesignProject_Source_MyProject_door_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	LevelDesignProject_Source_MyProject_door_h_28_INCLASS_NO_PURE_DECLS \
	LevelDesignProject_Source_MyProject_door_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class Adoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LevelDesignProject_Source_MyProject_door_h


#define FOREACH_ENUM_DOORCOLORSTOCK(op) \
	op(helper) \
	op(red) \
	op(yellow) \
	op(blue) \
	op(green) \
	op(grey) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
