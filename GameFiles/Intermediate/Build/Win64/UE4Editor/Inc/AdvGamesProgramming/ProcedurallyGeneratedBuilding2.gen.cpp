// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/ProcedurallyGeneratedBuilding2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcedurallyGeneratedBuilding2() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AProcedurallyGeneratedBuilding2_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AProcedurallyGeneratedBuilding2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
// End Cross Module References
	void AProcedurallyGeneratedBuilding2::StaticRegisterNativesAProcedurallyGeneratedBuilding2()
	{
	}
	UClass* Z_Construct_UClass_AProcedurallyGeneratedBuilding2_NoRegister()
	{
		return AProcedurallyGeneratedBuilding2::StaticClass();
	}
	struct Z_Construct_UClass_AProcedurallyGeneratedBuilding2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProcedurallyGeneratedBuilding2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProcedurallyGeneratedBuilding2.h" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProcedurallyGeneratedBuilding2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProcedurallyGeneratedBuilding2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProcedurallyGeneratedBuilding2_Statics::ClassParams = {
		&AProcedurallyGeneratedBuilding2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProcedurallyGeneratedBuilding2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProcedurallyGeneratedBuilding2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProcedurallyGeneratedBuilding2, 2659620719);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AProcedurallyGeneratedBuilding2>()
	{
		return AProcedurallyGeneratedBuilding2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProcedurallyGeneratedBuilding2(Z_Construct_UClass_AProcedurallyGeneratedBuilding2, &AProcedurallyGeneratedBuilding2::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AProcedurallyGeneratedBuilding2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProcedurallyGeneratedBuilding2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
