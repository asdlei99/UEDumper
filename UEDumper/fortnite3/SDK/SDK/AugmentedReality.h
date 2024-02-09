
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x05
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3,
	EARTrackingState__EARTrackingState_MAX                                           = 4
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x07
enum class EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None                                                      = 0,
	EARSessionConfigFlags__GenerateMeshData                                          = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe                                 = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData                              = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData                                = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion                                   = 16,
	EARSessionConfigFlags__EARSessionConfigFlags_MAX                                 = 17
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x04
enum class EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None                                                   = 0,
	EPlaneComponentDebugMode__ShowNetworkRole                                        = 1,
	EPlaneComponentDebugMode__ShowClassification                                     = 2,
	EPlaneComponentDebugMode__EPlaneComponentDebugMode_MAX                           = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x04
enum class EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None                                                    = 0,
	EFaceComponentDebugMode__ShowEyeVectors                                          = 1,
	EFaceComponentDebugMode__ShowFaceMesh                                            = 2,
	EFaceComponentDebugMode__EFaceComponentDebugMode_MAX                             = 3
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x05
enum class EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly                                            = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation                         = 1,
	EARFaceTransformMixing__ComponentWithTracked                                     = 2,
	EARFaceTransformMixing__TrackingOnly                                             = 3,
	EARFaceTransformMixing__EARFaceTransformMixing_MAX                               = 4
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x03
enum class EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None                                                   = 0,
	EImageComponentDebugMode__ShowDetectedImage                                      = 1,
	EImageComponentDebugMode__EImageComponentDebugMode_MAX                           = 2
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x03
enum class EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None                                                  = 0,
	EQRCodeComponentDebugMode__ShowQRCode                                            = 1,
	EQRCodeComponentDebugMode__EQRCodeComponentDebugMode_MAX                         = 2
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x03
enum class EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None                                                    = 0,
	EPoseComponentDebugMode__ShowSkeleton                                            = 1,
	EPoseComponentDebugMode__EPoseComponentDebugMode_MAX                             = 2
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x03
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None                                               = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData                                        = 1,
	EGeoAnchorComponentDebugMode__EGeoAnchorComponentDebugMode_MAX                   = 2
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x08
enum class EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError                                             = 0,
	EARServiceAvailability__UnknownChecking                                          = 1,
	EARServiceAvailability__UnknownTimedOut                                          = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable                              = 3,
	EARServiceAvailability__SupportedNotInstalled                                    = 4,
	EARServiceAvailability__SupportedVersionTooOld                                   = 5,
	EARServiceAvailability__SupportedInstalled                                       = 6,
	EARServiceAvailability__EARServiceAvailability_MAX                               = 7
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x05
enum class EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed                                        = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible                              = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation                         = 2,
	EARServiceInstallRequestResult__FatalError                                       = 3,
	EARServiceInstallRequestResult__EARServiceInstallRequestResult_MAX               = 4
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x03
enum class EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted                                       = 0,
	EARServicePermissionRequestResult__Denied                                        = 1,
	EARServicePermissionRequestResult__EARServicePermissionRequestResult_MAX         = 2
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x05
enum class EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing                                                = 0,
	EARGeoTrackingState__Localized                                                   = 1,
	EARGeoTrackingState__Localizing                                                  = 2,
	EARGeoTrackingState__NotAvailable                                                = 3,
	EARGeoTrackingState__EARGeoTrackingState_MAX                                     = 4
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x10
enum class EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None                                                  = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation                                = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions                               = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow                                   = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable                                 = 4,
	EARGeoTrackingStateReason__WaitingForLocation                                    = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded                                      = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed                              = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck                           = 8,
	EARGeoTrackingStateReason__EARGeoTrackingStateReason_MAX                         = 9
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x05
enum class EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined                                             = 0,
	EARGeoTrackingAccuracy__Low                                                      = 1,
	EARGeoTrackingAccuracy__Medium                                                   = 2,
	EARGeoTrackingAccuracy__High                                                     = 3,
	EARGeoTrackingAccuracy__EARGeoTrackingAccuracy_MAX                               = 4
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x04
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2,
	EARWorldAlignment__EARWorldAlignment_MAX                                         = 3
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x09
enum class EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__GeoTracking                                                      = 7,
	EARSessionType__EARSessionType_MAX                                               = 8
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x04
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX                                 = 3
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x04
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX                               = 3
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x03
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX                                           = 2
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x04
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX               = 3
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x03
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX                                 = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x07
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__SceneDepth                                            = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth                                    = 5,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX                         = 6
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x04
enum class EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None                                                     = 0,
	EARSceneReconstruction__MeshOnly                                                 = 1,
	EARSceneReconstruction__MeshWithClassification                                   = 2,
	EARSceneReconstruction__EARSceneReconstruction_MAX                               = 3
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x09
enum class EARTextureType : uint8_t
{
	EARTextureType__Unknown                                                          = 0,
	EARTextureType__CameraImage                                                      = 1,
	EARTextureType__CameraDepth                                                      = 2,
	EARTextureType__EnvironmentCapture                                               = 3,
	EARTextureType__PersonSegmentationImage                                          = 4,
	EARTextureType__PersonSegmentationDepth                                          = 5,
	EARTextureType__SceneDepthMap                                                    = 6,
	EARTextureType__SceneDepthConfidenceMap                                          = 7,
	EARTextureType__EARTextureType_MAX                                               = 8
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x04
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2,
	EARDepthQuality__EARDepthQuality_MAX                                             = 3
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x04
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX                                           = 3
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x03
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX                           = 2
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x62
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60,
	EARFaceBlendShape__MAX                                                           = 61
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x03
enum class EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1,
	EAREye__EAREye_MAX                                                               = 2
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x06
enum class EARCaptureType : uint8_t
{
	EARCaptureType__Camera                                                           = 0,
	EARCaptureType__QRCode                                                           = 1,
	EARCaptureType__SpatialMapping                                                   = 2,
	EARCaptureType__SceneUnderstanding                                               = 3,
	EARCaptureType__HandMesh                                                         = 4,
	EARCaptureType__EARCaptureType_MAX                                               = 5
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x06
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8,
	EARLineTraceChannels__EARLineTraceChannels_MAX                                   = 9
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x04
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2,
	EARTrackingQuality__EARTrackingQuality_MAX                                       = 3
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x08
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__InsufficientLight                                      = 5,
	EARTrackingQualityReason__BadState                                               = 6,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX                           = 7
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x08
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6,
	EARSessionStatus__EARSessionStatus_MAX                                           = 7
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x05
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3,
	EARWorldMappingState__EARWorldMappingState_MAX                                   = 4
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x04
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX                                     = 3
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x15
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__Door                                                    = 12,
	EARObjectClassification__Window                                                  = 13,
	EARObjectClassification__EARObjectClassification_MAX                             = 14
};

/// Enum /Script/AugmentedReality.EARSpatialMeshUsageFlags
/// Size: 0x04
enum class EARSpatialMeshUsageFlags : uint8_t
{
	EARSpatialMeshUsageFlags__NotApplicable                                          = 0,
	EARSpatialMeshUsageFlags__Visible                                                = 1,
	EARSpatialMeshUsageFlags__Collision                                              = 2,
	EARSpatialMeshUsageFlags__EARSpatialMeshUsageFlags_MAX                           = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x03
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX                               = 2
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x05
enum class EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise                                                       = 0,
	EARAltitudeSource__Coarse                                                        = 1,
	EARAltitudeSource__UserDefined                                                   = 2,
	EARAltitudeSource__Unknown                                                       = 3,
	EARAltitudeSource__EARAltitudeSource_MAX                                         = 4
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x03
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX                   = 2
};

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AARActor : public AActor
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARActor.AddARComponent
	// class UARComponent* AddARComponent(class UClass* InComponentClass, FGuid& NativeID);                                  // [0xc309478] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent
	// void UnpinComponent(class USceneComponent* ComponentToUnpin);                                                         // [0xc3144ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	// bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);                                                        // [0xc31435c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession
	// void StopARSession();                                                                                                 // [0xc314348] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession
	// void StartARSession(class UARSessionConfig* SessionConfig);                                                           // [0xc314018] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	// void SetEnabledXRCamera(bool bOnOff);                                                                                 // [0xc312a5c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	// void SetARWorldScale(float InWorldScale);                                                                             // [0xc311e84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	// void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // [0xc311c28] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	// void SetAlignmentTransform(FTransform& InAlignmentTransform);                                                         // [0xc311f90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	// bool SaveARPinToLocalStore(FName InSaveName, class UARPin* InPin);                                                    // [0xc310cac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	// FIntPoint ResizeXRCamera(FIntPoint& InSize);                                                                          // [0xc310c1c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin
	// void RemovePin(class UARPin* PinToRemove);                                                                            // [0xc310948] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	// void RemoveARPinFromLocalStore(FName InSaveName);                                                                     // [0xc310698] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	// void RemoveAllARPinsFromLocalStore();                                                                                 // [0xc310748] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	// class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, FARTraceResult& TraceResult, FName DebugName); // [0xc310464] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	// bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);                                   // [0xc310324] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent
	// class UARPin* PinComponent(class USceneComponent* ComponentToPin, FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, FName DebugName); // [0xc3100b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession
	// void PauseARSession();                                                                                                // [0xc31009c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	// TMap<FName, UARPin*> LoadARPinsFromLocalStore();                                                                      // [0xc30fff8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	// TArray<FARTraceResult> LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0xc30f990] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	// TArray<FARTraceResult> LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0xc30fd10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	// bool IsSessionTypeSupported(EARSessionType SessionType);                                                              // [0xc30f8b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	// bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature); // [0xc30f774] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	// bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);    // [0xc30f634] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported
	// bool IsARSupported();                                                                                                 // [0xc30f610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	// bool IsARPinLocalStoreSupported();                                                                                    // [0xc30f5ec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	// bool IsARPinLocalStoreReady();                                                                                        // [0xc30f5c8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	// EARWorldMappingState GetWorldMappingStatus();                                                                         // [0xc30f20c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	// EARTrackingQualityReason GetTrackingQualityReason();                                                                  // [0xc30f1b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	// EARTrackingQuality GetTrackingQuality();                                                                              // [0xc30f194] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	// TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);                                          // [0xc30eef4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	// class UARSessionConfig* GetSessionConfig();                                                                           // [0xc30eea4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud
	// TArray<FVector> GetPointCloud();                                                                                      // [0xc30ee64] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	// bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff); // [0xc30e7f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	// int32_t GetNumberOfTrackedFacesSupported();                                                                           // [0xc30e7cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	// class UARLightEstimate* GetCurrentLightEstimate();                                                                    // [0xc30de8c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	// bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);                                                   // [0xc30dd2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	// float GetARWorldScale();                                                                                              // [0xc30d764] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture
	// class UARTexture* GetARTexture(EARTextureType TextureType);                                                           // [0xc30d6a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	// FARSessionStatus GetARSessionStatus();                                                                                // [0xc30d654] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	// TArray<FARPose2D> GetAllTracked2DPoses();                                                                             // [0xc30da40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins
	// TArray<UARPin*> GetAllPins();                                                                                         // [0xc30da04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	// TArray<UARTrackedGeometry*> GetAllGeometriesByClass(class UClass* GeometryClass);                                     // [0xc30d824] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	// TArray<UARTrackedGeometry*> GetAllGeometries();                                                                       // [0xc30d7e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	// FTransform GetAlignmentTransform();                                                                                   // [0xc30d78c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	// TArray<UARTrackedPoint*> FindTrackedPointsByName(FString PointName);                                                  // [0xc30cf24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	// void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds); // [0xc30cc30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	// void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds); // [0xc30c93c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	// void CalculateClosestIntersection(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, FVector& ClosestIntersection); // [0xc30bc30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	// void CalculateAlignmentTransform(FTransform& TransformInFirstCoordinateSystem, FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform); // [0xc30ba0c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	// bool AddTrackedPointWithName(FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);          // [0xc30b1f4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	// class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth); // [0xc30a994] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	// bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);                                              // [0xc30a820] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	// class UARTrackedGeometry* GetTrackedGeometry(FARTraceResult& TraceResult);                                            // [0xc30f0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	// EARLineTraceChannels GetTraceChannel(FARTraceResult& TraceResult);                                                    // [0xc30efec] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	// FTransform GetLocalTransform(FARTraceResult& TraceResult);                                                            // [0xc30e6a8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform(FARTraceResult& TraceResult);                                                     // [0xc30e53c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform(FARTraceResult& TraceResult);                                                  // [0xc30e3d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	// float GetDistanceFromCamera(FARTraceResult& TraceResult);                                                             // [0xc30def0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0030 (0x000050 - 0x000080)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,11734) /* FMulticastInlineDelegate */ __um(OnSuccess);                                        // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,11735) /* FMulticastInlineDelegate */ __um(OnFailed);                                         // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	// class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);                            // [0xc30939c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,11736) /* FMulticastInlineDelegate */ __um(OnSuccess);                                        // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,11737) /* FMulticastInlineDelegate */ __um(OnFailed);                                         // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0070   (0x0040)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent); // [0xc30917c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x0080 (0x000220 - 0x0002A0)
class UARComponent : public USceneComponent
{ 
public:
	FGuid                                              NativeID;                                                   // 0x0220   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0230   (0x0030)  MISSED
	bool                                               bUseDefaultReplication;                                     // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0261   (0x0007)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0268   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0270   (0x0008)  
	class UMRMeshComponent*                            MRMeshComponent;                                            // 0x0278   (0x0008)  
	class UARTrackedGeometry*                          MyTrackedGeometry;                                          // 0x0280   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0288   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization
	// void UpdateVisualization();                                                                                           // [0x65abb30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.SetNativeID
	// void SetNativeID(FGuid NativeID);                                                                                     // [0xc3136c8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove
	// void ReceiveRemove();                                                                                                 // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload
	// void OnRep_Payload();                                                                                                 // [0x95ddc8c] Native|Protected     
	// Function /Script/AugmentedReality.ARComponent.GetMRMesh
	// class UMRMeshComponent* GetMRMesh();                                                                                  // [0xc30e798] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (0x000000 - 0x000018)
struct FARSessionPayload
{ 
	int32_t                                            ConfigFlags;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0008   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FARPlaneUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	FVector                                            Center;                                                     // 0x0080   (0x0018)  
	FVector                                            Extents;                                                    // 0x0098   (0x0018)  
	TArray<FVector>                                    BoundaryVertices;                                           // 0x00B0   (0x0010)  
	EARObjectClassification                            ObjectClassification;                                       // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00C1   (0x000F)  MISSED
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x00D0 (0x0002A0 - 0x000370)
class UARPlaneComponent : public UARComponent
{ 
public:
	FARPlaneUpdatePayload                              ReplicatedPayload;                                          // 0x02A0   (0x00D0)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	// void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);                                               // [0xc313864] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	// void SetObjectClassificationDebugColors(TMap<EARObjectClassification, FLinearColor>& InColors);                       // [0xc31378c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload);                                                           // [0xc31167c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPlaneUpdatePayload& Payload);                                                                   // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
	// void ReceiveAdd(FARPlaneUpdatePayload& Payload);                                                                      // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	// TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();                                     // [0xc30ee0c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (0x000000 - 0x000001)
struct FARPointUpdatePayload
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x0010 (0x0002A0 - 0x0002B0)
class UARPointComponent : public UARComponent
{ 
public:
	FARPointUpdatePayload                              ReplicatedPayload;                                          // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02A1   (0x000F)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPointUpdatePayload NewPayload);                                                           // [0xc311798] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPointUpdatePayload& Payload);                                                                   // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
	// void ReceiveAdd(FARPointUpdatePayload& Payload);                                                                      // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FARFaceUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	FVector                                            LeftEyePosition;                                            // 0x0018   (0x0018)  
	FVector                                            RightEyePosition;                                           // 0x0030   (0x0018)  
	FVector                                            LookAtTarget;                                               // 0x0048   (0x0018)  
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x0090 (0x0002A0 - 0x000330)
class UARFaceComponent : public UARComponent
{ 
public:
	EARFaceTransformMixing                             TransformSetting;                                           // 0x02A0   (0x0001)  
	bool                                               bUpdateVertexNormal;                                        // 0x02A1   (0x0001)  
	bool                                               bFaceOutOfScreen;                                           // 0x02A2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x02A3   (0x0005)  MISSED
	FARFaceUpdatePayload                               ReplicatedPayload;                                          // 0x02A8   (0x0060)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0308   (0x0028)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	// void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);                                                 // [0xc312c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);                                                            // [0xc311204] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
	// void ReceiveUpdate(FARFaceUpdatePayload& Payload);                                                                    // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
	// void ReceiveAdd(FARFaceUpdatePayload& Payload);                                                                       // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FARImageUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	class UARCandidateImage*                           DetectedImage;                                              // 0x0080   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x00A0 (0x0002A0 - 0x000340)
class UARImageComponent : public UARComponent
{ 
public:
	FARImageUpdatePayload                              ReplicatedPayload;                                          // 0x02A0   (0x00A0)  


	/// Functions
	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	// void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);                                               // [0xc313610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARImageUpdatePayload NewPayload);                                                           // [0xc311410] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
	// void ReceiveUpdate(FARImageUpdatePayload& Payload);                                                                   // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
	// void ReceiveAdd(FARImageUpdatePayload& Payload);                                                                      // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FARQRCodeUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	FVector                                            Extents;                                                    // 0x0080   (0x0018)  
	SDK_UNDEFINED(16,11738) /* FString */              __um(QRCode);                                               // 0x0098   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x00B0 (0x0002A0 - 0x000350)
class UARQRCodeComponent : public UARComponent
{ 
public:
	FARQRCodeUpdatePayload                             ReplicatedPayload;                                          // 0x02A0   (0x00B0)  


	/// Functions
	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	// void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);                                             // [0xc313b04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload);                                                          // [0xc3119dc] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	// void ReceiveUpdate(FARQRCodeUpdatePayload& Payload);                                                                  // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
	// void ReceiveAdd(FARQRCodeUpdatePayload& Payload);                                                                     // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0070 (0x000000 - 0x000070)
struct FARPoseUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0060   (0x0010)  
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0070 (0x0002A0 - 0x000310)
class UARPoseComponent : public UARComponent
{ 
public:
	FARPoseUpdatePayload                               ReplicatedPayload;                                          // 0x02A0   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	// void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);                                                 // [0xc31391c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPoseUpdatePayload NewPayload);                                                            // [0xc311874] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPoseUpdatePayload& Payload);                                                                    // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
	// void ReceiveAdd(FARPoseUpdatePayload& Payload);                                                                       // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FAREnvironmentProbeUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0060 (0x0002A0 - 0x000300)
class UAREnvironmentProbeComponent : public UARComponent
{ 
public:
	FAREnvironmentProbeUpdatePayload                   ReplicatedPayload;                                          // 0x02A0   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload);                                                // [0xc3110b4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	// void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload);                                                        // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	// void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload);                                                           // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FARObjectUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0060 (0x0002A0 - 0x000300)
class UARObjectComponent : public UARComponent
{ 
public:
	FARObjectUpdatePayload                             ReplicatedPayload;                                          // 0x02A0   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARObjectUpdatePayload NewPayload);                                                          // [0xc3110b4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
	// void ReceiveUpdate(FARObjectUpdatePayload& Payload);                                                                  // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
	// void ReceiveAdd(FARObjectUpdatePayload& Payload);                                                                     // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0090 (0x000000 - 0x000090)
struct FARMeshUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0081   (0x000F)  MISSED
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x0090 (0x0002A0 - 0x000330)
class UARMeshComponent : public UARComponent
{ 
public:
	FARMeshUpdatePayload                               ReplicatedPayload;                                          // 0x02A0   (0x0090)  


	/// Functions
	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARMeshUpdatePayload NewPayload);                                                            // [0xc311520] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
	// void ReceiveUpdate(FARMeshUpdatePayload& Payload);                                                                    // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
	// void ReceiveAdd(FARMeshUpdatePayload& Payload);                                                                       // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FARGeoAnchorUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	float                                              Longitude;                                                  // 0x0080   (0x0004)  
	float                                              Latitude;                                                   // 0x0084   (0x0004)  
	float                                              AltitudeMeters;                                             // 0x0088   (0x0004)  
	EARAltitudeSource                                  AltitudeSource;                                             // 0x008C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	SDK_UNDEFINED(16,11739) /* FString */              __um(AnchorName);                                           // 0x0090   (0x0010)  
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x00A0 (0x0002A0 - 0x000340)
class UARGeoAnchorComponent : public UARComponent
{ 
public:
	FARGeoAnchorUpdatePayload                          ReplicatedPayload;                                          // 0x02A0   (0x00A0)  


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	// void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);                                       // [0xc313558] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload);                                                       // [0xc3112f4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	// void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload);                                                               // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	// void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload);                                                                  // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UARDependencyHandler : public UObject
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARDependencyHandler.StartARSessionLatent
	// void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo); // [0xc31416c] Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	// void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult); // [0xc3109f8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.InstallARService
	// void InstallARService(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult); // [0xc30f41c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	// class UARDependencyHandler* GetARDependencyHandler();                                                                 // [0xc30d630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	// void CheckARServiceAvailability(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability); // [0xc30be38] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UARGeoTrackingSupport : public UObject
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	// class UARGeoTrackingSupport* GetGeoTrackingSupport();                                                                 // [0xc30e214] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	// EARGeoTrackingStateReason GetGeoTrackingStateReason();                                                                // [0x6075774] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	// EARGeoTrackingState GetGeoTrackingState();                                                                            // [0x349af2c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	// EARGeoTrackingAccuracy GetGeoTrackingAccuracy();                                                                      // [0x60e368c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	// bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName); // [0xc309fb8] Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	// bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);                             // [0xc3097d4] Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,11740) /* FMulticastInlineDelegate */ __um(OnSuccess);                                        // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,11741) /* FMulticastInlineDelegate */ __um(OnFailed);                                         // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	// void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);                            // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude); // [0xc30c0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject); // [0xc30bfe4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x0058 (0x000050 - 0x0000A8)
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,11742) /* FMulticastInlineDelegate */ __um(OnSuccess);                                        // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,11743) /* FMulticastInlineDelegate */ __um(OnFailed);                                         // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0070   (0x0038)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	// void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);       // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	// class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, FVector& WorldPosition); // [0xc30e094] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UARLifeCycleComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,11744) /* FMulticastInlineDelegate */ __um(OnARActorSpawnedDelegate);                         // 0x0220   (0x0010)  
	SDK_UNDEFINED(16,11745) /* FMulticastInlineDelegate */ __um(OnARActorToBeDestroyedDelegate);                   // 0x0230   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0240   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	// void ServerSpawnARActor(class UClass* ComponentClass, FGuid NativeID);                                                // [0xc310f1c] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	// void ServerDestroyARActor(class AARActor* Actor);                                                                     // [0xc310dec] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	// void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);                                  // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	// void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor); // [0x2047e54] MulticastDelegate|Public|Delegate|HasDefaults 
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0000 (0x000028 - 0x000028)
class UARLightEstimate : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0018 (0x000028 - 0x000040)
class UARBasicLightEstimate : public UARLightEstimate
{ 
public:
	float                                              AmbientIntensityLumens;                                     // 0x0028   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x002C   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	// float GetAmbientIntensityLumens();                                                                                    // [0x6743f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	// float GetAmbientColorTemperatureKelvin();                                                                             // [0x6744118] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	// FLinearColor GetAmbientColor();                                                                                       // [0xc30dadc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AAROriginActor : public AActor
{ 
public:
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x0128 (0x000028 - 0x000150)
class UARPin : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0028   (0x0008)  
	class USceneComponent*                             PinnedComponent;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0060)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x00A0   (0x0060)  
	EARTrackingState                                   TrackingState;                                              // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1F];                                      // 0x0101   (0x001F)  MISSED
	SDK_UNDEFINED(16,11746) /* FMulticastInlineDelegate */ __um(OnARTrackingStateChanged);                         // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,11747) /* FMulticastInlineDelegate */ __um(OnARTransformUpdated);                             // 0x0130   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	// EARTrackingState GetTrackingState();                                                                                  // [0xa838428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	// class UARTrackedGeometry* GetTrackedGeometry();                                                                       // [0x7a2e0f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	// class USceneComponent* GetPinnedComponent();                                                                          // [0x61cb750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform();                                                                                // [0xc30e4c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform();                                                                             // [0xc30e378] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	// FName GetDebugName();                                                                                                 // [0xc30deb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	// void DebugDraw(class UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);                       // [0xc30c738] Native|Public|HasOutParms|HasDefaults|Const 
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (0x000000 - 0x00000C)
struct FARVideoFormat
{ 
	int32_t                                            FPS;                                                        // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x00E0 (0x000030 - 0x000110)
class UARSessionConfig : public UDataAsset
{ 
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0030   (0x0001)  
	bool                                               bGenerateCollisionForMeshData;                              // 0x0031   (0x0001)  
	bool                                               bGenerateNavMeshForMeshData;                                // 0x0032   (0x0001)  
	bool                                               bUseMeshDataForOcclusion;                                   // 0x0033   (0x0001)  
	bool                                               bRenderMeshDataInWireframe;                                 // 0x0034   (0x0001)  
	bool                                               bTrackSceneObjects;                                         // 0x0035   (0x0001)  
	bool                                               bUsePersonSegmentationForOcclusion;                         // 0x0036   (0x0001)  
	bool                                               bUseSceneDepthForOcclusion;                                 // 0x0037   (0x0001)  
	bool                                               bUseAutomaticImageScaleEstimation;                          // 0x0038   (0x0001)  
	bool                                               bUseStandardOnboardingUX;                                   // 0x0039   (0x0001)  
	EARWorldAlignment                                  WorldAlignment;                                             // 0x003A   (0x0001)  
	EARSessionType                                     SessionType;                                                // 0x003B   (0x0001)  
	EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x003C   (0x0001)  
	bool                                               bHorizontalPlaneDetection;                                  // 0x003D   (0x0001)  
	bool                                               bVerticalPlaneDetection;                                    // 0x003E   (0x0001)  
	bool                                               bEnableAutoFocus;                                           // 0x003F   (0x0001)  
	EARLightEstimationMode                             LightEstimationMode;                                        // 0x0040   (0x0001)  
	EARFrameSyncMode                                   FrameSyncMode;                                              // 0x0041   (0x0001)  
	bool                                               bEnableAutomaticCameraOverlay;                              // 0x0042   (0x0001)  
	bool                                               bEnableAutomaticCameraTracking;                             // 0x0043   (0x0001)  
	bool                                               bResetCameraTracking;                                       // 0x0044   (0x0001)  
	bool                                               bResetTrackedObjects;                                       // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0046   (0x0002)  MISSED
	TArray<class UARCandidateImage*>                   CandidateImages;                                            // 0x0048   (0x0010)  
	int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0058   (0x0004)  
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<char>                                       WorldMapData;                                               // 0x0060   (0x0010)  
	TArray<class UARCandidateObject*>                  CandidateObjects;                                           // 0x0070   (0x0010)  
	FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0080   (0x000C)  
	bool                                               bUseOptimalVideoFormat;                                     // 0x008C   (0x0001)  
	EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x008D   (0x0001)  
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x008E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x008F   (0x0001)  MISSED
	int32_t                                            MaxNumberOfTrackedFaces;                                    // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x0098   (0x0010)  
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00A8   (0x0001)  
	EARSceneReconstruction                             SceneReconstructionMethod;                                  // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	class UClass*                                      PlaneComponentClass;                                        // 0x00B0   (0x0008)  
	class UClass*                                      PointComponentClass;                                        // 0x00B8   (0x0008)  
	class UClass*                                      FaceComponentClass;                                         // 0x00C0   (0x0008)  
	class UClass*                                      ImageComponentClass;                                        // 0x00C8   (0x0008)  
	class UClass*                                      QRCodeComponentClass;                                       // 0x00D0   (0x0008)  
	class UClass*                                      PoseComponentClass;                                         // 0x00D8   (0x0008)  
	class UClass*                                      EnvironmentProbeComponentClass;                             // 0x00E0   (0x0008)  
	class UClass*                                      ObjectComponentClass;                                       // 0x00E8   (0x0008)  
	class UClass*                                      MeshComponentClass;                                         // 0x00F0   (0x0008)  
	class UClass*                                      GeoAnchorComponentClass;                                    // 0x00F8   (0x0008)  
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0100   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	// bool ShouldResetTrackedObjects();                                                                                     // [0xc314004] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	// bool ShouldResetCameraTracking();                                                                                     // [0xbb1b1b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	// bool ShouldRenderCameraOverlay();                                                                                     // [0xbac0bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	// bool ShouldEnableCameraTracking();                                                                                    // [0xc313ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	// bool ShouldEnableAutoFocus();                                                                                         // [0xc313fdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	// void SetWorldMapData(TArray<char> WorldMapData);                                                                      // [0xc313eb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	// void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);                           // [0xc313df4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	// void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);                                // [0xc313d34] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	// void SetResetTrackedObjects(bool bNewValue);                                                                          // [0xc313c78] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	// void SetResetCameraTracking(bool bNewValue);                                                                          // [0xc313bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	// void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);                                                           // [0xc312da8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	// void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);                                                  // [0xc312ce8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	// void SetEnableAutoFocus(bool bNewValue);                                                                              // [0xc3129a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	// void SetDesiredVideoFormat(FARVideoFormat NewFormat);                                                                 // [0xc3128d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	// void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                         // [0xc3121c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.RemoveCandidateImageAtIndex
	// void RemoveCandidateImageAtIndex(int32_t Index);                                                                      // [0xc31083c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.RemoveCandidateImage
	// void RemoveCandidateImage(class UARCandidateImage* CandidateImage);                                                   // [0xc31075c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	// TArray<char> GetWorldMapData();                                                                                       // [0xc30f1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	// EARWorldAlignment GetWorldAlignment();                                                                                // [0xc30f1dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	// EARSessionType GetSessionType();                                                                                      // [0xc30eec8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	// EARSceneReconstruction GetSceneReconstructionMethod();                                                                // [0xad6f494] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	// EARPlaneDetectionMode GetPlaneDetectionMode();                                                                        // [0xc30ee40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	// int32_t GetMaxNumSimultaneousImagesTracked();                                                                         // [0x6371cac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	// EARLightEstimationMode GetLightEstimationMode();                                                                      // [0x8f018b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	// EARFrameSyncMode GetFrameSyncMode();                                                                                  // [0xc30e064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	// EARFaceTrackingUpdate GetFaceTrackingUpdate();                                                                        // [0xc30e04c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	// EARFaceTrackingDirection GetFaceTrackingDirection();                                                                  // [0xc30e034] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	// EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();                                                      // [0xc30dfb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	// EARSessionTrackingFeature GetEnabledSessionTrackingFeature();                                                         // [0xad6f994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	// FARVideoFormat GetDesiredVideoFormat();                                                                               // [0xc30dec8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	// TArray<UARCandidateObject*> GetCandidateObjectList();                                                                 // [0xc30ddec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	// TArray<UARCandidateImage*> GetCandidateImageList();                                                                   // [0xb55ef38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ClearCandidateImages
	// void ClearCandidateImages();                                                                                          // [0xc30c27c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	// void AddCandidateObject(class UARCandidateObject* CandidateObject);                                                   // [0xc3096dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	// void AddCandidateImage(class UARCandidateImage* NewCandidateImage);                                                   // [0xc30961c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0068 (0x000378 - 0x0003E0)
class AARSharedWorldGameMode : public AGameMode
{ 
public:
	int32_t                                            BufferSizePerChunk;                                         // 0x0378   (0x0004)  
	unsigned char                                      UnknownData00_6[0x64];                                      // 0x037C   (0x0064)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	// void SetPreviewImageData(TArray<char> ImageData);                                                                     // [0xc3139d4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	// void SetARWorldSharingIsReady();                                                                                      // [0xc311f38] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	// void SetARSharedWorldData(TArray<char> ARWorldData);                                                                  // [0xc311af8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	// class AARSharedWorldGameState* GetARSharedWorldGameState();                                                           // [0xa6cdd64] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0038 (0x000300 - 0x000338)
class AARSharedWorldGameState : public AGameState
{ 
public:
	TArray<char>                                       PreviewImageData;                                           // 0x0300   (0x0010)  
	TArray<char>                                       ARWorldData;                                                // 0x0310   (0x0010)  
	int32_t                                            PreviewImageBytesTotal;                                     // 0x0320   (0x0004)  
	int32_t                                            ARWorldBytesTotal;                                          // 0x0324   (0x0004)  
	int32_t                                            PreviewImageBytesDelivered;                                 // 0x0328   (0x0004)  
	int32_t                                            ARWorldBytesDelivered;                                      // 0x032C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0330   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	// void K2_OnARWorldMapIsReady();                                                                                        // [0x2047e54] Event|Public|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0008 (0x0006F8 - 0x000700)
class AARSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x06F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	// void ServerMarkReadyForReceiving();                                                                                   // [0xc310ed0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	// void ClientUpdatePreviewImageData(int32_t Offset, TArray<char> Buffer);                                               // [0xc30c5ac] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	// void ClientUpdateARWorldData(int32_t Offset, TArray<char> Buffer);                                                    // [0xc30c420] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	// void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);                                        // [0xc30c2ac] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x0010 (0x0002A0 - 0x0002B0)
class AARSkyLight : public ASkyLight
{ 
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                               // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	// void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);                                    // [0xc312b10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0020 (0x000130 - 0x000150)
class UARTexture : public UTexture
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x0134   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0138   (0x0010)  
	FVector2f                                          Size;                                                       // 0x0148   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x0000 (0x000150 - 0x000150)
class UARTextureCameraImage : public UARTexture
{ 
public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0008 (0x000150 - 0x000158)
class UARTextureCameraDepth : public UARTexture
{ 
public:
	EARDepthQuality                                    DepthQuality;                                               // 0x0150   (0x0001)  
	EARDepthAccuracy                                   DepthAccuracy;                                              // 0x0151   (0x0001)  
	bool                                               bIsTemporallySmoothed;                                      // 0x0152   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0153   (0x0005)  MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0020 (0x000138 - 0x000158)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x013C   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0140   (0x0010)  
	FVector2f                                          Size;                                                       // 0x0150   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultDummy : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x0138 (0x000028 - 0x000160)
#pragma pack(push, 0x1)
class alignas(0x10) 
UARTrackedGeometry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGuid                                              UniqueID;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0060)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x00A0   (0x0060)  
	EARTrackingState                                   TrackingState;                                              // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x0101   (0x000F)  MISSED
	class UMRMeshComponent*                            UnderlyingMesh;                                             // 0x0110   (0x0008)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0118   (0x0001)  
	EARSpatialMeshUsageFlags                           SpatialMeshUsageFlags;                                      // 0x0119   (0x0001)  
	unsigned char                                      UnknownData03_5[0x16];                                      // 0x011A   (0x0016)  MISSED
	int32_t                                            LastUpdateFrameNumber;                                      // 0x0130   (0x0004)  
	unsigned char                                      UnknownData04_5[0xC];                                       // 0x0134   (0x000C)  MISSED
	FName                                              DebugName;                                                  // 0x0140   (0x0004)  
	unsigned char                                      UnknownData05_6[0x14];                                      // 0x0144   (0x0014)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	// bool IsTracked();                                                                                                     // [0xc30f974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	// bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag);                                                        // [0xc30f34c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	// class UMRMeshComponent* GetUnderlyingMesh();                                                                          // [0xabef0a8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	// EARTrackingState GetTrackingState();                                                                                  // [0xa838428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	// EARObjectClassification GetObjectClassification();                                                                    // [0x5f1a494] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName
	// FString GetName();                                                                                                    // [0xc30e7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform();                                                                                // [0xc30e62c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform();                                                                             // [0xc30e378] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	// float GetLastUpdateTimestamp();                                                                                       // [0xc30e238] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	// int32_t GetLastUpdateFrameNumber();                                                                                   // [0x95af880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	// FName GetDebugName();                                                                                                 // [0x6eeaab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0050 (0x000160 - 0x0001B0)
class UARPlaneGeometry : public UARTrackedGeometry
{ 
public:
	EARPlaneOrientation                                orientation;                                                // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0159   (0x0007)  MISSED
	FVector                                            Center;                                                     // 0x0160   (0x0018)  
	FVector                                            Extent;                                                     // 0x0178   (0x0018)  
	TArray<FVector>                                    BoundaryPolygon;                                            // 0x0190   (0x0010)  
	class UARPlaneGeometry*                            SubsumedBy;                                                 // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	// class UARPlaneGeometry* GetSubsumedBy();                                                                              // [0xc30eedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	// EARPlaneOrientation GetOrientation();                                                                                 // [0xc30ee28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	// FVector GetExtent();                                                                                                  // [0xc30e00c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	// FVector GetCenter();                                                                                                  // [0xc30de64] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	// TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                     // [0xc30dc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0000 (0x000160 - 0x000160)
class UARTrackedPoint : public UARTrackedGeometry
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0010 (0x000160 - 0x000170)
class UARTrackedImage : public UARTrackedGeometry
{ 
public:
	class UARCandidateImage*                           DetectedImage;                                              // 0x0158   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0160   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	// FVector2D GetEstimateSize();                                                                                          // [0xc30dfc8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	// class UARCandidateImage* GetDetectedImage();                                                                          // [0x34193e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0020 (0x000170 - 0x000190)
class UARTrackedQRCode : public UARTrackedImage
{ 
public:
	SDK_UNDEFINED(16,11748) /* FString */              __um(QRCode);                                               // 0x0170   (0x0010)  
	int32_t                                            Version;                                                    // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0184   (0x000C)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x0160 (0x000160 - 0x0002C0)
class UARFaceGeometry : public UARTrackedGeometry
{ 
public:
	FVector                                            LookAtTarget;                                               // 0x0158   (0x0018)  
	bool                                               bIsTracked;                                                 // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0171   (0x0007)  MISSED
	SDK_UNDEFINED(80,11749) /* TMap<EARFaceBlendShape, float> */ __um(BlendShapes);                                // 0x0178   (0x0050)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x01C8   (0x0038)  MISSED
	FTransform                                         LeftEyeTransform;                                           // 0x0200   (0x0060)  
	FTransform                                         RightEyeTransform;                                          // 0x0260   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	// FTransform GetWorldSpaceEyeTransform(EAREye Eye);                                                                     // [0xc30f230] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	// FTransform GetLocalSpaceEyeTransform(EAREye Eye);                                                                     // [0xc30e270] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	// float GetBlendShapeValue(EARFaceBlendShape BlendShape);                                                               // [0xc30daf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	// TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                      // [0xc30dbc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0020 (0x000160 - 0x000180)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
public:
	FVector                                            Extent;                                                     // 0x0158   (0x0018)  
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                  // 0x0170   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0178   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	// FVector GetExtent();                                                                                                  // [0xc30dfe4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	// class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();                                              // [0x911fa1c] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0000 (0x000160 - 0x000160)
class UARTrackedObject : public UARTrackedGeometry
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	// class UARCandidateObject* GetDetectedObject();                                                                        // [0x34193e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FARSkeletonDefinition
{ 
	int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (0x000000 - 0x000050)
struct FARPose3D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
	EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0050 (0x000160 - 0x0001B0)
class UARTrackedPose : public UARTrackedGeometry
{ 
public:
	FARPose3D                                          TrackedPose;                                                // 0x0158   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
	// FARPose3D GetTrackedPoseData();                                                                                       // [0xc30f178] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0000 (0x000160 - 0x000160)
class UARMeshGeometry : public UARTrackedGeometry
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	// bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff); // [0xc30eaf4] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0010 (0x000160 - 0x000170)
class UARGeoAnchor : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0158   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLongitude
	// float GetLongitude();                                                                                                 // [0x6159458] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLatitude
	// float GetLatitude();                                                                                                  // [0xc30e258] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeSource
	// EARAltitudeSource GetAltitudeSource();                                                                                // [0xb409b68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	// float GetAltitudeMeters();                                                                                            // [0x98791d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0150 (0x0000A0 - 0x0001F0)
class UARTrackableNotifyComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,11750) /* FMulticastInlineDelegate */ __um(OnAddTrackedGeometry);                             // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,11751) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedGeometry);                          // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,11752) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedGeometry);                          // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,11753) /* FMulticastInlineDelegate */ __um(OnAddTrackedPlane);                                // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,11754) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedPlane);                             // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,11755) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedPlane);                             // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,11756) /* FMulticastInlineDelegate */ __um(OnAddTrackedPoint);                                // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,11757) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedPoint);                             // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,11758) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedPoint);                             // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,11759) /* FMulticastInlineDelegate */ __um(OnAddTrackedImage);                                // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,11760) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedImage);                             // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,11761) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedImage);                             // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,11762) /* FMulticastInlineDelegate */ __um(OnAddTrackedFace);                                 // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,11763) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedFace);                              // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,11764) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedFace);                              // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,11765) /* FMulticastInlineDelegate */ __um(OnAddTrackedEnvProbe);                             // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,11766) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedEnvProbe);                          // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,11767) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedEnvProbe);                          // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,11768) /* FMulticastInlineDelegate */ __um(OnAddTrackedObject);                               // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,11769) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedObject);                            // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,11770) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedObject);                            // 0x01E0   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTypesDummyClass : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0028 (0x000030 - 0x000058)
class UARCandidateImage : public UDataAsset
{ 
public:
	class UTexture2D*                                  CandidateTexture;                                           // 0x0030   (0x0008)  
	SDK_UNDEFINED(16,11771) /* FString */              __um(FriendlyName);                                         // 0x0038   (0x0010)  
	float                                              Width;                                                      // 0x0048   (0x0004)  
	float                                              Height;                                                     // 0x004C   (0x0004)  
	EARCandidateImageOrientation                       orientation;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	// float GetPhysicalWidth();                                                                                             // [0x38b8424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	// float GetPhysicalHeight();                                                                                            // [0x38b8158] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	// EARCandidateImageOrientation GetOrientation();                                                                        // [0x603b7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	// FString GetFriendlyName();                                                                                            // [0xa10f8c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	// class UTexture2D* GetCandidateTexture();                                                                              // [0x61cb750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0058 (0x000030 - 0x000088)
class UARCandidateObject : public UDataAsset
{ 
public:
	TArray<char>                                       CandidateObjectData;                                        // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,11772) /* FString */              __um(FriendlyName);                                         // 0x0040   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0050   (0x0038)  


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	// void SetFriendlyName(FString NewName);                                                                                // [0xc312e68] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	// void SetCandidateObjectData(TArray<char>& InCandidateObject);                                                         // [0xc312128] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	// void SetBoundingBox(FBox& InBoundingBox);                                                                             // [0xc312080] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	// FString GetFriendlyName();                                                                                            // [0xc30e078] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	// TArray<char> GetCandidateObjectData();                                                                                // [0xc30ddd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	// FBox GetBoundingBox();                                                                                                // [0xc30dcf4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTrackedGeometryGroup
{ 
	class AARActor*                                    ARActor;                                                    // 0x0000   (0x0008)  
	class UARComponent*                                ARComponent;                                                // 0x0008   (0x0008)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FARSharedWorldReplicationState
{ 
	int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)  
	int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0090 (0x000000 - 0x000090)
struct FARTraceResult
{ 
	float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)  
	EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0005   (0x000B)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0010   (0x0060)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0078   (0x0018)  MISSED
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (0x000000 - 0x000018)
struct FARSessionStatus
{ 
	SDK_UNDEFINED(16,11773) /* FString */              __um(AdditionalInfo);                                       // 0x0000   (0x0010)  
	EARSessionStatus                                   Status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (0x000000 - 0x000048)
struct FARPose2D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0028 (0x000000 - 0x000028)
struct FARCameraIntrinsics
{ 
	FIntPoint                                          ImageResolution;                                            // 0x0000   (0x0008)  
	FVector2D                                          FocalLength;                                                // 0x0008   (0x0010)  
	FVector2D                                          PrincipalPoint;                                             // 0x0018   (0x0010)  
};

