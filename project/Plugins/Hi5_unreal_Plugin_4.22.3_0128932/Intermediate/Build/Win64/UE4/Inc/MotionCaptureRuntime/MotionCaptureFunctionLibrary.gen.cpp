// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Public/MotionCaptureFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionCaptureFunctionLibrary() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EGloveMagneticedState();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EGlovePowerLevel();
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EGlovePositionSource();
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod();
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_ECalibrationPose();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureFunctionLibrary_NoRegister();
	MOTIONCAPTURERUNTIME_API UClass* Z_Construct_UClass_UMotionCaptureFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EMCBones();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove();
	MOTIONCAPTURERUNTIME_API UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove();
// End Cross Module References
	static UEnum* EGloveMagneticedState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MotionCaptureRuntime_EGloveMagneticedState, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("EGloveMagneticedState"));
		}
		return Singleton;
	}
	template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EGloveMagneticedState>()
	{
		return EGloveMagneticedState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGloveMagneticedState(EGloveMagneticedState_StaticEnum, TEXT("/Script/MotionCaptureRuntime"), TEXT("EGloveMagneticedState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MotionCaptureRuntime_EGloveMagneticedState_Hash() { return 2658802955U; }
	UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EGloveMagneticedState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGloveMagneticedState"), 0, Get_Z_Construct_UEnum_MotionCaptureRuntime_EGloveMagneticedState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGloveMagneticedState::Unknown", (int64)EGloveMagneticedState::Unknown },
				{ "EGloveMagneticedState::Bad", (int64)EGloveMagneticedState::Bad },
				{ "EGloveMagneticedState::Warn", (int64)EGloveMagneticedState::Warn },
				{ "EGloveMagneticedState::Normal", (int64)EGloveMagneticedState::Normal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
				{ "Normal.ToolTip", "< Medium magnetization" },
				{ "ToolTip", "Defines Hi5 Glove's magnetization level." },
				{ "Warn.ToolTip", "< Serious magnetization" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
				nullptr,
				"EGloveMagneticedState",
				"EGloveMagneticedState",
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
	static UEnum* EGlovePowerLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MotionCaptureRuntime_EGlovePowerLevel, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("EGlovePowerLevel"));
		}
		return Singleton;
	}
	template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EGlovePowerLevel>()
	{
		return EGlovePowerLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGlovePowerLevel(EGlovePowerLevel_StaticEnum, TEXT("/Script/MotionCaptureRuntime"), TEXT("EGlovePowerLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MotionCaptureRuntime_EGlovePowerLevel_Hash() { return 387733743U; }
	UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EGlovePowerLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGlovePowerLevel"), 0, Get_Z_Construct_UEnum_MotionCaptureRuntime_EGlovePowerLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGlovePowerLevel::Unknown", (int64)EGlovePowerLevel::Unknown },
				{ "EGlovePowerLevel::Low", (int64)EGlovePowerLevel::Low },
				{ "EGlovePowerLevel::Normal", (int64)EGlovePowerLevel::Normal },
				{ "EGlovePowerLevel::Full", (int64)EGlovePowerLevel::Full },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Full.ToolTip", "< Battery level is normal and enough for normal use." },
				{ "Low.ToolTip", "< Cannot get battery info" },
				{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
				{ "Normal.ToolTip", "< Battery level is low." },
				{ "ToolTip", "Defines Hi5 Glove's battery level." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
				nullptr,
				"EGlovePowerLevel",
				"EGlovePowerLevel",
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
	static UEnum* EGlovePositionSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MotionCaptureRuntime_EGlovePositionSource, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("EGlovePositionSource"));
		}
		return Singleton;
	}
	template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EGlovePositionSource>()
	{
		return EGlovePositionSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGlovePositionSource(EGlovePositionSource_StaticEnum, TEXT("/Script/MotionCaptureRuntime"), TEXT("EGlovePositionSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MotionCaptureRuntime_EGlovePositionSource_Hash() { return 1913968560U; }
	UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EGlovePositionSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGlovePositionSource"), 0, Get_Z_Construct_UEnum_MotionCaptureRuntime_EGlovePositionSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGlovePositionSource::VivePosition", (int64)EGlovePositionSource::VivePosition },
				{ "EGlovePositionSource::AlicePosition", (int64)EGlovePositionSource::AlicePosition },
				{ "EGlovePositionSource::Other", (int64)EGlovePositionSource::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlicePosition.ToolTip", "< Hi5 Glove's position is supplied by HTC vive." },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
				{ "Other.ToolTip", "< Not used now." },
				{ "ToolTip", "Defines the type of Hi5 Glove's position data source." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
				nullptr,
				"EGlovePositionSource",
				"EGlovePositionSource",
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
	static UEnum* EGloveMod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("EGloveMod"));
		}
		return Singleton;
	}
	template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EGloveMod>()
	{
		return EGloveMod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGloveMod(EGloveMod_StaticEnum, TEXT("/Script/MotionCaptureRuntime"), TEXT("EGloveMod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod_Hash() { return 3333809242U; }
	UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGloveMod"), 0, Get_Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGloveMod::GlM_BothGloves", (int64)EGloveMod::GlM_BothGloves },
				{ "EGloveMod::GlM_LeftGlove", (int64)EGloveMod::GlM_LeftGlove },
				{ "EGloveMod::GlM_RightGlove", (int64)EGloveMod::GlM_RightGlove },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
				{ "ToolTip", "Defines the hand type." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
				nullptr,
				"EGloveMod",
				"EGloveMod",
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
	static UEnum* ECalibrationPose_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MotionCaptureRuntime_ECalibrationPose, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("ECalibrationPose"));
		}
		return Singleton;
	}
	template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<ECalibrationPose>()
	{
		return ECalibrationPose_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECalibrationPose(ECalibrationPose_StaticEnum, TEXT("/Script/MotionCaptureRuntime"), TEXT("ECalibrationPose"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MotionCaptureRuntime_ECalibrationPose_Hash() { return 884086643U; }
	UEnum* Z_Construct_UEnum_MotionCaptureRuntime_ECalibrationPose()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECalibrationPose"), 0, Get_Z_Construct_UEnum_MotionCaptureRuntime_ECalibrationPose_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECalibrationPose::GCP_TPose", (int64)ECalibrationPose::GCP_TPose },
				{ "ECalibrationPose::GCP_APose", (int64)ECalibrationPose::GCP_APose },
				{ "ECalibrationPose::GCP_PPose", (int64)ECalibrationPose::GCP_PPose },
				{ "ECalibrationPose::GCP_BPose", (int64)ECalibrationPose::GCP_BPose },
				{ "ECalibrationPose::GCP_CPose", (int64)ECalibrationPose::GCP_CPose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GCP_TPose.ToolTip", "GCP_Unknown = -1," },
				{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
				{ "ToolTip", "Defines the calibration pose type." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
				nullptr,
				"ECalibrationPose",
				"ECalibrationPose",
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
	void UMotionCaptureFunctionLibrary::StaticRegisterNativesUMotionCaptureFunctionLibrary()
	{
		UClass* Class = UMotionCaptureFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalibrationGlove", &UMotionCaptureFunctionLibrary::execCalibrationGlove },
			{ "GetCalibrationProgress", &UMotionCaptureFunctionLibrary::execGetCalibrationProgress },
			{ "GetGloveMagneticed", &UMotionCaptureFunctionLibrary::execGetGloveMagneticed },
			{ "GetGlovePositionSource", &UMotionCaptureFunctionLibrary::execGetGlovePositionSource },
			{ "GetGlovePowerLevel", &UMotionCaptureFunctionLibrary::execGetGlovePowerLevel },
			{ "GetLeftTrackerId", &UMotionCaptureFunctionLibrary::execGetLeftTrackerId },
			{ "GetLocalJointData", &UMotionCaptureFunctionLibrary::execGetLocalJointData },
			{ "GetOptiDeviceBindState", &UMotionCaptureFunctionLibrary::execGetOptiDeviceBindState },
			{ "GetOptiDeviceSN", &UMotionCaptureFunctionLibrary::execGetOptiDeviceSN },
			{ "GetParsedLocalJointsData", &UMotionCaptureFunctionLibrary::execGetParsedLocalJointsData },
			{ "GetRightTrackerId", &UMotionCaptureFunctionLibrary::execGetRightTrackerId },
			{ "GetTrackedDeviceDataInUESpace", &UMotionCaptureFunctionLibrary::execGetTrackedDeviceDataInUESpace },
			{ "IsDongleAvailable", &UMotionCaptureFunctionLibrary::execIsDongleAvailable },
			{ "IsGloveAvailable", &UMotionCaptureFunctionLibrary::execIsGloveAvailable },
			{ "LoadCalibrationData", &UMotionCaptureFunctionLibrary::execLoadCalibrationData },
			{ "SaveCalibrationData", &UMotionCaptureFunctionLibrary::execSaveCalibrationData },
			{ "StartMocapService", &UMotionCaptureFunctionLibrary::execStartMocapService },
			{ "StopMocapService", &UMotionCaptureFunctionLibrary::execStopMocapService },
			{ "VibrateGloves", &UMotionCaptureFunctionLibrary::execVibrateGloves },
			{ "VibrateLeftGlove", &UMotionCaptureFunctionLibrary::execVibrateLeftGlove },
			{ "VibrateRightGlove", &UMotionCaptureFunctionLibrary::execVibrateRightGlove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics
	{
		struct MotionCaptureFunctionLibrary_eventCalibrationGlove_Parms
		{
			ECalibrationPose Pose;
			int32 TimeOut;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeOut;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Pose;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Pose_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventCalibrationGlove_Parms, TimeOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventCalibrationGlove_Parms, Pose), Z_Construct_UEnum_MotionCaptureRuntime_ECalibrationPose, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::NewProp_Pose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::NewProp_TimeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::NewProp_Pose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::NewProp_Pose_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "CPP_Default_TimeOut", "5000" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Calibrate Hi5 glove hardware.\nIn this version, you can use only B and P pose.\n\n@param[in] Pose The motion need to calibrate. May be one of [B, P].\n@param[in] TimeOut (Unit: ms). If the calibration hasn't finished in TimeOut milliseconds, the calibration will stop.\n\n@note For B-Pose, the TimeOut longer than 5 seconds is recommended. And for P-Pose, the recommended TimeOut is 3 seconds. \\\nIf no Hi5 glove is power on, the function do nothing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "CalibrationGlove", sizeof(MotionCaptureFunctionLibrary_eventCalibrationGlove_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetCalibrationProgress_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetCalibrationProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Query the progress of calibration.\n\n@return The progress of calibration. The value returned is in range [0,100].\n\n@note 100 represent that the calibration of current pose complete." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetCalibrationProgress", sizeof(MotionCaptureFunctionLibrary_eventGetCalibrationProgress_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetGloveMagneticed_Parms
		{
			EGloveMagneticedState LeftGlove;
			EGloveMagneticedState RightGlove;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RightGlove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightGlove_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeftGlove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftGlove_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::NewProp_RightGlove = { "RightGlove", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetGloveMagneticed_Parms, RightGlove), Z_Construct_UEnum_MotionCaptureRuntime_EGloveMagneticedState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::NewProp_RightGlove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::NewProp_LeftGlove = { "LeftGlove", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetGloveMagneticed_Parms, LeftGlove), Z_Construct_UEnum_MotionCaptureRuntime_EGloveMagneticedState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::NewProp_LeftGlove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::NewProp_RightGlove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::NewProp_RightGlove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::NewProp_LeftGlove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::NewProp_LeftGlove_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get glove magnetization state.\n\n@param[out] LeftGlove Left glove magnetization state.\n@param[out] RightGlove Right glove magnetization state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetGloveMagneticed", sizeof(MotionCaptureFunctionLibrary_eventGetGloveMagneticed_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetGlovePositionSource_Parms
		{
			EGlovePositionSource ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetGlovePositionSource_Parms, ReturnValue), Z_Construct_UEnum_MotionCaptureRuntime_EGlovePositionSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get the source type of the location data of hand.\n\n@return Vive | Alice | Other" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetGlovePositionSource", sizeof(MotionCaptureFunctionLibrary_eventGetGlovePositionSource_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetGlovePowerLevel_Parms
		{
			EGlovePowerLevel LeftGlove;
			EGlovePowerLevel RightGlove;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RightGlove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightGlove_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeftGlove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftGlove_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::NewProp_RightGlove = { "RightGlove", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetGlovePowerLevel_Parms, RightGlove), Z_Construct_UEnum_MotionCaptureRuntime_EGlovePowerLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::NewProp_RightGlove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::NewProp_LeftGlove = { "LeftGlove", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetGlovePowerLevel_Parms, LeftGlove), Z_Construct_UEnum_MotionCaptureRuntime_EGlovePowerLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::NewProp_LeftGlove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::NewProp_RightGlove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::NewProp_RightGlove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::NewProp_LeftGlove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::NewProp_LeftGlove_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get glove power level.\n\n@param[out] LeftGlove Left glove power level.\n@param[out] RightGlove Right glove power level.\n\n@see EGlovePowerLevel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetGlovePowerLevel", sizeof(MotionCaptureFunctionLibrary_eventGetGlovePowerLevel_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetLeftTrackerId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetLeftTrackerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get the ID of the tracker binded to left hand.\n\n@retval -1 The returned device id is invalid.\n@retval other The returned device id is valid.\n\n@note The function is meaningless when the glove position source is Alice." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetLeftTrackerId", sizeof(MotionCaptureFunctionLibrary_eventGetLeftTrackerId_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetLocalJointData_Parms
		{
			EGloveMod Glove;
			TEnumAsByte<EMCBones::Type> Bone;
			FVector Position;
			FRotator Orientation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Glove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Glove_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventGetLocalJointData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventGetLocalJointData_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetLocalJointData_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetLocalJointData_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetLocalJointData_Parms, Bone), Z_Construct_UEnum_MotionCaptureRuntime_EMCBones, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Glove = { "Glove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetLocalJointData_Parms, Glove), Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Glove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Glove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::NewProp_Glove_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get local position and rotation of specified bone.\n\n@param[in] Glove Left hand or Right hand.\n@param[in] Bone Specify bone.\n@param[out] Position The local position.\n@param[out] Orientation The local rotation.\n\n@retval true Succeeded\n@retval false Failed\n\n@note The ForeArm joint's data is meaningless, don't use it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetLocalJointData", sizeof(MotionCaptureFunctionLibrary_eventGetLocalJointData_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetOptiDeviceBindState_Parms
		{
			EGloveMod Hand;
			FString DeviceSN;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceSN;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventGetOptiDeviceBindState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventGetOptiDeviceBindState_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_DeviceSN = { "DeviceSN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetOptiDeviceBindState_Parms, DeviceSN), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetOptiDeviceBindState_Parms, Hand), Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_DeviceSN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get current binding relationship between glove and optical device.\n\n@param[in] Hand Left or Right hand.\n@param[out] DeviceSN The serial number of optical device which be bound to Hand.\n\n@retval true The hand and optical device are bound together.\n@retval false There isn't any optical device bound to Hand.\n\n@warning Hand must be left or right." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetOptiDeviceBindState", sizeof(MotionCaptureFunctionLibrary_eventGetOptiDeviceBindState_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetOptiDeviceSN_Parms
		{
			int32 Id;
			FString SN;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventGetOptiDeviceSN_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventGetOptiDeviceSN_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::NewProp_SN = { "SN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetOptiDeviceSN_Parms, SN), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetOptiDeviceSN_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::NewProp_SN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get the serial number of optical device via its Id.\n\n@param[in] Id The id of optical device.\n@param[out] SN Receive the returned serial number.\n\n@retval true Succeeded.\n@retval false Failed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetOptiDeviceSN", sizeof(MotionCaptureFunctionLibrary_eventGetOptiDeviceSN_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetParsedLocalJointsData_Parms
		{
			EGloveMod Glove;
			TArray<FVector> Positions;
			TArray<FRotator> Orientations;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Orientations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientations_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Glove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Glove_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventGetParsedLocalJointsData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventGetParsedLocalJointsData_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Orientations = { "Orientations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetParsedLocalJointsData_Parms, Orientations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Orientations_Inner = { "Orientations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetParsedLocalJointsData_Parms, Positions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Glove = { "Glove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetParsedLocalJointsData_Parms, Glove), Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Glove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Orientations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Orientations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Positions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Glove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::NewProp_Glove_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get hand local gesture data in unreal engine space.\n\n@param[in] Glove Left hand or Right hand.\n@param[out] Positions Joints' position.\n@param[out] Orientations Joints' orientation.\n\n@retval true Succeeded\n@retval false Failed.\n\n@note\nIf you want to get RightHandThumb1's local Position and Orientation, you can do as follow:\n@code\nTArray<FVector> Positions;\nTArray<FRotator> Orientations;\nGetParsedLocalJointsData(EGloveMod::GlM_LeftGlove, Positions, Orientations);\nFVector pos = Positions[EMCBones::RightHandThumb1];\nFRotator rot = Orientations[EMCBones::RightHandThumb1];\n@endcode\nIn Blueprint, the array index above can be constructed by [Literal enum EMCBones] node.\nThe ForeArm joint's data is meaningless, don't use it.\n\n@warning Glove must be left or right." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetParsedLocalJointsData", sizeof(MotionCaptureFunctionLibrary_eventGetParsedLocalJointsData_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetRightTrackerId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetRightTrackerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get the ID of the tracker binded to right hand.\n\n@retval -1 The returned device id is invalid.\n@retval other The returned device id is valid.\n\n@note The function is meaningless when the glove position source is Alice." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetRightTrackerId", sizeof(MotionCaptureFunctionLibrary_eventGetRightTrackerId_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics
	{
		struct MotionCaptureFunctionLibrary_eventGetTrackedDeviceDataInUESpace_Parms
		{
			int32 DeviceId;
			FVector Position;
			FRotator Rotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventGetTrackedDeviceDataInUESpace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventGetTrackedDeviceDataInUESpace_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetTrackedDeviceDataInUESpace_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetTrackedDeviceDataInUESpace_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventGetTrackedDeviceDataInUESpace_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Get the specific vive tracker or controller's position and rotation in UE space.\n\n@param[in] DeviceId The id of vive tracker or controller.\n@param[out] Position Device position\n@param[out] Rotation Device rotation\n\n@retval true The device is connected and normal tracking.\n@retval false The device is not connected or abnormal tracking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "GetTrackedDeviceDataInUESpace", sizeof(MotionCaptureFunctionLibrary_eventGetTrackedDeviceDataInUESpace_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics
	{
		struct MotionCaptureFunctionLibrary_eventIsDongleAvailable_Parms
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
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventIsDongleAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventIsDongleAvailable_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Check if the dongle is available.\n\n@retval true Available.\n@retval false Unavailable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "IsDongleAvailable", sizeof(MotionCaptureFunctionLibrary_eventIsDongleAvailable_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics
	{
		struct MotionCaptureFunctionLibrary_eventIsGloveAvailable_Parms
		{
			EGloveMod Mod;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventIsGloveAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventIsGloveAvailable_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::NewProp_Mod = { "Mod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventIsGloveAvailable_Parms, Mod), Z_Construct_UEnum_MotionCaptureRuntime_EGloveMod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::NewProp_Mod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::NewProp_Mod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::NewProp_Mod_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific glove is available.\n\n@param[in] Mod Glove type.\n\n@retval true Available.\n@retval false Unavailable.\n\n@note When Mod is GlM_BothGloves, the returned value will be true if and only if both gloves available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "IsGloveAvailable", sizeof(MotionCaptureFunctionLibrary_eventIsGloveAvailable_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics
	{
		struct MotionCaptureFunctionLibrary_eventLoadCalibrationData_Parms
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
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventLoadCalibrationData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventLoadCalibrationData_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Load calibration data from default files.\n\n@retval true Succeeded.\n@retval false Failed.\n\n@note The default files are CalibrationData and OpticalDeviceBindInfo.xml\nwhich stored in user-based folder: $FOLDERID_RoamingAppData/Hi5.\nEg: C:/Users/your_name/AppData/Roaming/Hi5/CalibrationData." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "LoadCalibrationData", sizeof(MotionCaptureFunctionLibrary_eventLoadCalibrationData_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics
	{
		struct MotionCaptureFunctionLibrary_eventSaveCalibrationData_Parms
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
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventSaveCalibrationData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventSaveCalibrationData_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Save calibration data to default files.\n\n@retval true Succeeded.\n@retval false Failed.\n\n@note The default files are CalibrationData and OpticalDeviceBindInfo.xml\nwhich stored in user-based folder: $FOLDERID_RoamingAppData/Hi5.\nEg: C:/Users/your_name/AppData/Roaming/Hi5/CalibrationData." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "SaveCalibrationData", sizeof(MotionCaptureFunctionLibrary_eventSaveCalibrationData_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics
	{
		struct MotionCaptureFunctionLibrary_eventStartMocapService_Parms
		{
			EGlovePositionSource PosSrc;
			bool ReadLocal;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_ReadLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReadLocal;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PosSrc;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PosSrc_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventStartMocapService_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventStartMocapService_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_ReadLocal_SetBit(void* Obj)
	{
		((MotionCaptureFunctionLibrary_eventStartMocapService_Parms*)Obj)->ReadLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_ReadLocal = { "ReadLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionCaptureFunctionLibrary_eventStartMocapService_Parms), &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_ReadLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_PosSrc = { "PosSrc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventStartMocapService_Parms, PosSrc), Z_Construct_UEnum_MotionCaptureRuntime_EGlovePositionSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_PosSrc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_ReadLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_PosSrc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::NewProp_PosSrc_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "CPP_Default_PosSrc", "VivePosition" },
		{ "CPP_Default_ReadLocal", "true" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Start MocapCapture plugin.\n\n@param[in] PosSrc Specify the source of the location data. The value is one of [Vive, Alice, Other].\n@param[in] ReadLocal If you need read glove data from local Hi5 dongle, pass true. Otherwise, pass false.\n\n@retval true Succeeded.\n@retval false Failed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "StartMocapService", sizeof(MotionCaptureFunctionLibrary_eventStartMocapService_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "Stop the data service" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "StopMocapService", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics
	{
		struct MotionCaptureFunctionLibrary_eventVibrateGloves_Parms
		{
			int32 LeftGloveTimeSpan;
			int32 RightGloveTimeSpan;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightGloveTimeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RightGloveTimeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftGloveTimeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LeftGloveTimeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_RightGloveTimeSpan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_RightGloveTimeSpan = { "RightGloveTimeSpan", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventVibrateGloves_Parms, RightGloveTimeSpan), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_RightGloveTimeSpan_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_RightGloveTimeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_LeftGloveTimeSpan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_LeftGloveTimeSpan = { "LeftGloveTimeSpan", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventVibrateGloves_Parms, LeftGloveTimeSpan), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_LeftGloveTimeSpan_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_LeftGloveTimeSpan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_RightGloveTimeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::NewProp_LeftGloveTimeSpan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "ms" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "VibrateGloves", sizeof(MotionCaptureFunctionLibrary_eventVibrateGloves_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics
	{
		struct MotionCaptureFunctionLibrary_eventVibrateLeftGlove_Parms
		{
			int32 GloveTimeSpan;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveTimeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GloveTimeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::NewProp_GloveTimeSpan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::NewProp_GloveTimeSpan = { "GloveTimeSpan", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventVibrateLeftGlove_Parms, GloveTimeSpan), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::NewProp_GloveTimeSpan_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::NewProp_GloveTimeSpan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::NewProp_GloveTimeSpan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "ms" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "VibrateLeftGlove", sizeof(MotionCaptureFunctionLibrary_eventVibrateLeftGlove_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics
	{
		struct MotionCaptureFunctionLibrary_eventVibrateRightGlove_Parms
		{
			int32 GloveTimeSpan;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveTimeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GloveTimeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::NewProp_GloveTimeSpan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::NewProp_GloveTimeSpan = { "GloveTimeSpan", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionCaptureFunctionLibrary_eventVibrateRightGlove_Parms, GloveTimeSpan), METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::NewProp_GloveTimeSpan_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::NewProp_GloveTimeSpan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::NewProp_GloveTimeSpan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Capture|Data Service" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
		{ "ToolTip", "ms" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionCaptureFunctionLibrary, nullptr, "VibrateRightGlove", sizeof(MotionCaptureFunctionLibrary_eventVibrateRightGlove_Parms), Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionCaptureFunctionLibrary_NoRegister()
	{
		return UMotionCaptureFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_CalibrationGlove, "CalibrationGlove" }, // 1919482721
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetCalibrationProgress, "GetCalibrationProgress" }, // 3504728658
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGloveMagneticed, "GetGloveMagneticed" }, // 3325459555
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePositionSource, "GetGlovePositionSource" }, // 1322878494
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetGlovePowerLevel, "GetGlovePowerLevel" }, // 3000202097
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLeftTrackerId, "GetLeftTrackerId" }, // 2471069014
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetLocalJointData, "GetLocalJointData" }, // 4068170168
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceBindState, "GetOptiDeviceBindState" }, // 1540910606
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetOptiDeviceSN, "GetOptiDeviceSN" }, // 7779568
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetParsedLocalJointsData, "GetParsedLocalJointsData" }, // 2013969218
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetRightTrackerId, "GetRightTrackerId" }, // 1720953539
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_GetTrackedDeviceDataInUESpace, "GetTrackedDeviceDataInUESpace" }, // 982947140
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsDongleAvailable, "IsDongleAvailable" }, // 2703755730
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_IsGloveAvailable, "IsGloveAvailable" }, // 4290386654
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_LoadCalibrationData, "LoadCalibrationData" }, // 2991086244
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_SaveCalibrationData, "SaveCalibrationData" }, // 474922262
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StartMocapService, "StartMocapService" }, // 2039463915
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_StopMocapService, "StopMocapService" }, // 2113570707
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateGloves, "VibrateGloves" }, // 290560557
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateLeftGlove, "VibrateLeftGlove" }, // 248503790
		{ &Z_Construct_UFunction_UMotionCaptureFunctionLibrary_VibrateRightGlove, "VibrateRightGlove" }, // 1354736008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotionCaptureFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MotionCaptureFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionCaptureFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics::ClassParams = {
		&UMotionCaptureFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionCaptureFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionCaptureFunctionLibrary, 519419360);
	template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<UMotionCaptureFunctionLibrary>()
	{
		return UMotionCaptureFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionCaptureFunctionLibrary(Z_Construct_UClass_UMotionCaptureFunctionLibrary, &UMotionCaptureFunctionLibrary::StaticClass, TEXT("/Script/MotionCaptureRuntime"), TEXT("UMotionCaptureFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionCaptureFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
