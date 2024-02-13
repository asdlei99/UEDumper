
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
/// dependency: PhysicsCore

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeCustomOutputInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoLandscapeCustomOutputInfo
{ 
	int32_t                                            InputIndex;                                                 // 0x0000   (0x0004)  
	int32_t                                            OutputIndex;                                                // 0x0004   (0x0004)  
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	bool                                               bIsConstant;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              ConstantValue;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UObject*                                     InputObject;                                                // 0x0018   (0x0008)  
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeGrassAndPhysics
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoLandscapeGrassAndPhysics
{ 
	uint16_t                                           ShaderPlatform;                                             // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FJunoLandscapeCustomOutputInfo>             AvailableGrasses;                                           // 0x0008   (0x0010)  
	TArray<FJunoLandscapeCustomOutputInfo>             AvailablePhysicsMaterials;                                  // 0x0018   (0x0010)  
	FGuid                                              SavedMaterialID;                                            // 0x0028   (0x0010)  
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeCombinedMaterial
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UJunoLandscapeCombinedMaterial : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FName>                                      LayerNames;                                                 // 0x0028   (0x0010)  
	TArray<class ULandscapeLayerInfoObject*>           LandscapeInfos;                                             // 0x0038   (0x0010)  
	class UMaterialInstanceConstant*                   MaterialBase;                                               // 0x0048   (0x0008)  
	class UJunoLandscapeMaterialInstanceConstant*      CPUReadbackMaterialBase;                                    // 0x0050   (0x0008)  
	SDK_UNDEFINED(80,14289) /* TMap<FJunoLandscapeMaterialInstanceCacheKey, FJunoLandscapeCombinedMaterialInstance> */ __um(MaterialInstances); // 0x0058   (0x0050)  
	TArray<FJunoLandscapeGrassAndPhysics>              GrassAndPhysicsTypes;                                       // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeExternalMaterialsCollector
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLandscapeExternalMaterialsCollector : public UObject
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeExternalMaterialsCollector.CollectExternalMaterials
	// void CollectExternalMaterials(class UJunoLandscapeLayersData* LayerData, bool bInlcudeMobile, bool bIncludeStandard); // [0xbf8d490] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLandscapeGeneratorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface.Initialize
	// void Initialize(class UJunoLandscapeRenderer* LandscapeRenderer);                                                     // [0x80f0888] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface.GetAffectedWeightmapLayers
	// TArray<FName> GetAffectedWeightmapLayers();                                                                           // [0xbf8e7dc] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface.GenerateLandscape
	// class UJunoLandscapeRenderTarget* GenerateLandscape(bool bRenderHeightmap, FName WeightmapName);                      // [0xbf8e68c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeMaterial
/// Size: 0x0060 (0x000028 - 0x000088)
class UJunoLandscapeMaterial : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UMaterialInterface*                          Parent;                                                     // 0x0028   (0x0008)  
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                    // 0x0030   (0x0008)  
	SDK_UNDEFINED(80,14290) /* TMap<FName, UJunoLandscapeRenderTarget*> */ __um(TextureProperties);                // 0x0038   (0x0050)  


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetVectorParameterValue
	// void SetVectorParameterValue(FName ParameterName, FLinearColor Value);                                                // [0xbf8f3e4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetTextureParameterValue
	// void SetTextureParameterValue(FName ParameterName, class UTexture* Value);                                            // [0xbf8ec40] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetScalarParameterValue
	// void SetScalarParameterValue(FName ParameterName, float Value);                                                       // [0xbf8f2a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetRenderTargetParameterValue
	// void SetRenderTargetParameterValue(FName ParameterName, class UJunoLandscapeRenderTarget* Value);                     // [0xbf8f16c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetJunoTextureParameterValue
	// void SetJunoTextureParameterValue(FName ParameterName, class UTextureRenderTarget2D* Value);                          // [0xbf8ec40] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetDoubleVectorParameterValue
	// void SetDoubleVectorParameterValue(FName ParameterName, FVector4 Value);                                              // [0xbf8eadc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.K2_GetVectorParameterValue
	// FLinearColor K2_GetVectorParameterValue(FName ParameterName);                                                         // [0xbf8ea00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.K2_GetScalarParameterValue
	// float K2_GetScalarParameterValue(FName ParameterName);                                                                // [0xbf8e930] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeMaterialInstanceConstant
/// Size: 0x0000 (0x000260 - 0x000260)
class UJunoLandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
public:
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeCustomMaterial
/// Size: 0x0058 (0x000228 - 0x000280)
class UJunoLandscapeCustomMaterial : public UMaterial
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0228   (0x0058)  MISSED
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeDynamicCustomMaterial
/// Size: 0x0060 (0x000028 - 0x000088)
class UJunoLandscapeDynamicCustomMaterial : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UMaterialInstanceDynamic*                    WrappedMaterial;                                            // 0x0028   (0x0008)  
	class UTexture*                                    Heightmap;                                                  // 0x0030   (0x0008)  
	SDK_UNDEFINED(80,14291) /* TMap<FString, UTexture*> */ __um(WeightMaps);                                       // 0x0038   (0x0050)  
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeComponentPrecachSettings
/// Size: 0x0005 (0x000000 - 0x000005)
struct FJunoLandscapeComponentPrecachSettings
{ 
	bool                                               bPrecacheHeights;                                           // 0x0000   (0x0001)  
	bool                                               bPrecachePhysicalMaterials;                                 // 0x0001   (0x0001)  
	bool                                               bPrecacheGrass;                                             // 0x0002   (0x0001)  
	bool                                               bPrecacheWeightmaps;                                        // 0x0003   (0x0001)  
	bool                                               bPrecacheCustomRenders;                                     // 0x0004   (0x0001)  
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeCustomRenderIdentifier
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoLandscapeCustomRenderIdentifier
{ 
	FName                                              Identifier;                                                 // 0x0000   (0x0004)  
	int32_t                                            MipIndex;                                                   // 0x0004   (0x0004)  
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeComponent
/// Size: 0x0260 (0x000220 - 0x000480)
class UJunoLandscapeComponent : public USceneComponent
{ 
public:
	class UMaterialInstanceDynamic*                    RenderMaterial;                                             // 0x0220   (0x0008)  
	class ALandscapeProxy*                             PairedLandscape;                                            // 0x0228   (0x0008)  
	class ULandscapeComponent*                         LandscapeComponent;                                         // 0x0230   (0x0008)  
	class ULandscapeHeightfieldCollisionComponent*     LandscapeCollisionComponent;                                // 0x0238   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0240   (0x0008)  MISSED
	FBox                                               CachedLocalBox;                                             // 0x0248   (0x0038)  
	FIntPoint                                          ComponentKey;                                               // 0x0280   (0x0008)  
	FIntPoint                                          ComponentBase;                                              // 0x0288   (0x0008)  
	FJunoLandscapeComponentPrecachSettings             ServerPrecacheSettings;                                     // 0x0290   (0x0005)  
	FJunoLandscapeComponentPrecachSettings             ClientPrecacheSettings;                                     // 0x0295   (0x0005)  
	unsigned char                                      UnknownData01_5[0x3E];                                      // 0x029A   (0x003E)  MISSED
	TArray<class ULandscapeGrassType*>                 SerializedGrassReferences;                                  // 0x02D8   (0x0010)  
	TArray<class UPhysicalMaterial*>                   SerializedPhysicalMaterials;                                // 0x02E8   (0x0010)  
	TArray<FName>                                      SerializedWeightmaps;                                       // 0x02F8   (0x0010)  
	TArray<FJunoLandscapeCustomRenderIdentifier>       SerializedCustomRenders;                                    // 0x0308   (0x0010)  
	unsigned char                                      UnknownData02_5[0x140];                                     // 0x0318   (0x0140)  MISSED
	FIntPoint                                          SubTextureOffset;                                           // 0x0458   (0x0008)  
	FIntPoint                                          SubTextureSize;                                             // 0x0460   (0x0008)  
	int32_t                                            ComponentQuadSize;                                          // 0x0468   (0x0004)  
	int32_t                                            ComponentVertSize;                                          // 0x046C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0470   (0x0010)  MISSED
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeLayersGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoLandscapeLayersGroup
{ 
	TArray<FName>                                      Layers;                                                     // 0x0000   (0x0010)  
	int32_t                                            CombinationIndex;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeMaterialCache
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FJunoLandscapeMaterialCache
{ 
	SDK_UNDEFINED(80,14292) /* TMap<FJunoLandscapeCombinedMaterialCacheKey, UJunoLandscapeCombinedMaterial*> */ __um(ExternalCombinedMaterials); // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,14293) /* TMap<FJunoLandscapeCombinedMaterialCacheKey, UJunoLandscapeCombinedMaterial*> */ __um(MaterialCombinations); // 0x0050   (0x0050)  
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeLayersData
/// Size: 0x01F0 (0x000030 - 0x000220)
class UJunoLandscapeLayersData : public UPrimaryDataAsset
{ 
public:
	class UClass*                                      ExternalMaterialGatherer;                                   // 0x0030   (0x0008)  
	class UMaterial*                                   LandscapeMaterial;                                          // 0x0038   (0x0008)  
	SDK_UNDEFINED(80,14294) /* TMap<FName, ULandscapeLayerInfoObject*> */ __um(AllLayerInfos);                     // 0x0040   (0x0050)  
	SDK_UNDEFINED(16,14295) /* TArray<FString> */      __um(LayerInfoDirectories);                                 // 0x0090   (0x0010)  
	TArray<FName>                                      Biomes;                                                     // 0x00A0   (0x0010)  
	TArray<FJunoLandscapeLayersGroup>                  LayerGroups;                                                // 0x00B0   (0x0010)  
	TArray<FName>                                      SortedLayerNames;                                           // 0x00C0   (0x0010)  
	TArray<class ULandscapeLayerInfoObject*>           SortedLayerInfos;                                           // 0x00D0   (0x0010)  
	FJunoLandscapeMaterialCache                        AllMaterials;                                               // 0x00E0   (0x00A0)  
	SDK_UNDEFINED(80,14296) /* TMap<FName, uint32_t> */ __um(LayerNameToIndex);                                    // 0x0180   (0x0050)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x01D0   (0x0050)  MISSED


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeLayersData.UpdateExternalMaterials
	// void UpdateExternalMaterials();                                                                                       // [0x3047908] Final|Native|Public  
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeManager
/// Size: 0x0530 (0x000040 - 0x000570)
class UJunoLandscapeManager : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0xC8];                                      // 0x0040   (0x00C8)  MISSED
	class ALandscape*                                  Landscape;                                                  // 0x0108   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0110   (0x0020)  MISSED
	SDK_UNDEFINED(80,14297) /* TMap<FIntPoint, UJunoLandscapeComponent*> */ __um(ExistingComponents);              // 0x0130   (0x0050)  
	SDK_UNDEFINED(80,14298) /* TMap<UPrimitiveComponent*, UJunoLandscapeComponent*> */ __um(ExternalComponents);   // 0x0180   (0x0050)  
	class UMaterialInterface*                          DebugMaterial;                                              // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x358];                                     // 0x01D8   (0x0358)  MISSED
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0530   (0x0008)  
	class UJunoLandscapeLayersData*                    LayersData;                                                 // 0x0538   (0x0008)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x0540   (0x0030)  MISSED
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeGenerationData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FJunoLandscapeGenerationData
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14299) /* TWeakObjectPtr<UObject*> */ __um(Generator);                                        // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,14300) /* TWeakObjectPtr<UMaterialInterface*> */ __um(LandscapeMaterial);                     // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,14301) /* TWeakObjectPtr<UJunoLandscapeLayersData*> */ __um(LayersData);                      // 0x0048   (0x0020)  
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeGenerationItems
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoLandscapeGenerationItems : public UPrimaryDataAsset
{ 
public:
	TArray<FJunoLandscapeGenerationData>               GenerationData;                                             // 0x0030   (0x0010)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionIsPreviousTileLocation_Juno
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMaterialExpressionIsPreviousTileLocation_Juno : public UMaterialExpression
{ 
public:
	FExpressionInput                                   TileMipSize;                                                // 0x00B0   (0x0028)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionGetTileMin_Juno
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UMaterialExpressionGetTileMin_Juno : public UMaterialExpression
{ 
public:
	FExpressionInput                                   TileSize;                                                   // 0x00B0   (0x0028)  
	FExpressionInput                                   TileMin;                                                    // 0x00D8   (0x0028)  
	FExpressionInput                                   TileMipSize;                                                // 0x0100   (0x0028)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionGetUV_Juno
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMaterialExpressionGetUV_Juno : public UMaterialExpression
{ 
public:
	FExpressionInput                                   TileMipSize;                                                // 0x00B0   (0x0028)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionGetGlobalKey_Juno
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UMaterialExpressionGetGlobalKey_Juno : public UMaterialExpression
{ 
public:
	FExpressionInput                                   TileSize;                                                   // 0x00B0   (0x0028)  
	FExpressionInput                                   TileMin;                                                    // 0x00D8   (0x0028)  
	FExpressionInput                                   TileMipSize;                                                // 0x0100   (0x0028)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionGetGlobalKeyScaled_Juno
/// Size: 0x00A0 (0x0000B0 - 0x000150)
class UMaterialExpressionGetGlobalKeyScaled_Juno : public UMaterialExpression
{ 
public:
	FExpressionInput                                   TileSize;                                                   // 0x00B0   (0x0028)  
	FExpressionInput                                   TileMin;                                                    // 0x00D8   (0x0028)  
	FExpressionInput                                   TileMipSize;                                                // 0x0100   (0x0028)  
	FExpressionInput                                   LandscapeScale;                                             // 0x0128   (0x0028)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionLandscapeOutputPassPreInit
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMaterialExpressionLandscapeOutputPassPreInit : public UMaterialExpressionCustomOutput
{ 
public:
	class UMaterialExpressionLandscapeOutputPass*      OutputPassExpressions;                                      // 0x00B0   (0x0008)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionLandscapeOutputPass
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UMaterialExpressionLandscapeOutputPass : public UMaterialExpressionCustomOutput
{ 
public:
	class UMaterialExpressionCustomOutput*             GrassMaterialExpression;                                    // 0x00B0   (0x0008)  
	class UMaterialExpressionCustomOutput*             PhysicsMaterialExpression;                                  // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x00C0   (0x0048)  MISSED
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeDynamicLayerSample
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMaterialExpressionJunoLandscapeDynamicLayerSample : public UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x00B0   (0x0004)  
	float                                              PreviewWeight;                                              // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00B8   (0x000C)  MISSED
	int32_t                                            PreviewMip;                                                 // 0x00C4   (0x0004)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeDynamicHeightSample
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UMaterialExpressionJunoLandscapeDynamicHeightSample : public UMaterialExpression
{ 
public:
	FExpressionInput                                   XYOffset;                                                   // 0x00B0   (0x0028)  
	int32_t                                            PreviewMip;                                                 // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomOutput
/// Size: 0x0050 (0x0000B0 - 0x000100)
class UMaterialExpressionJunoLandscapeCustomOutput : public UMaterialExpressionCustomOutput
{ 
public:
	FExpressionInput                                   Result;                                                     // 0x00B0   (0x0028)  
	FExpressionInput                                   CustomMipResult;                                            // 0x00D8   (0x0028)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomOutputProxy
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMaterialExpressionJunoLandscapeCustomOutputProxy : public UMaterialExpression
{ 
public:
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomMaterialSampleParentMIP
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UMaterialExpressionJunoLandscapeCustomMaterialSampleParentMIP : public UMaterialExpression
{ 
public:
	FExpressionInput                                   UV;                                                         // 0x00B0   (0x0028)  
	class UMaterialExpressionCustom*                   CustomExpression;                                           // 0x00D8   (0x0008)  
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomMaterialGetUVOffset
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UMaterialExpressionJunoLandscapeCustomMaterialGetUVOffset : public UMaterialExpression
{ 
public:
	FExpressionInput                                   UV;                                                         // 0x00B0   (0x0028)  
	FExpressionInput                                   ScaledOffset;                                               // 0x00D8   (0x0028)  
	class UMaterialExpressionCustom*                   CustomExpression;                                           // 0x0100   (0x0008)  
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeRenderer
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UJunoLandscapeRenderer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UJunoLandscapeMaterial*                      LandscapeMaterial;                                          // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0030   (0x0018)  MISSED
	class UWorld*                                      World;                                                      // 0x0048   (0x0008)  
	SDK_UNDEFINED(80,14302) /* TMap<FName, UJunoLandscapeRenderTarget*> */ __um(RenderTargets);                    // 0x0050   (0x0050)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                               // [0xbf8f018] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UJunoLandscapeRenderTarget* Value);         // [0xbf8eecc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                      // [0xbf8ed7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.GetUVWorldTransform
	// FVector4 GetUVWorldTransform();                                                                                       // [0x648b280] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.GetOutputHeightmapRenderTarget
	// class UJunoLandscapeRenderTarget* GetOutputHeightmapRenderTarget();                                                   // [0xbf8e8e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.FindOrCreateNamedRenderTarget
	// class UJunoLandscapeRenderTarget* FindOrCreateNamedRenderTarget(FName Name, TEnumAsByte<ETextureRenderTargetFormat> Format); // [0xbf8e53c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.EndDrawCanvasToRenderTarget
	// void EndDrawCanvasToRenderTarget(FDrawToRenderTargetContext_JunoLandscape& Context);                                  // [0x80d57a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.DrawMaterialToRenderTargetUV
	// void DrawMaterialToRenderTargetUV(class UJunoLandscapeRenderTarget* RenderTarget, class UJunoLandscapeMaterial* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint); // [0xbf8e158] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.DrawMaterialToRenderTarget
	// void DrawMaterialToRenderTarget(class UJunoLandscapeRenderTarget* TextureRenderTarget, class UJunoLandscapeMaterial* Material); // [0xbf8de00] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.CreateRenderTarget2D
	// class UJunoLandscapeRenderTarget* CreateRenderTarget2D(int32_t Width, int32_t Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps); // [0xbf8d800] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.CreateMaterial
	// class UJunoLandscapeMaterial* CreateMaterial(class UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags); // [0xbf8d654] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.ClearRenderTarget2D
	// void ClearRenderTarget2D(class UJunoLandscapeRenderTarget* TextureRenderTarget, FLinearColor ClearColor);             // [0xbf8d304] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.CalculateRenderArea
	// FBox2D CalculateRenderArea(FTransform Transform, FVector2D HalfExtents);                                              // [0xbf8d0fc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.BeginDrawCanvasToRenderTarget
	// void BeginDrawCanvasToRenderTarget(class UJunoLandscapeRenderTarget* TextureRenderTarget, class UJunoLandscapeCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext_JunoLandscape& Context); // [0xbf8cf18] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeRenderTarget
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoLandscapeRenderTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              ID;                                                         // 0x0028   (0x0004)  
	SDK_UNDEFINED(1,14303) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(Format);                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeCanvas
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoLandscapeCanvas : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UJunoLandscapeRenderTarget*                  RenderTarget;                                               // 0x0028   (0x0008)  
	class UJunoLandscapeRenderer*                      Renderer;                                                   // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeCanvas.GetNameReplacement
	// FName GetNameReplacement(FName NameIn);                                                                               // [0xbf8e820] Final|Native|Static|Public 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeCanvas.DrawMaterial
	// void DrawMaterial(class UJunoLandscapeMaterial* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint); // [0xbf8da98] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeLayerInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoLandscapeLayerInfo
{ 
	class ULandscapeLayerInfoObject*                   LandscapeInfo;                                              // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x0004)  
	char                                               WeightmapTextureIndex;                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       WeightmapTextureMask;                                       // 0x0010   (0x0010)  
	class UPhysicalMaterial*                           PhysicsMaterial;                                            // 0x0020   (0x0008)  
	float                                              MinimumCollisionRelevanceWeight;                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeCombinedMaterialInstance
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoLandscapeCombinedMaterialInstance
{ 
	TArray<FJunoLandscapeLayerInfo>                    LandscapeInfos;                                             // 0x0000   (0x0010)  
	class UMaterialInstanceConstant*                   MaterialInstance;                                           // 0x0010   (0x0008)  
	class UMaterialInstanceConstant*                   CPUReadbackMaterialInstance;                                // 0x0018   (0x0008)  
	class UMaterialInstanceDynamic*                    CPUReadbackSharedMID;                                       // 0x0020   (0x0008)  
	int32_t                                            VisibilityLayerIndex;                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeMaterialCacheKeyBase
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoLandscapeMaterialCacheKeyBase
{ 
	TArray<FName>                                      OrderedLayers;                                              // 0x0000   (0x0010)  
	uint32_t                                           KeyHash;                                                    // 0x0010   (0x0004)  
	bool                                               bIsTextureSorted;                                           // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeMaterialInstanceCacheKey
/// Size: 0x0000 (0x000018 - 0x000018)
struct FJunoLandscapeMaterialInstanceCacheKey : FJunoLandscapeMaterialCacheKeyBase
{ 
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeCombinedMaterialCacheKey
/// Size: 0x0000 (0x000018 - 0x000018)
struct FJunoLandscapeCombinedMaterialCacheKey : FJunoLandscapeMaterialCacheKeyBase
{ 
};

/// Struct /Script/JunoProceduralLandscape.DrawToRenderTargetContext_JunoLandscape
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDrawToRenderTargetContext_JunoLandscape
{ 
	class UJunoLandscapeRenderTarget*                  RenderTarget;                                               // 0x0000   (0x0008)  
};

