// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_GameTimer_generated_h
#error "GameTimer.generated.h already included, missing '#pragma once' in GameTimer.h"
#endif
#define ADVGAMESPROGRAMMING_GameTimer_generated_h

#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_RPC_WRAPPERS
#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameTimer(); \
	friend struct Z_Construct_UClass_AGameTimer_Statics; \
public: \
	DECLARE_CLASS(AGameTimer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AGameTimer)


#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameTimer(); \
	friend struct Z_Construct_UClass_AGameTimer_Statics; \
public: \
	DECLARE_CLASS(AGameTimer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AGameTimer)


#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameTimer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameTimer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameTimer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameTimer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameTimer(AGameTimer&&); \
	NO_API AGameTimer(const AGameTimer&); \
public:


#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameTimer(AGameTimer&&); \
	NO_API AGameTimer(const AGameTimer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameTimer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameTimer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameTimer)


#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_9_PROLOG
#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_INCLASS \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_GameTimer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AGameTimer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_GameTimer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
