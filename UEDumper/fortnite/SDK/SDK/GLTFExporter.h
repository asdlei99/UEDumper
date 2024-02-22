
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/GLTFExporter.EGLTFTextureImageFormat
/// Size: 0x04
enum class EGLTFTextureImageFormat : uint8_t
{
	EGLTFTextureImageFormat__None                                                    = 0,
	EGLTFTextureImageFormat__PNG                                                     = 1,
	EGLTFTextureImageFormat__JPEG                                                    = 2,
	EGLTFTextureImageFormat__EGLTFTextureImageFormat_MAX                             = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialVariantMode
/// Size: 0x04
enum class EGLTFMaterialVariantMode : uint8_t
{
	EGLTFMaterialVariantMode__None                                                   = 0,
	EGLTFMaterialVariantMode__Simple                                                 = 1,
	EGLTFMaterialVariantMode__UseMeshData                                            = 2,
	EGLTFMaterialVariantMode__EGLTFMaterialVariantMode_MAX                           = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeMode
/// Size: 0x04
enum class EGLTFMaterialBakeMode : uint8_t
{
	EGLTFMaterialBakeMode__Disabled                                                  = 0,
	EGLTFMaterialBakeMode__Simple                                                    = 1,
	EGLTFMaterialBakeMode__UseMeshData                                               = 2,
	EGLTFMaterialBakeMode__EGLTFMaterialBakeMode_MAX                                 = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialPropertyGroup
/// Size: 0x09
enum class EGLTFMaterialPropertyGroup : uint8_t
{
	EGLTFMaterialPropertyGroup__None                                                 = 0,
	EGLTFMaterialPropertyGroup__BaseColorOpacity                                     = 1,
	EGLTFMaterialPropertyGroup__MetallicRoughness                                    = 2,
	EGLTFMaterialPropertyGroup__EmissiveColor                                        = 3,
	EGLTFMaterialPropertyGroup__Normal                                               = 4,
	EGLTFMaterialPropertyGroup__AmbientOcclusion                                     = 5,
	EGLTFMaterialPropertyGroup__ClearCoatRoughness                                   = 6,
	EGLTFMaterialPropertyGroup__ClearCoatBottomNormal                                = 7,
	EGLTFMaterialPropertyGroup__EGLTFMaterialPropertyGroup_MAX                       = 8
};

/// Struct /Script/GLTFExporter.GLTFMaterialBakeSize
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGLTFMaterialBakeSize
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	bool                                               bAutoDetect;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/GLTFExporter.GLTFExportOptions
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGLTFExportOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              ExportUniformScale;                                         // 0x0028   (0x0004)  
	bool                                               bExportPreviewMesh;                                         // 0x002C   (0x0001)  
	bool                                               bSkipNearDefaultValues;                                     // 0x002D   (0x0001)  
	bool                                               bIncludeCopyrightNotice;                                    // 0x002E   (0x0001)  
	bool                                               bExportProxyMaterials;                                      // 0x002F   (0x0001)  
	bool                                               bExportUnlitMaterials;                                      // 0x0030   (0x0001)  
	bool                                               bExportClearCoatMaterials;                                  // 0x0031   (0x0001)  
	bool                                               bExportClothMaterials;                                      // 0x0032   (0x0001)  
	bool                                               bExportThinTranslucentMaterials;                            // 0x0033   (0x0001)  
	bool                                               bExportEmissiveStrength;                                    // 0x0034   (0x0001)  
	EGLTFMaterialBakeMode                              BakeMaterialInputs;                                         // 0x0035   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0036   (0x0002)  MISSED
	FGLTFMaterialBakeSize                              DefaultMaterialBakeSize;                                    // 0x0038   (0x000C)  
	SDK_UNDEFINED(1,14014) /* TEnumAsByte<TextureFilter> */ __um(DefaultMaterialBakeFilter);                       // 0x0044   (0x0001)  
	SDK_UNDEFINED(1,14015) /* TEnumAsByte<TextureAddress> */ __um(DefaultMaterialBakeTiling);                      // 0x0045   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0046   (0x0002)  MISSED
	SDK_UNDEFINED(80,14016) /* TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> */ __um(DefaultInputBakeSettings); // 0x0048   (0x0050)  
	int32_t                                            DefaultLevelOfDetail;                                       // 0x0098   (0x0004)  
	bool                                               bExportVertexColors;                                        // 0x009C   (0x0001)  
	bool                                               bExportVertexSkinWeights;                                   // 0x009D   (0x0001)  
	bool                                               bMakeSkinnedMeshesRoot;                                     // 0x009E   (0x0001)  
	bool                                               bUseMeshQuantization;                                       // 0x009F   (0x0001)  
	bool                                               bExportLevelSequences;                                      // 0x00A0   (0x0001)  
	bool                                               bExportAnimationSequences;                                  // 0x00A1   (0x0001)  
	EGLTFTextureImageFormat                            TextureImageFormat;                                         // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x00A3   (0x0001)  MISSED
	int32_t                                            TextureImageQuality;                                        // 0x00A4   (0x0004)  
	bool                                               bExportTextureTransforms;                                   // 0x00A8   (0x0001)  
	bool                                               bAdjustNormalmaps;                                          // 0x00A9   (0x0001)  
	bool                                               bExportHiddenInGame;                                        // 0x00AA   (0x0001)  
	bool                                               bExportLights;                                              // 0x00AB   (0x0001)  
	bool                                               bExportCameras;                                             // 0x00AC   (0x0001)  
	EGLTFMaterialVariantMode                           ExportMaterialVariants;                                     // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x00AE   (0x0002)  MISSED


	/// Functions
	// Function /Script/GLTFExporter.GLTFExportOptions.ResetToDefault
	// void ResetToDefault();                                                                                                // [0xc719698] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFExporter : public UExporter
{ 
public:


	/// Functions
	// Function /Script/GLTFExporter.GLTFExporter.ExportToGLTF
	// bool ExportToGLTF(class UObject* Object, FString FilePath, class UGLTFExportOptions* Options, TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages); // [0xc718e5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFAnimSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFAnimSequenceExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelSequenceExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelVariantSetsExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFMaterialExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFMaterialExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFSkeletalMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFSkeletalMeshExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFStaticMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFStaticMeshExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFProxyOptions
/// Size: 0x0068 (0x000028 - 0x000090)
class UGLTFProxyOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bBakeMaterialInputs;                                        // 0x0028   (0x0001)  
	bool                                               bUseThinTranslucentShadingModel;                            // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	FGLTFMaterialBakeSize                              DefaultMaterialBakeSize;                                    // 0x002C   (0x000C)  
	SDK_UNDEFINED(1,14017) /* TEnumAsByte<TextureFilter> */ __um(DefaultMaterialBakeFilter);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,14018) /* TEnumAsByte<TextureAddress> */ __um(DefaultMaterialBakeTiling);                      // 0x0039   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x003A   (0x0006)  MISSED
	SDK_UNDEFINED(80,14019) /* TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> */ __um(DefaultInputBakeSettings); // 0x0040   (0x0050)  


	/// Functions
	// Function /Script/GLTFExporter.GLTFProxyOptions.ResetToDefault
	// void ResetToDefault();                                                                                                // [0xc7196ac] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FGLTFOverrideMaterialBakeSettings
{ 
	bool                                               bOverrideSize;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGLTFMaterialBakeSize                              Size;                                                       // 0x0004   (0x000C)  
	bool                                               bOverrideFilter;                                            // 0x0010   (0x0001)  
	SDK_UNDEFINED(1,14020) /* TEnumAsByte<TextureFilter> */ __um(Filter);                                          // 0x0011   (0x0001)  
	bool                                               bOverrideTiling;                                            // 0x0012   (0x0001)  
	SDK_UNDEFINED(1,14021) /* TEnumAsByte<TextureAddress> */ __um(Tiling);                                         // 0x0013   (0x0001)  
};

/// Class /Script/GLTFExporter.GLTFMaterialExportOptions
/// Size: 0x0070 (0x000028 - 0x000098)
class UGLTFMaterialExportOptions : public UAssetUserData
{ 
public:
	class UMaterialInterface*                          proxy;                                                      // 0x0028   (0x0008)  
	FGLTFOverrideMaterialBakeSettings                  Default;                                                    // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(80,14022) /* TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> */ __um(Inputs); // 0x0048   (0x0050)  
};

/// Struct /Script/GLTFExporter.GLTFExportMessages
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGLTFExportMessages
{ 
	SDK_UNDEFINED(16,14023) /* TArray<FString> */      __um(Suggestions);                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14024) /* TArray<FString> */      __um(Warnings);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,14025) /* TArray<FString> */      __um(Errors);                                               // 0x0020   (0x0010)  
};

