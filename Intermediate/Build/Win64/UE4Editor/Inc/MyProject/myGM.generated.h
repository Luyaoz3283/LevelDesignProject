// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_myGM_generated_h
#error "myGM.generated.h already included, missing '#pragma once' in myGM.h"
#endif
#define MYPROJECT_myGM_generated_h

#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_SPARSE_DATA
#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execpress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->press(); \
		P_NATIVE_END; \
	}


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execpress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->press(); \
		P_NATIVE_END; \
	}


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmyGM(); \
	friend struct Z_Construct_UClass_AmyGM_Statics; \
public: \
	DECLARE_CLASS(AmyGM, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AmyGM)


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAmyGM(); \
	friend struct Z_Construct_UClass_AmyGM_Statics; \
public: \
	DECLARE_CLASS(AmyGM, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AmyGM)


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_STANDARD_CONSTRUCTORS \
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


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmyGM(AmyGM&&); \
	NO_API AmyGM(const AmyGM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmyGM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmyGM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmyGM)


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_13_PROLOG
#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_SPARSE_DATA \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_RPC_WRAPPERS \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_INCLASS \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_SPARSE_DATA \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AmyGM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_b00719e28d0a53130932f5343d92545a9a4cd445_Source_MyProject_myGM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
