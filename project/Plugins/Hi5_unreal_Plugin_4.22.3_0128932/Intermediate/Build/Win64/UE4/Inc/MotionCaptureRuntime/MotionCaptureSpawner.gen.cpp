// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Private/MotionCaptureSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionCaptureSpawner() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_AMotionCaptureSpawner_NoRegister();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_AMotionCaptureSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AMotionCaptureSpawner::StaticRegisterNativesAMotionCaptureSpawner()
	{
	}
	UClass* Z_Construct_UClass_AMotionCaptureSpawner_NoRegister()
	{
		return AMotionCaptureSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AMotionCaptureSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DynamicActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AvatarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvatarID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRenderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRenderComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotionCaptureSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureSpawner_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MotionCapture" },
		{ "IncludePath", "MotionCaptureSpawner.h" },
		{ "ModuleRelativePath", "Private/MotionCaptureSpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The dynamically created Avatar`s spawn point." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_DynamicActorClass_MetaData[] = {
		{ "Category", "Actor Binding" },
		{ "DisplayName", "Dynamic Actor Class" },
		{ "ModuleRelativePath", "Private/MotionCaptureSpawner.h" },
		{ "ToolTip", "The actual class of the avatar that will be spawned at the location." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_DynamicActorClass = { "DynamicActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureSpawner, DynamicActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_DynamicActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_DynamicActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarName_MetaData[] = {
		{ "Category", "Actor Binding" },
		{ "DisplayName", "Avatar Name" },
		{ "ModuleRelativePath", "Private/MotionCaptureSpawner.h" },
		{ "ToolTip", "The name of the avatar that will be spawned at the location." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureSpawner, AvatarName), METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarID_MetaData[] = {
		{ "Category", "Actor Binding" },
		{ "DisplayName", "Avatar ID" },
		{ "ModuleRelativePath", "Private/MotionCaptureSpawner.h" },
		{ "ToolTip", "The ID of the avatar that will be spawned at the location." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarID = { "AvatarID", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureSpawner, AvatarID), METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_TextRenderComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MotionCaptureSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_TextRenderComponent = { "TextRenderComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureSpawner, TextRenderComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_TextRenderComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_TextRenderComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MotionCaptureSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00400008000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionCaptureSpawner, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotionCaptureSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_DynamicActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_AvatarID,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_TextRenderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionCaptureSpawner_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotionCaptureSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionCaptureSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotionCaptureSpawner_Statics::ClassParams = {
		&AMotionCaptureSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMotionCaptureSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureSpawner_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMotionCaptureSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMotionCaptureSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotionCaptureSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotionCaptureSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotionCaptureSpawner, 1157184443);
	template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<AMotionCaptureSpawner>()
	{
		return AMotionCaptureSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionCaptureSpawner(Z_Construct_UClass_AMotionCaptureSpawner, &AMotionCaptureSpawner::StaticClass, TEXT("/Script/MotionCaptureRuntime"), TEXT("AMotionCaptureSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionCaptureSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
