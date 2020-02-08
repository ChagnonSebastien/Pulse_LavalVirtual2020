// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Private/MotionCaptureAvatarComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionCaptureAvatarComponent() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_ELocationMode();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EHandMode();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureAvatarComponent_NoRegister();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureAvatarComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UBVHAsset_NoRegister();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar();
// End Cross Module References
	static UEnum* ELocationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MotionCaptureRuntime_ELocationMode, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("ELocationMode"));
		}
		return Singleton;
	}
	template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<ELocationMode>()
	{
		return ELocationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationMode(ELocationMode_StaticEnum, TEXT("/Script/MotionCaptureRuntime"), TEXT("ELocationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MotionCaptureRuntime_ELocationMode_Hash() { return 3494763182U; }
	UEnum* Z_Construct_UEnum_MotionCaptureRuntime_ELocationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationMode"), 0, Get_Z_Construct_UEnum_MotionCaptureRuntime_ELocationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocationMode::World", (int64)ELocationMode::World },
				{ "ELocationMode::Relative", (int64)ELocationMode::Relative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
				nullptr,
				"ELocationMode",
				"ELocationMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MotionCaptureRuntime_EHandMode, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("EHandMode"));
		}
		return Singleton;
	}
	template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EHandMode>()
	{
		return EHandMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandMode(EHandMode_StaticEnum, TEXT("/Script/MotionCaptureRuntime"), TEXT("EHandMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MotionCaptureRuntime_EHandMode_Hash() { return 2414150612U; }
	UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EHandMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandMode"), 0, Get_Z_Construct_UEnum_MotionCaptureRuntime_EHandMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandMode::ModeUnknown", (int64)EHandMode::ModeUnknown },
				{ "EHandMode::LeftHand", (int64)EHandMode::LeftHand },
				{ "EHandMode::RightHand", (int64)EHandMode::RightHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
				nullptr,
				"EHandMode",
				"EHandMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UMotionCaptureAvatarComponent_SetAvatarNameOnServer = FName(TEXT("SetAvatarNameOnServer"));
	void UMotionCaptureAvatarComponent::SetAvatarNameOnServer(FName const& _AvatarName)
	{
		MotionCaptureAvatarComponent_eventSetAvatarNameOnServer_Parms Parms;
		Parms._AvatarName=_AvatarName;
		ProcessEvent(FindFunctionChecked(NAME_UMotionCaptureAvatarComponent_SetAvatarNameOnServer),&Parms);
	}
	void UMotionCaptureAvatarComponent::StaticRegisterNativesUMotionCaptureAvatarComponent()
	{
		UClass* Class = UMotionCaptureAvatarComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatarName", &UMotionCaptureAvatarComponent::execGetAvatarName },
			{ "GetBVHAsset", &UMotionCaptureAvatarComponent::execGetBVHAsset },
			{ "GetDeviceName", &UMotionCaptureAvatarComponent::execGetDeviceName },
			{ "GetIsLocalAvatar", &UMotionCaptureAvatarComponent::execGetIsLocalAvatar },
			{ "SetAvatarName", &UMotionCaptureAvatarComponent::execSetAvatarName },
			{ "SetAvatarNameOnServer", &UMotionCaptureAvatarComponent::execSetAvatarNameOnServer },
			{ "SetBVHAsset", &UMotionCaptureAvatarComponent::execSetBVHAsset },
			{ "SetIsLocalAvatar", &UMotionCaptureAvatarComponent::execSetIsLocalAvatar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics
	{
		struct MotionCaptureAvatarComponent_eventGetAvatarName_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureAvatarComponent_eventGetAvatarName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"MotionCapture\")\nint32 GetAvatarID() const;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureAvatarComponent, nullptr, "GetAvatarName", sizeof(MotionCaptureAvatarComponent_eventGetAvatarName_Parms), Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics
	{
		struct MotionCaptureAvatarComponent_eventGetBVHAsset_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureAvatarComponent_eventGetBVHAsset_Parms, ReturnValue), Z_Construct_UClass_UBVHAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureAvatarComponent, nullptr, "GetBVHAsset", sizeof(MotionCaptureAvatarComponent_eventGetBVHAsset_Parms), Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics
	{
		struct MotionCaptureAvatarComponent_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureAvatarComponent_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureAvatarComponent, nullptr, "GetDeviceName", sizeof(MotionCaptureAvatarComponent_eventGetDeviceName_Parms), Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics
	{
		struct MotionCaptureAvatarComponent_eventGetIsLocalAvatar_Parms
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
	void Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureAvatarComponent_eventGetIsLocalAvatar_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureAvatarComponent_eventGetIsLocalAvatar_Parms), &Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureAvatarComponent, nullptr, "GetIsLocalAvatar", sizeof(MotionCaptureAvatarComponent_eventGetIsLocalAvatar_Parms), Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics
	{
		struct MotionCaptureAvatarComponent_eventSetAvatarName_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::NewProp_InAvatarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::NewProp_InAvatarName = { "InAvatarName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureAvatarComponent_eventSetAvatarName_Parms, InAvatarName), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::NewProp_InAvatarName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::NewProp_InAvatarName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::NewProp_InAvatarName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"MotionCapture\")\nvoid SetAvatarID(int32 InAvatarID);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureAvatarComponent, nullptr, "SetAvatarName", sizeof(MotionCaptureAvatarComponent_eventSetAvatarName_Parms), Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__AvatarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__AvatarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::NewProp__AvatarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::NewProp__AvatarName = { "_AvatarName", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureAvatarComponent_eventSetAvatarNameOnServer_Parms, _AvatarName), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::NewProp__AvatarName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::NewProp__AvatarName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::NewProp__AvatarName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture | Server" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureAvatarComponent, nullptr, "SetAvatarNameOnServer", sizeof(MotionCaptureAvatarComponent_eventSetAvatarNameOnServer_Parms), Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics
	{
		struct MotionCaptureAvatarComponent_eventSetBVHAsset_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::NewProp_InNewBVHAsset = { "InNewBVHAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureAvatarComponent_eventSetBVHAsset_Parms, InNewBVHAsset), Z_Construct_UClass_UBVHAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::NewProp_InNewBVHAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureAvatarComponent, nullptr, "SetBVHAsset", sizeof(MotionCaptureAvatarComponent_eventSetBVHAsset_Parms), Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics
	{
		struct MotionCaptureAvatarComponent_eventSetIsLocalAvatar_Parms
		{
			bool IsLocal;
		};
		static void NewProp_IsLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::NewProp_IsLocal_SetBit(void* Obj)
	{
		((MotionCaptureAvatarComponent_eventSetIsLocalAvatar_Parms*)Obj)->IsLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::NewProp_IsLocal = { "IsLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureAvatarComponent_eventSetIsLocalAvatar_Parms), &Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::NewProp_IsLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::NewProp_IsLocal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionCapture" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureAvatarComponent, nullptr, "SetIsLocalAvatar", sizeof(MotionCaptureAvatarComponent_eventSetIsLocalAvatar_Parms), Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionCaptureAvatarComponent_NoRegister()
	{
		return UMotionCaptureAvatarComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDisplacement_MetaData[];
#endif
		static void NewProp_UseDisplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocalAvatar_MetaData[];
#endif
		static void NewProp_IsLocalAvatar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocalAvatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
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
	UObject* (*const Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetAvatarName, "GetAvatarName" }, // 1905267452
		{ &Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetBVHAsset, "GetBVHAsset" }, // 3196639518
		{ &Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetDeviceName, "GetDeviceName" }, // 3935720792
		{ &Z_Construct_UFunction_UMotionCaptureAvatarComponent_GetIsLocalAvatar, "GetIsLocalAvatar" }, // 833686115
		{ &Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarName, "SetAvatarName" }, // 515635013
		{ &Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetAvatarNameOnServer, "SetAvatarNameOnServer" }, // 490714171
		{ &Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetBVHAsset, "SetBVHAsset" }, // 3637354608
		{ &Z_Construct_UFunction_UMotionCaptureAvatarComponent_SetIsLocalAvatar, "SetIsLocalAvatar" }, // 3120068917
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MotionCapture" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MotionCaptureAvatarComponent.h" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_BVHAsset_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "BVH Asset" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
		{ "ToolTip", "The BVH asset which is used to read animation data from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_BVHAsset = { "BVHAsset", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureAvatarComponent, BVHAsset), Z_Construct_UClass_UBVHAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_BVHAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_BVHAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_LocationMode_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "UseLocationAs" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_LocationMode = { "LocationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureAvatarComponent, LocationMode), Z_Construct_UEnum_MotionCaptureRuntime_ELocationMode, METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_LocationMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_LocationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_LocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_HandMode_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Hand Mode" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_HandMode = { "HandMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureAvatarComponent, HandMode), Z_Construct_UEnum_MotionCaptureRuntime_EHandMode, METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_HandMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_HandMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_HandMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_UseDisplacement_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Use Displacement" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_UseDisplacement_SetBit(void* Obj)
	{
		((UMotionCaptureAvatarComponent*)Obj)->UseDisplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_UseDisplacement = { "UseDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMotionCaptureAvatarComponent), &Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_UseDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_UseDisplacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_UseDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_IsLocalAvatar_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Is Local Avatar" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
		{ "ToolTip", "Avatar name is used to receive animation data, this will be disabled when BVH asset is set." },
	};
#endif
	void Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_IsLocalAvatar_SetBit(void* Obj)
	{
		((UMotionCaptureAvatarComponent*)Obj)->IsLocalAvatar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_IsLocalAvatar = { "IsLocalAvatar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMotionCaptureAvatarComponent), &Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_IsLocalAvatar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_IsLocalAvatar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_IsLocalAvatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Device Name" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
		{ "ToolTip", "Device name is used to receive Alice data, this will be disabled when BVH asset is set." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureAvatarComponent, DeviceName), METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarName_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Avatar Name" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
		{ "ToolTip", "Avatar name is used to receive animation data, this will be disabled when BVH asset is set." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureAvatarComponent, AvatarName), METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarID_MetaData[] = {
		{ "Category", "MotionCapture" },
		{ "DisplayName", "Avatar ID" },
		{ "ModuleRelativePath", "Private/MotionCaptureAvatarComponent.h" },
		{ "ToolTip", "Avatar ID is used to receive animation data, this will be disabled when BVH asset is set." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarID = { "AvatarID", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMotionCaptureAvatarComponent, AvatarID), METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_BVHAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_LocationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_LocationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_HandMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_HandMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_UseDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_IsLocalAvatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::NewProp_AvatarID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionCaptureAvatarComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::ClassParams = {
		&UMotionCaptureAvatarComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionCaptureAvatarComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionCaptureAvatarComponent, 3056993451);
	template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<UMotionCaptureAvatarComponent>()
	{
		return UMotionCaptureAvatarComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionCaptureAvatarComponent(Z_Construct_UClass_UMotionCaptureAvatarComponent, &UMotionCaptureAvatarComponent::StaticClass, TEXT("/Script/MotionCaptureRuntime"), TEXT("UMotionCaptureAvatarComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionCaptureAvatarComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
