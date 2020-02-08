// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Private/MotionCaptureManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionCaptureManager() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_AMotionCaptureManager_NoRegister();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_AMotionCaptureManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureNetwork_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AMotionCaptureManager::StaticRegisterNativesAMotionCaptureManager()
	{
	}
	UClass* Z_Construct_UClass_AMotionCaptureManager_NoRegister()
	{
		return AMotionCaptureManager::StaticClass();
	}
	struct Z_Construct_UClass_AMotionCaptureManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Network;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotionCaptureManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureManager_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MotionCapture" },
		{ "IncludePath", "MotionCaptureManager.h" },
		{ "ModuleRelativePath", "Private/MotionCaptureManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", ", hidecategories = (Rendering, Physics, Actor)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Network_MetaData[] = {
		{ "ModuleRelativePath", "Private/MotionCaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureManager, Network), Z_Construct_UClass_UMotionCaptureNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Network_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Network_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MotionCaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00400008000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureManager, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Private/MotionCaptureManager.h" },
		{ "ToolTip", "Bounding port." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureManager, Port), METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Port_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Private/MotionCaptureManager.h" },
		{ "ToolTip", "Host IP address." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureManager, IP), METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_IP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_IP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotionCaptureManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Network,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureManager_Statics::NewProp_IP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotionCaptureManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionCaptureManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotionCaptureManager_Statics::ClassParams = {
		&AMotionCaptureManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMotionCaptureManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotionCaptureManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotionCaptureManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotionCaptureManager, 1205737156);
	template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<AMotionCaptureManager>()
	{
		return AMotionCaptureManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionCaptureManager(Z_Construct_UClass_AMotionCaptureManager, &AMotionCaptureManager::StaticClass, TEXT("/Script/MotionCaptureRuntime"), TEXT("AMotionCaptureManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionCaptureManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
