
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Enum /Script/InterchangeFactoryNodes.EInterchangeSkeletalMeshContentType
/// Size: 0x04
enum class EInterchangeSkeletalMeshContentType : uint8_t
{
	EInterchangeSkeletalMeshContentType__All                                         = 0,
	EInterchangeSkeletalMeshContentType__Geometry                                    = 1,
	EInterchangeSkeletalMeshContentType__SkinningWeights                             = 2,
	EInterchangeSkeletalMeshContentType__MAX                                         = 3
};

/// Class /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode
/// Size: 0x0040 (0x000140 - 0x000180)
class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0140   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomMobility
	// bool SetCustomMobility(char& AttributeValue, bool bAddApplyDelegate);                                                 // [0xc501c6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomLocalTransform
	// bool SetCustomLocalTransform(FTransform& AttributeValue, bool bAddApplyDelegate);                                     // [0xc5004cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomGlobalTransform
	// bool SetCustomGlobalTransform(FTransform& AttributeValue, bool bAddApplyDelegate);                                    // [0xc5004cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomActorClassName
	// bool SetCustomActorClassName(FString AttributeValue);                                                                 // [0xc4fd740] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomMobility
	// bool GetCustomMobility(char& AttributeValue);                                                                         // [0xc4eb428] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomLocalTransform
	// bool GetCustomLocalTransform(FTransform& AttributeValue);                                                             // [0xc4e9e80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomGlobalTransform
	// bool GetCustomGlobalTransform(FTransform& AttributeValue);                                                            // [0xc4e9e80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomActorClassName
	// bool GetCustomActorClassName(FString& AttributeValue);                                                                // [0xc4e774c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
/// Size: 0x0040 (0x000180 - 0x0001C0)
class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0180   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorWidth
	// bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc497ba8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorHeight
	// bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate);                                            // [0xc497a88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocusMethod
	// bool SetCustomFocusMethod(ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate);                                // [0xc496370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocalLength
	// bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc496250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorWidth
	// bool GetCustomSensorWidth(float& AttributeValue);                                                                     // [0xc494aa4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorHeight
	// bool GetCustomSensorHeight(float& AttributeValue);                                                                    // [0xc494a0c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocusMethod
	// bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue);                                                        // [0xc4936a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocalLength
	// bool GetCustomFocalLength(float& AttributeValue);                                                                     // [0xc493610] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
/// Size: 0x0060 (0x000180 - 0x0001E0)
class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0180   (0x0060)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomWidth
	// bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate);                                                   // [0xc4981f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomProjectionMode
	// bool SetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue, bool bAddApplyDelegate);             // [0xc497968] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomNearClipPlane
	// bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate);                                           // [0xc4970d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFieldOfView
	// bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc496130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFarClipPlane
	// bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate);                                            // [0xc496010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomAspectRatio
	// bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc494f64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomWidth
	// bool GetCustomWidth(float& AttributeValue);                                                                           // [0xc494ecc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomProjectionMode
	// bool GetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue);                                     // [0xc494974] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomNearClipPlane
	// bool GetCustomNearClipPlane(float& AttributeValue);                                                                   // [0xc494188] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFieldOfView
	// bool GetCustomFieldOfView(float& AttributeValue);                                                                     // [0xc493578] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFarClipPlane
	// bool GetCustomFarClipPlane(float& AttributeValue);                                                                    // [0xc4934e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomAspectRatio
	// bool GetCustomAspectRatio(float& AttributeValue);                                                                     // [0xc492564] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode
/// Size: 0x0030 (0x000180 - 0x0001B0)
class UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0180   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomSortOrder
	// bool SetCustomSortOrder(int32_t& AttributeValue, bool bAddApplyDelegate);                                             // [0xc497cc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomDecalSize
	// bool SetCustomDecalSize(FVector& AttributeValue, bool bAddApplyDelegate);                                             // [0xc4957fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomDecalMaterialPathName
	// bool SetCustomDecalMaterialPathName(FString AttributeValue);                                                          // [0xc49514c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomSortOrder
	// bool GetCustomSortOrder(int32_t& AttributeValue);                                                                     // [0xc494b3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomDecalSize
	// bool GetCustomDecalSize(FVector& AttributeValue);                                                                     // [0xc492d50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomDecalMaterialPathName
	// bool GetCustomDecalMaterialPathName(FString& AttributeValue);                                                         // [0xc492694] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.SetCustomNormalTexturePath
	// bool SetCustomNormalTexturePath(FString AttributeValue);                                                              // [0xc4971f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.SetCustomDiffuseTexturePath
	// bool SetCustomDiffuseTexturePath(FString AttributeValue);                                                             // [0xc495960] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetCustomNormalTexturePath
	// bool GetCustomNormalTexturePath(FString& AttributeValue);                                                             // [0xc494220] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetCustomDiffuseTexturePath
	// bool GetCustomDiffuseTexturePath(FString& AttributeValue);                                                            // [0xc492e24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeLevelSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0140   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.SetCustomFrameRate
	// bool SetCustomFrameRate(float& AttributeValue);                                                                       // [0xc4964f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.RemoveCustomAnimationTrackUid
	// bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);                                                        // [0xc45daa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomFrameRate
	// bool GetCustomFrameRate(float& AttributeValue);                                                                       // [0xc493740] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUids
	// void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);                                             // [0xc456730] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUidCount
	// int32_t GetCustomAnimationTrackUidCount();                                                                            // [0xc4567cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUid
	// void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid);                                        // [0xc456050] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.AddCustomAnimationTrackUid
	// bool AddCustomAnimationTrackUid(FString AnimationTrackUid);                                                           // [0xc466e3c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
/// Size: 0x0040 (0x000180 - 0x0001C0)
class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0180   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomUseTemperature
	// bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate);                                            // [0xc498118] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomTemperature
	// bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate);                                              // [0xc497f78] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomLightColor
	// bool SetCustomLightColor(FColor& AttributeValue, bool bAddApplyDelegate);                                             // [0xc496e8c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomIntensity
	// bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate);                                                // [0xc496d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomUseTemperature
	// bool GetCustomUseTemperature(bool& AttributeValue);                                                                   // [0xc494e34] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomTemperature
	// bool GetCustomTemperature(float& AttributeValue);                                                                     // [0xc494d04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomLightColor
	// bool GetCustomLightColor(FColor& AttributeValue);                                                                     // [0xc49405c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomIntensity
	// bool GetCustomIntensity(float& AttributeValue);                                                                       // [0xc493f2c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UInterchangeDirectionalLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode
/// Size: 0x0030 (0x0001C0 - 0x0001F0)
class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x01C0   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIntensityUnits
	// bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate);                                     // [0xc496dc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESTexture
	// bool SetCustomIESTexture(FString AttributeValue);                                                                     // [0xc496588] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomAttenuationRadius
	// bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);                                        // [0xc495084] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIntensityUnits
	// bool GetCustomIntensityUnits(ELightUnits& AttributeValue);                                                            // [0xc493fc4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESTexture
	// bool GetCustomIESTexture(FString& AttributeValue);                                                                    // [0xc4937d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomAttenuationRadius
	// bool GetCustomAttenuationRadius(float& AttributeValue);                                                               // [0xc4925fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x01F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceWidth
	// bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate);                                              // [0xc497eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceHeight
	// bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate);                                             // [0xc497de8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceWidth
	// bool GetCustomSourceWidth(float& AttributeValue);                                                                     // [0xc494c6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceHeight
	// bool GetCustomSourceHeight(float& AttributeValue);                                                                    // [0xc494bd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x01F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomUseInverseSquaredFalloff
	// bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate);                                  // [0xc498040] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomLightFalloffExponent
	// bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate);                                     // [0xc497008] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomUseInverseSquaredFalloff
	// bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);                                                         // [0xc494d9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomLightFalloffExponent
	// bool GetCustomLightFalloffExponent(float& AttributeValue);                                                            // [0xc4940f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
/// Size: 0x0020 (0x000210 - 0x000230)
class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0210   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomOuterConeAngle
	// bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate);                                           // [0xc4978a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomInnerConeAngle
	// bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate);                                           // [0xc496c38] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomOuterConeAngle
	// bool GetCustomOuterConeAngle(float& AttributeValue);                                                                  // [0xc4948dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomInnerConeAngle
	// bool GetCustomInnerConeAngle(float& AttributeValue);                                                                  // [0xc493e94] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0140   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.SetCustomSkeletalMeshUid
	// bool SetCustomSkeletalMeshUid(FString AttributeValue);                                                                // [0xc4aefa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.InitializePhysicsAssetNode
	// void InitializePhysicsAssetNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                        // [0xc4aa17c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetCustomSkeletalMeshUid
	// bool GetCustomSkeletalMeshUid(FString& AttributeValue);                                                               // [0xc4a79b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.RemoveCustomVariantSetUid
	// bool RemoveCustomVariantSetUid(FString VariantUID);                                                                   // [0xc4ab754] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUids
	// void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);                                                        // [0xc4a8ed0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUidCount
	// int32_t GetCustomVariantSetUidCount();                                                                                // [0xc4a8ea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUid
	// void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid);                                                   // [0xc4a87c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.AddCustomVariantSetUid
	// bool AddCustomVariantSetUid(FString VariantUID);                                                                      // [0xc4a5018] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
/// Size: 0x0050 (0x000140 - 0x000190)
class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0140   (0x0050)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomUseTimeZeroForBindPose
	// bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue);                                                           // [0xc4afd04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomSkeletalMeshFactoryNodeUid
	// bool SetCustomSkeletalMeshFactoryNodeUid(FString AttributeValue);                                                     // [0xc4ae8f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomRootJointUid
	// bool SetCustomRootJointUid(FString AttributeValue);                                                                   // [0xc4ae124] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.InitializeSkeletonNode
	// void InitializeSkeletonNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                            // [0xc4aa8c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomUseTimeZeroForBindPose
	// bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue);                                                           // [0xc4a872c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomSkeletalMeshFactoryNodeUid
	// bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue);                                                    // [0xc4a72f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomRootJointUid
	// bool GetCustomRootJointUid(FString& AttributeValue);                                                                  // [0xc4a6ba4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode
/// Size: 0x0290 (0x000140 - 0x0003D0)
class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x290];                                     // 0x0140   (0x0290)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomVirtualTextureStreaming
	// bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate);                                  // [0xc4afd9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomTranslatedTextureNodeUid
	// bool SetCustomTranslatedTextureNodeUid(FString AttributeValue);                                                       // [0xc4af654] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomSRGB
	// bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate);                                                     // [0xc4ae7d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPreferCompressedSourceData
	// bool SetCustomPreferCompressedSourceData(bool& AttributeValue);                                                       // [0xc4ae08c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPowerOfTwoMode
	// bool SetCustomPowerOfTwoMode(char& AttributeValue, bool bAddApplyDelegate);                                           // [0xc4adf74] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPaddingColor
	// bool SetCustomPaddingColor(FColor& AttributeValue, bool bAddApplyDelegate);                                           // [0xc4ade00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipLoadOptions
	// bool SetCustomMipLoadOptions(char& AttributeValue, bool bAddApplyDelegate);                                           // [0xc4adce0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipGenSettings
	// bool SetCustomMipGenSettings(char& AttributeValue, bool bAddApplyDelegate);                                           // [0xc4adbc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMaxTextureSize
	// bool SetCustomMaxTextureSize(int32_t& AttributeValue, bool bAddApplyDelegate);                                        // [0xc4adab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLossyCompressionAmount
	// bool SetCustomLossyCompressionAmount(char& AttributeValue, bool bAddApplyDelegate);                                   // [0xc4ad998] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODGroup
	// bool SetCustomLODGroup(char& AttributeValue, bool bAddApplyDelegate);                                                 // [0xc4ad878] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODBias
	// bool SetCustomLODBias(int32_t& AttributeValue, bool bAddApplyDelegate);                                               // [0xc4ad758] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomFilter
	// bool SetCustomFilter(char& AttributeValue, bool bAddApplyDelegate);                                                   // [0xc4ad638] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscaleOptions
	// bool SetCustomDownscaleOptions(char& AttributeValue, bool bAddApplyDelegate);                                         // [0xc4ad518] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscale
	// bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate);                                               // [0xc4ad3f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDeferCompression
	// bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0xc4ad2e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionSettings
	// bool SetCustomCompressionSettings(char& AttributeValue, bool bAddApplyDelegate);                                      // [0xc4ad1c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionQuality
	// bool SetCustomCompressionQuality(char& AttributeValue, bool bAddApplyDelegate);                                       // [0xc4ad0a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionNoAlpha
	// bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate);                                       // [0xc4acf90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositeTextureMode
	// bool SetCustomCompositeTextureMode(char& AttributeValue, bool bAddApplyDelegate);                                     // [0xc4ace78] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositePower
	// bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate);                                          // [0xc4acd60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyThreshold
	// bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate);                                      // [0xc4acc48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyColor
	// bool SetCustomChromaKeyColor(FColor& AttributeValue, bool bAddApplyDelegate);                                         // [0xc4acad4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombUseLegacyGamma
	// bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate);                                          // [0xc4b031c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombPreserveBorder
	// bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate);                                          // [0xc4b0204] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombFlipGreenChannel
	// bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate);                                        // [0xc4b00ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombDoScaleMipsForAlphaCoverage
	// bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate);                             // [0xc4affd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombChromaKeyTexture
	// bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate);                                        // [0xc4afebc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAlphaCoverageThresholds
	// bool SetCustomAlphaCoverageThresholds(FVector4& AttributeValue, bool bAddApplyDelegate);                              // [0xc4ac9ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAllowNonPowerOfTwo
	// bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue);                                                               // [0xc4ac914] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustVibrance
	// bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate);                                          // [0xc4ac7fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustSaturation
	// bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate);                                        // [0xc4ac6e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustRGBCurve
	// bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate);                                          // [0xc4ac5cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMinAlpha
	// bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate);                                          // [0xc4ac4b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMaxAlpha
	// bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate);                                          // [0xc4ac39c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustHue
	// bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate);                                               // [0xc4ac284] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightnessCurve
	// bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate);                                   // [0xc4ac16c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightness
	// bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate);                                        // [0xc4ac054] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.InitializeTextureNode
	// void InitializeTextureNode(FString UniqueID, FString DisplayLabel, FString InAssetName);                              // [0xc4ab00c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomVirtualTextureStreaming
	// bool GetCustomVirtualTextureStreaming(bool& AttributeValue);                                                          // [0xc4a8f6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomTranslatedTextureNodeUid
	// bool GetCustomTranslatedTextureNodeUid(FString& AttributeValue);                                                      // [0xc4a8070] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomSRGB
	// bool GetCustomSRGB(bool& AttributeValue);                                                                             // [0xc4a7260] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPreferCompressedSourceData
	// bool GetCustomPreferCompressedSourceData(bool& AttributeValue);                                                       // [0xc4a6b0c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPowerOfTwoMode
	// bool GetCustomPowerOfTwoMode(char& AttributeValue);                                                                   // [0xc4a6a74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPaddingColor
	// bool GetCustomPaddingColor(FColor& AttributeValue);                                                                   // [0xc4a69e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipLoadOptions
	// bool GetCustomMipLoadOptions(char& AttributeValue);                                                                   // [0xc4a6948] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipGenSettings
	// bool GetCustomMipGenSettings(char& AttributeValue);                                                                   // [0xc4a68b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMaxTextureSize
	// bool GetCustomMaxTextureSize(int32_t& AttributeValue);                                                                // [0xc4a6818] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLossyCompressionAmount
	// bool GetCustomLossyCompressionAmount(char& AttributeValue);                                                           // [0xc4a6780] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODGroup
	// bool GetCustomLODGroup(char& AttributeValue);                                                                         // [0xc4a66e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODBias
	// bool GetCustomLODBias(int32_t& AttributeValue);                                                                       // [0xc4a6650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomFilter
	// bool GetCustomFilter(char& AttributeValue);                                                                           // [0xc4a65b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscaleOptions
	// bool GetCustomDownscaleOptions(char& AttributeValue);                                                                 // [0xc4a6520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscale
	// bool GetCustomDownscale(float& AttributeValue);                                                                       // [0xc4a6488] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDeferCompression
	// bool GetCustomDeferCompression(bool& AttributeValue);                                                                 // [0xc4a63f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionSettings
	// bool GetCustomCompressionSettings(char& AttributeValue);                                                              // [0xc4a6358] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionQuality
	// bool GetCustomCompressionQuality(char& AttributeValue);                                                               // [0xc4a62c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionNoAlpha
	// bool GetCustomCompressionNoAlpha(bool& AttributeValue);                                                               // [0xc4a6228] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositeTextureMode
	// bool GetCustomCompositeTextureMode(char& AttributeValue);                                                             // [0xc4a6190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositePower
	// bool GetCustomCompositePower(float& AttributeValue);                                                                  // [0xc4a60f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyThreshold
	// bool GetCustomChromaKeyThreshold(float& AttributeValue);                                                              // [0xc4a6060] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyColor
	// bool GetCustomChromaKeyColor(FColor& AttributeValue);                                                                 // [0xc4a5fcc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombUseLegacyGamma
	// bool GetCustombUseLegacyGamma(bool& AttributeValue);                                                                  // [0xc4a9264] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombPreserveBorder
	// bool GetCustombPreserveBorder(bool& AttributeValue);                                                                  // [0xc4a91cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombFlipGreenChannel
	// bool GetCustombFlipGreenChannel(bool& AttributeValue);                                                                // [0xc4a9134] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombDoScaleMipsForAlphaCoverage
	// bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue);                                                     // [0xc4a909c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombChromaKeyTexture
	// bool GetCustombChromaKeyTexture(bool& AttributeValue);                                                                // [0xc4a9004] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAlphaCoverageThresholds
	// bool GetCustomAlphaCoverageThresholds(FVector4& AttributeValue);                                                      // [0xc4a5f24] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAllowNonPowerOfTwo
	// bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue);                                                               // [0xc4a5e8c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustVibrance
	// bool GetCustomAdjustVibrance(float& AttributeValue);                                                                  // [0xc4a5df4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustSaturation
	// bool GetCustomAdjustSaturation(float& AttributeValue);                                                                // [0xc4a5d5c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustRGBCurve
	// bool GetCustomAdjustRGBCurve(float& AttributeValue);                                                                  // [0xc4a5cc4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMinAlpha
	// bool GetCustomAdjustMinAlpha(float& AttributeValue);                                                                  // [0xc4a5c2c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMaxAlpha
	// bool GetCustomAdjustMaxAlpha(float& AttributeValue);                                                                  // [0xc4a5b94] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustHue
	// bool GetCustomAdjustHue(float& AttributeValue);                                                                       // [0xc4a5afc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightnessCurve
	// bool GetCustomAdjustBrightnessCurve(float& AttributeValue);                                                           // [0xc4a5a64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightness
	// bool GetCustomAdjustBrightness(float& AttributeValue);                                                                // [0xc4a59cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
/// Size: 0x0030 (0x0003D0 - 0x000400)
class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x03D0   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.SetCustomAddressZ
	// bool SetCustomAddressZ(char AttributeValue, bool bAddApplyDelegate);                                                  // [0xc4abf98] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressZ
	// bool GetCustomAddressZ(char& AttributeValue);                                                                         // [0xc4a5934] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressY
	// bool GetCustomAddressY(char& AttributeValue);                                                                         // [0xc4a5804] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressX
	// bool GetCustomAddressX(char& AttributeValue);                                                                         // [0xc4a56d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
/// Size: 0x0098 (0x0003D0 - 0x000468)
class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x03D0   (0x0098)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlocks
	// void SetSourceBlocks(TMap<int32_t, FString>& InSourceBlocks);                                                         // [0xc4b1228] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlockByCoordinates
	// void SetSourceBlockByCoordinates(int32_t X, int32_t Y, FString InSourceFile);                                         // [0xc4b0b0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlock
	// void SetSourceBlock(int32_t BlockIndex, FString InSourceFile);                                                        // [0xc4b0434] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressY
	// bool SetCustomAddressY(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);                           // [0xc4abed4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressX
	// bool SetCustomAddressX(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);                           // [0xc4abe10] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlocks
	// TMap<int32_t, FString> GetSourceBlocks();                                                                             // [0xc4aa100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlockByCoordinates
	// bool GetSourceBlockByCoordinates(int32_t X, int32_t Y, FString& OutSourceFile);                                       // [0xc4a99e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlock
	// bool GetSourceBlock(int32_t BlockIndex, FString& OutSourceFile);                                                      // [0xc4a92fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressY
	// bool GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue);                                                  // [0xc4a589c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressX
	// bool GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue);                                                  // [0xc4a576c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeTextureCubeArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeTextureCubeFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
/// Size: 0x0020 (0x000468 - 0x000488)
class UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0468   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomTextureMultiplier
	// bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate);                                        // [0xc5050d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomBrightness
	// bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate);                                               // [0xc4fe778] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomTextureMultiplier
	// bool GetCustomTextureMultiplier(float& AttributeValue);                                                               // [0xc4ee368] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomBrightness
	// bool GetCustomBrightness(float& AttributeValue);                                                                      // [0xc4e868c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeVolumeTextureFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
/// Size: 0x0340 (0x000140 - 0x000480)
class UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x340];                                     // 0x0140   (0x0340)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonSoftObjectPath
	// bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0xc503a98] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonFactoryNodeUid
	// bool SetCustomSkeletonFactoryNodeUid(FString AttributeValue);                                                         // [0xc5033e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomRemoveCurveRedundantKeys
	// bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue);                                                         // [0xc503078] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomMaterialDriveParameterOnCustomAttribute
	// bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);                                          // [0xc5012e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksSampleRate
	// bool SetCustomImportBoneTracksSampleRate(double& AttributeValue);                                                     // [0xc5008b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStop
	// bool SetCustomImportBoneTracksRangeStop(double& AttributeValue);                                                      // [0xc50081c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStart
	// bool SetCustomImportBoneTracksRangeStart(double& AttributeValue);                                                     // [0xc500780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracks
	// bool SetCustomImportBoneTracks(bool& AttributeValue);                                                                 // [0xc5006e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportAttributeCurves
	// bool SetCustomImportAttributeCurves(bool& AttributeValue);                                                            // [0xc500650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDoNotImportCurveWithZero
	// bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue);                                                         // [0xc4ff7f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingNonCurveCustomAttributes
	// bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);                                           // [0xc4fee98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingMorphTargetCurves
	// bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);                                                  // [0xc4fee00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingCustomAttributeCurves
	// bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);                                              // [0xc4fed68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomAddCurveMetadataToSkeleton
	// bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);                                                       // [0xc4fddf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForSceneNodeUids
	// void SetAnimationPayloadKeysForSceneNodeUids(TMap<FString, FString>& SceneNodeAnimationPayloadKeyUids, TMap<FString, char>& SceneNodeAnimationPayloadKeyTypes); // [0xc4fd504] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForMorphTargetNodeUids
	// void SetAnimationPayloadKeysForMorphTargetNodeUids(TMap<FString, FString>& MorphTargetAnimationPayloadKeyUids, TMap<FString, char>& MorphTargetAnimationPayloadKeyTypes); // [0xc4fd394] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedMaterialCurveSuffixe
	// bool SetAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);                                                   // [0xc4fccd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeStepCurveName
	// bool SetAnimatedAttributeStepCurveName(FString AttributeStepCurveName);                                               // [0xc4fc61c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeCurveName
	// bool SetAnimatedAttributeCurveName(FString AttributeCurveName);                                                       // [0xc4fbf60] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedMaterialCurveSuffixe
	// bool RemoveAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);                                                // [0xc4f82d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeStepCurveName
	// bool RemoveAnimatedAttributeStepCurveName(FString AttributeStepCurveName);                                            // [0xc4f7c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeCurveName
	// bool RemoveAnimatedAttributeCurveName(FString AttributeCurveName);                                                    // [0xc4f7558] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.InitializeAnimSequenceNode
	// void InitializeAnimSequenceNode(FString UniqueID, FString DisplayLabel);                                              // [0xc4f5ec4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetSceneNodeAnimationPayloadKeys
	// void GetSceneNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys); // [0xc4f2fb4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetMorphTargetNodeAnimationPayloadKeys
	// void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads); // [0xc4f0a20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonSoftObjectPath
	// bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0xc4ece34] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonFactoryNodeUid
	// bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue);                                                        // [0xc4ec778] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomRemoveCurveRedundantKeys
	// bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue);                                                         // [0xc4ec518] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomMaterialDriveParameterOnCustomAttribute
	// bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);                                          // [0xc4eaba4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksSampleRate
	// bool GetCustomImportBoneTracksSampleRate(double& AttributeValue);                                                     // [0xc4ea1ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStop
	// bool GetCustomImportBoneTracksRangeStop(double& AttributeValue);                                                      // [0xc4ea150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStart
	// bool GetCustomImportBoneTracksRangeStart(double& AttributeValue);                                                     // [0xc4ea0b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracks
	// bool GetCustomImportBoneTracks(bool& AttributeValue);                                                                 // [0xc4ea01c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportAttributeCurves
	// bool GetCustomImportAttributeCurves(bool& AttributeValue);                                                            // [0xc4e9f84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDoNotImportCurveWithZero
	// bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue);                                                         // [0xc4e935c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingNonCurveCustomAttributes
	// bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);                                           // [0xc4e8b88] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingMorphTargetCurves
	// bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);                                                  // [0xc4e8af0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingCustomAttributeCurves
	// bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);                                              // [0xc4e8a58] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomAddCurveMetadataToSkeleton
	// bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);                                                       // [0xc4e7e08] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixesCount
	// int32_t GetAnimatedMaterialCurveSuffixesCount();                                                                      // [0xc4e48c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixes
	// void GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes);                                     // [0xc4e482c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixe
	// void GetAnimatedMaterialCurveSuffixe(int32_t Index, FString& OutMaterialCurveSuffixe);                                // [0xc4e414c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNamesCount
	// int32_t GetAnimatedAttributeStepCurveNamesCount();                                                                    // [0xc4e4120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNames
	// void GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames);                                 // [0xc4e4084] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveName
	// void GetAnimatedAttributeStepCurveName(int32_t Index, FString& OutAttributeStepCurveName);                            // [0xc4e39a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNamesCount
	// int32_t GetAnimatedAttributeCurveNamesCount();                                                                        // [0xc4e3978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNames
	// void GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames);                                         // [0xc4e38dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveName
	// void GetAnimatedAttributeCurveName(int32_t Index, FString& OutAttributeCurveName);                                    // [0xc4e31fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetCustomGlobalOffsetTransform
	// bool SetCustomGlobalOffsetTransform(class UInterchangeBaseNodeContainer* NodeContainer, FTransform& AttributeValue);  // [0xc5003a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetBakeMeshes
	// bool SetBakeMeshes(class UInterchangeBaseNodeContainer* NodeContainer, bool& AttributeValue);                         // [0xc4fd674] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetCustomGlobalOffsetTransform
	// bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue);                                                      // [0xc4e9d7c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetBakeMeshes
	// bool GetBakeMeshes(bool& AttributeValue);                                                                             // [0xc4e5030] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode
/// Size: 0x0070 (0x000140 - 0x0001B0)
class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0140   (0x0070)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTwoSided
	// bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate);                                                 // [0xc505610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTranslucencyLightingMode
	// bool SetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue, bool bAddApplyDelegate); // [0xc5054f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomShadingModel
	// bool SetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue, bool bAddApplyDelegate);               // [0xc5032c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomScreenSpaceReflections
	// bool SetCustomScreenSpaceReflections(bool& AttributeValue);                                                           // [0xc503230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomRefractionMethod
	// bool SetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue, bool bAddApplyDelegate);                 // [0xc502f58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomOpacityMaskClipValue
	// bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);                                    // [0xc501ea4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomBlendMode
	// bool SetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue, bool bAddApplyDelegate);                             // [0xc4fe538] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTransmissionColorConnection
	// bool GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                 // [0xc4f5788] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTangentConnection
	// bool GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0xc4f504c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSubsurfaceConnection
	// bool GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName);                                        // [0xc4f4910] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSpecularConnection
	// bool GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName);                                          // [0xc4f410c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRoughnessConnection
	// bool GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);                                         // [0xc4f2878] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRefractionConnection
	// bool GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName);                                        // [0xc4f213c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOpacityConnection
	// bool GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0xc4f1a00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOcclusionConnection
	// bool GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName);                                         // [0xc4f122c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetNormalConnection
	// bool GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xc4f0af0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetMetallicConnection
	// bool GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName);                                          // [0xc4f02e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetFuzzColorConnection
	// bool GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                         // [0xc4ef2f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetEmissiveColorConnection
	// bool GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                     // [0xc4eebb4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTwoSided
	// bool GetCustomTwoSided(bool& AttributeValue);                                                                         // [0xc4ee660] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTranslucencyLightingMode
	// bool GetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue);                       // [0xc4ee5c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomShadingModel
	// bool GetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue);                                       // [0xc4ec6e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomScreenSpaceReflections
	// bool GetCustomScreenSpaceReflections(bool& AttributeValue);                                                           // [0xc4ec648] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomRefractionMethod
	// bool GetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue);                                         // [0xc4ec480] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomOpacityMaskClipValue
	// bool GetCustomOpacityMaskClipValue(float& AttributeValue);                                                            // [0xc4eb558] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomBlendMode
	// bool GetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue);                                                     // [0xc4e855c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClothConnection
	// bool GetClothConnection(FString& ExpressionNodeUid, FString& OutputName);                                             // [0xc4e6f48] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatRoughnessConnection
	// bool GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);                                // [0xc4e680c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatNormalConnection
	// bool GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName);                                   // [0xc4e60d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatConnection
	// bool GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName);                                         // [0xc4e5994] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetBaseColorConnection
	// bool GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                         // [0xc4e50c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetAnisotropyConnection
	// bool GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName);                                        // [0xc4e48f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTransmissionColor
	// bool ConnectToTransmissionColor(FString AttributeValue);                                                              // [0xc4e2b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTangent
	// bool ConnectToTangent(FString ExpressionNodeUid);                                                                     // [0xc4e248c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSubsurface
	// bool ConnectToSubsurface(FString ExpressionNodeUid);                                                                  // [0xc4e1dd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSpecular
	// bool ConnectToSpecular(FString ExpressionNodeUid);                                                                    // [0xc4e171c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRoughness
	// bool ConnectToRoughness(FString ExpressionNodeUid);                                                                   // [0xc4e1064] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRefraction
	// bool ConnectToRefraction(FString AttributeValue);                                                                     // [0xc4e09b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOpacity
	// bool ConnectToOpacity(FString AttributeValue);                                                                        // [0xc4e02fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOcclusion
	// bool ConnectToOcclusion(FString AttributeValue);                                                                      // [0xc4dfc44] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToNormal
	// bool ConnectToNormal(FString ExpressionNodeUid);                                                                      // [0xc4df58c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToMetallic
	// bool ConnectToMetallic(FString AttributeValue);                                                                       // [0xc4deed4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToFuzzColor
	// bool ConnectToFuzzColor(FString AttributeValue);                                                                      // [0xc4de81c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToEmissiveColor
	// bool ConnectToEmissiveColor(FString ExpressionNodeUid);                                                               // [0xc4de164] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToCloth
	// bool ConnectToCloth(FString AttributeValue);                                                                          // [0xc4ddaac] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatRoughness
	// bool ConnectToClearCoatRoughness(FString AttributeValue);                                                             // [0xc4dd3f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatNormal
	// bool ConnectToClearCoatNormal(FString AttributeValue);                                                                // [0xc4dcd3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoat
	// bool ConnectToClearCoat(FString AttributeValue);                                                                      // [0xc4dc684] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToBaseColor
	// bool ConnectToBaseColor(FString AttributeValue);                                                                      // [0xc4dbfcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToAnisotropy
	// bool ConnectToAnisotropy(FString ExpressionNodeUid);                                                                  // [0xc4db914] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTransmissionColor
	// bool ConnectOutputToTransmissionColor(FString ExpressionNodeUid, FString OutputName);                                 // [0xc4db22c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTangent
	// bool ConnectOutputToTangent(FString ExpressionNodeUid, FString OutputName);                                           // [0xc4dab44] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSubsurface
	// bool ConnectOutputToSubsurface(FString ExpressionNodeUid, FString OutputName);                                        // [0xc4da45c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSpecular
	// bool ConnectOutputToSpecular(FString ExpressionNodeUid, FString OutputName);                                          // [0xc4d9d74] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRoughness
	// bool ConnectOutputToRoughness(FString ExpressionNodeUid, FString OutputName);                                         // [0xc4d968c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRefraction
	// bool ConnectOutputToRefraction(FString ExpressionNodeUid, FString OutputName);                                        // [0xc4d8fa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOpacity
	// bool ConnectOutputToOpacity(FString ExpressionNodeUid, FString OutputName);                                           // [0xc4d88bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOcclusion
	// bool ConnectOutputToOcclusion(FString ExpressionNodeUid, FString OutputName);                                         // [0xc4d81d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToNormal
	// bool ConnectOutputToNormal(FString ExpressionNodeUid, FString OutputName);                                            // [0xc4d7aec] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToMetallic
	// bool ConnectOutputToMetallic(FString ExpressionNodeUid, FString OutputName);                                          // [0xc4d7404] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToFuzzColor
	// bool ConnectOutputToFuzzColor(FString ExpressionNodeUid, FString OutputName);                                         // [0xc4d6d1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToEmissiveColor
	// bool ConnectOutputToEmissiveColor(FString ExpressionNodeUid, FString OutputName);                                     // [0xc4d6634] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToCloth
	// bool ConnectOutputToCloth(FString ExpressionNodeUid, FString OutputName);                                             // [0xc4d5f4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatRoughness
	// bool ConnectOutputToClearCoatRoughness(FString ExpressionNodeUid, FString OutputName);                                // [0xc4d5864] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatNormal
	// bool ConnectOutputToClearCoatNormal(FString ExpressionNodeUid, FString OutputName);                                   // [0xc4d517c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoat
	// bool ConnectOutputToClearCoat(FString ExpressionNodeUid, FString OutputName);                                         // [0xc4d4a94] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToBaseColor
	// bool ConnectOutputToBaseColor(FString ExpressionNodeUid, FString OutputName);                                         // [0xc4d43ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToAnisotropy
	// bool ConnectOutputToAnisotropy(FString ExpressionNodeUid, FString OutputName);                                        // [0xc4d3cc4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
/// Size: 0x0010 (0x000140 - 0x000150)
class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.SetCustomExpressionClassName
	// bool SetCustomExpressionClassName(FString AttributeValue);                                                            // [0xc4ff9ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.GetCustomExpressionClassName
	// bool GetCustomExpressionClassName(FString& AttributeValue);                                                           // [0xc4e948c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomParent
	// bool SetCustomParent(FString AttributeValue);                                                                         // [0xc501fc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomInstanceClassName
	// bool SetCustomInstanceClassName(FString AttributeValue);                                                              // [0xc500b1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomParent
	// bool GetCustomParent(FString& AttributeValue);                                                                        // [0xc4eb5f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomInstanceClassName
	// bool GetCustomInstanceClassName(FString& AttributeValue);                                                             // [0xc4ea450] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
/// Size: 0x0010 (0x000150 - 0x000160)
class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0150   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.SetCustomMaterialFunctionDependency
	// bool SetCustomMaterialFunctionDependency(FString AttributeValue);                                                     // [0xc50137c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.GetCustomMaterialFunctionDependency
	// bool GetCustomMaterialFunctionDependency(FString& AttributeValue);                                                    // [0xc4eac3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetInputConnection
	// bool GetInputConnection(FString InputName, FString& ExpressionNodeUid, FString& OutputName);                          // [0xc4efac4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
/// Size: 0x0098 (0x000180 - 0x000218)
class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0180   (0x0098)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                   // [0xc505fb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomGeometricTransform
	// bool SetCustomGeometricTransform(FTransform& AttributeValue);                                                         // [0xc50029c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomAnimationAssetUidToPlay
	// bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);                                                        // [0xc4fde88] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                               // [0xc4fa47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                  // [0xc4f324c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                    // [0xc4f3084] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomGeometricTransform
	// bool GetCustomGeometricTransform(FTransform& AttributeValue);                                                         // [0xc4e9c78] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomAnimationAssetUidToPlay
	// bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);                                                       // [0xc4e7ea0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode
/// Size: 0x0170 (0x000140 - 0x0002B0)
class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x170];                                     // 0x0140   (0x0170)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                   // [0xc5066a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorReplace
	// bool SetCustomVertexColorReplace(bool& AttributeValue);                                                               // [0xc505dfc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorOverride
	// bool SetCustomVertexColorOverride(FColor& AttributeValue);                                                            // [0xc505d68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorIgnore
	// bool SetCustomVertexColorIgnore(bool& AttributeValue);                                                                // [0xc505cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseMikkTSpace
	// bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xc505bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseHighPrecisionTangentBasis
	// bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate);                             // [0xc505a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseFullPrecisionUVs
	// bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate);                                      // [0xc505850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseBackwardsCompatibleF16TruncUVs
	// bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate);                        // [0xc505730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRemoveDegenerates
	// bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate);                                        // [0xc503110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeTangents
	// bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate);                                        // [0xc502e38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeNormals
	// bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0xc502d18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomLODGroup
	// bool SetCustomLODGroup(FName& AttributeValue, bool bAddApplyDelegate);                                                // [0xc5011cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomComputeWeightedNormals
	// bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate);                                   // [0xc4febb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                               // [0xc4fab38] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveLodDataUniqueId
	// bool RemoveLodDataUniqueId(FString LodDataUniqueId);                                                                  // [0xc4f9dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                  // [0xc4f3948] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                    // [0xc4f3168] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataUniqueIds
	// void GetLodDataUniqueIds(TArray<FString>& OutLodDataUniqueIds);                                                       // [0xc4f0248] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataCount
	// int32_t GetLodDataCount();                                                                                            // [0xc4f0224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorReplace
	// bool GetCustomVertexColorReplace(bool& AttributeValue);                                                               // [0xc4eeb1c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorOverride
	// bool GetCustomVertexColorOverride(FColor& AttributeValue);                                                            // [0xc4eea88] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorIgnore
	// bool GetCustomVertexColorIgnore(bool& AttributeValue);                                                                // [0xc4ee9f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseMikkTSpace
	// bool GetCustomUseMikkTSpace(bool& AttributeValue);                                                                    // [0xc4ee958] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseHighPrecisionTangentBasis
	// bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue);                                                     // [0xc4ee8c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseFullPrecisionUVs
	// bool GetCustomUseFullPrecisionUVs(bool& AttributeValue);                                                              // [0xc4ee790] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseBackwardsCompatibleF16TruncUVs
	// bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue);                                                // [0xc4ee6f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRemoveDegenerates
	// bool GetCustomRemoveDegenerates(bool& AttributeValue);                                                                // [0xc4ec5b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeTangents
	// bool GetCustomRecomputeTangents(bool& AttributeValue);                                                                // [0xc4ec3e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeNormals
	// bool GetCustomRecomputeNormals(bool& AttributeValue);                                                                 // [0xc4ec350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomLODGroup
	// bool GetCustomLODGroup(FName& AttributeValue);                                                                        // [0xc4eab0c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomComputeWeightedNormals
	// bool GetCustomComputeWeightedNormals(bool& AttributeValue);                                                           // [0xc4e8928] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.AddLodDataUniqueId
	// bool AddLodDataUniqueId(FString LodDataUniqueId);                                                                     // [0xc4d27e8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
/// Size: 0x00D8 (0x0002B0 - 0x000388)
class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xD8];                                      // 0x02B0   (0x00D8)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomUseHighPrecisionSkinWeights
	// bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate);                              // [0xc505970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdUV
	// bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc5053d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdTangentNormal
	// bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate);                                  // [0xc5052b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdPosition
	// bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);                                       // [0xc505190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomSkeletonSoftObjectPath
	// bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0xc50413c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomPhysicAssetSoftObjectPath
	// bool SetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);                                             // [0xc502674] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomMorphThresholdPosition
	// bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);                                  // [0xc501d84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportVertexAttributes
	// bool SetCustomImportVertexAttributes(bool& AttributeValue);                                                           // [0xc500a84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportMorphTarget
	// bool SetCustomImportMorphTarget(bool& AttributeValue);                                                                // [0xc5009ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportContentType
	// bool SetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);                                 // [0xc500954] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomCreatePhysicsAsset
	// bool SetCustomCreatePhysicsAsset(bool& AttributeValue);                                                               // [0xc4fecd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomBoneInfluenceLimit
	// bool SetCustomBoneInfluenceLimit(int32_t& AttributeValue, bool bAddApplyDelegate);                                    // [0xc4fe658] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.InitializeSkeletalMeshNode
	// void InitializeSkeletalMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                        // [0xc4f65c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomUseHighPrecisionSkinWeights
	// bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue);                                                      // [0xc4ee828] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdUV
	// bool GetCustomThresholdUV(float& AttributeValue);                                                                     // [0xc4ee530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdTangentNormal
	// bool GetCustomThresholdTangentNormal(float& AttributeValue);                                                          // [0xc4ee498] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdPosition
	// bool GetCustomThresholdPosition(float& AttributeValue);                                                               // [0xc4ee400] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomSkeletonSoftObjectPath
	// bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0xc4ed4d8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomPhysicAssetSoftObjectPath
	// bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);                                             // [0xc4ebcac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomMorphThresholdPosition
	// bool GetCustomMorphThresholdPosition(float& AttributeValue);                                                          // [0xc4eb4c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportVertexAttributes
	// bool GetCustomImportVertexAttributes(bool& AttributeValue);                                                           // [0xc4ea3b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportMorphTarget
	// bool GetCustomImportMorphTarget(bool& AttributeValue);                                                                // [0xc4ea320] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportContentType
	// bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);                                 // [0xc4ea288] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomCreatePhysicsAsset
	// bool GetCustomCreatePhysicsAsset(bool& AttributeValue);                                                               // [0xc4e89c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomBoneInfluenceLimit
	// bool GetCustomBoneInfluenceLimit(int32_t& AttributeValue);                                                            // [0xc4e85f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0140   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.SetCustomSkeletonUid
	// bool SetCustomSkeletonUid(FString AttributeValue);                                                                    // [0xc5047e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveMeshUid
	// bool RemoveMeshUid(FString MeshName);                                                                                 // [0xc45daa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveAllMeshes
	// bool RemoveAllMeshes();                                                                                               // [0xc4f74d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUidsCount
	// int32_t GetMeshUidsCount();                                                                                           // [0xc4567cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUids
	// void GetMeshUids(TArray<FString>& OutMeshNames);                                                                      // [0xc456730] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetCustomSkeletonUid
	// bool GetCustomSkeletonUid(FString& AttributeValue);                                                                   // [0xc4edb7c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.AddMeshUid
	// bool AddMeshUid(FString MeshName);                                                                                    // [0xc466e3c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
/// Size: 0x00E8 (0x0002B0 - 0x000398)
class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x02B0   (0x00E8)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSupportFaceRemap
	// bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0xc504fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSrcLightmapIndex
	// bool SetCustomSrcLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate);                                      // [0xc504e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMinLightmapResolution
	// bool SetCustomMinLightmapResolution(int32_t& AttributeValue, bool bAddApplyDelegate);                                 // [0xc501b4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMaxLumenMeshCards
	// bool SetCustomMaxLumenMeshCards(int32_t& AttributeValue, bool bAddApplyDelegate);                                     // [0xc501a2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateLightmapUVs
	// bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate);                                      // [0xc50017c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateDistanceFieldAsIfTwoSided
	// bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate);                        // [0xc50005c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDstLightmapIndex
	// bool SetCustomDstLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate);                                      // [0xc4ff88c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldResolutionScale
	// bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate);                            // [0xc4ff6d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldReplacementMesh
	// bool SetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue, bool bAddApplyDelegate);                  // [0xc4fef30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildScale3D
	// bool SetCustomBuildScale3D(FVector& AttributeValue, bool bAddApplyDelegate);                                          // [0xc4fea4c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildReversedIndexBuffer
	// bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate);                                 // [0xc4fe92c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildNanite
	// bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate);                                              // [0xc4fe838] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.RemoveSocketUd
	// bool RemoveSocketUd(FString SocketUid);                                                                               // [0xc4fb1e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.InitializeStaticMeshNode
	// void InitializeStaticMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                          // [0xc4f6d08] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUids
	// void GetSocketUids(TArray<FString>& OutSocketUids);                                                                   // [0xc4f4070] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUidCount
	// int32_t GetSocketUidCount();                                                                                          // [0xc4f4044] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                       // [0x9be6734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSupportFaceRemap
	// bool GetCustomSupportFaceRemap(bool& AttributeValue);                                                                 // [0xc4ee2d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSrcLightmapIndex
	// bool GetCustomSrcLightmapIndex(int32_t& AttributeValue);                                                              // [0xc4ee238] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMinLightmapResolution
	// bool GetCustomMinLightmapResolution(int32_t& AttributeValue);                                                         // [0xc4eb390] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMaxLumenMeshCards
	// bool GetCustomMaxLumenMeshCards(int32_t& AttributeValue);                                                             // [0xc4eb2f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateLightmapUVs
	// bool GetCustomGenerateLightmapUVs(bool& AttributeValue);                                                              // [0xc4e9be0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateDistanceFieldAsIfTwoSided
	// bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue);                                                // [0xc4e9b48] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDstLightmapIndex
	// bool GetCustomDstLightmapIndex(int32_t& AttributeValue);                                                              // [0xc4e93f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldResolutionScale
	// bool GetCustomDistanceFieldResolutionScale(float& AttributeValue);                                                    // [0xc4e92c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldReplacementMesh
	// bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue);                                          // [0xc4e8c20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildScale3D
	// bool GetCustomBuildScale3D(FVector& AttributeValue);                                                                  // [0xc4e8854] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildReversedIndexBuffer
	// bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue);                                                         // [0xc4e87bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildNanite
	// bool GetCustomBuildNanite(bool& AttributeValue);                                                                      // [0xc4e8724] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUids
	// bool AddSocketUids(TArray<FString>& InSocketUids);                                                                    // [0xc4d3560] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUid
	// bool AddSocketUid(FString SocketUid);                                                                                 // [0xc4d2ea4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
/// Size: 0x00C0 (0x000140 - 0x000200)
class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0140   (0x00C0)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetOneConvexHullPerUCX
	// bool SetOneConvexHullPerUCX(bool AttributeValue);                                                                     // [0xc505f24] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetImportCollision
	// bool SetImportCollision(bool AttributeValue);                                                                         // [0xc505e94] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveSphereCollisionMeshUid
	// bool RemoveSphereCollisionMeshUid(FString MeshName);                                                                  // [0xc4fb8a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveMeshUid
	// bool RemoveMeshUid(FString MeshName);                                                                                 // [0xc4ab754] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveConvexCollisionMeshUid
	// bool RemoveConvexCollisionMeshUid(FString MeshName);                                                                  // [0xc4f9704] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveCapsuleCollisionMeshUid
	// bool RemoveCapsuleCollisionMeshUid(FString MeshName);                                                                 // [0xc4f9048] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveBoxCollisionMeshUid
	// bool RemoveBoxCollisionMeshUid(FString MeshName);                                                                     // [0xc4f898c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllSphereCollisionMeshes
	// bool RemoveAllSphereCollisionMeshes();                                                                                // [0xc4f752c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllMeshes
	// bool RemoveAllMeshes();                                                                                               // [0xc4f7500] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllConvexCollisionMeshes
	// bool RemoveAllConvexCollisionMeshes();                                                                                // [0xc4f74a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllCapsuleCollisionMeshes
	// bool RemoveAllCapsuleCollisionMeshes();                                                                               // [0xc4f747c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllBoxCollisionMeshes
	// bool RemoveAllBoxCollisionMeshes();                                                                                   // [0xc4f7450] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUidsCount
	// int32_t GetSphereCollisionMeshUidsCount();                                                                            // [0xc4f48e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUids
	// void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames);                                                       // [0xc4f4848] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetOneConvexHullPerUCX
	// bool GetOneConvexHullPerUCX(bool& AttributeValue);                                                                    // [0xc4f1968] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUidsCount
	// int32_t GetMeshUidsCount();                                                                                           // [0xc4a8ea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUids
	// void GetMeshUids(TArray<FString>& OutMeshNames);                                                                      // [0xc4a8ed0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetImportCollision
	// bool GetImportCollision(bool& AttributeValue);                                                                        // [0xc4efa2c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUidsCount
	// int32_t GetConvexCollisionMeshUidsCount();                                                                            // [0xc4e7720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUids
	// void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames);                                                       // [0xc4e7684] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUidsCount
	// int32_t GetCapsuleCollisionMeshUidsCount();                                                                           // [0xc4e5968] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUids
	// void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames);                                                      // [0xc4e58cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUidsCount
	// int32_t GetBoxCollisionMeshUidsCount();                                                                               // [0xc4e58a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUids
	// void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames);                                                          // [0xc4e5804] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddSphereCollisionMeshUid
	// bool AddSphereCollisionMeshUid(FString MeshName);                                                                     // [0xc4d3608] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddMeshUid
	// bool AddMeshUid(FString MeshName);                                                                                    // [0xc4a5018] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddConvexCollisionMeshUid
	// bool AddConvexCollisionMeshUid(FString MeshName);                                                                     // [0xc4d212c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddCapsuleCollisionMeshUid
	// bool AddCapsuleCollisionMeshUid(FString MeshName);                                                                    // [0xc4d1a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddBoxCollisionMeshUid
	// bool AddBoxCollisionMeshUid(FString MeshName);                                                                        // [0xc4d13b4] Final|Native|Public|BlueprintCallable 
};

