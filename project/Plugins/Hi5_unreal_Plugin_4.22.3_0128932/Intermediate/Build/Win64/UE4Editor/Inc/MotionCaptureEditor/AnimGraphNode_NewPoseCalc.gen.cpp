// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureEditor/Private/AnimGraphNode_NewPoseCalc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_NewPoseCalc() {}
// Cross Module References
	MOTIONCAPTUREEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_NoRegister();
	MOTIONCAPTUREEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureEditor();
	MOTIONCAPTURERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc();
// End Cross Module References
	void UAnimGraphNode_NewPoseCalc::StaticRegisterNativesUAnimGraphNode_NewPoseCalc()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_NoRegister()
	{
		return UAnimGraphNode_NewPoseCalc::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasInit_MetaData[];
#endif
		static void NewProp_bHasInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_NewPoseCalc.h" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_NewPoseCalc.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_bHasInit_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimGraphNode_NewPoseCalc.h" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_bHasInit_SetBit(void* Obj)
	{
		((UAnimGraphNode_NewPoseCalc*)Obj)->bHasInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_bHasInit = { "bHasInit", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_NewPoseCalc), &Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_bHasInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_bHasInit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_bHasInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_NewPoseCalc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_NewPoseCalc, Node), Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_bHasInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_NewPoseCalc>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::ClassParams = {
		&UAnimGraphNode_NewPoseCalc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_NewPoseCalc, 3907540203);
	template<> MOTIONCAPTUREEDITOR_API UClass* StaticClass<UAnimGraphNode_NewPoseCalc>()
	{
		return UAnimGraphNode_NewPoseCalc::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_NewPoseCalc(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc, &UAnimGraphNode_NewPoseCalc::StaticClass, TEXT("/Script/MotionCaptureEditor"), TEXT("UAnimGraphNode_NewPoseCalc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_NewPoseCalc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
