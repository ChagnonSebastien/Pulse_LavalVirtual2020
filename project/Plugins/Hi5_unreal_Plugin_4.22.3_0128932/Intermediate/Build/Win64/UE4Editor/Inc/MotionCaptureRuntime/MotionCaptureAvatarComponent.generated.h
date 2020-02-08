// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBVHAsset;
#ifdef MOTIONCAPTURERUNTIME_MotionCaptureAvatarComponent_generated_h
#error "MotionCaptureAvatarComponent.generated.h already included, missing '#pragma once' in MotionCaptureAvatarComponent.h"
#endif
#define MOTIONCAPTURERUNTIME_MotionCaptureAvatarComponent_generated_h

#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_RPC_WRAPPERS \
	virtual bool SetAvatarNameOnServer_Validate(FName const& ); \
	virtual void SetAvatarNameOnServer_Implementation(FName const& _AvatarName); \
 \
	DECLARE_FUNCTION(execSetAvatarNameOnServer) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param__AvatarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetAvatarNameOnServer_Validate(Z_Param__AvatarName)) \
		{ \
			RPC_ValidateFailed(TEXT("SetAvatarNameOnServer_Validate")); \
			return; \
		} \
		P_THIS->SetAvatarNameOnServer_Implementation(Z_Param__AvatarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsLocalAvatar) \
	{ \
		P_GET_UBOOL(Z_Param_IsLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsLocalAvatar(Z_Param_IsLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsLocalAvatar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsLocalAvatar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBVHAsset) \
	{ \
		P_GET_OBJECT(UBVHAsset,Z_Param_InNewBVHAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBVHAsset(Z_Param_InNewBVHAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvatarName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InAvatarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvatarName(Z_Param_Out_InAvatarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBVHAsset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBVHAsset**)Z_Param__Result=P_THIS->GetBVHAsset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDeviceName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvatarName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAvatarName(); \
		P_NATIVE_END; \
	}


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAvatarNameOnServer) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param__AvatarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetAvatarNameOnServer_Validate(Z_Param__AvatarName)) \
		{ \
			RPC_ValidateFailed(TEXT("SetAvatarNameOnServer_Validate")); \
			return; \
		} \
		P_THIS->SetAvatarNameOnServer_Implementation(Z_Param__AvatarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsLocalAvatar) \
	{ \
		P_GET_UBOOL(Z_Param_IsLocal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsLocalAvatar(Z_Param_IsLocal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsLocalAvatar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsLocalAvatar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBVHAsset) \
	{ \
		P_GET_OBJECT(UBVHAsset,Z_Param_InNewBVHAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBVHAsset(Z_Param_InNewBVHAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvatarName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InAvatarName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvatarName(Z_Param_Out_InAvatarName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBVHAsset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBVHAsset**)Z_Param__Result=P_THIS->GetBVHAsset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDeviceName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvatarName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAvatarName(); \
		P_NATIVE_END; \
	}


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_EVENT_PARMS \
	struct MotionCaptureAvatarComponent_eventSetAvatarNameOnServer_Parms \
	{ \
		FName _AvatarName; \
	};


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_CALLBACK_WRAPPERS
#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionCaptureAvatarComponent(); \
	friend struct Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionCaptureAvatarComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionCaptureRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMotionCaptureAvatarComponent)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMotionCaptureAvatarComponent(); \
	friend struct Z_Construct_UClass_UMotionCaptureAvatarComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionCaptureAvatarComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionCaptureRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMotionCaptureAvatarComponent)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionCaptureAvatarComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionCaptureAvatarComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionCaptureAvatarComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionCaptureAvatarComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionCaptureAvatarComponent(UMotionCaptureAvatarComponent&&); \
	NO_API UMotionCaptureAvatarComponent(const UMotionCaptureAvatarComponent&); \
public:


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionCaptureAvatarComponent(UMotionCaptureAvatarComponent&&); \
	NO_API UMotionCaptureAvatarComponent(const UMotionCaptureAvatarComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionCaptureAvatarComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionCaptureAvatarComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotionCaptureAvatarComponent)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_PRIVATE_PROPERTY_OFFSET
#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_29_PROLOG \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_EVENT_PARMS


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_RPC_WRAPPERS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_CALLBACK_WRAPPERS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_INCLASS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_CALLBACK_WRAPPERS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_INCLASS_NO_PURE_DECLS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<class UMotionCaptureAvatarComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureAvatarComponent_h


#define FOREACH_ENUM_ELOCATIONMODE(op) \
	op(ELocationMode::World) \
	op(ELocationMode::Relative) 

enum class ELocationMode : uint8;
template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<ELocationMode>();

#define FOREACH_ENUM_EHANDMODE(op) \
	op(EHandMode::ModeUnknown) \
	op(EHandMode::LeftHand) \
	op(EHandMode::RightHand) 

enum class EHandMode : uint8;
template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EHandMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
