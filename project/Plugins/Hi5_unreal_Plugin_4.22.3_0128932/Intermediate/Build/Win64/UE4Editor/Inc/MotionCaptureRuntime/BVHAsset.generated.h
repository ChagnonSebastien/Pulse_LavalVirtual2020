// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTIONCAPTURERUNTIME_BVHAsset_generated_h
#error "BVHAsset.generated.h already included, missing '#pragma once' in BVHAsset.h"
#endif
#define MOTIONCAPTURERUNTIME_BVHAsset_generated_h

#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBVHFilePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetBVHFilePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReLoad(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Load(); \
		P_NATIVE_END; \
	}


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBVHFilePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetBVHFilePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReLoad(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Load(); \
		P_NATIVE_END; \
	}


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBVHAsset(); \
	friend struct Z_Construct_UClass_UBVHAsset_Statics; \
public: \
	DECLARE_CLASS(UBVHAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionCaptureRuntime"), MOTIONCAPTURERUNTIME_API) \
	DECLARE_SERIALIZER(UBVHAsset)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBVHAsset(); \
	friend struct Z_Construct_UClass_UBVHAsset_Statics; \
public: \
	DECLARE_CLASS(UBVHAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionCaptureRuntime"), MOTIONCAPTURERUNTIME_API) \
	DECLARE_SERIALIZER(UBVHAsset)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOTIONCAPTURERUNTIME_API UBVHAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBVHAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONCAPTURERUNTIME_API, UBVHAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBVHAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOTIONCAPTURERUNTIME_API UBVHAsset(UBVHAsset&&); \
	MOTIONCAPTURERUNTIME_API UBVHAsset(const UBVHAsset&); \
public:


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOTIONCAPTURERUNTIME_API UBVHAsset(UBVHAsset&&); \
	MOTIONCAPTURERUNTIME_API UBVHAsset(const UBVHAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONCAPTURERUNTIME_API, UBVHAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBVHAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBVHAsset)


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bLoaded() { return STRUCT_OFFSET(UBVHAsset, bLoaded); }


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_20_PROLOG
#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_PRIVATE_PROPERTY_OFFSET \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_RPC_WRAPPERS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_INCLASS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_PRIVATE_PROPERTY_OFFSET \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_INCLASS_NO_PURE_DECLS \
	bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONCAPTURERUNTIME_API UClass* StaticClass<class UBVHAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID bj_Plugins_Folder_MotionCapture_HostProject_Plugins_MotionCapture_Source_MotionCaptureRuntime_Public_BVHAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
