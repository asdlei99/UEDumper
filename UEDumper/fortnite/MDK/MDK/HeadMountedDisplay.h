
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0000 (0x000028 - 0x000028)
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
	// int32_t Conv_HandKeypointToInt32(EHandKeypoint Input);                                                                   // [0x5c6e26c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x0140 (0x000500 - 0x000640)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	DMember(int32_t)                                   PlayerIndex                                                 OFFSET(get<int32_t>, {0x500, 4, 0, 0})
	SMember(FName)                                     MotionSource                                                OFFSET(getStruct<T>, {0x504, 4, 0, 0})
	DMember(bool)                                      bDisableLowLatencyUpdate                                    OFFSET(get<bool>, {0x508, 1, 1, 0})
	CMember(ETrackingStatus)                           CurrentTrackingStatus                                       OFFSET(get<T>, {0x50C, 1, 0, 0})


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x5c6e880] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                           // [0x5c6e800] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x5c6e780] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                        // [0x3d1d968] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                        // [0x5c6e768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                     // [0x5c6e730] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x5c6e638] Final|RequiredAPI|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearVelocity
	// bool GetLinearVelocity(FVector& OutLinearVelocity);                                                                      // [0x5c6e564] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearAcceleration
	// bool GetLinearAcceleration(FVector& OutLinearAcceleration);                                                              // [0x5c6e490] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x5c6e37c] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetAngularVelocity
	// bool GetAngularVelocity(FRotator& OutAngularVelocity);                                                                   // [0x5c6e2e8] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0060 (0x000000 - 0x000060)
class FXRHMDData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     ApplicationInstanceID                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(ETrackingStatus)                           TrackingStatus                                              OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x0120 (0x000000 - 0x000120)
class FXRMotionControllerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     ApplicationInstanceID                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EXRVisualType)                             DeviceVisualType                                            OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EControllerHand)                           HandIndex                                                   OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(ETrackingStatus)                           TrackingStatus                                              OFFSET(get<T>, {0x1A, 1, 0, 0})
	SMember(FVector)                                   GripPosition                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     GripRotation                                                OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FVector)                                   AimPosition                                                 OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FQuat)                                     AimRotation                                                 OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	SMember(FVector)                                   PalmPosition                                                OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FQuat)                                     PalmRotation                                                OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	CMember(TArray<FVector>)                           HandKeyPositions                                            OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FQuat>)                             HandKeyRotations                                            OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<float>)                             HandKeyRadii                                                OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bIsGrasped                                                  OFFSET(get<bool>, {0x110, 1, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (0x000000 - 0x000006)
class FXRGestureConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(bool)                                      bTap                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHold                                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(ESpatialInputGestureAxis)                  AxisGesture                                                 OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisX                                            OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisY                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisZ                                            OFFSET(get<bool>, {0x5, 1, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x0008 (0x000000 - 0x000008)
class FXRDeviceId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SystemName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DeviceID                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX                             = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX                                       = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2,
	EHMDWornState__EHMDWornState_MAX                                                 = 3
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x06
enum EXRDeviceConnectionResult : uint8_t
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
enum EXRSystemFlags : uint8_t
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
enum ESpectatorScreenMode : uint8_t
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
enum EXRTrackedDeviceType : uint8_t
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
enum EHandKeypoint : uint8_t
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
enum EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1,
	EXRVisualType__EXRVisualType_MAX                                                 = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2,
	ETrackingStatus__ETrackingStatus_MAX                                             = 3
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x05
enum ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX                           = 4
};

