
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Landscape

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchSourceMode
/// Size: 0x05
enum class ELandscapeTexturePatchSourceMode : uint8_t
{
	ELandscapeTexturePatchSourceMode__None                                           = 0,
	ELandscapeTexturePatchSourceMode__InternalTexture                                = 1,
	ELandscapeTexturePatchSourceMode__TextureBackedRenderTarget                      = 2,
	ELandscapeTexturePatchSourceMode__TextureAsset                                   = 3,
	ELandscapeTexturePatchSourceMode__ELandscapeTexturePatchSourceMode_MAX           = 4
};

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchBlendMode
/// Size: 0x04
enum class ELandscapeTexturePatchBlendMode : uint8_t
{
	ELandscapeTexturePatchBlendMode__AlphaBlend                                      = 0,
	ELandscapeTexturePatchBlendMode__Additive                                        = 1,
	ELandscapeTexturePatchBlendMode__Min                                             = 2,
	ELandscapeTexturePatchBlendMode__Max                                             = 3
};

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchFalloffMode
/// Size: 0x03
enum class ELandscapeTexturePatchFalloffMode : uint8_t
{
	ELandscapeTexturePatchFalloffMode__Circle                                        = 0,
	ELandscapeTexturePatchFalloffMode__RoundedRectangle                              = 1,
	ELandscapeTexturePatchFalloffMode__ELandscapeTexturePatchFalloffMode_MAX         = 2
};

/// Enum /Script/LandscapePatch.ELandscapeTextureHeightPatchEncoding
/// Size: 0x04
enum class ELandscapeTextureHeightPatchEncoding : uint8_t
{
	ELandscapeTextureHeightPatchEncoding__ZeroToOne                                  = 0,
	ELandscapeTextureHeightPatchEncoding__WorldUnits                                 = 1,
	ELandscapeTextureHeightPatchEncoding__NativePackedHeight                         = 2,
	ELandscapeTextureHeightPatchEncoding__ELandscapeTextureHeightPatchEncoding_MAX   = 3
};

/// Enum /Script/LandscapePatch.ELandscapeTextureHeightPatchZeroHeightMeaning
/// Size: 0x04
enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8_t
{
	ELandscapeTextureHeightPatchZeroHeightMeaning__PatchZ                            = 0,
	ELandscapeTextureHeightPatchZeroHeightMeaning__LandscapeZ                        = 1,
	ELandscapeTextureHeightPatchZeroHeightMeaning__WorldZero                         = 2,
	ELandscapeTextureHeightPatchZeroHeightMeaning__ELandscapeTextureHeightPatchZeroHeightMeaning_MAX = 3
};

/// Class /Script/LandscapePatch.LandscapePatchComponent
/// Size: 0x0070 (0x000220 - 0x000290)
#pragma pack(push, 0x1)
class alignas(0x10) 
ULandscapePatchComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(32,14734) /* TWeakObjectPtr<ALandscape*> */ __um(Landscape);                                     // 0x0220   (0x0020)  
	SDK_UNDEFINED(32,14735) /* TWeakObjectPtr<ALandscapePatchManager*> */ __um(PatchManager);                      // 0x0240   (0x0020)  
	bool                                               bIsEnabled;                                                 // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0261   (0x0002)  MISSED
	bool                                               bPropertiesCopiedIndicator;                                 // 0x0263   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0264   (0x0004)  MISSED
	SDK_UNDEFINED(32,14736) /* TWeakObjectPtr<ALandscapePatchManager*> */ __um(PreviousPatchManager);              // 0x0268   (0x0020)  


	/// Functions
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetPatchManager
	// void SetPatchManager(class ALandscapePatchManager* NewPatchManager);                                                  // [0xc689820] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetLandscape
	// void SetLandscape(class ALandscape* NewLandscape);                                                                    // [0xc68979c] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetIsEnabled
	// void SetIsEnabled(bool bEnabledIn);                                                                                   // [0xc689714] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate
	// void RequestLandscapeUpdate(bool bInUserTriggeredUpdate);                                                             // [0x5dd0bf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.MoveToTop
	// void MoveToTop();                                                                                                     // [0xc688f68] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapePatchComponent.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xc688c98] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapePatchComponent.GetPatchManager
	// class ALandscapePatchManager* GetPatchManager();                                                                      // [0xc688a48] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld
	// FTransform GetLandscapeHeightmapCoordsToWorld();                                                                      // [0xc6889cc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/LandscapePatch.LandscapeCircleHeightPatch
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ULandscapeCircleHeightPatch : public ULandscapePatchComponent
{ 
public:
	float                                              Radius;                                                     // 0x0288   (0x0004)  
	float                                              Falloff;                                                    // 0x028C   (0x0004)  
	bool                                               bEditVisibility;                                            // 0x0290   (0x0001)  
	bool                                               bExclusiveRadius;                                           // 0x0291   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0292   (0x000E)  MISSED
};

/// Class /Script/LandscapePatch.LandscapePatchManager
/// Size: 0x0070 (0x000290 - 0x000300)
class ALandscapePatchManager : public ALandscapeBlueprintBrushBase
{ 
public:
	SDK_UNDEFINED(16,14737) /* TArray<TWeakObjectPtr<ULandscapePatchComponent*>> */ __um(PatchComponents);         // 0x0290   (0x0010)  
	FTransform                                         HeightmapCoordsToWorld;                                     // 0x02A0   (0x0060)  


	/// Functions
	// Function /Script/LandscapePatch.LandscapePatchManager.SetTargetLandscape
	// void SetTargetLandscape(class ALandscape* InOwningLandscape);                                                         // [0xbdf7ce4] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchManager.RemovePatch
	// bool RemovePatch(class ULandscapePatchComponent* Patch);                                                              // [0xc688f94] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchManager.MovePatchToIndex
	// void MovePatchToIndex(class ULandscapePatchComponent* Patch, int32_t Index);                                          // [0xc688cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchManager.GetIndexOfPatch
	// int32_t GetIndexOfPatch(class ULandscapePatchComponent* Patch);                                                       // [0xc68885c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapePatchManager.ContainsPatch
	// bool ContainsPatch(class ULandscapePatchComponent* Patch);                                                            // [0xc688680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapePatchManager.AddPatch
	// void AddPatch(class ULandscapePatchComponent* Patch);                                                                 // [0xc688304] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LandscapePatch.LandscapeTextureBackedRenderTargetBase
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeTextureBackedRenderTargetBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UTextureRenderTarget2D*                      PostLoadRT;                                                 // 0x0028   (0x0008)  
	class UTexture2D*                                  InternalTexture;                                            // 0x0030   (0x0008)  
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0038   (0x0008)  
	int32_t                                            SizeX;                                                      // 0x0040   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x0044   (0x0004)  
	bool                                               bUseInternalTextureOnly;                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/LandscapePatch.LandscapeWeightTextureBackedRenderTarget
/// Size: 0x0008 (0x000050 - 0x000058)
class ULandscapeWeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{ 
public:
	bool                                               bUseAlphaChannel;                                           // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/LandscapePatch.LandscapeHeightPatchConvertToNativeParams
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLandscapeHeightPatchConvertToNativeParams
{ 
	float                                              ZeroInEncoding;                                             // 0x0000   (0x0004)  
	float                                              HeightScale;                                                // 0x0004   (0x0004)  
	float                                              HeightOffset;                                               // 0x0008   (0x0004)  
};

/// Class /Script/LandscapePatch.LandscapeHeightTextureBackedRenderTarget
/// Size: 0x0010 (0x000050 - 0x000060)
class ULandscapeHeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{ 
public:
	FLandscapeHeightPatchConvertToNativeParams         ConversionParams;                                           // 0x0050   (0x000C)  
	SDK_UNDEFINED(1,14738) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(RenderTargetFormat);                 // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
};

/// Class /Script/LandscapePatch.LandscapeWeightPatchTextureInfo
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightPatchTextureInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              WeightmapLayerName;                                         // 0x0028   (0x0004)  
	bool                                               bEditVisibilityLayer;                                       // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	class UTexture*                                    TextureAsset;                                               // 0x0030   (0x0008)  
	class ULandscapeWeightTextureBackedRenderTarget*   InternalData;                                               // 0x0038   (0x0008)  
	ELandscapeTexturePatchSourceMode                   SourceMode;                                                 // 0x0040   (0x0001)  
	ELandscapeTexturePatchSourceMode                   DetailPanelSourceMode;                                      // 0x0041   (0x0001)  
	bool                                               bUseAlphaChannel;                                           // 0x0042   (0x0001)  
	bool                                               bOverrideBlendMode;                                         // 0x0043   (0x0001)  
	ELandscapeTexturePatchBlendMode                    OverrideBlendMode;                                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	SDK_UNDEFINED(8,14739) /* TWeakObjectPtr<ULandscapeTexturePatch*> */ __um(OwningPatch);                        // 0x0048   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Struct /Script/LandscapePatch.LandscapeTexturePatchEncodingSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeTexturePatchEncodingSettings
{ 
	double                                             ZeroInEncoding;                                             // 0x0000   (0x0008)  
	double                                             WorldSpaceEncodingScale;                                    // 0x0008   (0x0008)  
};

/// Class /Script/LandscapePatch.LandscapeTexturePatch
/// Size: 0x0080 (0x000290 - 0x000310)
class ULandscapeTexturePatch : public ULandscapePatchComponent
{ 
public:
	int32_t                                            ResolutionX;                                                // 0x0288   (0x0004)  
	int32_t                                            ResolutionY;                                                // 0x028C   (0x0004)  
	FVector2D                                          UnscaledPatchCoverage;                                      // 0x0290   (0x0010)  
	ELandscapeTexturePatchBlendMode                    BlendMode;                                                  // 0x02A0   (0x0001)  
	ELandscapeTexturePatchFalloffMode                  FalloffMode;                                                // 0x02A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02A2   (0x0002)  MISSED
	float                                              Falloff;                                                    // 0x02A4   (0x0004)  
	ELandscapeTexturePatchSourceMode                   HeightSourceMode;                                           // 0x02A8   (0x0001)  
	ELandscapeTexturePatchSourceMode                   DetailPanelHeightSourceMode;                                // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02AA   (0x0006)  MISSED
	class ULandscapeHeightTextureBackedRenderTarget*   HeightInternalData;                                         // 0x02B0   (0x0008)  
	class UTexture*                                    HeightTextureAsset;                                         // 0x02B8   (0x0008)  
	bool                                               bUseTextureAlphaForHeight;                                  // 0x02C0   (0x0001)  
	ELandscapeTextureHeightPatchEncoding               HeightEncoding;                                             // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x02C2   (0x0006)  MISSED
	FLandscapeTexturePatchEncodingSettings             HeightEncodingSettings;                                     // 0x02C8   (0x0010)  
	ELandscapeTextureHeightPatchZeroHeightMeaning      ZeroHeightMeaning;                                          // 0x02D8   (0x0001)  
	bool                                               bApplyComponentZScale;                                      // 0x02D9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x02DA   (0x0006)  MISSED
	TArray<class ULandscapeWeightPatchTextureInfo*>    WeightPatches;                                              // 0x02E0   (0x0010)  
	int32_t                                            NumWeightPatches;                                           // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x02F4   (0x0001)  MISSED
	bool                                               bBaseResolutionOffLandscape;                                // 0x02F5   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x02F6   (0x0002)  MISSED
	float                                              ResolutionMultiplier;                                       // 0x02F8   (0x0004)  
	int32_t                                            InitTextureSizeX;                                           // 0x02FC   (0x0004)  
	int32_t                                            InitTextureSizeY;                                           // 0x0300   (0x0004)  
	SDK_UNDEFINED(1,14740) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(HeightRenderTargetFormat);           // 0x0304   (0x0001)  
	unsigned char                                      UnknownData06_6[0xB];                                       // 0x0305   (0x000B)  MISSED


	/// Functions
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SnapToLandscape
	// void SnapToLandscape();                                                                                               // [0x3097b14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning
	// void SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn);                         // [0xc689ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset
	// void SetWeightPatchTextureAsset(FName& InWeightmapLayerName, class UTexture* TextureIn);                              // [0xc689ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode
	// void SetWeightPatchSourceMode(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode);                 // [0xc689ddc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride
	// void SetWeightPatchBlendModeOverride(FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode BlendMode);         // [0xc689cc8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch
	// void SetUseAlphaChannelForWeightPatch(FName& InWeightmapLayerName, bool bUseAlphaChannel);                            // [0xc689bb4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight
	// void SetUseAlphaChannelForHeight(bool bUse);                                                                          // [0xc689b34] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage
	// void SetUnscaledCoverage(FVector2D Coverage);                                                                         // [0xc6899ec] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetResolution
	// void SetResolution(FVector2D ResolutionIn);                                                                           // [0xc6898a4] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset
	// void SetHeightTextureAsset(class UTexture* TextureIn);                                                                // [0xc689688] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode
	// void SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode);                                                   // [0xc689604] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat
	// void SetHeightRenderTargetFormat(TEnumAsByte<ETextureRenderTargetFormat> Format);                                     // [0xc689584] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings
	// void SetHeightEncodingSettings(FLandscapeTexturePatchEncodingSettings& Settings);                                     // [0xc6894f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode
	// void SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);                                        // [0xc689474] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetFalloff
	// void SetFalloff(float FalloffIn);                                                                                     // [0xc6893f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetEditVisibilityLayer
	// void SetEditVisibilityLayer(FName& InWeightmapLayerName, bool bEditVisibilityLayer);                                  // [0xc6892e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetBlendMode
	// void SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn);                                                       // [0xc689264] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode
	// void ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);                                      // [0xc68919c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch
	// void RemoveWeightPatch(FName& InWeightmapLayerName);                                                                  // [0xc68910c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches
	// void RemoveAllWeightPatches();                                                                                        // [0xc688f7c] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ReinitializeWeights
	// void ReinitializeWeights();                                                                                           // [0x3097b14] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ReinitializeHeight
	// void ReinitializeHeight();                                                                                            // [0x3097b14] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode
	// ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(FName& InWeightmapLayerName);                               // [0xc688bf8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget
	// class UTextureRenderTarget2D* GetWeightPatchRenderTarget(FName& InWeightmapLayerName);                                // [0xc688b58] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage
	// FVector2D GetUnscaledCoverage();                                                                                      // [0xc688b24] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetResolution
	// FVector2D GetResolution();                                                                                            // [0xc688af0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform
	// FTransform GetPatchToWorldTransform();                                                                                // [0xc688a70] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape
	// bool GetInitResolutionFromLandscape(float ResolutionMultiplier, FVector2D& ResolutionOut);                            // [0xc6888ec] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode
	// ELandscapeTexturePatchSourceMode GetHeightSourceMode();                                                               // [0xc688834] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget
	// class UTextureRenderTarget2D* GetHeightRenderTarget(bool bMarkDirty);                                                 // [0xc68879c] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize
	// FVector2D GetFullUnscaledWorldSize();                                                                                 // [0xc688768] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames
	// TArray<FName> GetAllWeightPatchLayerNames();                                                                          // [0xc688728] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches
	// void DisableAllWeightPatches();                                                                                       // [0xc688710] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride
	// void ClearWeightPatchBlendModeOverride(FName& InWeightmapLayerName);                                                  // [0xc6885f0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.AddWeightPatch
	// void AddWeightPatch(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel); // [0xc688464] Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LandscapePatch.LandscapePatchComponentInstanceData
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
struct FLandscapePatchComponentInstanceData : FSceneComponentInstanceData
{ 
	int32_t                                            IndexInManager;                                             // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

