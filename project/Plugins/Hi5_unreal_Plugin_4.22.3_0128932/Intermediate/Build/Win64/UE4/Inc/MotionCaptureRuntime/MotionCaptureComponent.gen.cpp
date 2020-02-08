// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Private/MotionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionCaptureComponent() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureComponent_NoRegister();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UBVHAsset_NoRegister();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset();
// End Cross Module References
	void UMotionCaptureComponent::StaticRegisterNativesUMotionCaptureComponent()
	{
		UClass* Class = UMotionCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatarName", &UMotionCaptureComponent::execGetAvatarName },
			{ "GetBVHAsset", &UMotionCaptureComponent::execGetBVHAsset },
			{ "SetAvatarName", &UMotionCaptureComponent::execSetAvatarName },
			{ "SetBVHAsset", &UMotionCaptureComponent::execSetBVHAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics
	{
		struct MotionCaptureComponent_eventGetAvatarName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureComponent_eventGetAvatarName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureComponent.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"MotionCapture\")\nint32 GetAvatarID() const;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureComponent, nullptr, "GetAvatarName", sizeof(MotionCaptureComponent_eventGetAvatarName_Parms), Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics
	{
		struct MotionCaptureComponent_eventGetBVHAsset_Parms
		{
			UBVHAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureComponent_eventGetBVHAsset_Parms, ReturnValue), Z_Construct_UClass_UBVHAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureComponent, nullptr, "GetBVHAsset", sizeof(MotionCaptureComponent_eventGetBVHAsset_Parms), Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics
	{
		struct MotionCaptureComponent_eventSetAvatarName_Parms
		{
			FName InAvatarName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAvatarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAvatarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::NewProp_InAvatarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::NewProp_InAvatarName = { "InAvatarName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureComponent_eventSetAvatarName_Parms, InAvatarName), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::NewProp_InAvatarName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::NewProp_InAvatarName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::NewProp_InAvatarName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureComponent.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"MotionCapture\")\nvoid SetAvatarID(int32 InAvatarID);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureComponent, nullptr, "SetAvatarName", sizeof(MotionCaptureComponent_eventSetAvatarName_Parms), Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics
	{
		struct MotionCaptureComponent_eventSetBVHAsset_Parms
		{
			UBVHAsset* InNewBVHAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InNewBVHAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::NewProp_InNewBVHAsset = { "InNewBVHAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureComponent_eventSetBVHAsset_Parms, InNewBVHAsset), Z_Construct_UClass_UBVHAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::NewProp_InNewBVHAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureComponent, nullptr, "SetBVHAsset", sizeof(MotionCaptureComponent_eventSetBVHAsset_Parms), Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionCaptureComponent_NoRegister()
	{
		return UMotionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMotionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BVHAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BVHAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AvatarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvatarID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionCaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionCaptureComponent_GetAvatarName, "GetAvatarName" }, // 4089292453
		{ &Z_Construct_UFunction_UMotionCaptureComponent_GetBVHAsset, "GetBVHAsset" }, // 138293567
		{ &Z_Construct_UFunction_UMotionCaptureComponent_SetAvatarName, "SetAvatarName" }, // 840508377
		{ &Z_Construct_UFunction_UMotionCaptureComponent_SetBVHAsset, "SetBVHAsset" }, // 4204958990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MotionCapture" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MotionCaptureComponent.h" },
		{ "ModuleRelativePath", "Private/MotionCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", ", meta = (BlueprintSpawnableComponent)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_BVHAsset_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "BVH Asset" },
		{ "ModuleRelativePath", "Private/MotionCaptureComponent.h" },
		{ "ToolTip", "The BVH asset which is used to read animation data from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_BVHAsset = { "BVHAsset", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureComponent, BVHAsset), Z_Construct_UClass_UBVHAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_BVHAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_BVHAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarName_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Avatar Name" },
		{ "ModuleRelativePath", "Private/MotionCaptureComponent.h" },
		{ "ToolTip", "Avatar name is used to receive animation data, this will be disabled when BVH asset is set." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureComponent, AvatarName), METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarID_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Avatar ID" },
		{ "ModuleRelativePath", "Private/MotionCaptureComponent.h" },
		{ "ToolTip", "Avatar ID is used to receive animation data, this will be disabled when BVH asset is set." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarID = { "AvatarID", nullptr, (EPropertyFlags)0x0040000000020801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureComponent, AvatarID), METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_BVHAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureComponent_Statics::NewProp_AvatarID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMotionCaptureComponent_Statics::ClassParams = {
		&UMotionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMotionCaptureComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMotionCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionCaptureComponent, 1811060094);
	template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<UMotionCaptureComponent>()
	{
		return UMotionCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionCaptureComponent(Z_Construct_UClass_UMotionCaptureComponent, &UMotionCaptureComponent::StaticClass, TEXT("/Script/MotionCaptureRuntime"), TEXT("UMotionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
