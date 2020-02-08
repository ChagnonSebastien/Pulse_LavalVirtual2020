// Copyright 2015 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "BoneLists.h"
#include <mutex>
#include "Async/Async.h"

enum class ECalibrationPose : unsigned char;
enum class EGloveMod : unsigned char;

/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules 
 * within this plugin.
 */
class IMotionCapture : public IModuleInterface
{

public:

	static inline IMotionCapture* GetPtr () {
		static IMotionCapture* g_pMotionCaptureModule = nullptr;
		static std::mutex locker;
		if (!g_pMotionCaptureModule) {
			if (locker.try_lock ()) {
				AsyncTask (ENamedThreads::GameThread, [&]() {
					if (FModuleManager::Get ().IsModuleLoaded ("MotionCaptureRuntime"))
					{
						GLog->Log ("--- IMotionCapture Module Loading Status Checking --- MyAsyncTask");
						g_pMotionCaptureModule = &FModuleManager::LoadModuleChecked<IMotionCapture> ("MotionCaptureRuntime");
					}
					locker.unlock ();
				});
			}
		}

		return g_pMotionCaptureModule;
	}

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IMotionCapture& Get()
	{
		return FModuleManager::LoadModuleChecked< IMotionCapture >("MotionCaptureRuntime");
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "MotionCaptureRuntime" );
	}

	/**
	 * The return Data is type: GloveBVHData
	 */
	virtual void OnReceiveGloveData(const FString& AvartarName, const TArray<uint8>& Data) = 0;

	/**
	 * The return Data is type: HI5BVHData
	 */
	virtual bool GetLocalGloveData (EGloveMod Glove, const FString &AvatarName, TArray<uint8>& Data) = 0;

	/**
	 * Cache calibration progress value which from hybrid data plugin
	 */
	virtual void CacheHybridDataCaliProgress (int32 Pose, int32 percent) = 0;

	/**
	 * Get cached calibration progress
	 */
	virtual void GetCachedHybridDataCaliProgress (ECalibrationPose& Pose, int32& Percent) = 0;

	/**
	 * Get all bones' gesture data in UE4 coordinate system
	 */
	virtual bool GetParsedLocalJointsData (EGloveMod Glove, TArray<FVector>& Positions, TArray<FRotator>& Orientations) = 0;

	/**
	 * Get the specified bone's local position and rotation.
	 */
	virtual bool GetLocalJointData (EGloveMod Glove, EMCBones::Type Bone, FVector& Position, FRotator& Orientation) = 0;
};
