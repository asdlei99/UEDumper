
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX                             = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX                                       = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2,
	EHMDWornState__EHMDWornState_MAX                                                 = 3
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x06
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX                         = 5
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x06
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8,
	EXRSystemFlags__EXRSystemFlags_MAX                                               = 9
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x09
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX                                   = 8
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x08
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Tracker                                                    = 3,
	EXRTrackedDeviceType__Other                                                      = 4,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX                                   = 256
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x27
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25,
	EHandKeypoint__EHandKeypoint_MAX                                                 = 26
};

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x03
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1,
	EXRVisualType__EXRVisualType_MAX                                                 = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2,
	ETrackingStatus__ETrackingStatus_MAX                                             = 3
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x05
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX                           = 4
};

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0000 (0x000028 - 0x000028)
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
	// int32_t Conv_HandKeypointToInt32(EHandKeypoint Input);                                                                // [0x5ed3458] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x0140 (0x000570 - 0x0006B0)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0570   (0x0004)  
	FName                                              MotionSource;                                               // 0x0574   (0x0004)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0578:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0579   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x057C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x133];                                     // 0x057D   (0x0133)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                    // [0x5ed3abc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                        // [0x5ed3a14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                     // [0x5ed396c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                     // [0x211c0a0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                     // [0x5ed3954] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                  // [0x5ed391c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                             // [0x5ed3824] Final|RequiredAPI|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearVelocity
	// bool GetLinearVelocity(FVector& OutLinearVelocity);                                                                   // [0x5ed3750] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearAcceleration
	// bool GetLinearAcceleration(FVector& OutLinearAcceleration);                                                           // [0x5ed367c] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                  // [0x5ed3568] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetAngularVelocity
	// bool GetAngularVelocity(FRotator& OutAngularVelocity);                                                                // [0x5ed34d4] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0004)  
	FGuid                                              ApplicationInstanceID;                                      // 0x0008   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FVector                                            Position;                                                   // 0x0020   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0040   (0x0020)  
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x0120 (0x000000 - 0x000120)
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0004)  
	FGuid                                              ApplicationInstanceID;                                      // 0x0008   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x0018   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x0019   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x001B   (0x0005)  MISSED
	FVector                                            GripPosition;                                               // 0x0020   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              GripRotation;                                               // 0x0040   (0x0020)  
	FVector                                            AimPosition;                                                // 0x0060   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FQuat                                              AimRotation;                                                // 0x0080   (0x0020)  
	FVector                                            PalmPosition;                                               // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FQuat                                              PalmRotation;                                               // 0x00C0   (0x0020)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x00E0   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x00F0   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0100   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0110   (0x0001)  
	unsigned char                                      UnknownData05_6[0xF];                                       // 0x0111   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (0x000000 - 0x000006)
struct FXRGestureConfig
{ 
	bool                                               bTap;                                                       // 0x0000   (0x0001)  
	bool                                               bHold;                                                      // 0x0001   (0x0001)  
	ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001)  
	bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001)  
	bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001)  
	bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001)  
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x0008 (0x000000 - 0x000008)
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0004)  
	int32_t                                            DeviceID;                                                   // 0x0004   (0x0004)  
};

