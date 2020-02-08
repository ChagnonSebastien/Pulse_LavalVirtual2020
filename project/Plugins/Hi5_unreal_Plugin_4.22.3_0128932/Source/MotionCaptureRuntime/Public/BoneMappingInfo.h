// Copyright 2015 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BoneLists.h"
#include "BoneMappingInfo.generated.h"


/************************************************************************/
/* Structs in this file is just in internal plugin sharing                                                                     */
/************************************************************************/

USTRUCT(BlueprintType)
struct MOTIONCAPTURERUNTIME_API FBoneMappingInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MotionCapture")
	TEnumAsByte<EMCBones::Type> PNID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MotionCapture")
	FName CTName;

	FBoneMappingInfo();

	FBoneMappingInfo(EMCBones::Type InPNID, const FName& InCTName);

};


FORCEINLINE bool operator==(const FBoneMappingInfo& Left, const FBoneMappingInfo& Right)
{
	return (Left.PNID == Right.PNID) && (Left.CTName == Right.CTName);
}

FORCEINLINE bool operator!=(const FBoneMappingInfo& Left, const FBoneMappingInfo& Right)
{
	return !(Left == Right);
}
