// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_PlayerHud_generated_h
#error "PlayerHud.generated.h already included, missing '#pragma once' in PlayerHud.h"
#endif
#define ADVGAMESPROGRAMMING_PlayerHud_generated_h

#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_RPC_WRAPPERS
#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerHud(); \
	friend struct Z_Construct_UClass_APlayerHud_Statics; \
public: \
	DECLARE_CLASS(APlayerHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(APlayerHud)


#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerHud(); \
	friend struct Z_Construct_UClass_APlayerHud_Statics; \
public: \
	DECLARE_CLASS(APlayerHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(APlayerHud)


#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHud(APlayerHud&&); \
	NO_API APlayerHud(const APlayerHud&); \
public:


#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHud(APlayerHud&&); \
	NO_API APlayerHud(const APlayerHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHud)


#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_12_PROLOG
#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_INCLASS \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_PlayerHud_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class APlayerHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_PlayerHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
