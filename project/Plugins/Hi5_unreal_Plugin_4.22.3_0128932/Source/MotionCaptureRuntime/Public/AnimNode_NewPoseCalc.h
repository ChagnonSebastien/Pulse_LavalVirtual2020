// Copyright 2015 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneNameContainer.h"
#include "Runtime/Launch/Resources/Version.h"

#include "AnimNode_NewPoseCalc.generated.h"


USTRUCT(BlueprintType)
struct MOTIONCAPTURERUNTIME_API FAnimationNode_NewPoseCalc : public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

public:
	FAnimationNode_NewPoseCalc();

	// FAnimNode_Base interface
#if (ENGINE_MAJOR_VERSION >= 4) && (ENGINE_MINOR_VERSION < 17)
	virtual void Initialize(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones(const FAnimationCacheBonesContext& Context) override;
	virtual void Update(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate(FPoseContext& Output) override;
#else
	virtual void Initialize_AnyThread (const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread (const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread (const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread (FPoseContext& Output) override;
#endif
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	// End of FAnimNode_Base interface

#if WITH_EDITOR
	bool InitBoneMap();
	void SetTargetSkeleton(const USkeleton* Skeleton);
	void ValueSet_Name(int32 ChangeAtIndex);
	void ValueSet_ID(int32 ChangeAtIndex);
	void Add_BoneMap(int32 AddAtIndex);
	void Del_BoneMap();
	void Revert_BoneMap();
#endif

	UPROPERTY(EditAnywhere, Category = "SkeletonsRetargeting", meta = (NeverAsPin))
	TArray<FBoneMappingInfo> BoneMap;

	UPROPERTY (EditAnywhere, Category = "SkeletonsRetargeting", meta = (NeverAsPin))
	FString SkeletonNamePrefix;
	
protected:
	UPROPERTY()
	FPNMultiMap BoneID2NameMap;

	UPROPERTY()
	TMap<FName, int32> BoneName2BoneMapIndex;

	UPROPERTY()
	TArray<FBoneMappingInfo> BoneMap_Copy;

	UPROPERTY()
	bool bHaveInit = false;

	UPROPERTY()
	TArray<FQuat> WorldRotations;

	UPROPERTY()
	TArray<FVector> WorldPositions;

protected:
	double BVHFramePointer = 0.0;
	const USkeleton* TargetSkeleton = nullptr;

	static FQuat StandardAxis;
};
