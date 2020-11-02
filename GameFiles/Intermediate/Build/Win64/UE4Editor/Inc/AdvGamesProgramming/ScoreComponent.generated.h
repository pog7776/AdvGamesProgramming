// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_ScoreComponent_generated_h
#error "ScoreComponent.generated.h already included, missing '#pragma once' in ScoreComponent.h"
#endif
#define ADVGAMESPROGRAMMING_ScoreComponent_generated_h

#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScore(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractFromScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubtractFromScore(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToScore(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScore(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractFromScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubtractFromScore(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToScore(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScoreComponent(); \
	friend struct Z_Construct_UClass_UScoreComponent_Statics; \
public: \
	DECLARE_CLASS(UScoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(UScoreComponent)


#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUScoreComponent(); \
	friend struct Z_Construct_UClass_UScoreComponent_Statics; \
public: \
	DECLARE_CLASS(UScoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(UScoreComponent)


#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreComponent(UScoreComponent&&); \
	NO_API UScoreComponent(const UScoreComponent&); \
public:


#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScoreComponent(UScoreComponent&&); \
	NO_API UScoreComponent(const UScoreComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScoreComponent)


#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_11_PROLOG
#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_INCLASS \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_ScoreComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class UScoreComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_ScoreComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
