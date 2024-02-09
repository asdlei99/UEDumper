
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/GeometryFramework.EDynamicMeshComponentTangentsMode
/// Size: 0x05
enum class EDynamicMeshComponentTangentsMode : uint8_t
{
	EDynamicMeshComponentTangentsMode__NoTangents                                    = 0,
	EDynamicMeshComponentTangentsMode__AutoCalculated                                = 1,
	EDynamicMeshComponentTangentsMode__ExternallyProvided                            = 2,
	EDynamicMeshComponentTangentsMode__Default                                       = 255,
	EDynamicMeshComponentTangentsMode__EDynamicMeshComponentTangentsMode_MAX         = 256
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentColorOverrideMode
/// Size: 0x05
enum class EDynamicMeshComponentColorOverrideMode : uint8_t
{
	EDynamicMeshComponentColorOverrideMode__None                                     = 0,
	EDynamicMeshComponentColorOverrideMode__VertexColors                             = 1,
	EDynamicMeshComponentColorOverrideMode__Polygroups                               = 2,
	EDynamicMeshComponentColorOverrideMode__Constant                                 = 3,
	EDynamicMeshComponentColorOverrideMode__EDynamicMeshComponentColorOverrideMode_MAX = 4
};

/// Enum /Script/GeometryFramework.EDynamicMeshVertexColorTransformMode
/// Size: 0x04
enum class EDynamicMeshVertexColorTransformMode : uint8_t
{
	EDynamicMeshVertexColorTransformMode__NoTransform                                = 0,
	EDynamicMeshVertexColorTransformMode__LinearToSRGB                               = 1,
	EDynamicMeshVertexColorTransformMode__SRGBToLinear                               = 2,
	EDynamicMeshVertexColorTransformMode__EDynamicMeshVertexColorTransformMode_MAX   = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentRenderUpdateMode
/// Size: 0x04
enum class EDynamicMeshComponentRenderUpdateMode : uint8_t
{
	EDynamicMeshComponentRenderUpdateMode__NoUpdate                                  = 0,
	EDynamicMeshComponentRenderUpdateMode__FullUpdate                                = 1,
	EDynamicMeshComponentRenderUpdateMode__FastUpdate                                = 2,
	EDynamicMeshComponentRenderUpdateMode__EDynamicMeshComponentRenderUpdateMode_MAX = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshChangeType
/// Size: 0x07
enum class EDynamicMeshChangeType : uint8_t
{
	EDynamicMeshChangeType__GeneralEdit                                              = 0,
	EDynamicMeshChangeType__MeshChange                                               = 1,
	EDynamicMeshChangeType__MeshReplacementChange                                    = 2,
	EDynamicMeshChangeType__MeshVertexChange                                         = 3,
	EDynamicMeshChangeType__DeformationEdit                                          = 4,
	EDynamicMeshChangeType__AttributeEdit                                            = 5,
	EDynamicMeshChangeType__EDynamicMeshChangeType_MAX                               = 6
};

/// Enum /Script/GeometryFramework.EDynamicMeshAttributeChangeFlags
/// Size: 0x08
enum class EDynamicMeshAttributeChangeFlags : uint8_t
{
	EDynamicMeshAttributeChangeFlags__Unknown                                        = 0,
	EDynamicMeshAttributeChangeFlags__MeshTopology                                   = 1,
	EDynamicMeshAttributeChangeFlags__VertexPositions                                = 2,
	EDynamicMeshAttributeChangeFlags__NormalsTangents                                = 4,
	EDynamicMeshAttributeChangeFlags__VertexColors                                   = 8,
	EDynamicMeshAttributeChangeFlags__UVs                                            = 16,
	EDynamicMeshAttributeChangeFlags__TriangleGroups                                 = 32,
	EDynamicMeshAttributeChangeFlags__EDynamicMeshAttributeChangeFlags_MAX           = 33
};

/// Class /Script/GeometryFramework.MeshCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshReplacementCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReplacementCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshVertexCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshVertexCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.BaseDynamicMeshComponent
/// Size: 0x0060 (0x000540 - 0x0005A0)
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0538   (0x0020)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x0558   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0559   (0x0003)  MISSED
	FLinearColor                                       WireframeColor;                                             // 0x055C   (0x0010)  
	EDynamicMeshComponentColorOverrideMode             ColorMode;                                                  // 0x056C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x056D   (0x0003)  MISSED
	FColor                                             ConstantColor;                                              // 0x0570   (0x0004)  
	EDynamicMeshVertexColorTransformMode               ColorSpaceMode;                                             // 0x0574   (0x0001)  
	bool                                               bEnableFlatShading;                                         // 0x0575   (0x0001)  
	bool                                               bEnableViewModeOverrides;                                   // 0x0576   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0577   (0x0001)  MISSED
	class UMaterialInterface*                          OverrideRenderMaterial;                                     // 0x0578   (0x0008)  
	class UMaterialInterface*                          SecondaryRenderMaterial;                                    // 0x0580   (0x0008)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0588   (0x0001)  MISSED
	bool                                               bEnableRayTracing;                                          // 0x0589   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x058A   (0x0006)  MISSED
	TArray<class UMaterialInterface*>                  BaseMaterials;                                              // 0x0590   (0x0010)  


	/// Functions
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	// void SetViewModeOverridesEnabled(bool bEnabled);                                                                      // [0xb0e6930] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetVertexColorSpaceTransformMode
	// void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode);                                  // [0xb0e686c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	// void SetShadowsEnabled(bool bEnabled);                                                                                // [0xb0e66e4] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	// void SetSecondaryRenderMaterial(class UMaterialInterface* Material);                                                  // [0xb0e6620] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	// void SetSecondaryBuffersVisibility(bool bSetVisible);                                                                 // [0xb0e6558] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	// void SetOverrideRenderMaterial(class UMaterialInterface* Material);                                                   // [0xb0e6494] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	// void SetEnableWireframeRenderPass(bool bEnable);                                                                      // [0xb0e63cc] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	// void SetEnableRaytracing(bool bSetEnabled);                                                                           // [0xb0e6304] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	// void SetEnableFlatShading(bool bEnable);                                                                              // [0xb0e623c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	// void SetConstantOverrideColor(FColor NewColor);                                                                       // [0xb0e5e88] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	// void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);                                            // [0xb0e5c74] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	// bool HasOverrideRenderMaterial(int32_t K);                                                                            // [0xb0e55f4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	// bool GetViewModeOverridesEnabled();                                                                                   // [0xb0e55cc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetVertexColorSpaceTransformMode
	// EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode();                                              // [0xb0e55a4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	// bool GetShadowsEnabled();                                                                                             // [0xb0e5538] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	// class UMaterialInterface* GetSecondaryRenderMaterial();                                                               // [0xb0e5510] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	// bool GetSecondaryBuffersVisibility();                                                                                 // [0xb0e54e8] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	// class UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);                                           // [0xb0e5414] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	// bool GetFlatShadingEnabled();                                                                                         // [0xb0e53ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	// bool GetEnableWireframeRenderPass();                                                                                  // [0xb0e53c4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	// bool GetEnableRaytracing();                                                                                           // [0x8f48cf8] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	// class UDynamicMesh* GetDynamicMesh();                                                                                 // [0xb0e539c] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	// FColor GetConstantOverrideColor();                                                                                    // [0xb0e536c] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	// EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();                                                        // [0x840484c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	// void ClearSecondaryRenderMaterial();                                                                                  // [0xb0e5240] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	// void ClearOverrideRenderMaterial();                                                                                   // [0xb0e5228] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshComponent
/// Size: 0x0260 (0x0005A0 - 0x000800)
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x05A0   (0x0008)  MISSED
	class UDynamicMesh*                                MeshObject;                                                 // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x130];                                     // 0x05B0   (0x0130)  MISSED
	EDynamicMeshComponentTangentsMode                  TangentsType;                                               // 0x06E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3F];                                      // 0x06E1   (0x003F)  MISSED
	SDK_UNDEFINED(1,13906) /* TEnumAsByte<ECollisionTraceFlag> */ __um(CollisionType);                             // 0x0720   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0721   (0x0001)  
	bool                                               bEnableComplexCollision;                                    // 0x0722   (0x0001)  
	bool                                               bDeferCollisionUpdates;                                     // 0x0723   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0724   (0x0004)  MISSED
	class UBodySetup*                                  MeshBodySetup;                                              // 0x0728   (0x0008)  
	unsigned char                                      UnknownData04_5[0x38];                                      // 0x0730   (0x0038)  MISSED
	FKAggregateGeom                                    AggGeom;                                                    // 0x0768   (0x0078)  
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x07E0   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x07F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	// bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);                                            // [0xb0e6ac0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.UpdateCollision
	// void UpdateCollision(bool bOnlyIfPending);                                                                            // [0xb0e69f8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetTangentsType
	// void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);                                              // [0xb0e67ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                     // [0xb0e60b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	// void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);                                        // [0xb0e5f48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	// void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);                                        // [0xb0e5d38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshVertexAttributesModified
	// void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors);                     // [0xb0e56ec] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshModified
	// void NotifyMeshModified();                                                                                            // [0x8db7e8c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsTypePure
	// EDynamicMeshComponentTangentsMode GetTangentsTypePure();                                                              // [0xb0e5560] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsType
	// EDynamicMeshComponentTangentsMode GetTangentsType();                                                                  // [0xb0e5560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	// void EnableComplexAsSimpleCollision();                                                                                // [0xb0e52f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	// void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet);                                               // [0xb0e5258] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ADynamicMeshActor : public AActor
{ 
public:
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0290   (0x0008)  
	bool                                               bEnableComputeMeshPool;                                     // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	class UDynamicMeshPool*                            DynamicMeshPool;                                            // 0x02A0   (0x0008)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	// bool ReleaseComputeMesh(class UDynamicMesh* Mesh);                                                                    // [0xb0e596c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	// void ReleaseAllComputeMeshes();                                                                                       // [0xb0e5944] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	// class UDynamicMeshComponent* GetDynamicMeshComponent();                                                               // [0x6394878] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	// class UDynamicMeshPool* GetComputeMeshPool();                                                                         // [0xb0e5348] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	// void FreeAllComputeMeshes();                                                                                          // [0xb0e530c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	// class UDynamicMesh* AllocateComputeMesh();                                                                            // [0xb0e51d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicMeshGenerator : public UObject
{ 
public:
};

/// Class /Script/GeometryFramework.DynamicMesh
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UDynamicMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0000   (0x0070)  MISSED
	SDK_UNDEFINED(16,13907) /* FMulticastInlineDelegate */ __um(MeshModifiedBPEvent);                              // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0080   (0x0020)  MISSED
	class UDynamicMeshGenerator*                       MeshGenerator;                                              // 0x00A0   (0x0008)  
	bool                                               bEnableMeshGenerator;                                       // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMesh.ResetToCube
	// class UDynamicMesh* ResetToCube();                                                                                    // [0xb0e5b10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.Reset
	// class UDynamicMesh* Reset();                                                                                          // [0xb0e5aec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.IsEmpty
	// bool IsEmpty();                                                                                                       // [0xb0e56c8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMesh.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                           // [0xb0e5584] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryFramework.DynamicMeshPool
/// Size: 0x0020 (0x000028 - 0x000048)
class UDynamicMeshPool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UDynamicMesh*>                        CachedMeshes;                                               // 0x0028   (0x0010)  
	TArray<class UDynamicMesh*>                        AllCreatedMeshes;                                           // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnMesh
	// void ReturnMesh(class UDynamicMesh* Mesh);                                                                            // [0xb0e5b48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	// void ReturnAllMeshes();                                                                                               // [0xb0e5b34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.RequestMesh
	// class UDynamicMesh* RequestMesh();                                                                                    // [0xb0e5ac8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.FreeAllMeshes
	// void FreeAllMeshes();                                                                                                 // [0xb0e5334] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryFramework.DynamicMeshChangeInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDynamicMeshChangeInfo
{ 
	EDynamicMeshChangeType                             Type;                                                       // 0x0000   (0x0001)  
	EDynamicMeshAttributeChangeFlags                   Flags;                                                      // 0x0001   (0x0001)  
	bool                                               bIsRevertChange;                                            // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1D];                                      // 0x0003   (0x001D)  MISSED
};

