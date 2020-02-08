// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGloveMod : uint8;
struct FVector;
struct FRotator;
enum class EGloveMagneticedState : uint8;
enum class EGlovePowerLevel : uint8;
enum class EGlovePositionSource : uint8;
enum class ECalibrationPose : uint8;
#ifdef MOTIONCAPTURERUNTIME_MotionCaptureFunctionLibrary_generated_h
#error "MotionCaptureFunctionLibrary.generated.h already included, missing '#pragma once' in MotionCaptureFunctionLibrary.h"
#endif
#define MOTIONCAPTURERUNTIME_MotionCaptureFunctionLibrary_generated_h

#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocalJointData) \
	{ \
		P_GET_ENUM(EGloveMod,Z_Param_Glove); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Bone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetLocalJointData(EGloveMod(Z_Param_Glove),EMCBones::Type(Z_Param_Bone),Z_Param_Out_Position,Z_Param_Out_Orientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParsedLocalJointsData) \
	{ \
		P_GET_ENUM(EGloveMod,Z_Param_Glove); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Positions); \
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_Orientations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetParsedLocalJointsData(EGloveMod(Z_Param_Glove),Z_Param_Out_Positions,Z_Param_Out_Orientations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightTrackerId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetRightTrackerId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeftTrackerId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetLeftTrackerId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackedDeviceDataInUESpace) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceId); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetTrackedDeviceDataInUESpace(Z_Param_DeviceId,Z_Param_Out_Position,Z_Param_Out_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDongleAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::IsDongleAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGloveAvailable) \
	{ \
		P_GET_ENUM(EGloveMod,Z_Param_Mod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::IsGloveAvailable(EGloveMod(Z_Param_Mod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGloveMagneticed) \
	{ \
		P_GET_ENUM_REF(EGloveMagneticedState,Z_Param_Out_LeftGlove); \
		P_GET_ENUM_REF(EGloveMagneticedState,Z_Param_Out_RightGlove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::GetGloveMagneticed((EGloveMagneticedState&)(Z_Param_Out_LeftGlove),(EGloveMagneticedState&)(Z_Param_Out_RightGlove)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlovePowerLevel) \
	{ \
		P_GET_ENUM_REF(EGlovePowerLevel,Z_Param_Out_LeftGlove); \
		P_GET_ENUM_REF(EGlovePowerLevel,Z_Param_Out_RightGlove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::GetGlovePowerLevel((EGlovePowerLevel&)(Z_Param_Out_LeftGlove),(EGlovePowerLevel&)(Z_Param_Out_RightGlove)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptiDeviceBindState) \
	{ \
		P_GET_ENUM(EGloveMod,Z_Param_Hand); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DeviceSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetOptiDeviceBindState(EGloveMod(Z_Param_Hand),Z_Param_Out_DeviceSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptiDeviceSN) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetOptiDeviceSN(Z_Param_Id,Z_Param_Out_SN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVibrateGloves) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LeftGloveTimeSpan); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RightGloveTimeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::VibrateGloves(Z_Param_LeftGloveTimeSpan,Z_Param_RightGloveTimeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVibrateRightGlove) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GloveTimeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::VibrateRightGlove(Z_Param_GloveTimeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVibrateLeftGlove) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GloveTimeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::VibrateLeftGlove(Z_Param_GloveTimeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCalibrationData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::SaveCalibrationData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadCalibrationData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::LoadCalibrationData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlovePositionSource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGlovePositionSource*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetGlovePositionSource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCalibrationProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetCalibrationProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrationGlove) \
	{ \
		P_GET_ENUM(ECalibrationPose,Z_Param_Pose); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TimeOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::CalibrationGlove(ECalibrationPose(Z_Param_Pose),Z_Param_TimeOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMocapService) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::StopMocapService(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartMocapService) \
	{ \
		P_GET_ENUM(EGlovePositionSource,Z_Param_PosSrc); \
		P_GET_UBOOL(Z_Param_ReadLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::StartMocapService(EGlovePositionSource(Z_Param_PosSrc),Z_Param_ReadLocal); \
		P_NATIVE_END; \
	}


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocalJointData) \
	{ \
		P_GET_ENUM(EGloveMod,Z_Param_Glove); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Bone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetLocalJointData(EGloveMod(Z_Param_Glove),EMCBones::Type(Z_Param_Bone),Z_Param_Out_Position,Z_Param_Out_Orientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParsedLocalJointsData) \
	{ \
		P_GET_ENUM(EGloveMod,Z_Param_Glove); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Positions); \
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_Orientations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetParsedLocalJointsData(EGloveMod(Z_Param_Glove),Z_Param_Out_Positions,Z_Param_Out_Orientations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightTrackerId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetRightTrackerId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeftTrackerId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetLeftTrackerId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackedDeviceDataInUESpace) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceId); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetTrackedDeviceDataInUESpace(Z_Param_DeviceId,Z_Param_Out_Position,Z_Param_Out_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDongleAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::IsDongleAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGloveAvailable) \
	{ \
		P_GET_ENUM(EGloveMod,Z_Param_Mod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::IsGloveAvailable(EGloveMod(Z_Param_Mod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGloveMagneticed) \
	{ \
		P_GET_ENUM_REF(EGloveMagneticedState,Z_Param_Out_LeftGlove); \
		P_GET_ENUM_REF(EGloveMagneticedState,Z_Param_Out_RightGlove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::GetGloveMagneticed((EGloveMagneticedState&)(Z_Param_Out_LeftGlove),(EGloveMagneticedState&)(Z_Param_Out_RightGlove)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlovePowerLevel) \
	{ \
		P_GET_ENUM_REF(EGlovePowerLevel,Z_Param_Out_LeftGlove); \
		P_GET_ENUM_REF(EGlovePowerLevel,Z_Param_Out_RightGlove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::GetGlovePowerLevel((EGlovePowerLevel&)(Z_Param_Out_LeftGlove),(EGlovePowerLevel&)(Z_Param_Out_RightGlove)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptiDeviceBindState) \
	{ \
		P_GET_ENUM(EGloveMod,Z_Param_Hand); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DeviceSN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetOptiDeviceBindState(EGloveMod(Z_Param_Hand),Z_Param_Out_DeviceSN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptiDeviceSN) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetOptiDeviceSN(Z_Param_Id,Z_Param_Out_SN); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVibrateGloves) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LeftGloveTimeSpan); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RightGloveTimeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::VibrateGloves(Z_Param_LeftGloveTimeSpan,Z_Param_RightGloveTimeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVibrateRightGlove) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GloveTimeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::VibrateRightGlove(Z_Param_GloveTimeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVibrateLeftGlove) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GloveTimeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::VibrateLeftGlove(Z_Param_GloveTimeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCalibrationData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::SaveCalibrationData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadCalibrationData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::LoadCalibrationData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlovePositionSource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGlovePositionSource*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetGlovePositionSource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCalibrationProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMotionCaptureFunctionLibrary::GetCalibrationProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrationGlove) \
	{ \
		P_GET_ENUM(ECalibrationPose,Z_Param_Pose); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TimeOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::CalibrationGlove(ECalibrationPose(Z_Param_Pose),Z_Param_TimeOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMocapService) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMotionCaptureFunctionLibrary::StopMocapService(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartMocapService) \
	{ \
		P_GET_ENUM(EGlovePositionSource,Z_Param_PosSrc); \
		P_GET_UBOOL(Z_Param_ReadLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMotionCaptureFunctionLibrary::StartMocapService(EGlovePositionSource(Z_Param_PosSrc),Z_Param_ReadLocal); \
		P_NATIVE_END; \
	}


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionCaptureFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionCaptureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionCaptureRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMotionCaptureFunctionLibrary)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUMotionCaptureFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMotionCaptureFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionCaptureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionCaptureRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMotionCaptureFunctionLibrary)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionCaptureFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionCaptureFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionCaptureFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionCaptureFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionCaptureFunctionLibrary(UMotionCaptureFunctionLibrary&&); \
	NO_API UMotionCaptureFunctionLibrary(const UMotionCaptureFunctionLibrary&); \
public:


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionCaptureFunctionLibrary(UMotionCaptureFunctionLibrary&&); \
	NO_API UMotionCaptureFunctionLibrary(const UMotionCaptureFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionCaptureFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionCaptureFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotionCaptureFunctionLibrary)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_PRIVATE_PROPERTY_OFFSET
#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_93_PROLOG
#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_PRIVATE_PROPERTY_OFFSET \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_RPC_WRAPPERS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_INCLASS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_PRIVATE_PROPERTY_OFFSET \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_INCLASS_NO_PURE_DECLS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<class UMotionCaptureFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_MotionCaptureFunctionLibrary_h


#define FOREACH_ENUM_EGLOVEMAGNETICEDSTATE(op) \
	op(EGloveMagneticedState::Unknown) \
	op(EGloveMagneticedState::Bad) \
	op(EGloveMagneticedState::Warn) \
	op(EGloveMagneticedState::Normal) 

enum class EGloveMagneticedState : uint8;
template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EGloveMagneticedState>();

#define FOREACH_ENUM_EGLOVEPOWERLEVEL(op) \
	op(EGlovePowerLevel::Unknown) \
	op(EGlovePowerLevel::Low) \
	op(EGlovePowerLevel::Normal) \
	op(EGlovePowerLevel::Full) 

enum class EGlovePowerLevel : uint8;
template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EGlovePowerLevel>();

#define FOREACH_ENUM_EGLOVEPOSITIONSOURCE(op) \
	op(EGlovePositionSource::VivePosition) \
	op(EGlovePositionSource::AlicePosition) \
	op(EGlovePositionSource::Other) 

enum class EGlovePositionSource : uint8;
template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EGlovePositionSource>();

#define FOREACH_ENUM_EGLOVEMOD(op) \
	op(EGloveMod::GlM_BothGloves) \
	op(EGloveMod::GlM_LeftGlove) \
	op(EGloveMod::GlM_RightGlove) 

enum class EGloveMod : uint8;
template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EGloveMod>();

#define FOREACH_ENUM_ECALIBRATIONPOSE(op) \
	op(ECalibrationPose::GCP_TPose) \
	op(ECalibrationPose::GCP_APose) \
	op(ECalibrationPose::GCP_PPose) \
	op(ECalibrationPose::GCP_BPose) \
	op(ECalibrationPose::GCP_CPose) 

enum class ECalibrationPose : uint8;
template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<ECalibrationPose>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
