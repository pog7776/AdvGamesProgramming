// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/ProcedurallyGeneratedBuilding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcedurallyGeneratedBuilding() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AProcedurallyGeneratedBuilding_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AProcedurallyGeneratedBuilding();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static FName NAME_AProcedurallyGeneratedBuilding_Init = FName(TEXT("Init"));
	void AProcedurallyGeneratedBuilding::Init(AActor* target, float x, float y, float z)
	{
		ProcedurallyGeneratedBuilding_eventInit_Parms Parms;
		Parms.target=target;
		Parms.x=x;
		Parms.y=y;
		Parms.z=z;
		ProcessEvent(FindFunctionChecked(NAME_AProcedurallyGeneratedBuilding_Init),&Parms);
	}
	void AProcedurallyGeneratedBuilding::StaticRegisterNativesAProcedurallyGeneratedBuilding()
	{
	}
	struct Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProcedurallyGeneratedBuilding_eventInit_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProcedurallyGeneratedBuilding_eventInit_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProcedurallyGeneratedBuilding_eventInit_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProcedurallyGeneratedBuilding_eventInit_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "Comment", "//To prevent height being 0\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "To prevent height being 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProcedurallyGeneratedBuilding, nullptr, "Init", nullptr, nullptr, sizeof(ProcedurallyGeneratedBuilding_eventInit_Parms), Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProcedurallyGeneratedBuilding_NoRegister()
	{
		return AProcedurallyGeneratedBuilding::StaticClass();
	}
	struct Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponSpawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightGroundLift_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HeightGroundLift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCGBuilding_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PCGBuilding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandRange_DivisionFactorY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandRange_DivisionFactorY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandRange_DivisionFactorX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandRange_DivisionFactorX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerlinRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerlinRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerlinScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerlinScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandSpawnCity_MetaData[];
#endif
		static void NewProp_bRandSpawnCity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandSpawnCity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DivisionFactorY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DivisionFactorY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DivisionFactorX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DivisionFactorX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnCity_MetaData[];
#endif
		static void NewProp_bSpawnCity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnCity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeReferenceTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SizeReferenceTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProcedurallyGeneratedBuilding_Init, "Init" }, // 3694688890
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_WeaponSpawner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WeaponSpawner" },
		{ "Comment", "//it is blueprint implementable event since it morphs static mesh's size and its easier on blueprint side)\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "it is blueprint implementable event since it morphs static mesh's size and its easier on blueprint side)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_WeaponSpawner = { "WeaponSpawner", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, WeaponSpawner), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_WeaponSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_WeaponSpawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_HeightGroundLift_MetaData[] = {
		{ "Category", "Building" },
		{ "Comment", "//actual building\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "actual building" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_HeightGroundLift = { "HeightGroundLift", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, HeightGroundLift), METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_HeightGroundLift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_HeightGroundLift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PCGBuilding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Building" },
		{ "Comment", "//to give random range (y) from detail panel. FVector2D is used for better looking\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "to give random range (y) from detail panel. FVector2D is used for better looking" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PCGBuilding = { "PCGBuilding", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, PCGBuilding), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PCGBuilding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PCGBuilding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorY_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "//to give random range (x) from detail panel. FVector2D is used for better looking\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "to give random range (x) from detail panel. FVector2D is used for better looking" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorY = { "RandRange_DivisionFactorY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, RandRange_DivisionFactorY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorX_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "//perlin roughness\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "perlin roughness" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorX = { "RandRange_DivisionFactorX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, RandRange_DivisionFactorX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinRoughness_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "//perlin scale\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "perlin scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinRoughness = { "PerlinRoughness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, PerlinRoughness), METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinScale_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "//to trigger spawning city with random number\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "to trigger spawning city with random number" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinScale = { "PerlinScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, PerlinScale), METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bRandSpawnCity_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "//number of division along y axis in the city\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "number of division along y axis in the city" },
	};
#endif
	void Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bRandSpawnCity_SetBit(void* Obj)
	{
		((AProcedurallyGeneratedBuilding*)Obj)->bRandSpawnCity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bRandSpawnCity = { "bRandSpawnCity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProcedurallyGeneratedBuilding), &Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bRandSpawnCity_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bRandSpawnCity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bRandSpawnCity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorY_MetaData[] = {
		{ "Category", "City" },
		{ "Comment", "//number of division along x axis in the city\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "number of division along x axis in the city" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorY = { "DivisionFactorY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, DivisionFactorY), METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorX_MetaData[] = {
		{ "Category", "City" },
		{ "Comment", "//to trigger spawning city with given number\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "to trigger spawning city with given number" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorX = { "DivisionFactorX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, DivisionFactorX), METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bSpawnCity_MetaData[] = {
		{ "Category", "City" },
		{ "Comment", "//size of the city\n" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
		{ "ToolTip", "size of the city" },
	};
#endif
	void Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bSpawnCity_SetBit(void* Obj)
	{
		((AProcedurallyGeneratedBuilding*)Obj)->bSpawnCity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bSpawnCity = { "bSpawnCity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProcedurallyGeneratedBuilding), &Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bSpawnCity_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bSpawnCity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bSpawnCity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_SizeReferenceTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "City" },
		{ "ModuleRelativePath", "ProcedurallyGeneratedBuilding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_SizeReferenceTarget = { "SizeReferenceTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcedurallyGeneratedBuilding, SizeReferenceTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_SizeReferenceTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_SizeReferenceTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_WeaponSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_HeightGroundLift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PCGBuilding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_RandRange_DivisionFactorX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_PerlinScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bRandSpawnCity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_DivisionFactorX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_bSpawnCity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::NewProp_SizeReferenceTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProcedurallyGeneratedBuilding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::ClassParams = {
		&AProcedurallyGeneratedBuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProcedurallyGeneratedBuilding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProcedurallyGeneratedBuilding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProcedurallyGeneratedBuilding, 4268569801);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AProcedurallyGeneratedBuilding>()
	{
		return AProcedurallyGeneratedBuilding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProcedurallyGeneratedBuilding(Z_Construct_UClass_AProcedurallyGeneratedBuilding, &AProcedurallyGeneratedBuilding::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AProcedurallyGeneratedBuilding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProcedurallyGeneratedBuilding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif