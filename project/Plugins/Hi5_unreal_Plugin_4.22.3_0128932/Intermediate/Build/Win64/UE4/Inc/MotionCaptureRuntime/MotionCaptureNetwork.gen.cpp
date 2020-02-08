// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Private/MotionCaptureNetwork.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionCaptureNetwork() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureNetwork_NoRegister();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureNetwork();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
// End Cross Module References
	void UMotionCaptureNetwork::StaticRegisterNativesUMotionCaptureNetwork()
	{
	}
	UClass* Z_Construct_UClass_UMotionCaptureNetwork_NoRegister()
	{
		return UMotionCaptureNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UMotionCaptureNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionCaptureNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureNetwork_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MotionCapture" },
		{ "IncludePath", "MotionCaptureNetwork.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/MotionCaptureNetwork.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionCaptureNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionCaptureNetwork>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMotionCaptureNetwork_Statics::ClassParams = {
		&UMotionCaptureNetwork::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureNetwork_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionCaptureNetwork()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMotionCaptureNetwork_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionCaptureNetwork, 338115998);
	template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<UMotionCaptureNetwork>()
	{
		return UMotionCaptureNetwork::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionCaptureNetwork(Z_Construct_UClass_UMotionCaptureNetwork, &UMotionCaptureNetwork::StaticClass, TEXT("/Script/MotionCaptureRuntime"), TEXT("UMotionCaptureNetwork"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionCaptureNetwork);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
