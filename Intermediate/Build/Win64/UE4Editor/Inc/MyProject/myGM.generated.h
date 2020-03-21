// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AregularSwitch;
class AcollectableBall;
class Aswitch;
#ifdef MYPROJECT_myGM_generated_h
#error "myGM.generated.h already included, missing '#pragma once' in myGM.h"
#endif
#define MYPROJECT_myGM_generated_h

#define LevelDesignProject_Source_MyProject_myGM_h_17_SPARSE_DATA
#define LevelDesignProject_Source_MyProject_myGM_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetCurRegSwitch) \
	{ \
		P_GET_OBJECT(AregularSwitch,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setCurRegSwitch(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetCurBall) \
	{ \
		P_GET_OBJECT(AcollectableBall,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setCurBall(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetCurSwitch) \
	{ \
		P_GET_OBJECT(Aswitch,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setCurSwitch(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpressE) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->pressE(); \
		P_NATIVE_END; \
	}


#define LevelDesignProject_Source_MyProject_myGM_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetCurRegSwitch) \
	{ \
		P_GET_OBJECT(AregularSwitch,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setCurRegSwitch(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetCurBall) \
	{ \
		P_GET_OBJECT(AcollectableBall,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setCurBall(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetCurSwitch) \
	{ \
		P_GET_OBJECT(Aswitch,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setCurSwitch(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpressE) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->pressE(); \
		P_NATIVE_END; \
	}


#define LevelDesignProject_Source_MyProject_myGM_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmyGM(); \
	friend struct Z_Construct_UClass_AmyGM_Statics; \
public: \
	DECLARE_CLASS(AmyGM, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AmyGM)


#define LevelDesignProject_Source_MyProject_myGM_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAmyGM(); \
	friend struct Z_Construct_UClass_AmyGM_Statics; \
public: \
	DECLARE_CLASS(AmyGM, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AmyGM)


#define LevelDesignProject_Source_MyProject_myGM_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmyGM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmyGM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmyGM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmyGM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmyGM(AmyGM&&); \
	NO_API AmyGM(const AmyGM&); \
public:


#define LevelDesignProject_Source_MyProject_myGM_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmyGM(AmyGM&&); \
	NO_API AmyGM(const AmyGM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmyGM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmyGM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmyGM)


#define LevelDesignProject_Source_MyProject_myGM_h_17_PRIVATE_PROPERTY_OFFSET
#define LevelDesignProject_Source_MyProject_myGM_h_14_PROLOG
#define LevelDesignProject_Source_MyProject_myGM_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LevelDesignProject_Source_MyProject_myGM_h_17_PRIVATE_PROPERTY_OFFSET \
	LevelDesignProject_Source_MyProject_myGM_h_17_SPARSE_DATA \
	LevelDesignProject_Source_MyProject_myGM_h_17_RPC_WRAPPERS \
	LevelDesignProject_Source_MyProject_myGM_h_17_INCLASS \
	LevelDesignProject_Source_MyProject_myGM_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LevelDesignProject_Source_MyProject_myGM_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LevelDesignProject_Source_MyProject_myGM_h_17_PRIVATE_PROPERTY_OFFSET \
	LevelDesignProject_Source_MyProject_myGM_h_17_SPARSE_DATA \
	LevelDesignProject_Source_MyProject_myGM_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	LevelDesignProject_Source_MyProject_myGM_h_17_INCLASS_NO_PURE_DECLS \
	LevelDesignProject_Source_MyProject_myGM_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AmyGM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LevelDesignProject_Source_MyProject_myGM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
