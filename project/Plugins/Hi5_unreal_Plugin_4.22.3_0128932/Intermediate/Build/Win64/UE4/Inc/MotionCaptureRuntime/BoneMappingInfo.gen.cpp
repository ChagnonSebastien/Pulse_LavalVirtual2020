// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Public/BoneMappingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneMappingInfo() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EMCBones();
// End Cross Module References
class UScriptStruct* FBoneMappingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOTIONCAPTURERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMappingInfo, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("BoneMappingInfo"), sizeof(FBoneMappingInfo), Get_Z_Construct_UScriptStruct_FBoneMappingInfo_Hash());
	}
	return Singleton;
}
template<> MOTIONCAPTURERUNTIME_API UScriptStruct* StaticStruct<FBoneMappingInfo>()
{
	return FBoneMappingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneMappingInfo(FBoneMappingInfo::StaticStruct, TEXT("/Script/MotionCaptureRuntime"), TEXT("BoneMappingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFBoneMappingInfo
{
	FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFBoneMappingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneMappingInfo")),new UScriptStruct::TCppStructOps<FBoneMappingInfo>);
	}
} ScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFBoneMappingInfo;
	struct Z_Construct_UScriptStruct_FBoneMappingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CTName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CTName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PNID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PNID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneMappingInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMappingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_CTName_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Public/BoneMappingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_CTName = { "CTName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneMappingInfo, CTName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_CTName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_CTName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_PNID_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Public/BoneMappingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_PNID = { "PNID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneMappingInfo, PNID), Z_Construct_UEnum_MotionCaptureRuntime_EMCBones, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_PNID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_PNID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_CTName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::NewProp_PNID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
		nullptr,
		&NewStructOps,
		"BoneMappingInfo",
		sizeof(FBoneMappingInfo),
		alignof(FBoneMappingInfo),
		Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneMappingInfo"), sizeof(FBoneMappingInfo), Get_Z_Construct_UScriptStruct_FBoneMappingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneMappingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_Hash() { return 2339091695U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
