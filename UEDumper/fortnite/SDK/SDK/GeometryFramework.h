
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
	// void SetViewModeOverridesEnabled(bool bEnabled);                                                                      // [0xb127ac0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetVertexColorSpaceTransformMode
	// void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode);                                  // [0xb1279fc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	// void SetShadowsEnabled(bool bEnabled);                                                                                // [0xb127874] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	// void SetSecondaryRenderMaterial(class UMaterialInterface* Material);                                                  // [0xb1277b0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	// void SetSecondaryBuffersVisibility(bool bSetVisible);                                                                 // [0xb1276e8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	// void SetOverrideRenderMaterial(class UMaterialInterface* Material);                                                   // [0xb127624] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	// void SetEnableWireframeRenderPass(bool bEnable);                                                                      // [0xb12755c] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	// void SetEnableRaytracing(bool bSetEnabled);                                                                           // [0xb127494] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	// void SetEnableFlatShading(bool bEnable);                                                                              // [0xb1273cc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	// void SetConstantOverrideColor(FColor NewColor);                                                                       // [0xb127018] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	// void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);                                            // [0xb126e04] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	// bool HasOverrideRenderMaterial(int32_t K);                                                                            // [0xb126784] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	// bool GetViewModeOverridesEnabled();                                                                                   // [0xb12675c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetVertexColorSpaceTransformMode
	// EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode();                                              // [0xb126734] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	// bool GetShadowsEnabled();                                                                                             // [0xb1266c8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	// class UMaterialInterface* GetSecondaryRenderMaterial();                                                               // [0xb1266a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	// bool GetSecondaryBuffersVisibility();                                                                                 // [0xb126678] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	// class UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);                                           // [0xb1265a4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	// bool GetFlatShadingEnabled();                                                                                         // [0xb12657c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	// bool GetEnableWireframeRenderPass();                                                                                  // [0xb126554] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	// bool GetEnableRaytracing();                                                                                           // [0x8f81f18] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	// class UDynamicMesh* GetDynamicMesh();                                                                                 // [0xb12652c] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	// FColor GetConstantOverrideColor();                                                                                    // [0xb1264fc] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	// EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();                                                        // [0x843b8fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	// void ClearSecondaryRenderMaterial();                                                                                  // [0xb1263d0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	// void ClearOverrideRenderMaterial();                                                                                   // [0xb1263b8] RequiredAPI|Native|Public|BlueprintCallable 
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
	SDK_UNDEFINED(1,13907) /* TEnumAsByte<ECollisionTraceFlag> */ __um(CollisionType);                             // 0x0720   (0x0001)  
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
	// bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);                                            // [0xb127c50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.UpdateCollision
	// void UpdateCollision(bool bOnlyIfPending);                                                                            // [0xb127b88] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetTangentsType
	// void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);                                              // [0xb12793c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                     // [0xb127240] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	// void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);                                        // [0xb1270d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	// void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);                                        // [0xb126ec8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshVertexAttributesModified
	// void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors);                     // [0xb12687c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshModified
	// void NotifyMeshModified();                                                                                            // [0x8df1070] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsTypePure
	// EDynamicMeshComponentTangentsMode GetTangentsTypePure();                                                              // [0xb1266f0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsType
	// EDynamicMeshComponentTangentsMode GetTangentsType();                                                                  // [0xb1266f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	// void EnableComplexAsSimpleCollision();                                                                                // [0xb126484] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	// void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet);                                               // [0xb1263e8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
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
	// bool ReleaseComputeMesh(class UDynamicMesh* Mesh);                                                                    // [0xb126afc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	// void ReleaseAllComputeMeshes();                                                                                       // [0xb126ad4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	// class UDynamicMeshComponent* GetDynamicMeshComponent();                                                               // [0x63c7d24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	// class UDynamicMeshPool* GetComputeMeshPool();                                                                         // [0xb1264d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	// void FreeAllComputeMeshes();                                                                                          // [0xb12649c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	// class UDynamicMesh* AllocateComputeMesh();                                                                            // [0xb126368] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	SDK_UNDEFINED(16,13908) /* FMulticastInlineDelegate */ __um(MeshModifiedBPEvent);                              // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0080   (0x0020)  MISSED
	class UDynamicMeshGenerator*                       MeshGenerator;                                              // 0x00A0   (0x0008)  
	bool                                               bEnableMeshGenerator;                                       // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMesh.ResetToCube
	// class UDynamicMesh* ResetToCube();                                                                                    // [0xb126ca0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.Reset
	// class UDynamicMesh* Reset();                                                                                          // [0xb126c7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.IsEmpty
	// bool IsEmpty();                                                                                                       // [0xb126858] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMesh.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                           // [0xb126714] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void ReturnMesh(class UDynamicMesh* Mesh);                                                                            // [0xb126cd8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	// void ReturnAllMeshes();                                                                                               // [0xb126cc4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.RequestMesh
	// class UDynamicMesh* RequestMesh();                                                                                    // [0xb126c58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.FreeAllMeshes
	// void FreeAllMeshes();                                                                                                 // [0xb1264c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
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

