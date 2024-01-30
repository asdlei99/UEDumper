
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture
/// Size: 0x0048 (0x000028 - 0x000070)
class UHeightfieldMinMaxTexture : public UObject
{ 
public:
	class UTexture2D*                                  Texture;                                                    // 0x0028   (0x0008)  
	class UTexture2D*                                  LodBiasTexture;                                             // 0x0030   (0x0008)  
	class UTexture2D*                                  LodBiasMinMaxTexture;                                       // 0x0038   (0x0008)  
	int32_t                                            MaxCPULevels;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FVector2D>                                  TextureData;                                                // 0x0048   (0x0010)  
	FIntPoint                                          TextureDataSize;                                            // 0x0058   (0x0008)  
	TArray<int32_t>                                    TextureDataMips;                                            // 0x0060   (0x0010)  
};

/// Class /Script/VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{ 
public:
	class UHeightfieldMinMaxTexture*                   MinMaxTexture;                                              // 0x00B0   (0x0008)  
	SDK_UNDEFINED(1,15311) /* TEnumAsByte<EMaterialSamplerType> */ __um(SamplerType);                              // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMesh
/// Size: 0x0008 (0x000290 - 0x000298)
class AVirtualHeightfieldMesh : public AActor
{ 
public:
	class UVirtualHeightfieldMeshComponent*            VirtualHeightfieldMeshComponent;                            // 0x0290   (0x0008)  
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
/// Size: 0x0070 (0x000570 - 0x0005E0)
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{ 
public:
	SDK_UNDEFINED(32,15312) /* TWeakObjectPtr<ARuntimeVirtualTextureVolume*> */ __um(VirtualTexture);              // 0x0570   (0x0020)  
	class ARuntimeVirtualTextureVolume*                VirtualTextureRef;                                          // 0x0590   (0x0008)  
	class UObject*                                     VirtualTextureThumbnail;                                    // 0x0598   (0x0008)  
	bool                                               bCopyBoundsButton;                                          // 0x05A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x05A1   (0x0007)  MISSED
	class UHeightfieldMinMaxTexture*                   MinMaxTexture;                                              // 0x05A8   (0x0008)  
	int32_t                                            NumMinMaxTextureBuildLevels;                                // 0x05B0   (0x0004)  
	bool                                               bBuildMinMaxTextureButton;                                  // 0x05B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x05B5   (0x0003)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x05B8   (0x0008)  
	float                                              LOD0ScreenSize;                                             // 0x05C0   (0x0004)  
	float                                              Lod0Distribution;                                           // 0x05C4   (0x0004)  
	float                                              LodDistribution;                                            // 0x05C8   (0x0004)  
	float                                              LodBiasScale;                                               // 0x05CC   (0x0004)  
	int32_t                                            NumForceLoadLods;                                           // 0x05D0   (0x0004)  
	int32_t                                            NumOcclusionLods;                                           // 0x05D4   (0x0004)  
	bool                                               bHiddenInEditor;                                            // 0x05D8   (0x0001)  
	bool                                               bWorldPositionOffsetVelocity;                               // 0x05D9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x05DA   (0x0006)  MISSED


	/// Functions
	// Function /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
	// void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame);                             // [0xc2be1d8] Final|Native|Protected|HasOutParms|Const 
};

