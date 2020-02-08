/**
 * @file        MotionCaptureFunctionLibrary.h
 * @brief       This file contains all APIs that can be used for integrating Noitom Hi5 Glove into unreal engine.
 * @author      Baojing Zhou
 * @date        2017-08-31
 * @details 
 * This plugin works in its own context. Before the context is created, we cannot found Hi5 glove hardware.
 *  So the first thing is to create context. The UMotionCaptureFunctionLibrary::StartMocapService is used to do this, 
 *  and UMotionCaptureFunctionLibrary::StopMocapService is used to destroy the context. 
 *
 * The Hi5 Glove is designed to work with htc vive together: glove captures
 * hand gestures and htc vive tracks the position of the whole hand. But which vive tracker tracks
 * the left hand, and which tracker tracks the right hand? We designed a serials of special poses
 * to solve this problem. 
 * 
 * To setup the relationship between glove and tracker, we need to do an
 * operation called Calibration. Calibration is doing the special poses when calling 
 * UMotionCaptureFunctionLibrary::CalibrationGlove with parameter B-Pose or P-Pose. After B-Pose calibrated correctly, the
 * relationship will be setup. If calibration failed or not satisfied, you can redo it. 
 * UMotionCaptureFunctionLibrary::SaveCalibrationData are used for saving the calibration result to files.
 * Accordingly UMotionCaptureFunctionLibrary::LoadCalibrationData are used for loading those information.
 * 
 * @par         Copyright (c): Noitom
 */

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BoneLists.h"
#include "MotionCaptureFunctionLibrary.generated.h"

/**
 * Defines the calibration pose type.
 */
UENUM(BlueprintType)
enum class ECalibrationPose :uint8
{
	//GCP_Unknown = -1,
	GCP_TPose = 0,
	GCP_APose,
	GCP_PPose,
	GCP_BPose,
	GCP_CPose,
};

/**
 * Defines the hand type.
 */
UENUM(BlueprintType)
enum class EGloveMod :uint8
{
	GlM_BothGloves = 0,
	GlM_LeftGlove,
	GlM_RightGlove,
};

/**
 * Defines the type of Hi5 Glove's position data source.
 */
UENUM(BlueprintType)
enum class EGlovePositionSource :uint8
{
	VivePosition = 0,	///< Hi5 Glove's position is supplied by HTC vive.
	AlicePosition,		///< Not used now.
	Other				///< Not used now.
};

/**
 * Defines Hi5 Glove's battery level.
 */
UENUM(BlueprintType)
enum class EGlovePowerLevel :uint8
{
	Unknown,	///< Cannot get battery info
	Low,		///< Battery level is low.
	Normal,		///< Battery level is normal and enough for normal use.
	Full,		///< Battery level is enough for normal use.
};

/**
 * Defines Hi5 Glove's magnetization level.
 */
UENUM(BlueprintType)
enum class EGloveMagneticedState :uint8
{
	Unknown,
	Bad,		///< Serious magnetization
	Warn,		///< Medium magnetization
	Normal,		///< No magnetization
};

UCLASS()
class MOTIONCAPTURERUNTIME_API UMotionCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	
public:
	UMotionCaptureFunctionLibrary();

	/**
     * Start MocapCapture plugin.
     *
     * @param[in] PosSrc Specify the source of the location data. The value is one of [Vive, Alice, Other].
     * @param[in] ReadLocal If you need read glove data from local Hi5 dongle, pass true. Otherwise, pass false.
     *
     * @retval true Succeeded.
     * @retval false Failed.
     */
	UFUNCTION(BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool StartMocapService(
		EGlovePositionSource PosSrc = EGlovePositionSource::VivePosition,
		bool ReadLocal = true);

	/**
     * Stop the data service
     */
    UFUNCTION(BlueprintCallable, Category = "Motion Capture|Data Service")
	static void StopMocapService();

	/**
     * Calibrate Hi5 glove hardware.
     * In this version, you can use only B and P pose.
     *
     * @param[in] Pose The motion need to calibrate. May be one of [B, P].
     * @param[in] TimeOut (Unit: ms). If the calibration hasn't finished in TimeOut milliseconds, the calibration will stop.
	 *
	 * @note For B-Pose, the TimeOut longer than 5 seconds is recommended. And for P-Pose, the recommended TimeOut is 3 seconds. \
	 * If no Hi5 glove is power on, the function do nothing.
     */
	UFUNCTION(BlueprintCallable, Category = "Motion Capture|Data Service")
	static void CalibrationGlove (ECalibrationPose Pose, int32 TimeOut = 5000);

	/**
     * Query the progress of calibration.
	 *
	 * @return The progress of calibration. The value returned is in range [0,100].
	 *
	 * @note 100 represent that the calibration of current pose complete.
     */
	UFUNCTION(BlueprintCallable, Category = "Motion Capture|Data Service")
	static int32 GetCalibrationProgress();

	/**
     * Get the source type of the location data of hand.
     *
     * @return Vive | Alice | Other
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static EGlovePositionSource GetGlovePositionSource ();

	/**
	 * Load calibration data from default files.
	 *
	 * @retval true Succeeded.
	 * @retval false Failed.
	 *
	 * @note The default files are CalibrationData and OpticalDeviceBindInfo.xml 
	 * which stored in user-based folder: $FOLDERID_RoamingAppData/Hi5.
	 * Eg: C:/Users/your_name/AppData/Roaming/Hi5/CalibrationData.
	 */
	UFUNCTION(BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool LoadCalibrationData ();

	/**
	 * Save calibration data to default files.
	 *
	 * @retval true Succeeded.
	 * @retval false Failed.
	 * 
	 * @note The default files are CalibrationData and OpticalDeviceBindInfo.xml 
	 * which stored in user-based folder: $FOLDERID_RoamingAppData/Hi5.
	 * Eg: C:/Users/your_name/AppData/Roaming/Hi5/CalibrationData.
	 */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool SaveCalibrationData ();

	/**
     * Vibrate left glove.
     *
     * @param[in] GloveTimeSpan Left hand vibration duration.(unit: ms)
	 *
	 * @note The valid value of GloveTimeSpan is in the range [0, 5000].
	 * The value larger than 5000 is equivalent to 5000. The value 0 means stop vibration.
	 * The negative value means do nothing, it's to say the glove keeps the states when calling this function.
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static void VibrateLeftGlove (const int GloveTimeSpan /*ms*/);

	/**
     * Vibrate right glove.
     *
     * @param[in] GloveTimeSpan Right hand vibration duration.(unit: ms)
	 *
	 * @note The valid value of GloveTimeSpan is in the range [0, 5000].
	 * The value larger than 5000 is equivalent to 5000. The value 0 means stop vibration.
	 * The negative value means do nothing, it's to say the glove keeps the states when calling this function.
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static void VibrateRightGlove (const int GloveTimeSpan /*ms*/);

	/**
	 * Vibrate left and right gloves at the same time.
	 *
	 * @param[in] LeftGloveTimeSpan Left hand vibration duration.(unit: ms)
	 * @param[in] RightGloveTimeSpan Right hand vibration duration.(unit: ms)
	 *
	 * @note The valid value of GloveTimeSpan is in the range [0, 5000].
	 * The value larger than 5000 is equivalent to 5000. The value 0 means stop vibration.
	 * The negative value means do nothing, it's to say the glove keeps the states when calling this function.
	 */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static void VibrateGloves (const int LeftGloveTimeSpan /*ms*/, const int RightGloveTimeSpan /*ms*/);

	/**
     * Get the serial number of optical device via its Id.
     *
     * @param[in] Id The id of optical device.
     * @param[out] SN Receive the returned serial number.
     *
     * @retval true Succeeded.
     * @retval false Failed.
     */
	UFUNCTION(BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool GetOptiDeviceSN(int32 Id, FString& SN);

    /**
     * Get current binding relationship between glove and optical device.
     *
     * @param[in] Hand Left or Right hand.
     * @param[out] DeviceSN The serial number of optical device which be bound to Hand.
     *
     * @retval true The hand and optical device are bound together.
     * @retval false There isn't any optical device bound to Hand.
     *
     * @warning Hand must be left or right.
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool GetOptiDeviceBindState (EGloveMod Hand, FString& DeviceSN);

	/**
     * Get glove power level.
     *
     * @param[out] LeftGlove Left glove power level.
     * @param[out] RightGlove Right glove power level.
     *
     * @see EGlovePowerLevel
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static void GetGlovePowerLevel (EGlovePowerLevel& LeftGlove, EGlovePowerLevel& RightGlove);

	/**
     * Get glove magnetization state.
     * 
     * @param[out] LeftGlove Left glove magnetization state.
     * @param[out] RightGlove Right glove magnetization state.
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static void GetGloveMagneticed(EGloveMagneticedState& LeftGlove, EGloveMagneticedState& RightGlove);
    
    /**
     * Check if the specific glove is available.
     *
     * @param[in] Mod Glove type.
     *
     * @retval true Available.
     * @retval false Unavailable.
     *
     * @note When Mod is GlM_BothGloves, the returned value will be true if and only if both gloves available.
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool IsGloveAvailable (EGloveMod Mod);

    /**
     * Check if the dongle is available.
     *
     * @retval true Available.
     * @retval false Unavailable.
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool IsDongleAvailable ();

    /**
     * Get the specific vive tracker or controller's position and rotation in UE space.
     *
     * @param[in] DeviceId The id of vive tracker or controller.
     * @param[out] Position Device position
     * @param[out] Rotation Device rotation
     *
     * @retval true The device is connected and normal tracking.
     * @retval false The device is not connected or abnormal tracking.
     */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool GetTrackedDeviceDataInUESpace (int DeviceId, FVector& Position, FRotator& Rotation);

    /**
	 * Get the ID of the tracker binded to left hand.
	 *
	 * @retval -1 The returned device id is invalid.
	 * @retval other The returned device id is valid.
	 * 
	 * @note The function is meaningless when the glove position source is Alice.
	 */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static int GetLeftTrackerId ();

	/**
	 * Get the ID of the tracker binded to right hand.
	 *
	 * @retval -1 The returned device id is invalid.
	 * @retval other The returned device id is valid.
	 * 
	 * @note The function is meaningless when the glove position source is Alice.
	 */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static int GetRightTrackerId ();

	/**
	* Get hand local gesture data in unreal engine space.
	*
	* @param[in] Glove Left hand or Right hand.
	* @param[out] Positions Joints' position.
	* @param[out] Orientations Joints' orientation.
	*
	* @retval true Succeeded
	* @retval false Failed.
	*
	* @note
	* If you want to get RightHandThumb1's local Position and Orientation, you can do as follow:
	* @code
	* TArray<FVector> Positions;
	* TArray<FRotator> Orientations;
	* GetParsedLocalJointsData(EGloveMod::GlM_LeftGlove, Positions, Orientations);
	* FVector pos = Positions[EMCBones::RightHandThumb1];
	* FRotator rot = Orientations[EMCBones::RightHandThumb1];
	* @endcode
	* In Blueprint, the array index above can be constructed by [Literal enum EMCBones] node.
	* The ForeArm joint's data is meaningless, don't use it.
	*
	* @warning Glove must be left or right.
	*/
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool GetParsedLocalJointsData (EGloveMod Glove, TArray<FVector>& Positions, TArray<FRotator>& Orientations);

	/**
	 * Get local position and rotation of specified bone.
	 *
	 * @param[in] Glove Left hand or Right hand. 
	 * @param[in] Bone Specify bone.
	 * @param[out] Position The local position.
	 * @param[out] Orientation The local rotation.
	 *
	 * @retval true Succeeded
	 * @retval false Failed
	 *
	 * @note The ForeArm joint's data is meaningless, don't use it.
	 */
	UFUNCTION (BlueprintCallable, Category = "Motion Capture|Data Service")
	static bool GetLocalJointData (EGloveMod Glove, EMCBones::Type Bone, FVector& Position, FRotator& Orientation);

		

	/**
     * \cond DOXYGEN_PUBLIC
     */
    
	/////////////////
	// internal use
    // The following interfaces cannot be seen from Blueprint.


	/**
	* Save the binding relationship between glove and optical device to file.
	*
	* @param[in] FileName File name.
	*
	* @retval true Succeeded.
	* @retval false Failed.
	*
	* @note The file is stored in user-based folder: $FOLDERID_RoamingAppData/Hi5. Eg: C:/Users/your_name/AppData/Roaming/Hi5
	* You cannot set absolute path as FileName.
	*/
	static bool SaveOptiDeviceBindStateToFile (const FString& FileName = TEXT ("OpticalDeviceBindInfo.xml"));

	/**
	* Read the binding relationship between glove and optical device from file, and then apply this info.
	*
	* @param[in] FileName File name.
	*
	* @retval true Succeeded.
	* @retval false Failed.
	*
	* @note If you have your own tracker binding state file, you should put it in your ($FOLDERID_RoamingAppData/Hi5) folder.
	* @see UMotionCaptureFunctionLibrary::SaveOptiDeviceBindStateToFile
	*/
	static bool LoadOptiDeviceBindStateFromFile (const FString& FileName = TEXT ("OpticalDeviceBindInfo.xml"));

	/**
	* Save current calibration data to file.
	*
	* @param[in] FileName The calibration data file name.
	*
	* @retval true Succeeded.
	* @retval false Failed.
	*
	* @note The file is stored in user-based folder: $FOLDERID_RoamingAppData/Hi5. Eg: C:/Users/your_name/AppData/Roaming/Hi5.
	* You cannot set absolute path as FileName.
	*/
	static bool SaveCalibrationFile (const FString& FileName = TEXT ("CalibrationData"));

	/**
	* Load calibration data from file and then apply these data to Hi5 glove.
	*
	* @param[in] FileName The calibration data file name.
	*
	* @retval true Succeeded.
	* @retval false Failed.
	*
	* @note If you have your own calibration data file, you should put it in your ($FOLDERID_RoamingAppData/Hi5) folder.
	*/
	static bool LoadCalibrationFile (const FString& FileName = TEXT ("CalibrationData"));

	/**
     * Get the tracker's location and orientation.
     *
     * @param[in] DeviceId Device id
     * @param[out] pos Device Location
     * @param[out] rot Device orientation
     *
     * @retval true Succeeded.
     * @retval false Failed.
     */
	static bool GetTrackedDeviceDataInViveSpace (int DeviceId, float* pos, float* rot);

    /**
     * Convert coordinates from UE space to Vive space.
     *
     * @param[in] Position Position In UE space.
     * @param[in] Rotation Rotation in UE space.
     * @param[out] pos Position in Vive space.
     * @param[out] rot Rotation in Vive space.
     */
	static void UESpace2ViveSpace (const FVector& Position, const FRotator& Rotation, float* pos, float* rot);

	/**
     * Get the Hi5 Glove data from local machine.
     *
     * @param[in] Glove Left or Right
     * @param[in] AvatarName Avatar name.
     * @param[out] Data Glove data. The data type is [HI5BVHData].
     *
     * @retval true Succeeded.
     * @retval false Failed.
     *
     * @warning Glove must be left or right.
     */
	static bool GetLocalGloveData (EGloveMod Glove, const FString &AvatarName, TArray<uint8>& Data);

	/**
     * Some remote glove data arrived.
     *
     * @param[in] AvatarName Avatar name.
     * @param[in] Data The received remote glove data. The data type is [GloveBVHData].
     */
	static void OnReceiveGloveData (const FString& AvartarName, const TArray<uint8>& Data);

	/**
	 * Get gloves' local position relative to the binding optical device. The returned result is in UE space.
	 * 
	 * @param[out] LeftOffset The left glove's offset.
	 * @param[out] RightOffset The right glove's offset.
	 */
	static void GetGloveOffsetToOpticalDevice (FVector& LeftOffset, FVector& RightOffset);

	/**
	 * Set the Id which represent the optical device binded to glove to -1.
	 */
	static void ResetDeviceId ();

	/**
	 * Query the Id of the optical device binded to glove via the device's serial number.
	 */
	static void CacheDeviceId ();

	/**
	 * Get position and rotation of the optical device which was binded to specified glove.
	 * The returned result is in UE space.
	 *
	 * @param[in] Mod Left or Right Hand. Must be GlM_LeftGlove or GlM_RightGlove.
	 * @param[out] Position The optical device's position in UE space.
	 * @param[out] Rotation The optical device's rotation in UE space.
	 *
	 */
	static bool GetBindedOpticalDeviceDataInUESpace (EGloveMod Mod, FVector& Position, FRotator& Rotation);

private:
	static EGlovePositionSource GlovePositionSource;
	static int LeftViveTrackerId;
	static int RightViveTrackerId;

    /**
     * \endcond
     */
};
