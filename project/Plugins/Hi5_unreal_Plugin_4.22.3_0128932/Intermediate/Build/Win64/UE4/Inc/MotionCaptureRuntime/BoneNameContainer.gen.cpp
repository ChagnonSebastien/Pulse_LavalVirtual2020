// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Public/BoneNameContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneNameContainer() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPNMultiMap();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EMCBones();
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNamesContainer();
// End Cross Module References
class UScriptStruct* FPNMultiMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOTIONCAPTURERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPNMultiMap, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("PNMultiMap"), sizeof(FPNMultiMap), Get_Z_Construct_UScriptStruct_FPNMultiMap_Hash());
	}
	return Singleton;
}
template<> MOTIONCAPTURERUNTIME_API UScriptStruct* StaticStruct<FPNMultiMap>()
{
	return FPNMultiMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPNMultiMap(FPNMultiMap::StaticStruct, TEXT("/Script/MotionCaptureRuntime"), TEXT("PNMultiMap"), false, nullptr, nullptr);
static struct FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFPNMultiMap
{
	FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFPNMultiMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PNMultiMap")),new UScriptStruct::TCppStructOps<FPNMultiMap>);
	}
} ScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFPNMultiMap;
	struct Z_Construct_UScriptStruct_FPNMultiMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InterMap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNMultiMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneNameContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPNMultiMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneNameContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap = { "InterMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPNMultiMap, InterMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap_Key_KeyProp = { "InterMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MotionCaptureRuntime_EMCBones, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap_ValueProp = { "InterMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNamesContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPNMultiMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPNMultiMap_Statics::NewProp_InterMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPNMultiMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
		nullptr,
		&NewStructOps,
		"PNMultiMap",
		sizeof(FPNMultiMap),
		alignof(FPNMultiMap),
		Z_Construct_UScriptStruct_FPNMultiMap_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPNMultiMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPNMultiMap_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPNMultiMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPNMultiMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PNMultiMap"), sizeof(FPNMultiMap), Get_Z_Construct_UScriptStruct_FPNMultiMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPNMultiMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_Hash() { return 1142315938U; }
class UScriptStruct* FNamesContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOTIONCAPTURERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamesContainer, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("NamesContainer"), sizeof(FNamesContainer), Get_Z_Construct_UScriptStruct_FNamesContainer_Hash());
	}
	return Singleton;
}
template<> MOTIONCAPTURERUNTIME_API UScriptStruct* StaticStruct<FNamesContainer>()
{
	return FNamesContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamesContainer(FNamesContainer::StaticStruct, TEXT("/Script/MotionCaptureRuntime"), TEXT("NamesContainer"), false, nullptr, nullptr);
static struct FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFNamesContainer
{
	FScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFNamesContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamesContainer")),new UScriptStruct::TCppStructOps<FNamesContainer>);
	}
} ScriptStruct_MotionCaptureRuntime_StaticRegisterNativesFNamesContainer;
	struct Z_Construct_UScriptStruct_FNamesContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamesContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneNameContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamesContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamesContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamesContainer_Statics::NewProp_Names_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneNameContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamesContainer_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamesContainer, Names), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamesContainer_Statics::NewProp_Names_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamesContainer_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamesContainer_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamesContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamesContainer_Statics::NewProp_Names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamesContainer_Statics::NewProp_Names_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamesContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
		nullptr,
		&NewStructOps,
		"NamesContainer",
		sizeof(FNamesContainer),
		alignof(FNamesContainer),
		Z_Construct_UScriptStruct_FNamesContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNamesContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamesContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamesContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamesContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamesContainer"), sizeof(FNamesContainer), Get_Z_Construct_UScriptStruct_FNamesContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamesContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_Hash() { return 745291893U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
