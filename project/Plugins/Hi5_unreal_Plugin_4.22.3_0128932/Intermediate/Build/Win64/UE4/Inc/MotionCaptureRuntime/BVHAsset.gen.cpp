// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Public/BVHAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBVHAsset() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UBVHAsset_NoRegister();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UBVHAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UBVHAsset_GetBVHFilePath();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UBVHAsset_IsLoaded();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UBVHAsset_Load();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UBVHAsset_ReLoad();
// End Cross Module References
	void UBVHAsset::StaticRegisterNativesUBVHAsset()
	{
		UClass* Class = UBVHAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBVHFilePath", &UBVHAsset::execGetBVHFilePath },
			{ "IsLoaded", &UBVHAsset::execIsLoaded },
			{ "Load", &UBVHAsset::execLoad },
			{ "ReLoad", &UBVHAsset::execReLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics
	{
		struct BVHAsset_eventGetBVHFilePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BVHAsset_eventGetBVHFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Get BVH File Path" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBVHAsset, nullptr, "GetBVHFilePath", sizeof(BVHAsset_eventGetBVHFilePath_Parms), Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBVHAsset_GetBVHFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBVHAsset_GetBVHFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics
	{
		struct BVHAsset_eventIsLoaded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BVHAsset_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BVHAsset_eventIsLoaded_Parms), &Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Is Loaded" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBVHAsset, nullptr, "IsLoaded", sizeof(BVHAsset_eventIsLoaded_Parms), Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBVHAsset_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBVHAsset_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBVHAsset_Load_Statics
	{
		struct BVHAsset_eventLoad_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBVHAsset_Load_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BVHAsset_eventLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBVHAsset_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BVHAsset_eventLoad_Parms), &Z_Construct_UFunction_UBVHAsset_Load_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBVHAsset_Load_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBVHAsset_Load_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBVHAsset_Load_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Load" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBVHAsset_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBVHAsset, nullptr, "Load", sizeof(BVHAsset_eventLoad_Parms), Z_Construct_UFunction_UBVHAsset_Load_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBVHAsset_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBVHAsset_Load_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBVHAsset_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBVHAsset_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBVHAsset_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBVHAsset_ReLoad_Statics
	{
		struct BVHAsset_eventReLoad_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BVHAsset_eventReLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BVHAsset_eventReLoad_Parms), &Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "ReLoad" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBVHAsset, nullptr, "ReLoad", sizeof(BVHAsset_eventReLoad_Parms), Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBVHAsset_ReLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBVHAsset_ReLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBVHAsset_NoRegister()
	{
		return UBVHAsset::StaticClass();
	}
	struct Z_Construct_UClass_UBVHAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoaded_MetaData[];
#endif
		static void NewProp_bLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDataOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameDataOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BVHFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BVHFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTotalNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneTotalNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithDisplacement_MetaData[];
#endif
		static void NewProp_bWithDisplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRootEffect_MetaData[];
#endif
		static void NewProp_bUseRootEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRootEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBVHAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBVHAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBVHAsset_GetBVHFilePath, "GetBVHFilePath" }, // 3603273484
		{ &Z_Construct_UFunction_UBVHAsset_IsLoaded, "IsLoaded" }, // 2531303345
		{ &Z_Construct_UFunction_UBVHAsset_Load, "Load" }, // 3507445924
		{ &Z_Construct_UFunction_UBVHAsset_ReLoad, "ReLoad" }, // 3110121760
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MotionCapture" },
		{ "IncludePath", "BVHAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a BVH file asset that contains animation data for Perception Neuron to use." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_bLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
	};
#endif
	void Z_Construct_UClass_UBVHAsset_Statics::NewProp_bLoaded_SetBit(void* Obj)
	{
		((UBVHAsset*)Obj)->bLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_bLoaded = { "bLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBVHAsset), &Z_Construct_UClass_UBVHAsset_Statics::NewProp_bLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_bLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_bLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameDataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameDataOffset = { "FrameDataOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBVHAsset, FrameDataOffset), METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameDataOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameDataOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_AnimData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_AnimData = { "AnimData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBVHAsset, AnimData), METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_AnimData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_AnimData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_AnimData_Inner = { "AnimData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_BVHFilePath_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "BVH File" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
		{ "ToolTip", "The path of a BVH file locate in." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_BVHFilePath = { "BVHFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBVHAsset, BVHFilePath), METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_BVHFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_BVHFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameTime_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "Frame Time" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
		{ "ToolTip", "Frame step time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameTime = { "FrameTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBVHAsset, FrameTime), METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_Frames_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "Frames" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
		{ "ToolTip", "Total number of frames." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBVHAsset, Frames), METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_Frames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_Frames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_BoneTotalNumber_MetaData[] = {
		{ "Category", "Bone" },
		{ "DisplayName", "Bone Total Number" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
		{ "ToolTip", "Total number of Bones." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_BoneTotalNumber = { "BoneTotalNumber", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBVHAsset, BoneTotalNumber), METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_BoneTotalNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_BoneTotalNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_bWithDisplacement_MetaData[] = {
		{ "Category", "Bone" },
		{ "DisplayName", "With Displacement" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
		{ "ToolTip", "Displacement." },
	};
#endif
	void Z_Construct_UClass_UBVHAsset_Statics::NewProp_bWithDisplacement_SetBit(void* Obj)
	{
		((UBVHAsset*)Obj)->bWithDisplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_bWithDisplacement = { "bWithDisplacement", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBVHAsset), &Z_Construct_UClass_UBVHAsset_Statics::NewProp_bWithDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_bWithDisplacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_bWithDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBVHAsset_Statics::NewProp_bUseRootEffect_MetaData[] = {
		{ "Category", "Bone" },
		{ "DisplayName", "Use Root Effect" },
		{ "ModuleRelativePath", "Public/BVHAsset.h" },
		{ "ToolTip", "Reference." },
	};
#endif
	void Z_Construct_UClass_UBVHAsset_Statics::NewProp_bUseRootEffect_SetBit(void* Obj)
	{
		((UBVHAsset*)Obj)->bUseRootEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBVHAsset_Statics::NewProp_bUseRootEffect = { "bUseRootEffect", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBVHAsset), &Z_Construct_UClass_UBVHAsset_Statics::NewProp_bUseRootEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::NewProp_bUseRootEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::NewProp_bUseRootEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBVHAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_bLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameDataOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_AnimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_AnimData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_BVHFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_FrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_Frames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_BoneTotalNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_bWithDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBVHAsset_Statics::NewProp_bUseRootEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBVHAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBVHAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBVHAsset_Statics::ClassParams = {
		&UBVHAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBVHAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBVHAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBVHAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBVHAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBVHAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBVHAsset, 3390515840);
	template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<UBVHAsset>()
	{
		return UBVHAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBVHAsset(Z_Construct_UClass_UBVHAsset, &UBVHAsset::StaticClass, TEXT("/Script/MotionCaptureRuntime"), TEXT("UBVHAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBVHAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
