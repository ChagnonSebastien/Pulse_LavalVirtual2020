// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBVHAsset;
#ifdef MOTIONCAPTURERUNTIME_MotionCaptureComponent_generated_h
#error "MotionCaptureComponent.generated.h already included, missing '#pragma once' in MotionCaptureComponent.h"
#endif
#define MOTIONCAPTURERUNTIME_MotionCaptureComponent_generated_h

#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execGetAvatarName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAvatarName(); \
		P_NATIVE_END; \
	}


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execGetAvatarName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAvatarName(); \
		P_NATIVE_END; \
	}


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionCaptureComponent(); \
	friend struct Z_Construct_UClass_UMotionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionCaptureComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionCaptureRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMotionCaptureComponent)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMotionCaptureComponent(); \
	friend struct Z_Construct_UClass_UMotionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionCaptureComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionCaptureRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMotionCaptureComponent)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionCaptureComponent(UMotionCaptureComponent&&); \
	NO_API UMotionCaptureComponent(const UMotionCaptureComponent&); \
public:


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionCaptureComponent(UMotionCaptureComponent&&); \
	NO_API UMotionCaptureComponent(const UMotionCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionCaptureComponent)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AvatarID() { return STRUCT_OFFSET(UMotionCaptureComponent, AvatarID); } \
	FORCEINLINE static uint32 __PPO__AvatarName() { return STRUCT_OFFSET(UMotionCaptureComponent, AvatarName); }


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_13_PROLOG
#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_RPC_WRAPPERS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_INCLASS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_INCLASS_NO_PURE_DECLS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<class UMotionCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Private_MotionCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
