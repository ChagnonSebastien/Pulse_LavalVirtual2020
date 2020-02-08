// Copyright 2015 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BoneMappingInfo.h"
#include "BoneNameContainer.generated.h"

/************************************************************************/
/* Structs in this file is just in internal plugin sharing                                                                     */
/************************************************************************/

USTRUCT()
struct FNamesContainer
{
	GENERATED_USTRUCT_BODY()

	FORCEINLINE FNamesContainer() {}
	FORCEINLINE FNamesContainer(FNamesContainer&& Other) : Names(MoveTemp(Other.Names)) {}
	FORCEINLINE FNamesContainer(const FNamesContainer& Other) : Names(Other.Names) {}
	FORCEINLINE FNamesContainer& operator=(FNamesContainer&& Other) { Names = MoveTemp(Other.Names); return *this; }
	FORCEINLINE FNamesContainer& operator=(const FNamesContainer& Other) { Names = Other.Names; return *this; }

	UPROPERTY()
	TArray<FName> Names;
};

USTRUCT()
struct FPNMultiMap
{
	GENERATED_USTRUCT_BODY()

public:
	FORCEINLINE FPNMultiMap() {}
	FORCEINLINE FPNMultiMap(FPNMultiMap&& Other) : InterMap(MoveTemp(Other.InterMap)) {}
	FORCEINLINE FPNMultiMap(const FPNMultiMap& Other) : InterMap(Other.InterMap) {}
	FORCEINLINE FPNMultiMap& operator=(FPNMultiMap&& Other) { InterMap = MoveTemp(Other.InterMap); return *this; }
	FORCEINLINE FPNMultiMap& operator=(const FPNMultiMap& Other) { InterMap = Other.InterMap; return *this; }

	FORCEINLINE void Empty(int32 ExpectedNumElements = 0)
	{
		InterMap.Empty(ExpectedNumElements);
	}

	FORCEINLINE bool Contains(TEnumAsByte<EMCBones::Type> InKey) const
	{
		return InterMap.Contains(InKey);
	}

	FORCEINLINE void AddUnique(const TEnumAsByte<EMCBones::Type>& InKey, const FName& InValue)
	{
		InterMap.FindOrAdd(InKey).Names.AddUnique(InValue);
	}

	FORCEINLINE void MultiFind(TEnumAsByte<EMCBones::Type> InKey, TArray<FName>& OutValues) const
	{
		if (!InterMap.Contains(InKey))
		{
			return;
		}
		OutValues = InterMap[InKey].Names;
	}

	FORCEINLINE int32 Remove(TEnumAsByte<EMCBones::Type> InKey, const FName& InValue)
	{
		if (InterMap.Contains(InKey))
		{
			TArray<FName>& Names = InterMap[InKey].Names;
			int32 RemNum = Names.Remove(InValue);
			if (0 == Names.Num())
			{
				InterMap.Remove(InKey);
			}
			return RemNum;
		}
		return 0;
	}

	FORCEINLINE int32 Num(TEnumAsByte<EMCBones::Type> InKey) const
	{
		if (InterMap.Contains(InKey))
		{
			return InterMap[InKey].Names.Num();
		}
		return 0;
	}

	FORCEINLINE int32 Num() const
	{
		return InterMap.Num();
	}

private:
	UPROPERTY()
	TMap<TEnumAsByte<EMCBones::Type>, FNamesContainer> InterMap;
};

