
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Class /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode
/// Size: 0x0040 (0x000140 - 0x000180)
class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomMobility
	// bool SetCustomMobility(char& AttributeValue, bool bAddApplyDelegate);                                                    // [0xc86ee28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomLocalTransform
	// bool SetCustomLocalTransform(FTransform& AttributeValue, bool bAddApplyDelegate);                                        // [0xc86d688] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomGlobalTransform
	// bool SetCustomGlobalTransform(FTransform& AttributeValue, bool bAddApplyDelegate);                                       // [0xc86d688] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomActorClassName
	// bool SetCustomActorClassName(FString AttributeValue);                                                                    // [0xc86a8dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomMobility
	// bool GetCustomMobility(char& AttributeValue);                                                                            // [0xc858584] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomLocalTransform
	// bool GetCustomLocalTransform(FTransform& AttributeValue);                                                                // [0xc856fdc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomGlobalTransform
	// bool GetCustomGlobalTransform(FTransform& AttributeValue);                                                               // [0xc856fdc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomActorClassName
	// bool GetCustomActorClassName(FString& AttributeValue);                                                                   // [0xc8548a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
/// Size: 0x0040 (0x000180 - 0x0001C0)
class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorWidth
	// bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xc804de8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorHeight
	// bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate);                                               // [0xc804cc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocusMethod
	// bool SetCustomFocusMethod(ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate);                                   // [0xc803538] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocalLength
	// bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xc803418] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorWidth
	// bool GetCustomSensorWidth(float& AttributeValue);                                                                        // [0xc801c6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorHeight
	// bool GetCustomSensorHeight(float& AttributeValue);                                                                       // [0xc801bd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocusMethod
	// bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue);                                                           // [0xc800830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocalLength
	// bool GetCustomFocalLength(float& AttributeValue);                                                                        // [0xc800798] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
/// Size: 0x0060 (0x000180 - 0x0001E0)
class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomWidth
	// bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate);                                                      // [0xc805430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomProjectionMode
	// bool SetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue, bool bAddApplyDelegate);                // [0xc804ba8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomNearClipPlane
	// bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate);                                              // [0xc804310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFieldOfView
	// bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xc8032f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFarClipPlane
	// bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate);                                               // [0xc8031d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomAspectRatio
	// bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xc80212c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomWidth
	// bool GetCustomWidth(float& AttributeValue);                                                                              // [0xc802094] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomProjectionMode
	// bool GetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue);                                        // [0xc801b3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomNearClipPlane
	// bool GetCustomNearClipPlane(float& AttributeValue);                                                                      // [0xc801350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFieldOfView
	// bool GetCustomFieldOfView(float& AttributeValue);                                                                        // [0xc800700] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFarClipPlane
	// bool GetCustomFarClipPlane(float& AttributeValue);                                                                       // [0xc800668] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomAspectRatio
	// bool GetCustomAspectRatio(float& AttributeValue);                                                                        // [0xc7ff6ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode
/// Size: 0x0030 (0x000180 - 0x0001B0)
class UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomSortOrder
	// bool SetCustomSortOrder(int32_t& AttributeValue, bool bAddApplyDelegate);                                                // [0xc804f08] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomDecalSize
	// bool SetCustomDecalSize(FVector& AttributeValue, bool bAddApplyDelegate);                                                // [0xc8029c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomDecalMaterialPathName
	// bool SetCustomDecalMaterialPathName(FString AttributeValue);                                                             // [0xc802314] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomSortOrder
	// bool GetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0xc801d04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomDecalSize
	// bool GetCustomDecalSize(FVector& AttributeValue);                                                                        // [0xc7ffed8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomDecalMaterialPathName
	// bool GetCustomDecalMaterialPathName(FString& AttributeValue);                                                            // [0xc7ff81c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.SetCustomNormalTexturePath
	// bool SetCustomNormalTexturePath(FString AttributeValue);                                                                 // [0xc804430] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.SetCustomDiffuseTexturePath
	// bool SetCustomDiffuseTexturePath(FString AttributeValue);                                                                // [0xc802b28] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetCustomNormalTexturePath
	// bool GetCustomNormalTexturePath(FString& AttributeValue);                                                                // [0xc8013e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetCustomDiffuseTexturePath
	// bool GetCustomDiffuseTexturePath(FString& AttributeValue);                                                               // [0xc7fffac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeLevelSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.SetCustomFrameRate
	// bool SetCustomFrameRate(float& AttributeValue);                                                                          // [0xc8036dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.RemoveCustomAnimationTrackUid
	// bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);                                                           // [0xc7cae44] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomFrameRate
	// bool GetCustomFrameRate(float& AttributeValue);                                                                          // [0xc8008c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUids
	// void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);                                                // [0xc7c3acc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUidCount
	// int32_t GetCustomAnimationTrackUidCount();                                                                               // [0xc7c3b68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUid
	// void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid);                                           // [0xc7c33ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.AddCustomAnimationTrackUid
	// bool AddCustomAnimationTrackUid(FString AnimationTrackUid);                                                              // [0xc7d41d8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
/// Size: 0x0040 (0x000180 - 0x0001C0)
class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomUseTemperature
	// bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate);                                               // [0xc805358] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomTemperature
	// bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate);                                                 // [0xc8051b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomLightColor
	// bool SetCustomLightColor(FColor& AttributeValue, bool bAddApplyDelegate);                                                // [0xc804078] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomIntensity
	// bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate);                                                   // [0xc803eec] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomUseTemperature
	// bool GetCustomUseTemperature(bool& AttributeValue);                                                                      // [0xc801ffc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomTemperature
	// bool GetCustomTemperature(float& AttributeValue);                                                                        // [0xc801ecc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomLightColor
	// bool GetCustomLightColor(FColor& AttributeValue);                                                                        // [0xc8011e4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomIntensity
	// bool GetCustomIntensity(float& AttributeValue);                                                                          // [0xc8010b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UInterchangeDirectionalLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode
/// Size: 0x0030 (0x0001C0 - 0x0001F0)
class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIntensityUnits
	// bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate);                                        // [0xc803fb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESTexture
	// bool SetCustomIESTexture(FString AttributeValue);                                                                        // [0xc803774] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomAttenuationRadius
	// bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);                                           // [0xc80224c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIntensityUnits
	// bool GetCustomIntensityUnits(ELightUnits& AttributeValue);                                                               // [0xc80114c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESTexture
	// bool GetCustomIESTexture(FString& AttributeValue);                                                                       // [0xc800960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomAttenuationRadius
	// bool GetCustomAttenuationRadius(float& AttributeValue);                                                                  // [0xc7ff784] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceWidth
	// bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate);                                                 // [0xc8050f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceHeight
	// bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate);                                                // [0xc805028] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceWidth
	// bool GetCustomSourceWidth(float& AttributeValue);                                                                        // [0xc801e34] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceHeight
	// bool GetCustomSourceHeight(float& AttributeValue);                                                                       // [0xc801d9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomUseInverseSquaredFalloff
	// bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate);                                     // [0xc805280] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomLightFalloffExponent
	// bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate);                                        // [0xc804248] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomUseInverseSquaredFalloff
	// bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);                                                            // [0xc801f64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomLightFalloffExponent
	// bool GetCustomLightFalloffExponent(float& AttributeValue);                                                               // [0xc8012b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
/// Size: 0x0020 (0x000210 - 0x000230)
class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomOuterConeAngle
	// bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate);                                              // [0xc804ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomInnerConeAngle
	// bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate);                                              // [0xc803e24] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomOuterConeAngle
	// bool GetCustomOuterConeAngle(float& AttributeValue);                                                                     // [0xc801aa4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomInnerConeAngle
	// bool GetCustomInnerConeAngle(float& AttributeValue);                                                                     // [0xc80101c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.SetCustomSkeletalMeshUid
	// bool SetCustomSkeletalMeshUid(FString AttributeValue);                                                                   // [0xc81c30c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.InitializePhysicsAssetNode
	// void InitializePhysicsAssetNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                           // [0xc81743c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetCustomSkeletalMeshUid
	// bool GetCustomSkeletalMeshUid(FString& AttributeValue);                                                                  // [0xc814c74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.RemoveCustomVariantSetUid
	// bool RemoveCustomVariantSetUid(FString VariantUID);                                                                      // [0xc818a14] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUids
	// void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);                                                           // [0xc816190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUidCount
	// int32_t GetCustomVariantSetUidCount();                                                                                   // [0xc816164] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUid
	// void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid);                                                      // [0xc815a84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.AddCustomVariantSetUid
	// bool AddCustomVariantSetUid(FString VariantUID);                                                                         // [0xc812258] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
/// Size: 0x0050 (0x000140 - 0x000190)
class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomUseTimeZeroForBindPose
	// bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue);                                                              // [0xc81d06c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomSkeletalMeshFactoryNodeUid
	// bool SetCustomSkeletalMeshFactoryNodeUid(FString AttributeValue);                                                        // [0xc81bc5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomRootJointUid
	// bool SetCustomRootJointUid(FString AttributeValue);                                                                      // [0xc81b48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.InitializeSkeletonNode
	// void InitializeSkeletonNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                               // [0xc817b84] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomUseTimeZeroForBindPose
	// bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue);                                                              // [0xc8159ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomSkeletalMeshFactoryNodeUid
	// bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue);                                                       // [0xc8145b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomRootJointUid
	// bool GetCustomRootJointUid(FString& AttributeValue);                                                                     // [0xc813e64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode
/// Size: 0x0290 (0x000140 - 0x0003D0)
class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomVirtualTextureStreaming
	// bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate);                                     // [0xc81d104] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomTranslatedTextureNodeUid
	// bool SetCustomTranslatedTextureNodeUid(FString AttributeValue);                                                          // [0xc81c9bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomSRGB
	// bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate);                                                        // [0xc81bb3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPreferCompressedSourceData
	// bool SetCustomPreferCompressedSourceData(bool& AttributeValue);                                                          // [0xc81b3f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPowerOfTwoMode
	// bool SetCustomPowerOfTwoMode(char& AttributeValue, bool bAddApplyDelegate);                                              // [0xc81b2dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPaddingColor
	// bool SetCustomPaddingColor(FColor& AttributeValue, bool bAddApplyDelegate);                                              // [0xc81b114] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipLoadOptions
	// bool SetCustomMipLoadOptions(char& AttributeValue, bool bAddApplyDelegate);                                              // [0xc81aff4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipGenSettings
	// bool SetCustomMipGenSettings(char& AttributeValue, bool bAddApplyDelegate);                                              // [0xc81aedc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMaxTextureSize
	// bool SetCustomMaxTextureSize(int32_t& AttributeValue, bool bAddApplyDelegate);                                           // [0xc81adc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLossyCompressionAmount
	// bool SetCustomLossyCompressionAmount(char& AttributeValue, bool bAddApplyDelegate);                                      // [0xc81acac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODGroup
	// bool SetCustomLODGroup(char& AttributeValue, bool bAddApplyDelegate);                                                    // [0xc81ab8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODBias
	// bool SetCustomLODBias(int32_t& AttributeValue, bool bAddApplyDelegate);                                                  // [0xc81aa6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomFilter
	// bool SetCustomFilter(char& AttributeValue, bool bAddApplyDelegate);                                                      // [0xc81a94c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscaleOptions
	// bool SetCustomDownscaleOptions(char& AttributeValue, bool bAddApplyDelegate);                                            // [0xc81a82c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscale
	// bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate);                                                  // [0xc81a70c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDeferCompression
	// bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xc81a5f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionSettings
	// bool SetCustomCompressionSettings(char& AttributeValue, bool bAddApplyDelegate);                                         // [0xc81a4d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionQuality
	// bool SetCustomCompressionQuality(char& AttributeValue, bool bAddApplyDelegate);                                          // [0xc81a3bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionNoAlpha
	// bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate);                                          // [0xc81a2a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositeTextureMode
	// bool SetCustomCompositeTextureMode(char& AttributeValue, bool bAddApplyDelegate);                                        // [0xc81a18c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositePower
	// bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc81a074] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyThreshold
	// bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate);                                         // [0xc819f5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyColor
	// bool SetCustomChromaKeyColor(FColor& AttributeValue, bool bAddApplyDelegate);                                            // [0xc819d94] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombUseLegacyGamma
	// bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate);                                             // [0xc81d684] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombPreserveBorder
	// bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate);                                             // [0xc81d56c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombFlipGreenChannel
	// bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0xc81d454] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombDoScaleMipsForAlphaCoverage
	// bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate);                                // [0xc81d33c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombChromaKeyTexture
	// bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0xc81d224] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAlphaCoverageThresholds
	// bool SetCustomAlphaCoverageThresholds(FVector4& AttributeValue, bool bAddApplyDelegate);                                 // [0xc819c6c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAllowNonPowerOfTwo
	// bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue);                                                                  // [0xc819bd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustVibrance
	// bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc819abc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustSaturation
	// bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate);                                           // [0xc8199a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustRGBCurve
	// bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc81988c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMinAlpha
	// bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc819774] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMaxAlpha
	// bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xc81965c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustHue
	// bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate);                                                  // [0xc819544] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightnessCurve
	// bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate);                                      // [0xc81942c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightness
	// bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate);                                           // [0xc819314] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.InitializeTextureNode
	// void InitializeTextureNode(FString UniqueID, FString DisplayLabel, FString InAssetName);                                 // [0xc8182cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomVirtualTextureStreaming
	// bool GetCustomVirtualTextureStreaming(bool& AttributeValue);                                                             // [0xc81622c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomTranslatedTextureNodeUid
	// bool GetCustomTranslatedTextureNodeUid(FString& AttributeValue);                                                         // [0xc815330] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomSRGB
	// bool GetCustomSRGB(bool& AttributeValue);                                                                                // [0xc814520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPreferCompressedSourceData
	// bool GetCustomPreferCompressedSourceData(bool& AttributeValue);                                                          // [0xc813dcc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPowerOfTwoMode
	// bool GetCustomPowerOfTwoMode(char& AttributeValue);                                                                      // [0xc813d34] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPaddingColor
	// bool GetCustomPaddingColor(FColor& AttributeValue);                                                                      // [0xc813c60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipLoadOptions
	// bool GetCustomMipLoadOptions(char& AttributeValue);                                                                      // [0xc813bc8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipGenSettings
	// bool GetCustomMipGenSettings(char& AttributeValue);                                                                      // [0xc813b30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMaxTextureSize
	// bool GetCustomMaxTextureSize(int32_t& AttributeValue);                                                                   // [0xc813a98] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLossyCompressionAmount
	// bool GetCustomLossyCompressionAmount(char& AttributeValue);                                                              // [0xc813a00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODGroup
	// bool GetCustomLODGroup(char& AttributeValue);                                                                            // [0xc813968] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODBias
	// bool GetCustomLODBias(int32_t& AttributeValue);                                                                          // [0xc8138d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomFilter
	// bool GetCustomFilter(char& AttributeValue);                                                                              // [0xc813838] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscaleOptions
	// bool GetCustomDownscaleOptions(char& AttributeValue);                                                                    // [0xc8137a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscale
	// bool GetCustomDownscale(float& AttributeValue);                                                                          // [0xc813708] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDeferCompression
	// bool GetCustomDeferCompression(bool& AttributeValue);                                                                    // [0xc813670] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionSettings
	// bool GetCustomCompressionSettings(char& AttributeValue);                                                                 // [0xc8135d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionQuality
	// bool GetCustomCompressionQuality(char& AttributeValue);                                                                  // [0xc813540] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionNoAlpha
	// bool GetCustomCompressionNoAlpha(bool& AttributeValue);                                                                  // [0xc8134a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositeTextureMode
	// bool GetCustomCompositeTextureMode(char& AttributeValue);                                                                // [0xc813410] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositePower
	// bool GetCustomCompositePower(float& AttributeValue);                                                                     // [0xc813378] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyThreshold
	// bool GetCustomChromaKeyThreshold(float& AttributeValue);                                                                 // [0xc8132e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyColor
	// bool GetCustomChromaKeyColor(FColor& AttributeValue);                                                                    // [0xc81320c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombUseLegacyGamma
	// bool GetCustombUseLegacyGamma(bool& AttributeValue);                                                                     // [0xc816524] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombPreserveBorder
	// bool GetCustombPreserveBorder(bool& AttributeValue);                                                                     // [0xc81648c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombFlipGreenChannel
	// bool GetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0xc8163f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombDoScaleMipsForAlphaCoverage
	// bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue);                                                        // [0xc81635c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombChromaKeyTexture
	// bool GetCustombChromaKeyTexture(bool& AttributeValue);                                                                   // [0xc8162c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAlphaCoverageThresholds
	// bool GetCustomAlphaCoverageThresholds(FVector4& AttributeValue);                                                         // [0xc813164] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAllowNonPowerOfTwo
	// bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue);                                                                  // [0xc8130cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustVibrance
	// bool GetCustomAdjustVibrance(float& AttributeValue);                                                                     // [0xc813034] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustSaturation
	// bool GetCustomAdjustSaturation(float& AttributeValue);                                                                   // [0xc812f9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustRGBCurve
	// bool GetCustomAdjustRGBCurve(float& AttributeValue);                                                                     // [0xc812f04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMinAlpha
	// bool GetCustomAdjustMinAlpha(float& AttributeValue);                                                                     // [0xc812e6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMaxAlpha
	// bool GetCustomAdjustMaxAlpha(float& AttributeValue);                                                                     // [0xc812dd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustHue
	// bool GetCustomAdjustHue(float& AttributeValue);                                                                          // [0xc812d3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightnessCurve
	// bool GetCustomAdjustBrightnessCurve(float& AttributeValue);                                                              // [0xc812ca4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightness
	// bool GetCustomAdjustBrightness(float& AttributeValue);                                                                   // [0xc812c0c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
/// Size: 0x0030 (0x0003D0 - 0x000400)
class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.SetCustomAddressZ
	// bool SetCustomAddressZ(char AttributeValue, bool bAddApplyDelegate);                                                     // [0xc819258] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressZ
	// bool GetCustomAddressZ(char& AttributeValue);                                                                            // [0xc812b74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressY
	// bool GetCustomAddressY(char& AttributeValue);                                                                            // [0xc812a44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressX
	// bool GetCustomAddressX(char& AttributeValue);                                                                            // [0xc812914] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
/// Size: 0x0098 (0x0003D0 - 0x000468)
class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlocks
	// void SetSourceBlocks(TMap<int32_t, FString>& InSourceBlocks);                                                            // [0xc81e590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlockByCoordinates
	// void SetSourceBlockByCoordinates(int32_t X, int32_t Y, FString InSourceFile);                                            // [0xc81de74] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlock
	// void SetSourceBlock(int32_t BlockIndex, FString InSourceFile);                                                           // [0xc81d79c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressY
	// bool SetCustomAddressY(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);                              // [0xc819194] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressX
	// bool SetCustomAddressX(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);                              // [0xc8190d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlocks
	// TMap<int32_t, FString> GetSourceBlocks();                                                                                // [0xc8173c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlockByCoordinates
	// bool GetSourceBlockByCoordinates(int32_t X, int32_t Y, FString& OutSourceFile);                                          // [0xc816ca8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlock
	// bool GetSourceBlock(int32_t BlockIndex, FString& OutSourceFile);                                                         // [0xc8165bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressY
	// bool GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue);                                                     // [0xc812adc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressX
	// bool GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue);                                                     // [0xc8129ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeTextureCubeArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeTextureCubeFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
/// Size: 0x0020 (0x000468 - 0x000488)
class UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomTextureMultiplier
	// bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate);                                           // [0xc87228c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomBrightness
	// bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate);                                                  // [0xc86b914] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomTextureMultiplier
	// bool GetCustomTextureMultiplier(float& AttributeValue);                                                                  // [0xc85b4c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomBrightness
	// bool GetCustomBrightness(float& AttributeValue);                                                                         // [0xc8557e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeVolumeTextureFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
/// Size: 0x0340 (0x000140 - 0x000480)
class UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonSoftObjectPath
	// bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0xc870c54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonFactoryNodeUid
	// bool SetCustomSkeletonFactoryNodeUid(FString AttributeValue);                                                            // [0xc8705a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomRemoveCurveRedundantKeys
	// bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue);                                                            // [0xc870234] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomMaterialDriveParameterOnCustomAttribute
	// bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);                                             // [0xc86e4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksSampleRate
	// bool SetCustomImportBoneTracksSampleRate(double& AttributeValue);                                                        // [0xc86da74] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStop
	// bool SetCustomImportBoneTracksRangeStop(double& AttributeValue);                                                         // [0xc86d9d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStart
	// bool SetCustomImportBoneTracksRangeStart(double& AttributeValue);                                                        // [0xc86d93c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracks
	// bool SetCustomImportBoneTracks(bool& AttributeValue);                                                                    // [0xc86d8a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportAttributeCurves
	// bool SetCustomImportAttributeCurves(bool& AttributeValue);                                                               // [0xc86d80c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDoNotImportCurveWithZero
	// bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue);                                                            // [0xc86c9b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingNonCurveCustomAttributes
	// bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);                                              // [0xc86c034] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingMorphTargetCurves
	// bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);                                                     // [0xc86bf9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingCustomAttributeCurves
	// bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);                                                 // [0xc86bf04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomAddCurveMetadataToSkeleton
	// bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);                                                          // [0xc86af8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForSceneNodeUids
	// void SetAnimationPayloadKeysForSceneNodeUids(TMap<FString, FString>& SceneNodeAnimationPayloadKeyUids, TMap<FString, char>& SceneNodeAnimationPayloadKeyTypes); // [0xc86a6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForMorphTargetNodeUids
	// void SetAnimationPayloadKeysForMorphTargetNodeUids(TMap<FString, FString>& MorphTargetAnimationPayloadKeyUids, TMap<FString, char>& MorphTargetAnimationPayloadKeyTypes); // [0xc86a530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedMaterialCurveSuffixe
	// bool SetAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);                                                      // [0xc869e74] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeStepCurveName
	// bool SetAnimatedAttributeStepCurveName(FString AttributeStepCurveName);                                                  // [0xc8697b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeCurveName
	// bool SetAnimatedAttributeCurveName(FString AttributeCurveName);                                                          // [0xc8690fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedMaterialCurveSuffixe
	// bool RemoveAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);                                                   // [0xc86546c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeStepCurveName
	// bool RemoveAnimatedAttributeStepCurveName(FString AttributeStepCurveName);                                               // [0xc864db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeCurveName
	// bool RemoveAnimatedAttributeCurveName(FString AttributeCurveName);                                                       // [0xc8646f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.InitializeAnimSequenceNode
	// void InitializeAnimSequenceNode(FString UniqueID, FString DisplayLabel);                                                 // [0xc863060] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetSceneNodeAnimationPayloadKeys
	// void GetSceneNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys); // [0xc860150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetMorphTargetNodeAnimationPayloadKeys
	// void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads); // [0xc85dbbc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonSoftObjectPath
	// bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0xc859f90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonFactoryNodeUid
	// bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue);                                                           // [0xc8598d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomRemoveCurveRedundantKeys
	// bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue);                                                            // [0xc859674] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomMaterialDriveParameterOnCustomAttribute
	// bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);                                             // [0xc857d00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksSampleRate
	// bool GetCustomImportBoneTracksSampleRate(double& AttributeValue);                                                        // [0xc857348] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStop
	// bool GetCustomImportBoneTracksRangeStop(double& AttributeValue);                                                         // [0xc8572ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStart
	// bool GetCustomImportBoneTracksRangeStart(double& AttributeValue);                                                        // [0xc857210] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracks
	// bool GetCustomImportBoneTracks(bool& AttributeValue);                                                                    // [0xc857178] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportAttributeCurves
	// bool GetCustomImportAttributeCurves(bool& AttributeValue);                                                               // [0xc8570e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDoNotImportCurveWithZero
	// bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue);                                                            // [0xc8564b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingNonCurveCustomAttributes
	// bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);                                              // [0xc855ce4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingMorphTargetCurves
	// bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);                                                     // [0xc855c4c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingCustomAttributeCurves
	// bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);                                                 // [0xc855bb4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomAddCurveMetadataToSkeleton
	// bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);                                                          // [0xc854f64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixesCount
	// int32_t GetAnimatedMaterialCurveSuffixesCount();                                                                         // [0xc851a24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixes
	// void GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes);                                        // [0xc851988] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixe
	// void GetAnimatedMaterialCurveSuffixe(int32_t Index, FString& OutMaterialCurveSuffixe);                                   // [0xc8512a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNamesCount
	// int32_t GetAnimatedAttributeStepCurveNamesCount();                                                                       // [0xc85127c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNames
	// void GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames);                                    // [0xc8511e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveName
	// void GetAnimatedAttributeStepCurveName(int32_t Index, FString& OutAttributeStepCurveName);                               // [0xc850b00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNamesCount
	// int32_t GetAnimatedAttributeCurveNamesCount();                                                                           // [0xc850ad4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNames
	// void GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames);                                            // [0xc850a38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveName
	// void GetAnimatedAttributeCurveName(int32_t Index, FString& OutAttributeCurveName);                                       // [0xc850358] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetCustomGlobalOffsetTransform
	// bool SetCustomGlobalOffsetTransform(class UInterchangeBaseNodeContainer* NodeContainer, FTransform& AttributeValue);     // [0xc86d55c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetBakeMeshes
	// bool SetBakeMeshes(class UInterchangeBaseNodeContainer* NodeContainer, bool& AttributeValue);                            // [0xc86a810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetCustomGlobalOffsetTransform
	// bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue);                                                         // [0xc856ed8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetBakeMeshes
	// bool GetBakeMeshes(bool& AttributeValue);                                                                                // [0xc85218c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode
/// Size: 0x0070 (0x000140 - 0x0001B0)
class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTwoSided
	// bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate);                                                    // [0xc8727cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTranslucencyLightingMode
	// bool SetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue, bool bAddApplyDelegate);  // [0xc8726ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomShadingModel
	// bool SetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue, bool bAddApplyDelegate);                  // [0xc870484] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomScreenSpaceReflections
	// bool SetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xc8703ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomRefractionMethod
	// bool SetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue, bool bAddApplyDelegate);                    // [0xc870114] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomOpacityMaskClipValue
	// bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);                                       // [0xc86f060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomBlendMode
	// bool SetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue, bool bAddApplyDelegate);                                // [0xc86b6d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTransmissionColorConnection
	// bool GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                    // [0xc862924] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTangentConnection
	// bool GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName);                                              // [0xc8621e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSubsurfaceConnection
	// bool GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0xc861aac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSpecularConnection
	// bool GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName);                                             // [0xc8612a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRoughnessConnection
	// bool GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xc85fa14] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRefractionConnection
	// bool GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0xc85f2d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOpacityConnection
	// bool GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName);                                              // [0xc85eb9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOcclusionConnection
	// bool GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xc85e3c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetNormalConnection
	// bool GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName);                                               // [0xc85dc8c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetMetallicConnection
	// bool GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName);                                             // [0xc85d480] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetFuzzColorConnection
	// bool GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xc85c48c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetEmissiveColorConnection
	// bool GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                        // [0xc85bd50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTwoSided
	// bool GetCustomTwoSided(bool& AttributeValue);                                                                            // [0xc85b7bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTranslucencyLightingMode
	// bool GetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue);                          // [0xc85b724] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomShadingModel
	// bool GetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue);                                          // [0xc85983c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomScreenSpaceReflections
	// bool GetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xc8597a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomRefractionMethod
	// bool GetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue);                                            // [0xc8595dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomOpacityMaskClipValue
	// bool GetCustomOpacityMaskClipValue(float& AttributeValue);                                                               // [0xc8586b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomBlendMode
	// bool GetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue);                                                        // [0xc8556b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClothConnection
	// bool GetClothConnection(FString& ExpressionNodeUid, FString& OutputName);                                                // [0xc8540a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatRoughnessConnection
	// bool GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);                                   // [0xc853968] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatNormalConnection
	// bool GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName);                                      // [0xc85322c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatConnection
	// bool GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xc852af0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetBaseColorConnection
	// bool GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xc852224] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetAnisotropyConnection
	// bool GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0xc851a50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTransmissionColor
	// bool ConnectToTransmissionColor(FString AttributeValue);                                                                 // [0xc84fca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTangent
	// bool ConnectToTangent(FString ExpressionNodeUid);                                                                        // [0xc84f5e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSubsurface
	// bool ConnectToSubsurface(FString ExpressionNodeUid);                                                                     // [0xc84ef30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSpecular
	// bool ConnectToSpecular(FString ExpressionNodeUid);                                                                       // [0xc84e878] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRoughness
	// bool ConnectToRoughness(FString ExpressionNodeUid);                                                                      // [0xc84e1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRefraction
	// bool ConnectToRefraction(FString AttributeValue);                                                                        // [0xc84db10] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOpacity
	// bool ConnectToOpacity(FString AttributeValue);                                                                           // [0xc84d458] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOcclusion
	// bool ConnectToOcclusion(FString AttributeValue);                                                                         // [0xc84cda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToNormal
	// bool ConnectToNormal(FString ExpressionNodeUid);                                                                         // [0xc84c6e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToMetallic
	// bool ConnectToMetallic(FString AttributeValue);                                                                          // [0xc84c030] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToFuzzColor
	// bool ConnectToFuzzColor(FString AttributeValue);                                                                         // [0xc84b978] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToEmissiveColor
	// bool ConnectToEmissiveColor(FString ExpressionNodeUid);                                                                  // [0xc84b2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToCloth
	// bool ConnectToCloth(FString AttributeValue);                                                                             // [0xc84ac08] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatRoughness
	// bool ConnectToClearCoatRoughness(FString AttributeValue);                                                                // [0xc84a550] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatNormal
	// bool ConnectToClearCoatNormal(FString AttributeValue);                                                                   // [0xc849e98] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoat
	// bool ConnectToClearCoat(FString AttributeValue);                                                                         // [0xc8497e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToBaseColor
	// bool ConnectToBaseColor(FString AttributeValue);                                                                         // [0xc849128] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToAnisotropy
	// bool ConnectToAnisotropy(FString ExpressionNodeUid);                                                                     // [0xc848a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTransmissionColor
	// bool ConnectOutputToTransmissionColor(FString ExpressionNodeUid, FString OutputName);                                    // [0xc848388] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTangent
	// bool ConnectOutputToTangent(FString ExpressionNodeUid, FString OutputName);                                              // [0xc847ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSubsurface
	// bool ConnectOutputToSubsurface(FString ExpressionNodeUid, FString OutputName);                                           // [0xc8475b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSpecular
	// bool ConnectOutputToSpecular(FString ExpressionNodeUid, FString OutputName);                                             // [0xc846ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRoughness
	// bool ConnectOutputToRoughness(FString ExpressionNodeUid, FString OutputName);                                            // [0xc8467e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRefraction
	// bool ConnectOutputToRefraction(FString ExpressionNodeUid, FString OutputName);                                           // [0xc846100] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOpacity
	// bool ConnectOutputToOpacity(FString ExpressionNodeUid, FString OutputName);                                              // [0xc845a18] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOcclusion
	// bool ConnectOutputToOcclusion(FString ExpressionNodeUid, FString OutputName);                                            // [0xc845330] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToNormal
	// bool ConnectOutputToNormal(FString ExpressionNodeUid, FString OutputName);                                               // [0xc844c48] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToMetallic
	// bool ConnectOutputToMetallic(FString ExpressionNodeUid, FString OutputName);                                             // [0xc844560] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToFuzzColor
	// bool ConnectOutputToFuzzColor(FString ExpressionNodeUid, FString OutputName);                                            // [0xc843e78] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToEmissiveColor
	// bool ConnectOutputToEmissiveColor(FString ExpressionNodeUid, FString OutputName);                                        // [0xc843790] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToCloth
	// bool ConnectOutputToCloth(FString ExpressionNodeUid, FString OutputName);                                                // [0xc8430a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatRoughness
	// bool ConnectOutputToClearCoatRoughness(FString ExpressionNodeUid, FString OutputName);                                   // [0xc8429c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatNormal
	// bool ConnectOutputToClearCoatNormal(FString ExpressionNodeUid, FString OutputName);                                      // [0xc8422d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoat
	// bool ConnectOutputToClearCoat(FString ExpressionNodeUid, FString OutputName);                                            // [0xc841bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToBaseColor
	// bool ConnectOutputToBaseColor(FString ExpressionNodeUid, FString OutputName);                                            // [0xc841508] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToAnisotropy
	// bool ConnectOutputToAnisotropy(FString ExpressionNodeUid, FString OutputName);                                           // [0xc840e20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
/// Size: 0x0010 (0x000140 - 0x000150)
class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.SetCustomExpressionClassName
	// bool SetCustomExpressionClassName(FString AttributeValue);                                                               // [0xc86cb68] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.GetCustomExpressionClassName
	// bool GetCustomExpressionClassName(FString& AttributeValue);                                                              // [0xc8565e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomParent
	// bool SetCustomParent(FString AttributeValue);                                                                            // [0xc86f180] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomInstanceClassName
	// bool SetCustomInstanceClassName(FString AttributeValue);                                                                 // [0xc86dcd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomParent
	// bool GetCustomParent(FString& AttributeValue);                                                                           // [0xc85874c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomInstanceClassName
	// bool GetCustomInstanceClassName(FString& AttributeValue);                                                                // [0xc8575ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
/// Size: 0x0010 (0x000150 - 0x000160)
class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.SetCustomMaterialFunctionDependency
	// bool SetCustomMaterialFunctionDependency(FString AttributeValue);                                                        // [0xc86e538] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.GetCustomMaterialFunctionDependency
	// bool GetCustomMaterialFunctionDependency(FString& AttributeValue);                                                       // [0xc857d98] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetInputConnection
	// bool GetInputConnection(FString InputName, FString& ExpressionNodeUid, FString& OutputName);                             // [0xc85cc60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
/// Size: 0x0098 (0x000180 - 0x000218)
class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xc8731b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomGeometricTransform
	// bool SetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xc86d458] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomAnimationAssetUidToPlay
	// bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);                                                           // [0xc86b024] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xc867618] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xc8603e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xc860220] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomGeometricTransform
	// bool GetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xc856dd4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomAnimationAssetUidToPlay
	// bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);                                                          // [0xc854ffc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode
/// Size: 0x0170 (0x000140 - 0x0002B0)
class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xc87389c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorReplace
	// bool SetCustomVertexColorReplace(bool& AttributeValue);                                                                  // [0xc872ff8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorOverride
	// bool SetCustomVertexColorOverride(FColor& AttributeValue);                                                               // [0xc872f24] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorIgnore
	// bool SetCustomVertexColorIgnore(bool& AttributeValue);                                                                   // [0xc872e8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseMikkTSpace
	// bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate);                                               // [0xc872d6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseHighPrecisionTangentBasis
	// bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate);                                // [0xc872c4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseFullPrecisionUVs
	// bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0xc872a0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseBackwardsCompatibleF16TruncUVs
	// bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate);                           // [0xc8728ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRemoveDegenerates
	// bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0xc8702cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeTangents
	// bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0xc86fff4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeNormals
	// bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xc86fed4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomLODGroup
	// bool SetCustomLODGroup(FName& AttributeValue, bool bAddApplyDelegate);                                                   // [0xc86e388] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomComputeWeightedNormals
	// bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate);                                      // [0xc86bd4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xc867cd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveLodDataUniqueId
	// bool RemoveLodDataUniqueId(FString LodDataUniqueId);                                                                     // [0xc866f5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xc860ae4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xc860304] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataUniqueIds
	// void GetLodDataUniqueIds(TArray<FString>& OutLodDataUniqueIds);                                                          // [0xc85d3e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataCount
	// int32_t GetLodDataCount();                                                                                               // [0xc85d3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorReplace
	// bool GetCustomVertexColorReplace(bool& AttributeValue);                                                                  // [0xc85bcb8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorOverride
	// bool GetCustomVertexColorOverride(FColor& AttributeValue);                                                               // [0xc85bbe4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorIgnore
	// bool GetCustomVertexColorIgnore(bool& AttributeValue);                                                                   // [0xc85bb4c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseMikkTSpace
	// bool GetCustomUseMikkTSpace(bool& AttributeValue);                                                                       // [0xc85bab4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseHighPrecisionTangentBasis
	// bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue);                                                        // [0xc85ba1c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseFullPrecisionUVs
	// bool GetCustomUseFullPrecisionUVs(bool& AttributeValue);                                                                 // [0xc85b8ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseBackwardsCompatibleF16TruncUVs
	// bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue);                                                   // [0xc85b854] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRemoveDegenerates
	// bool GetCustomRemoveDegenerates(bool& AttributeValue);                                                                   // [0xc85970c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeTangents
	// bool GetCustomRecomputeTangents(bool& AttributeValue);                                                                   // [0xc859544] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeNormals
	// bool GetCustomRecomputeNormals(bool& AttributeValue);                                                                    // [0xc8594ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomLODGroup
	// bool GetCustomLODGroup(FName& AttributeValue);                                                                           // [0xc857c68] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomComputeWeightedNormals
	// bool GetCustomComputeWeightedNormals(bool& AttributeValue);                                                              // [0xc855a84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.AddLodDataUniqueId
	// bool AddLodDataUniqueId(FString LodDataUniqueId);                                                                        // [0xc83f944] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
/// Size: 0x00D8 (0x0002B0 - 0x000388)
class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomUseHighPrecisionSkinWeights
	// bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate);                                 // [0xc872b2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdUV
	// bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xc87258c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdTangentNormal
	// bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate);                                     // [0xc87246c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdPosition
	// bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);                                          // [0xc87234c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomSkeletonSoftObjectPath
	// bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0xc8712f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomPhysicAssetSoftObjectPath
	// bool SetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0xc86f830] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomMorphThresholdPosition
	// bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);                                     // [0xc86ef40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportVertexAttributes
	// bool SetCustomImportVertexAttributes(bool& AttributeValue);                                                              // [0xc86dc40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportMorphTarget
	// bool SetCustomImportMorphTarget(bool& AttributeValue);                                                                   // [0xc86dba8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportContentType
	// bool SetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);                                    // [0xc86db10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomCreatePhysicsAsset
	// bool SetCustomCreatePhysicsAsset(bool& AttributeValue);                                                                  // [0xc86be6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomBoneInfluenceLimit
	// bool SetCustomBoneInfluenceLimit(int32_t& AttributeValue, bool bAddApplyDelegate);                                       // [0xc86b7f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.InitializeSkeletalMeshNode
	// void InitializeSkeletalMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                           // [0xc86375c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomUseHighPrecisionSkinWeights
	// bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue);                                                         // [0xc85b984] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdUV
	// bool GetCustomThresholdUV(float& AttributeValue);                                                                        // [0xc85b68c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdTangentNormal
	// bool GetCustomThresholdTangentNormal(float& AttributeValue);                                                             // [0xc85b5f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdPosition
	// bool GetCustomThresholdPosition(float& AttributeValue);                                                                  // [0xc85b55c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomSkeletonSoftObjectPath
	// bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0xc85a634] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomPhysicAssetSoftObjectPath
	// bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0xc858e08] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomMorphThresholdPosition
	// bool GetCustomMorphThresholdPosition(float& AttributeValue);                                                             // [0xc85861c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportVertexAttributes
	// bool GetCustomImportVertexAttributes(bool& AttributeValue);                                                              // [0xc857514] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportMorphTarget
	// bool GetCustomImportMorphTarget(bool& AttributeValue);                                                                   // [0xc85747c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportContentType
	// bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);                                    // [0xc8573e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomCreatePhysicsAsset
	// bool GetCustomCreatePhysicsAsset(bool& AttributeValue);                                                                  // [0xc855b1c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomBoneInfluenceLimit
	// bool GetCustomBoneInfluenceLimit(int32_t& AttributeValue);                                                               // [0xc855750] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.SetCustomSkeletonUid
	// bool SetCustomSkeletonUid(FString AttributeValue);                                                                       // [0xc87199c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveMeshUid
	// bool RemoveMeshUid(FString MeshName);                                                                                    // [0xc7cae44] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveAllMeshes
	// bool RemoveAllMeshes();                                                                                                  // [0xc864670] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUidsCount
	// int32_t GetMeshUidsCount();                                                                                              // [0xc7c3b68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUids
	// void GetMeshUids(TArray<FString>& OutMeshNames);                                                                         // [0xc7c3acc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetCustomSkeletonUid
	// bool GetCustomSkeletonUid(FString& AttributeValue);                                                                      // [0xc85acd8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.AddMeshUid
	// bool AddMeshUid(FString MeshName);                                                                                       // [0xc7d41d8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
/// Size: 0x00E8 (0x0002B0 - 0x000398)
class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSupportFaceRemap
	// bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xc87216c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSrcLightmapIndex
	// bool SetCustomSrcLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate);                                         // [0xc87204c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMinLightmapResolution
	// bool SetCustomMinLightmapResolution(int32_t& AttributeValue, bool bAddApplyDelegate);                                    // [0xc86ed08] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMaxLumenMeshCards
	// bool SetCustomMaxLumenMeshCards(int32_t& AttributeValue, bool bAddApplyDelegate);                                        // [0xc86ebe8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateLightmapUVs
	// bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0xc86d338] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateDistanceFieldAsIfTwoSided
	// bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate);                           // [0xc86d218] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDstLightmapIndex
	// bool SetCustomDstLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate);                                         // [0xc86ca48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldResolutionScale
	// bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate);                               // [0xc86c890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldReplacementMesh
	// bool SetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue, bool bAddApplyDelegate);                     // [0xc86c0cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildScale3D
	// bool SetCustomBuildScale3D(FVector& AttributeValue, bool bAddApplyDelegate);                                             // [0xc86bbe8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildReversedIndexBuffer
	// bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate);                                    // [0xc86bac8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildNanite
	// bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate);                                                 // [0xc86b9d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.RemoveSocketUd
	// bool RemoveSocketUd(FString SocketUid);                                                                                  // [0xc868384] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.InitializeStaticMeshNode
	// void InitializeStaticMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                             // [0xc863ea4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUids
	// void GetSocketUids(TArray<FString>& OutSocketUids);                                                                      // [0xc86120c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUidCount
	// int32_t GetSocketUidCount();                                                                                             // [0xc8611e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x615715c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSupportFaceRemap
	// bool GetCustomSupportFaceRemap(bool& AttributeValue);                                                                    // [0xc85b42c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSrcLightmapIndex
	// bool GetCustomSrcLightmapIndex(int32_t& AttributeValue);                                                                 // [0xc85b394] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMinLightmapResolution
	// bool GetCustomMinLightmapResolution(int32_t& AttributeValue);                                                            // [0xc8584ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMaxLumenMeshCards
	// bool GetCustomMaxLumenMeshCards(int32_t& AttributeValue);                                                                // [0xc858454] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateLightmapUVs
	// bool GetCustomGenerateLightmapUVs(bool& AttributeValue);                                                                 // [0xc856d3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateDistanceFieldAsIfTwoSided
	// bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue);                                                   // [0xc856ca4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDstLightmapIndex
	// bool GetCustomDstLightmapIndex(int32_t& AttributeValue);                                                                 // [0xc856550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldResolutionScale
	// bool GetCustomDistanceFieldResolutionScale(float& AttributeValue);                                                       // [0xc856420] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldReplacementMesh
	// bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue);                                             // [0xc855d7c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildScale3D
	// bool GetCustomBuildScale3D(FVector& AttributeValue);                                                                     // [0xc8559b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildReversedIndexBuffer
	// bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue);                                                            // [0xc855918] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildNanite
	// bool GetCustomBuildNanite(bool& AttributeValue);                                                                         // [0xc855880] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUids
	// bool AddSocketUids(TArray<FString>& InSocketUids);                                                                       // [0xc8406bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUid
	// bool AddSocketUid(FString SocketUid);                                                                                    // [0xc840000] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
/// Size: 0x00C0 (0x000140 - 0x000200)
class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetOneConvexHullPerUCX
	// bool SetOneConvexHullPerUCX(bool AttributeValue);                                                                        // [0xc873120] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetImportCollision
	// bool SetImportCollision(bool AttributeValue);                                                                            // [0xc873090] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveSphereCollisionMeshUid
	// bool RemoveSphereCollisionMeshUid(FString MeshName);                                                                     // [0xc868a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveMeshUid
	// bool RemoveMeshUid(FString MeshName);                                                                                    // [0xc818a14] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveConvexCollisionMeshUid
	// bool RemoveConvexCollisionMeshUid(FString MeshName);                                                                     // [0xc8668a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveCapsuleCollisionMeshUid
	// bool RemoveCapsuleCollisionMeshUid(FString MeshName);                                                                    // [0xc8661e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveBoxCollisionMeshUid
	// bool RemoveBoxCollisionMeshUid(FString MeshName);                                                                        // [0xc865b28] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllSphereCollisionMeshes
	// bool RemoveAllSphereCollisionMeshes();                                                                                   // [0xc8646c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllMeshes
	// bool RemoveAllMeshes();                                                                                                  // [0xc86469c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllConvexCollisionMeshes
	// bool RemoveAllConvexCollisionMeshes();                                                                                   // [0xc864644] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllCapsuleCollisionMeshes
	// bool RemoveAllCapsuleCollisionMeshes();                                                                                  // [0xc864618] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllBoxCollisionMeshes
	// bool RemoveAllBoxCollisionMeshes();                                                                                      // [0xc8645ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUidsCount
	// int32_t GetSphereCollisionMeshUidsCount();                                                                               // [0xc861a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUids
	// void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames);                                                          // [0xc8619e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetOneConvexHullPerUCX
	// bool GetOneConvexHullPerUCX(bool& AttributeValue);                                                                       // [0xc85eb04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUidsCount
	// int32_t GetMeshUidsCount();                                                                                              // [0xc816164] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUids
	// void GetMeshUids(TArray<FString>& OutMeshNames);                                                                         // [0xc816190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetImportCollision
	// bool GetImportCollision(bool& AttributeValue);                                                                           // [0xc85cbc8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUidsCount
	// int32_t GetConvexCollisionMeshUidsCount();                                                                               // [0xc85487c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUids
	// void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames);                                                          // [0xc8547e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUidsCount
	// int32_t GetCapsuleCollisionMeshUidsCount();                                                                              // [0xc852ac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUids
	// void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames);                                                         // [0xc852a28] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUidsCount
	// int32_t GetBoxCollisionMeshUidsCount();                                                                                  // [0xc8529fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUids
	// void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames);                                                             // [0xc852960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddSphereCollisionMeshUid
	// bool AddSphereCollisionMeshUid(FString MeshName);                                                                        // [0xc840764] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddMeshUid
	// bool AddMeshUid(FString MeshName);                                                                                       // [0xc812258] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddConvexCollisionMeshUid
	// bool AddConvexCollisionMeshUid(FString MeshName);                                                                        // [0xc83f288] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddCapsuleCollisionMeshUid
	// bool AddCapsuleCollisionMeshUid(FString MeshName);                                                                       // [0xc83ebcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddBoxCollisionMeshUid
	// bool AddBoxCollisionMeshUid(FString MeshName);                                                                           // [0xc83e510] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/InterchangeFactoryNodes.EInterchangeSkeletalMeshContentType
/// Size: 0x04
enum EInterchangeSkeletalMeshContentType : uint8_t
{
	EInterchangeSkeletalMeshContentType__All                                         = 0,
	EInterchangeSkeletalMeshContentType__Geometry                                    = 1,
	EInterchangeSkeletalMeshContentType__SkinningWeights                             = 2,
	EInterchangeSkeletalMeshContentType__MAX                                         = 3
};

