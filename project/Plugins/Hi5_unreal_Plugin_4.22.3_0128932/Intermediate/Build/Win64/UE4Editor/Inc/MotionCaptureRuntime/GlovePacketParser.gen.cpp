// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Private/GlovePacketParser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlovePacketParser() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGlovePacketHeader();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
// End Cross Module References
class UScriptStruct* FGlovePacketHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOTIONCAPTURERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FGlovePacketHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlovePacketHeader, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("GlovePacketHeader"), sizeof(FGlovePacketHeader), Get_Z_Construct_UScriptStruct_FGlovePacketHeader_Hash());
	}
	return Singleton;
}
template<> MOTIONCAPTURERUNTIME_API UScriptStruct* StaticStruct<FGlovePacketHeader>()
{
	return FGlovePacketHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlovePacketHeader(FGlovePacketHeader::StaticStruct, TEXT("/Script/MotionCaptureRuntime"), TEXT("GlovePacketHeader"), false, nullptr, nullptr);
static struct FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFGlovePacketHeader
{
	FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFGlovePacketHeader()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GlovePacketHeader")),new UScriptStruct::TCppStructOps<FGlovePacketHeader>);
	}
} ScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFGlovePacketHeader;
	struct Z_Construct_UScriptStruct_FGlovePacketHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DataCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FrameIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithDisp_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_bWithDisp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_bUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_Latency_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TimeStamp_Latency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TimeStamp_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GloveMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GlovePacketParser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlovePacketHeader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_DataCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/GlovePacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_DataCount = { "DataCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlovePacketHeader, DataCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_DataCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_DataCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_FrameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/GlovePacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlovePacketHeader, FrameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_FrameIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_FrameIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bWithDisp_MetaData[] = {
		{ "ModuleRelativePath", "Private/GlovePacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bWithDisp = { "bWithDisp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlovePacketHeader, bWithDisp), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bWithDisp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bWithDisp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/GlovePacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlovePacketHeader, bUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bUpdate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_Latency_MetaData[] = {
		{ "ModuleRelativePath", "Private/GlovePacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_Latency = { "TimeStamp_Latency", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlovePacketHeader, TimeStamp_Latency), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_Latency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_Latency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_time_MetaData[] = {
		{ "ModuleRelativePath", "Private/GlovePacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_time = { "TimeStamp_time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlovePacketHeader, TimeStamp_time), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_GloveMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/GlovePacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_GloveMode = { "GloveMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlovePacketHeader, GloveMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_GloveMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_GloveMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_DataCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_FrameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bWithDisp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_bUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_Latency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_TimeStamp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::NewProp_GloveMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
		nullptr,
		&NewStructOps,
		"GlovePacketHeader",
		sizeof(FGlovePacketHeader),
		alignof(FGlovePacketHeader),
		Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlovePacketHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlovePacketHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlovePacketHeader"), sizeof(FGlovePacketHeader), Get_Z_Construct_UScriptStruct_FGlovePacketHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlovePacketHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlovePacketHeader_Hash() { return 3499405953U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
