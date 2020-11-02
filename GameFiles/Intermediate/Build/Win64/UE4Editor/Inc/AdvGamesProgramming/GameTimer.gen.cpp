// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/GameTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameTimer() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AGameTimer_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AGameTimer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
// End Cross Module References
	void AGameTimer::StaticRegisterNativesAGameTimer()
	{
	}
	UClass* Z_Construct_UClass_AGameTimer_NoRegister()
	{
		return AGameTimer::StaticClass();
	}
	struct Z_Construct_UClass_AGameTimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameTimer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameTimer.h" },
		{ "ModuleRelativePath", "GameTimer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameTimer_Statics::NewProp_TimerLength_MetaData[] = {
		{ "Category", "GameTimer" },
		{ "ModuleRelativePath", "GameTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameTimer_Statics::NewProp_TimerLength = { "TimerLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameTimer, TimerLength), METADATA_PARAMS(Z_Construct_UClass_AGameTimer_Statics::NewProp_TimerLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameTimer_Statics::NewProp_TimerLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameTimer_Statics::NewProp_TimerLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameTimer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameTimer_Statics::ClassParams = {
		&AGameTimer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameTimer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameTimer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameTimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameTimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameTimer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameTimer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameTimer, 2403389209);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AGameTimer>()
	{
		return AGameTimer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameTimer(Z_Construct_UClass_AGameTimer, &AGameTimer::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AGameTimer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameTimer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
