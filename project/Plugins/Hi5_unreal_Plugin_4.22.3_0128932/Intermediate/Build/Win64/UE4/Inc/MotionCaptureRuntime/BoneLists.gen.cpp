// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCaptureRuntime/Public/BoneLists.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneLists() {}
// Cross Module References
	MOTIONCAPTURERUNTIME_API UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EMCBones();
	UPackage* Z_Construct_UPackage__Script_MotionCaptureRuntime();
// End Cross Module References
	static UEnum* EMCBones_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MotionCaptureRuntime_EMCBones, Z_Construct_UPackage__Script_MotionCaptureRuntime(), TEXT("EMCBones"));
		}
		return Singleton;
	}
	template<> MOTIONCAPTURERUNTIME_API UEnum* StaticEnum<EMCBones::Type>()
	{
		return EMCBones_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCBones(EMCBones_StaticEnum, TEXT("/Script/MotionCaptureRuntime"), TEXT("EMCBones"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MotionCaptureRuntime_EMCBones_Hash() { return 3630079406U; }
	UEnum* Z_Construct_UEnum_MotionCaptureRuntime_EMCBones()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MotionCaptureRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCBones"), 0, Get_Z_Construct_UEnum_MotionCaptureRuntime_EMCBones_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCBones::Hips", (int64)EMCBones::Hips },
				{ "EMCBones::RightUpLeg", (int64)EMCBones::RightUpLeg },
				{ "EMCBones::RightLeg", (int64)EMCBones::RightLeg },
				{ "EMCBones::RightFoot", (int64)EMCBones::RightFoot },
				{ "EMCBones::LeftUpLeg", (int64)EMCBones::LeftUpLeg },
				{ "EMCBones::LeftLeg", (int64)EMCBones::LeftLeg },
				{ "EMCBones::LeftFoot", (int64)EMCBones::LeftFoot },
				{ "EMCBones::Spine", (int64)EMCBones::Spine },
				{ "EMCBones::Spine1", (int64)EMCBones::Spine1 },
				{ "EMCBones::Spine2", (int64)EMCBones::Spine2 },
				{ "EMCBones::Spine3", (int64)EMCBones::Spine3 },
				{ "EMCBones::Neck", (int64)EMCBones::Neck },
				{ "EMCBones::Head", (int64)EMCBones::Head },
				{ "EMCBones::RightShoulder", (int64)EMCBones::RightShoulder },
				{ "EMCBones::RightArm", (int64)EMCBones::RightArm },
				{ "EMCBones::RightForeArm", (int64)EMCBones::RightForeArm },
				{ "EMCBones::RightHand", (int64)EMCBones::RightHand },
				{ "EMCBones::RightHandThumb1", (int64)EMCBones::RightHandThumb1 },
				{ "EMCBones::RightHandThumb2", (int64)EMCBones::RightHandThumb2 },
				{ "EMCBones::RightHandThumb3", (int64)EMCBones::RightHandThumb3 },
				{ "EMCBones::RightInHandIndex", (int64)EMCBones::RightInHandIndex },
				{ "EMCBones::RightHandIndex1", (int64)EMCBones::RightHandIndex1 },
				{ "EMCBones::RightHandIndex2", (int64)EMCBones::RightHandIndex2 },
				{ "EMCBones::RightHandIndex3", (int64)EMCBones::RightHandIndex3 },
				{ "EMCBones::RightInHandMiddle", (int64)EMCBones::RightInHandMiddle },
				{ "EMCBones::RightHandMiddle1", (int64)EMCBones::RightHandMiddle1 },
				{ "EMCBones::RightHandMiddle2", (int64)EMCBones::RightHandMiddle2 },
				{ "EMCBones::RightHandMiddle3", (int64)EMCBones::RightHandMiddle3 },
				{ "EMCBones::RightInHandRing", (int64)EMCBones::RightInHandRing },
				{ "EMCBones::RightHandRing1", (int64)EMCBones::RightHandRing1 },
				{ "EMCBones::RightHandRing2", (int64)EMCBones::RightHandRing2 },
				{ "EMCBones::RightHandRing3", (int64)EMCBones::RightHandRing3 },
				{ "EMCBones::RightInHandPinky", (int64)EMCBones::RightInHandPinky },
				{ "EMCBones::RightHandPinky1", (int64)EMCBones::RightHandPinky1 },
				{ "EMCBones::RightHandPinky2", (int64)EMCBones::RightHandPinky2 },
				{ "EMCBones::RightHandPinky3", (int64)EMCBones::RightHandPinky3 },
				{ "EMCBones::LeftShoulder", (int64)EMCBones::LeftShoulder },
				{ "EMCBones::LeftArm", (int64)EMCBones::LeftArm },
				{ "EMCBones::LeftForeArm", (int64)EMCBones::LeftForeArm },
				{ "EMCBones::LeftHand", (int64)EMCBones::LeftHand },
				{ "EMCBones::LeftHandThumb1", (int64)EMCBones::LeftHandThumb1 },
				{ "EMCBones::LeftHandThumb2", (int64)EMCBones::LeftHandThumb2 },
				{ "EMCBones::LeftHandThumb3", (int64)EMCBones::LeftHandThumb3 },
				{ "EMCBones::LeftInHandIndex", (int64)EMCBones::LeftInHandIndex },
				{ "EMCBones::LeftHandIndex1", (int64)EMCBones::LeftHandIndex1 },
				{ "EMCBones::LeftHandIndex2", (int64)EMCBones::LeftHandIndex2 },
				{ "EMCBones::LeftHandIndex3", (int64)EMCBones::LeftHandIndex3 },
				{ "EMCBones::LeftInHandMiddle", (int64)EMCBones::LeftInHandMiddle },
				{ "EMCBones::LeftHandMiddle1", (int64)EMCBones::LeftHandMiddle1 },
				{ "EMCBones::LeftHandMiddle2", (int64)EMCBones::LeftHandMiddle2 },
				{ "EMCBones::LeftHandMiddle3", (int64)EMCBones::LeftHandMiddle3 },
				{ "EMCBones::LeftInHandRing", (int64)EMCBones::LeftInHandRing },
				{ "EMCBones::LeftHandRing1", (int64)EMCBones::LeftHandRing1 },
				{ "EMCBones::LeftHandRing2", (int64)EMCBones::LeftHandRing2 },
				{ "EMCBones::LeftHandRing3", (int64)EMCBones::LeftHandRing3 },
				{ "EMCBones::LeftInHandPinky", (int64)EMCBones::LeftInHandPinky },
				{ "EMCBones::LeftHandPinky1", (int64)EMCBones::LeftHandPinky1 },
				{ "EMCBones::LeftHandPinky2", (int64)EMCBones::LeftHandPinky2 },
				{ "EMCBones::LeftHandPinky3", (int64)EMCBones::LeftHandPinky3 },
				{ "EMCBones::Invalid", (int64)EMCBones::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneLists.h" },
				{ "RightUpLeg.ToolTip", "Hips must be 0, never can be changed" },
				{ "ToolTip", "The order is important" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MotionCaptureRuntime,
				nullptr,
				"EMCBones",
				"EMCBones::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
