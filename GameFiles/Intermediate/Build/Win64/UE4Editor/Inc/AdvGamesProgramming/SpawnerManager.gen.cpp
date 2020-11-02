// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/SpawnerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerManager() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_ASpawnerManager_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_ASpawnerManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AAIManagerNM_NoRegister();
// End Cross Module References
	void ASpawnerManager::StaticRegisterNativesASpawnerManager()
	{
	}
	UClass* Z_Construct_UClass_ASpawnerManager_NoRegister()
	{
		return ASpawnerManager::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyOfSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyOfSpawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnerManager.h" },
		{ "ModuleRelativePath", "SpawnerManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerManager_Statics::NewProp_FrequencyOfSpawns_MetaData[] = {
		{ "Category", "SpawnerManager" },
		{ "Comment", "//AI Manager (has to be given from detail panel)\n" },
		{ "ModuleRelativePath", "SpawnerManager.h" },
		{ "ToolTip", "AI Manager (has to be given from detail panel)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnerManager_Statics::NewProp_FrequencyOfSpawns = { "FrequencyOfSpawns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerManager, FrequencyOfSpawns), METADATA_PARAMS(Z_Construct_UClass_ASpawnerManager_Statics::NewProp_FrequencyOfSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerManager_Statics::NewProp_FrequencyOfSpawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerManager_Statics::NewProp_AIManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "SpawnerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnerManager_Statics::NewProp_AIManager = { "AIManager", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerManager, AIManager), Z_Construct_UClass_AAIManagerNM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnerManager_Statics::NewProp_AIManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerManager_Statics::NewProp_AIManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerManager_Statics::NewProp_FrequencyOfSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerManager_Statics::NewProp_AIManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnerManager_Statics::ClassParams = {
		&ASpawnerManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnerManager, 3688215454);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<ASpawnerManager>()
	{
		return ASpawnerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnerManager(Z_Construct_UClass_ASpawnerManager, &ASpawnerManager::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("ASpawnerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
