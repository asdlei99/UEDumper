
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Landscape

/// Class /Script/LandscapePatch.LandscapePatchComponent
/// Size: 0x0070 (0x000290 - 0x000300)
class ULandscapePatchComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TWeakObjectPtr<ALandscape*>)               Landscape                                                   OFFSET(get<T>, {0x290, 32, 0, 0})
	CMember(TWeakObjectPtr<ALandscapePatchManager*>)   PatchManager                                                OFFSET(get<T>, {0x2B0, 32, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      bPropertiesCopiedIndicator                                  OFFSET(get<bool>, {0x2D3, 1, 0, 0})
	CMember(TWeakObjectPtr<ALandscapePatchManager*>)   PreviousPatchManager                                        OFFSET(get<T>, {0x2D8, 32, 0, 0})


	/// Functions
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetPatchManager
	// void SetPatchManager(class ALandscapePatchManager* NewPatchManager);                                                     // [0xc2cfb3c] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetLandscape
	// void SetLandscape(class ALandscape* NewLandscape);                                                                       // [0xc2cfab8] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetIsEnabled
	// void SetIsEnabled(bool bEnabledIn);                                                                                      // [0xc2cfa30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate
	// void RequestLandscapeUpdate(bool bInUserTriggeredUpdate);                                                                // [0x60325ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.MoveToTop
	// void MoveToTop();                                                                                                        // [0xc2cf3fc] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapePatchComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xc2cf3d4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapePatchComponent.GetPatchManager
	// class ALandscapePatchManager* GetPatchManager();                                                                         // [0xc2cf184] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld
	// FTransform GetLandscapeHeightmapCoordsToWorld();                                                                         // [0xc2cf108] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LandscapePatch.LandscapeCircleHeightPatch
/// Size: 0x0010 (0x000300 - 0x000310)
class ULandscapeCircleHeightPatch : public ULandscapePatchComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x2F8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(bool)                                      bEditVisibility                                             OFFSET(get<bool>, {0x300, 1, 0, 0})
	DMember(bool)                                      bExclusiveRadius                                            OFFSET(get<bool>, {0x301, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapePatchManager
/// Size: 0x0070 (0x000290 - 0x000300)
class ALandscapePatchManager : public ALandscapeBlueprintBrushBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TArray<TWeakObjectPtr<ULandscapePatchComponent*>>) PatchComponents                                     OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FTransform)                                HeightmapCoordsToWorld                                      OFFSET(getStruct<T>, {0x2A0, 96, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeTextureBackedRenderTargetBase
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeTextureBackedRenderTargetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UTextureRenderTarget2D*)             PostLoadRT                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UTexture2D*)                         InternalTexture                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   SizeX                                                       OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bUseInternalTextureOnly                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeWeightTextureBackedRenderTarget
/// Size: 0x0008 (0x000050 - 0x000058)
class ULandscapeWeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bUseAlphaChannel                                            OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeHeightTextureBackedRenderTarget
/// Size: 0x0010 (0x000050 - 0x000060)
class ULandscapeHeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FLandscapeHeightPatchConvertToNativeParams) ConversionParams                                           OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   RenderTargetFormat                                          OFFSET(get<T>, {0x5C, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeWeightPatchTextureInfo
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightPatchTextureInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     WeightmapLayerName                                          OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(bool)                                      bEditVisibilityLayer                                        OFFSET(get<bool>, {0x2C, 1, 0, 0})
	CMember(class UTexture*)                           TextureAsset                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class ULandscapeWeightTextureBackedRenderTarget*) InternalData                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          SourceMode                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          DetailPanelSourceMode                                       OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bUseAlphaChannel                                            OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bOverrideBlendMode                                          OFFSET(get<bool>, {0x43, 1, 0, 0})
	CMember(ELandscapeTexturePatchBlendMode)           OverrideBlendMode                                           OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TWeakObjectPtr<ULandscapeTexturePatch*>)   OwningPatch                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeTexturePatch
/// Size: 0x0080 (0x000300 - 0x000380)
class ULandscapeTexturePatch : public ULandscapePatchComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(int32_t)                                   ResolutionX                                                 OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	DMember(int32_t)                                   ResolutionY                                                 OFFSET(get<int32_t>, {0x2FC, 4, 0, 0})
	SMember(FVector2D)                                 UnscaledPatchCoverage                                       OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(ELandscapeTexturePatchBlendMode)           BlendMode                                                   OFFSET(get<T>, {0x310, 1, 0, 0})
	CMember(ELandscapeTexturePatchFalloffMode)         FalloffMode                                                 OFFSET(get<T>, {0x311, 1, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0x314, 4, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          HeightSourceMode                                            OFFSET(get<T>, {0x318, 1, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          DetailPanelHeightSourceMode                                 OFFSET(get<T>, {0x319, 1, 0, 0})
	CMember(class ULandscapeHeightTextureBackedRenderTarget*) HeightInternalData                                   OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UTexture*)                           HeightTextureAsset                                          OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(bool)                                      bUseTextureAlphaForHeight                                   OFFSET(get<bool>, {0x330, 1, 0, 0})
	CMember(ELandscapeTextureHeightPatchEncoding)      HeightEncoding                                              OFFSET(get<T>, {0x331, 1, 0, 0})
	SMember(FLandscapeTexturePatchEncodingSettings)    HeightEncodingSettings                                      OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	CMember(ELandscapeTextureHeightPatchZeroHeightMeaning) ZeroHeightMeaning                                       OFFSET(get<T>, {0x348, 1, 0, 0})
	DMember(bool)                                      bApplyComponentZScale                                       OFFSET(get<bool>, {0x349, 1, 0, 0})
	CMember(TArray<class ULandscapeWeightPatchTextureInfo*>) WeightPatches                                         OFFSET(get<T>, {0x350, 16, 0, 0})
	DMember(int32_t)                                   NumWeightPatches                                            OFFSET(get<int32_t>, {0x360, 4, 0, 0})
	DMember(bool)                                      bBaseResolutionOffLandscape                                 OFFSET(get<bool>, {0x365, 1, 0, 0})
	DMember(float)                                     ResolutionMultiplier                                        OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(int32_t)                                   InitTextureSizeX                                            OFFSET(get<int32_t>, {0x36C, 4, 0, 0})
	DMember(int32_t)                                   InitTextureSizeY                                            OFFSET(get<int32_t>, {0x370, 4, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   HeightRenderTargetFormat                                    OFFSET(get<T>, {0x374, 1, 0, 0})


	/// Functions
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SnapToLandscape
	// void SnapToLandscape();                                                                                                  // [0x32e4b44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning
	// void SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn);                            // [0xc2d0300] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset
	// void SetWeightPatchTextureAsset(FName& InWeightmapLayerName, class UTexture* TextureIn);                                 // [0xc2d01f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode
	// void SetWeightPatchSourceMode(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode);                    // [0xc2d00e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride
	// void SetWeightPatchBlendModeOverride(FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode BlendMode);            // [0xc2cffcc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch
	// void SetUseAlphaChannelForWeightPatch(FName& InWeightmapLayerName, bool bUseAlphaChannel);                               // [0xc2cfeb8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight
	// void SetUseAlphaChannelForHeight(bool bUse);                                                                             // [0xc2cfe38] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage
	// void SetUnscaledCoverage(FVector2D Coverage);                                                                            // [0xc2cfcfc] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetResolution
	// void SetResolution(FVector2D ResolutionIn);                                                                              // [0xc2cfbc0] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset
	// void SetHeightTextureAsset(class UTexture* TextureIn);                                                                   // [0xc2cf9a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode
	// void SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode);                                                      // [0xc2cf920] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat
	// void SetHeightRenderTargetFormat(TEnumAsByte<ETextureRenderTargetFormat> Format);                                        // [0xc2cf8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings
	// void SetHeightEncodingSettings(FLandscapeTexturePatchEncodingSettings& Settings);                                        // [0xc2cf80c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode
	// void SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);                                           // [0xc2cf790] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetFalloff
	// void SetFalloff(float FalloffIn);                                                                                        // [0xc2cf710] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetEditVisibilityLayer
	// void SetEditVisibilityLayer(FName& InWeightmapLayerName, bool bEditVisibilityLayer);                                     // [0xc2cf5fc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetBlendMode
	// void SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn);                                                          // [0xc2cf580] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode
	// void ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);                                         // [0xc2cf4b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch
	// void RemoveWeightPatch(FName& InWeightmapLayerName);                                                                     // [0xc2cf428] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches
	// void RemoveAllWeightPatches();                                                                                           // [0xc2cf410] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ReinitializeWeights
	// void ReinitializeWeights();                                                                                              // [0x32e4b44] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ReinitializeHeight
	// void ReinitializeHeight();                                                                                               // [0x32e4b44] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode
	// ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(FName& InWeightmapLayerName);                                  // [0xc2cf334] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget
	// class UTextureRenderTarget2D* GetWeightPatchRenderTarget(FName& InWeightmapLayerName);                                   // [0xc2cf294] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage
	// FVector2D GetUnscaledCoverage();                                                                                         // [0xc2cf260] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetResolution
	// FVector2D GetResolution();                                                                                               // [0xc2cf22c] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform
	// FTransform GetPatchToWorldTransform();                                                                                   // [0xc2cf1ac] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape
	// bool GetInitResolutionFromLandscape(float ResolutionMultiplier, FVector2D& ResolutionOut);                               // [0xc2cf028] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode
	// ELandscapeTexturePatchSourceMode GetHeightSourceMode();                                                                  // [0xc2cf000] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget
	// class UTextureRenderTarget2D* GetHeightRenderTarget(bool bMarkDirty);                                                    // [0xc2cef68] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize
	// FVector2D GetFullUnscaledWorldSize();                                                                                    // [0xc2cef34] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames
	// TArray<FName> GetAllWeightPatchLayerNames();                                                                             // [0xc2ceef4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches
	// void DisableAllWeightPatches();                                                                                          // [0xc2ceedc] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride
	// void ClearWeightPatchBlendModeOverride(FName& InWeightmapLayerName);                                                     // [0xc2cee4c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.AddWeightPatch
	// void AddWeightPatch(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel);    // [0xc2cecc0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LandscapePatch.LandscapePatchComponentInstanceData
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class FLandscapePatchComponentInstanceData : public FSceneComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   IndexInManager                                              OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
};

/// Struct /Script/LandscapePatch.LandscapeTexturePatchEncodingSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeTexturePatchEncodingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    ZeroInEncoding                                              OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    WorldSpaceEncodingScale                                     OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/LandscapePatch.LandscapeHeightPatchConvertToNativeParams
/// Size: 0x000C (0x000000 - 0x00000C)
class FLandscapeHeightPatchConvertToNativeParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ZeroInEncoding                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HeightScale                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     HeightOffset                                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchSourceMode
/// Size: 0x05
enum ELandscapeTexturePatchSourceMode : uint8_t
{
	ELandscapeTexturePatchSourceMode__None                                           = 0,
	ELandscapeTexturePatchSourceMode__InternalTexture                                = 1,
	ELandscapeTexturePatchSourceMode__TextureBackedRenderTarget                      = 2,
	ELandscapeTexturePatchSourceMode__TextureAsset                                   = 3,
	ELandscapeTexturePatchSourceMode__ELandscapeTexturePatchSourceMode_MAX           = 4
};

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchBlendMode
/// Size: 0x04
enum ELandscapeTexturePatchBlendMode : uint8_t
{
	ELandscapeTexturePatchBlendMode__AlphaBlend                                      = 0,
	ELandscapeTexturePatchBlendMode__Additive                                        = 1,
	ELandscapeTexturePatchBlendMode__Min                                             = 2,
	ELandscapeTexturePatchBlendMode__Max                                             = 3
};

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchFalloffMode
/// Size: 0x03
enum ELandscapeTexturePatchFalloffMode : uint8_t
{
	ELandscapeTexturePatchFalloffMode__Circle                                        = 0,
	ELandscapeTexturePatchFalloffMode__RoundedRectangle                              = 1,
	ELandscapeTexturePatchFalloffMode__ELandscapeTexturePatchFalloffMode_MAX         = 2
};

/// Enum /Script/LandscapePatch.ELandscapeTextureHeightPatchEncoding
/// Size: 0x04
enum ELandscapeTextureHeightPatchEncoding : uint8_t
{
	ELandscapeTextureHeightPatchEncoding__ZeroToOne                                  = 0,
	ELandscapeTextureHeightPatchEncoding__WorldUnits                                 = 1,
	ELandscapeTextureHeightPatchEncoding__NativePackedHeight                         = 2,
	ELandscapeTextureHeightPatchEncoding__ELandscapeTextureHeightPatchEncoding_MAX   = 3
};

/// Enum /Script/LandscapePatch.ELandscapeTextureHeightPatchZeroHeightMeaning
/// Size: 0x04
enum ELandscapeTextureHeightPatchZeroHeightMeaning : uint8_t
{
	ELandscapeTextureHeightPatchZeroHeightMeaning__PatchZ                            = 0,
	ELandscapeTextureHeightPatchZeroHeightMeaning__LandscapeZ                        = 1,
	ELandscapeTextureHeightPatchZeroHeightMeaning__WorldZero                         = 2,
	ELandscapeTextureHeightPatchZeroHeightMeaning__ELandscapeTextureHeightPatchZeroHeightMeaning_MAX = 3
};

