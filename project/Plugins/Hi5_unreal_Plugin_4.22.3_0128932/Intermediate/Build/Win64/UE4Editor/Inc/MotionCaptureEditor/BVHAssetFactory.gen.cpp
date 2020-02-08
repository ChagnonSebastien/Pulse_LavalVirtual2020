// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureEditor/Private/BVHAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBVHAssetFactory() {}
// Cross Module References
	MOTIONCAPTUREEDITOR_API UClass* Z_Construct_UClass_UBVHAssetFactory_NoRegister();
	MOTIONCAPTUREEDITOR_API UClass* Z_Construct_UClass_UBVHAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureEditor();
// End Cross Module References
	void UBVHAssetFactory::StaticRegisterNativesUBVHAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UBVHAssetFactory_NoRegister()
	{
		return UBVHAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBVHAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBVHAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MotionCapture" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BVHAssetFactory.h" },
		{ "ModuleRelativePath", "Private/BVHAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBVHAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBVHAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBVHAssetFactory_Statics::ClassParams = {
		&UBVHAssetFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBVHAssetFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBVHAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBVHAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBVHAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBVHAssetFactory, 2674017628);
	template<> MOTIONCAPTUREEDITOR_API UClass* StaticClass<UBVHAssetFactory>()
	{
		return UBVHAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBVHAssetFactory(Z_Construct_UClass_UBVHAssetFactory, &UBVHAssetFactory::StaticClass, TEXT("/Script/MotionCaptureEditor"), TEXT("UBVHAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBVHAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
