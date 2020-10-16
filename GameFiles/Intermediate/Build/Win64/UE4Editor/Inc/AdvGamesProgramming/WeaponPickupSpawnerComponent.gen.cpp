// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/WeaponPickupSpawnerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPickupSpawnerComponent() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_UWeaponPickupSpawnerComponent_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_UWeaponPickupSpawnerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_APickup_NoRegister();
// End Cross Module References
	void UWeaponPickupSpawnerComponent::StaticRegisterNativesUWeaponPickupSpawnerComponent()
	{
		UClass* Class = UWeaponPickupSpawnerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSpawn", &UWeaponPickupSpawnerComponent::execStartSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponPickupSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponPickupSpawnerComponent, nullptr, "StartSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponPickupSpawnerComponent_NoRegister()
	{
		return UWeaponPickupSpawnerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PickupClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponPickupSpawnerComponent_StartSpawn, "StartSpawn" }, // 2905588642
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponPickupSpawnerComponent.h" },
		{ "ModuleRelativePath", "WeaponPickupSpawnerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_SpawnOffset_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "WeaponPickupSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_SpawnOffset = { "SpawnOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponPickupSpawnerComponent, SpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_SpawnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_SpawnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_PickupClass_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "WeaponPickupSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_PickupClass = { "PickupClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponPickupSpawnerComponent, PickupClass), Z_Construct_UClass_APickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_PickupClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_PickupClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Search" },
		{ "ModuleRelativePath", "WeaponPickupSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponPickupSpawnerComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_SpawnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_PickupClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponPickupSpawnerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::ClassParams = {
		&UWeaponPickupSpawnerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponPickupSpawnerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponPickupSpawnerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponPickupSpawnerComponent, 537758806);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<UWeaponPickupSpawnerComponent>()
	{
		return UWeaponPickupSpawnerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponPickupSpawnerComponent(Z_Construct_UClass_UWeaponPickupSpawnerComponent, &UWeaponPickupSpawnerComponent::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("UWeaponPickupSpawnerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponPickupSpawnerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
