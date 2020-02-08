// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Private/PacketParser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketParser() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPNPacketHeader();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
// End Cross Module References
class UScriptStruct* FPNPacketHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOTIONCAPTURERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPNPacketHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPNPacketHeader, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("PNPacketHeader"), sizeof(FPNPacketHeader), Get_Z_Construct_UScriptStruct_FPNPacketHeader_Hash());
	}
	return Singleton;
}
template<> MOTIONCAPTURERUNTIME_API UScriptStruct* StaticStruct<FPNPacketHeader>()
{
	return FPNPacketHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPNPacketHeader(FPNPacketHeader::StaticStruct, TEXT("/Script/MotionCaptureRuntime"), TEXT("PNPacketHeader"), false, nullptr, nullptr);
static struct FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFPNPacketHeader
{
	FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFPNPacketHeader()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PNPacketHeader")),new UScriptStruct::TCppStructOps<FPNPacketHeader>);
	}
} ScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFPNPacketHeader;
	struct Z_Construct_UScriptStruct_FPNPacketHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_HeaderEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reserve2_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Reserve2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reserve1_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Reserve1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reserve_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Reserve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AvatarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AvatarID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WithReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithDisplacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WithDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_DataCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_HeaderBegin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPNPacketHeader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderEnd_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderEnd = { "HeaderEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, HeaderEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve2_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve2 = { "Reserve2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, Reserve2), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve1_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve1 = { "Reserve1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, Reserve1), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve = { "Reserve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, Reserve), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Sequence_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, Sequence), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Sequence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarName_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, AvatarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarID_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarID = { "AvatarID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, AvatarID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithReference_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithReference = { "WithReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, WithReference), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithDisplacement_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithDisplacement = { "WithDisplacement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, WithDisplacement), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithDisplacement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataCount = { "DataCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, DataCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, DataVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderBegin_MetaData[] = {
		{ "ModuleRelativePath", "Private/PacketParser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderBegin = { "HeaderBegin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNPacketHeader, HeaderBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderBegin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderBegin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPNPacketHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Reserve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_AvatarID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_WithDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_DataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNPacketHeader_Statics::NewProp_HeaderBegin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPNPacketHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
		nullptr,
		&NewStructOps,
		"PNPacketHeader",
		sizeof(FPNPacketHeader),
		alignof(FPNPacketHeader),
		Z_Construct_UScriptStruct_FPNPacketHeader_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNPacketHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPNPacketHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPNPacketHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PNPacketHeader"), sizeof(FPNPacketHeader), Get_Z_Construct_UScriptStruct_FPNPacketHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPNPacketHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPNPacketHeader_Hash() { return 1840567145U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
