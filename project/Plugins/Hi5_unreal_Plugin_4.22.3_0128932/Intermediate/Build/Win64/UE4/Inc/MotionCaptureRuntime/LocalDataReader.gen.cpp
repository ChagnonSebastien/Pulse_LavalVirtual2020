// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Private/LocalDataReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalDataReader() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_ULocalDataReader_NoRegister();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_ULocalDataReader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
// End Cross Module References
	void ULocalDataReader::StaticRegisterNativesULocalDataReader()
	{
	}
	UClass* Z_Construct_UClass_ULocalDataReader_NoRegister()
	{
		return ULocalDataReader::StaticClass();
	}
	struct Z_Construct_UClass_ULocalDataReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalDataReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalDataReader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocalDataReader.h" },
		{ "ModuleRelativePath", "Private/LocalDataReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalDataReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalDataReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalDataReader_Statics::ClassParams = {
		&ULocalDataReader::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalDataReader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalDataReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalDataReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalDataReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalDataReader, 990201212);
	template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<ULocalDataReader>()
	{
		return ULocalDataReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalDataReader(Z_Construct_UClass_ULocalDataReader, &ULocalDataReader::StaticClass, TEXT("/Script/MotionCaptureRuntime"), TEXT("ULocalDataReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalDataReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
