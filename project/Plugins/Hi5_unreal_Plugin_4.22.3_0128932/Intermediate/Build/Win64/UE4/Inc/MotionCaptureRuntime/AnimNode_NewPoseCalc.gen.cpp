// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Public/AnimNode_NewPoseCalc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_NewPoseCalc() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo();
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPNMultiMap();
// End Cross Module References
class UScriptStruct* FAnimationNode_NewPoseCalc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOTIONCAPTURERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("AnimationNode_NewPoseCalc"), sizeof(FAnimationNode_NewPoseCalc), Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Hash());
	}
	return Singleton;
}
template<> MOTIONCAPTURERUNTIME_API UScriptStruct* StaticStruct<FAnimationNode_NewPoseCalc>()
{
	return FAnimationNode_NewPoseCalc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationNode_NewPoseCalc(FAnimationNode_NewPoseCalc::StaticStruct, TEXT("/Script/MotionCaptureRuntime"), TEXT("AnimationNode_NewPoseCalc"), false, nullptr, nullptr);
static struct FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc
{
	FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationNode_NewPoseCalc")),new UScriptStruct::TCppStructOps<FAnimationNode_NewPoseCalc>);
	}
} ScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc;
	struct Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldRotations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldRotations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHaveInit_MetaData[];
#endif
		static void NewProp_bHaveInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHaveInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_Copy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneMap_Copy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap_Copy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName2BoneMapIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneName2BoneMapIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName2BoneMapIndex_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneName2BoneMapIndex_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneID2NameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneID2NameMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonNamePrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkeletonNamePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationNode_NewPoseCalc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldPositions_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldPositions = { "WorldPositions", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, WorldPositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldPositions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldPositions_Inner = { "WorldPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldRotations_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldRotations = { "WorldRotations", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, WorldRotations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldRotations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldRotations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldRotations_Inner = { "WorldRotations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_bHaveInit_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_bHaveInit_SetBit(void* Obj)
	{
		((FAnimationNode_NewPoseCalc*)Obj)->bHaveInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_bHaveInit = { "bHaveInit", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimationNode_NewPoseCalc), &Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_bHaveInit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_bHaveInit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_bHaveInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Copy_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Copy = { "BoneMap_Copy", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, BoneMap_Copy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Copy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Copy_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Copy_Inner = { "BoneMap_Copy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneMappingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex = { "BoneName2BoneMapIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, BoneName2BoneMapIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex_Key_KeyProp = { "BoneName2BoneMapIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex_ValueProp = { "BoneName2BoneMapIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneID2NameMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneID2NameMap = { "BoneID2NameMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, BoneID2NameMap), Z_Construct_UScriptStruct_FPNMultiMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneID2NameMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneID2NameMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_SkeletonNamePrefix_MetaData[] = {
		{ "Category", "SkeletonsRetargeting" },
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_SkeletonNamePrefix = { "SkeletonNamePrefix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, SkeletonNamePrefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_SkeletonNamePrefix_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_SkeletonNamePrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Category", "SkeletonsRetargeting" },
		{ "ModuleRelativePath", "Public/AnimNode_NewPoseCalc.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationNode_NewPoseCalc, BoneMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Inner = { "BoneMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneMappingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_WorldRotations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_bHaveInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Copy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Copy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneName2BoneMapIndex_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneID2NameMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_SkeletonNamePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::NewProp_BoneMap_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimationNode_NewPoseCalc",
		sizeof(FAnimationNode_NewPoseCalc),
		alignof(FAnimationNode_NewPoseCalc),
		Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationNode_NewPoseCalc"), sizeof(FAnimationNode_NewPoseCalc), Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_Hash() { return 1043957928U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
