
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Landscape
/// dependency: PhysicsCore

/// Class /Script/JunoProceduralLandscape.JunoLandscapeCombinedMaterial
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UJunoLandscapeCombinedMaterial : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FName>)                             LayerNames                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class ULandscapeLayerInfoObject*>)  LandscapeInfos                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UMaterialInstanceConstant*)          MaterialBase                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UJunoLandscapeMaterialInstanceConstant*) CPUReadbackMaterialBase                                 OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TMap<FJunoLandscapeMaterialInstanceCacheKey, FJunoLandscapeCombinedMaterialInstance>) MaterialInstances OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TArray<FJunoLandscapeGrassAndPhysics>)     GrassAndPhysicsTypes                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeExternalMaterialsCollector
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLandscapeExternalMaterialsCollector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeExternalMaterialsCollector.CollectExternalMaterials
	// void CollectExternalMaterials(class UJunoLandscapeLayersData* LayerData, bool bInlcudeMobile, bool bIncludeStandard);    // [0xbc7e5a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLandscapeGeneratorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface.Initialize
	// void Initialize(class UJunoLandscapeRenderer* LandscapeRenderer);                                                        // [0x80e4e20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface.GetAffectedWeightmapLayers
	// TArray<FName> GetAffectedWeightmapLayers();                                                                              // [0xbc7f948] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeGeneratorInterface.GenerateLandscape
	// class UJunoLandscapeRenderTarget* GenerateLandscape(bool bRenderHeightmap, FName WeightmapName);                         // [0xbc7f870] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeMaterial
/// Size: 0x0060 (0x000028 - 0x000088)
class UJunoLandscapeMaterial : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UMaterialInterface*)                 Parent                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MaterialInstanceDynamic                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FName, UJunoLandscapeRenderTarget*>)  TextureProperties                                           OFFSET(get<T>, {0x38, 80, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetVectorParameterValue
	// void SetVectorParameterValue(FName ParameterName, FLinearColor Value);                                                   // [0xbc80258] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetTextureParameterValue
	// void SetTextureParameterValue(FName ParameterName, class UTexture* Value);                                               // [0xbc7fd18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetScalarParameterValue
	// void SetScalarParameterValue(FName ParameterName, float Value);                                                          // [0xbc80194] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetRenderTargetParameterValue
	// void SetRenderTargetParameterValue(FName ParameterName, class UJunoLandscapeRenderTarget* Value);                        // [0xbc800d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetJunoTextureParameterValue
	// void SetJunoTextureParameterValue(FName ParameterName, class UTextureRenderTarget2D* Value);                             // [0xbc7fd18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.SetDoubleVectorParameterValue
	// void SetDoubleVectorParameterValue(FName ParameterName, FVector4 Value);                                                 // [0xbc7fb88] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.K2_GetVectorParameterValue
	// FLinearColor K2_GetVectorParameterValue(FName ParameterName);                                                            // [0xbc7faec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeMaterial.K2_GetScalarParameterValue
	// float K2_GetScalarParameterValue(FName ParameterName);                                                                   // [0xbc7fa5c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeMaterialInstanceConstant
/// Size: 0x0000 (0x000248 - 0x000248)
class UJunoLandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeCustomMaterial
/// Size: 0x0058 (0x000210 - 0x000268)
class UJunoLandscapeCustomMaterial : public UMaterial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeDynamicCustomMaterial
/// Size: 0x0060 (0x000028 - 0x000088)
class UJunoLandscapeDynamicCustomMaterial : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UMaterialInstanceDynamic*)           WrappedMaterial                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UTexture*)                           Heightmap                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FString, UTexture*>)                  WeightMaps                                                  OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeComponent
/// Size: 0x0260 (0x000290 - 0x0004F0)
class UJunoLandscapeComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	CMember(class UMaterialInstanceDynamic*)           RenderMaterial                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class ALandscapeProxy*)                    PairedLandscape                                             OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class ULandscapeComponent*)                LandscapeComponent                                          OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class ULandscapeHeightfieldCollisionComponent*) LandscapeCollisionComponent                            OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x2B8, 56, 0, 0})
	SMember(FIntPoint)                                 ComponentKey                                                OFFSET(getStruct<T>, {0x2F0, 8, 0, 0})
	SMember(FIntPoint)                                 ComponentBase                                               OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	SMember(FJunoLandscapeComponentPrecachSettings)    ServerPrecacheSettings                                      OFFSET(getStruct<T>, {0x300, 5, 0, 0})
	SMember(FJunoLandscapeComponentPrecachSettings)    ClientPrecacheSettings                                      OFFSET(getStruct<T>, {0x305, 5, 0, 0})
	CMember(TArray<class ULandscapeGrassType*>)        SerializedGrassReferences                                   OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          SerializedPhysicalMaterials                                 OFFSET(get<T>, {0x358, 16, 0, 0})
	CMember(TArray<FName>)                             SerializedWeightmaps                                        OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(TArray<FName>)                             SerializedAdditionalTextures                                OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FIntPoint)                                 SubTextureOffset                                            OFFSET(getStruct<T>, {0x4C8, 8, 0, 0})
	SMember(FIntPoint)                                 SubTextureSize                                              OFFSET(getStruct<T>, {0x4D0, 8, 0, 0})
	DMember(int32_t)                                   ComponentQuadSize                                           OFFSET(get<int32_t>, {0x4D8, 4, 0, 0})
	DMember(int32_t)                                   ComponentVertSize                                           OFFSET(get<int32_t>, {0x4DC, 4, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeLayersData
/// Size: 0x01F0 (0x000030 - 0x000220)
class UJunoLandscapeLayersData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class UClass*)                             ExternalMaterialGatherer                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterial*)                          LandscapeMaterial                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<FName, ULandscapeLayerInfoObject*>)   AllLayerInfos                                               OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TArray<FString>)                           LayerInfoDirectories                                        OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FName>)                             Biomes                                                      OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FJunoLandscapeLayersGroup>)         LayerGroups                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             SortedLayerNames                                            OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class ULandscapeLayerInfoObject*>)  SortedLayerInfos                                            OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FJunoLandscapeMaterialCache)               AllMaterials                                                OFFSET(getStruct<T>, {0xE0, 160, 0, 0})
	CMember(TMap<FName, uint32_t>)                     LayerNameToIndex                                            OFFSET(get<T>, {0x180, 80, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeLayersData.UpdateExternalMaterials
	// void UpdateExternalMaterials();                                                                                          // [0x32e6c74] Final|Native|Public  
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeManager
/// Size: 0x04A8 (0x000040 - 0x0004E8)
class UJunoLandscapeManager : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	CMember(class ALandscape*)                         Landscape                                                   OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TMap<FIntPoint, UJunoLandscapeComponent*>) ExistingComponents                                          OFFSET(get<T>, {0x130, 80, 0, 0})
	CMember(TMap<UPrimitiveComponent*, UJunoLandscapeComponent*>) ExternalComponents                               OFFSET(get<T>, {0x180, 80, 0, 0})
	CMember(class UMaterialInterface*)                 DebugMaterial                                               OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LandscapeMaterial                                           OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UJunoLandscapeLayersData*)           LayersData                                                  OFFSET(get<T>, {0x4B0, 8, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeGenerationItems
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoLandscapeGenerationItems : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FJunoLandscapeGenerationData>)      GenerationData                                              OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionIsPreviousTileLocation_Juno
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMaterialExpressionIsPreviousTileLocation_Juno : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FExpressionInput)                          TileMipSize                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionGetTileMin_Juno
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UMaterialExpressionGetTileMin_Juno : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FExpressionInput)                          TileSize                                                    OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          TileMin                                                     OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          TileMipSize                                                 OFFSET(getStruct<T>, {0x100, 40, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionGetUV_Juno
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMaterialExpressionGetUV_Juno : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FExpressionInput)                          TileMipSize                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionGetGlobalKey_Juno
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UMaterialExpressionGetGlobalKey_Juno : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FExpressionInput)                          TileSize                                                    OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          TileMin                                                     OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          TileMipSize                                                 OFFSET(getStruct<T>, {0x100, 40, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionGetGlobalKeyScaled_Juno
/// Size: 0x00A0 (0x0000B0 - 0x000150)
class UMaterialExpressionGetGlobalKeyScaled_Juno : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FExpressionInput)                          TileSize                                                    OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          TileMin                                                     OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          TileMipSize                                                 OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FExpressionInput)                          LandscapeScale                                              OFFSET(getStruct<T>, {0x128, 40, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionLandscapeOutputPassPreInit
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMaterialExpressionLandscapeOutputPassPreInit : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UMaterialExpressionLandscapeOutputPass*) OutputPassExpressions                                   OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionLandscapeOutputPass
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UMaterialExpressionLandscapeOutputPass : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UMaterialExpressionCustomOutput*)    GrassMaterialExpression                                     OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UMaterialExpressionCustomOutput*)    PhysicsMaterialExpression                                   OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeDynamicLayerSample
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMaterialExpressionJunoLandscapeDynamicLayerSample : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   PreviewMip                                                  OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeDynamicHeightSample
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UMaterialExpressionJunoLandscapeDynamicHeightSample : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FExpressionInput)                          XYOffset                                                    OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(int32_t)                                   PreviewMip                                                  OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomOutput
/// Size: 0x0050 (0x0000B0 - 0x000100)
class UMaterialExpressionJunoLandscapeCustomOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FExpressionInput)                          Result                                                      OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          CustomMipResult                                             OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomOutputProxy
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMaterialExpressionJunoLandscapeCustomOutputProxy : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/JunoProceduralLandscape.MaterialExpressionJunoLandscapeCustomMaterialSampleParentMIP
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UMaterialExpressionJunoLandscapeCustomMaterialSampleParentMIP : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FExpressionInput)                          UV                                                          OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(class UMaterialExpressionCustom*)          CustomExpression                                            OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeRenderer
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UJunoLandscapeRenderer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UJunoLandscapeMaterial*)             LandscapeMaterial                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TMap<FName, UJunoLandscapeRenderTarget*>)  RenderTargets                                               OFFSET(get<T>, {0x50, 80, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0xbc7ff60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UJunoLandscapeRenderTarget* Value);            // [0xbc7fea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0xbc7fddc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.GetUVWorldTransform
	// FVector4 GetUVWorldTransform();                                                                                          // [0x66cb670] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.GetOutputHeightmapRenderTarget
	// class UJunoLandscapeRenderTarget* GetOutputHeightmapRenderTarget();                                                      // [0xbc7fa10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.FindOrCreateNamedRenderTarget
	// class UJunoLandscapeRenderTarget* FindOrCreateNamedRenderTarget(FName Name, TEnumAsByte<ETextureRenderTargetFormat> Format); // [0xbc7f7ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.EndDrawCanvasToRenderTarget
	// void EndDrawCanvasToRenderTarget(FDrawToRenderTargetContext_JunoLandscape& Context);                                     // [0x80ccb3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.DrawMaterialToRenderTargetUV
	// void DrawMaterialToRenderTargetUV(class UJunoLandscapeRenderTarget* RenderTarget, class UJunoLandscapeMaterial* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint); // [0xbc7f23c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.DrawMaterialToRenderTarget
	// void DrawMaterialToRenderTarget(class UJunoLandscapeRenderTarget* TextureRenderTarget, class UJunoLandscapeMaterial* Material); // [0xbc7ef68] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.CreateRenderTarget2D
	// class UJunoLandscapeRenderTarget* CreateRenderTarget2D(int32_t Width, int32_t Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps); // [0xbc7e790] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.CreateMaterial
	// class UJunoLandscapeMaterial* CreateMaterial(class UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags); // [0xbc7e6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.ClearRenderTarget2D
	// void ClearRenderTarget2D(class UJunoLandscapeRenderTarget* TextureRenderTarget, FLinearColor ClearColor);                // [0xbc7e3f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.CalculateRenderArea
	// FBox2D CalculateRenderArea(FTransform Transform, FVector2D HalfExtents);                                                 // [0xbc7e11c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeRenderer.BeginDrawCanvasToRenderTarget
	// void BeginDrawCanvasToRenderTarget(class UJunoLandscapeRenderTarget* TextureRenderTarget, class UJunoLandscapeCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext_JunoLandscape& Context); // [0xbc7df68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeRenderTarget
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoLandscapeRenderTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   Format                                                      OFFSET(get<T>, {0x2C, 1, 0, 0})
};

/// Class /Script/JunoProceduralLandscape.JunoLandscapeCanvas
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoLandscapeCanvas : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UJunoLandscapeRenderTarget*)         RenderTarget                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UJunoLandscapeRenderer*)             Renderer                                                    OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/JunoProceduralLandscape.JunoLandscapeCanvas.GetNameReplacement
	// FName GetNameReplacement(FName NameIn);                                                                                  // [0xbc7f98c] Final|Native|Static|Public 
	// Function /Script/JunoProceduralLandscape.JunoLandscapeCanvas.DrawMaterial
	// void DrawMaterial(class UJunoLandscapeMaterial* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint); // [0xbc7ea30] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeLayerInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoLandscapeLayerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class ULandscapeLayerInfoObject*)          LandscapeInfo                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(char)                                      WeightmapTextureIndex                                       OFFSET(get<char>, {0xC, 1, 0, 0})
	SMember(FLinearColor)                              WeightmapTextureMask                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysicsMaterial                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(float)                                     MinimumCollisionRelevanceWeight                             OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeGrassAndPhysics
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoLandscapeGrassAndPhysics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint16_t)                                  ShaderPlatform                                              OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	CMember(TArray<FJunoLandscapeCustomOutputInfo>)    AvailableGrasses                                            OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoLandscapeCustomOutputInfo>)    AvailablePhysicsMaterials                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FGuid)                                     SavedMaterialID                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeCustomOutputInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoLandscapeCustomOutputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   InputIndex                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   OutputIndex                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsConstant                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     ConstantValue                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(class UObject*)                            InputObject                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeCombinedMaterialInstance
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoLandscapeCombinedMaterialInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FJunoLandscapeLayerInfo>)           LandscapeInfos                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UMaterialInstanceConstant*)          MaterialInstance                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInstanceConstant*)          CPUReadbackMaterialInstance                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CPUReadbackSharedMID                                        OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   VisibilityLayerIndex                                        OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeMaterialCacheKeyBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoLandscapeMaterialCacheKeyBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             OrderedLayers                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  KeyHash                                                     OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsTextureSorted                                            OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeMaterialInstanceCacheKey
/// Size: 0x0000 (0x000018 - 0x000018)
class FJunoLandscapeMaterialInstanceCacheKey : public FJunoLandscapeMaterialCacheKeyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeCombinedMaterialCacheKey
/// Size: 0x0000 (0x000018 - 0x000018)
class FJunoLandscapeCombinedMaterialCacheKey : public FJunoLandscapeMaterialCacheKeyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeComponentPrecachSettings
/// Size: 0x0005 (0x000000 - 0x000005)
class FJunoLandscapeComponentPrecachSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      bPrecacheHeights                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bPrecachePhysicalMaterials                                  OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bPrecacheGrass                                              OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bPrecacheWeightmaps                                         OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bPrecacheAdditionalTextures                                 OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeLayersGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoLandscapeLayersGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             Layers                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   CombinationIndex                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeMaterialCache
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoLandscapeMaterialCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FJunoLandscapeCombinedMaterialCacheKey, UJunoLandscapeCombinedMaterial*>) ExternalCombinedMaterials OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FJunoLandscapeCombinedMaterialCacheKey, UJunoLandscapeCombinedMaterial*>) MaterialCombinations    OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.JunoLandscapeGenerationData
/// Size: 0x0068 (0x000000 - 0x000068)
class FJunoLandscapeGenerationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Generator                                                   OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       LandscapeMaterial                                           OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UJunoLandscapeLayersData*>) LayersData                                                  OFFSET(get<T>, {0x48, 32, 0, 0})
};

/// Struct /Script/JunoProceduralLandscape.DrawToRenderTargetContext_JunoLandscape
/// Size: 0x0008 (0x000000 - 0x000008)
class FDrawToRenderTargetContext_JunoLandscape : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoLandscapeRenderTarget*)         RenderTarget                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

