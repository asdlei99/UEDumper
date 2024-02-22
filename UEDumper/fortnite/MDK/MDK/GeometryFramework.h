
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GeometryFramework.MeshCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshCommandChangeTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryFramework.MeshReplacementCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReplacementCommandChangeTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryFramework.MeshVertexCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshVertexCommandChangeTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryFramework.BaseDynamicMeshComponent
/// Size: 0x0060 (0x000540 - 0x0005A0)
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	DMember(bool)                                      bExplicitShowWireframe                                      OFFSET(get<bool>, {0x558, 1, 0, 0})
	SMember(FLinearColor)                              WireframeColor                                              OFFSET(getStruct<T>, {0x55C, 16, 0, 0})
	CMember(EDynamicMeshComponentColorOverrideMode)    ColorMode                                                   OFFSET(get<T>, {0x56C, 1, 0, 0})
	SMember(FColor)                                    ConstantColor                                               OFFSET(getStruct<T>, {0x570, 4, 0, 0})
	CMember(EDynamicMeshVertexColorTransformMode)      ColorSpaceMode                                              OFFSET(get<T>, {0x574, 1, 0, 0})
	DMember(bool)                                      bEnableFlatShading                                          OFFSET(get<bool>, {0x575, 1, 0, 0})
	DMember(bool)                                      bEnableViewModeOverrides                                    OFFSET(get<bool>, {0x576, 1, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideRenderMaterial                                      OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SecondaryRenderMaterial                                     OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(bool)                                      bEnableRayTracing                                           OFFSET(get<bool>, {0x589, 1, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         BaseMaterials                                               OFFSET(get<T>, {0x590, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	// void SetViewModeOverridesEnabled(bool bEnabled);                                                                         // [0xa9ab40c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetVertexColorSpaceTransformMode
	// void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode);                                     // [0xa9ab388] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	// void SetShadowsEnabled(bool bEnabled);                                                                                   // [0xa9ab284] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	// void SetSecondaryRenderMaterial(class UMaterialInterface* Material);                                                     // [0xa9ab200] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	// void SetSecondaryBuffersVisibility(bool bSetVisible);                                                                    // [0xa9ab17c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	// void SetOverrideRenderMaterial(class UMaterialInterface* Material);                                                      // [0xa9ab0f8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	// void SetEnableWireframeRenderPass(bool bEnable);                                                                         // [0xa9ab074] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	// void SetEnableRaytracing(bool bSetEnabled);                                                                              // [0xa9aaff0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	// void SetEnableFlatShading(bool bEnable);                                                                                 // [0xa9aaf6c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	// void SetConstantOverrideColor(FColor NewColor);                                                                          // [0xa9aabfc] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	// void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);                                               // [0xa9aaab4] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	// bool HasOverrideRenderMaterial(int32_t K);                                                                               // [0xa9aa5f4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	// bool GetViewModeOverridesEnabled();                                                                                      // [0xa9aa5cc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetVertexColorSpaceTransformMode
	// EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode();                                                 // [0xa9aa5a4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	// bool GetShadowsEnabled();                                                                                                // [0xa9aa538] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	// class UMaterialInterface* GetSecondaryRenderMaterial();                                                                  // [0xa9aa510] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	// bool GetSecondaryBuffersVisibility();                                                                                    // [0xa9aa4e8] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	// class UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);                                              // [0xa9aa454] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	// bool GetFlatShadingEnabled();                                                                                            // [0xa9aa42c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	// bool GetEnableWireframeRenderPass();                                                                                     // [0xa9aa404] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	// bool GetEnableRaytracing();                                                                                              // [0x8f782f0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	// class UDynamicMesh* GetDynamicMesh();                                                                                    // [0xa9aa3dc] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	// FColor GetConstantOverrideColor();                                                                                       // [0xa9aa3ac] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	// EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();                                                           // [0x843f394] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	// void ClearSecondaryRenderMaterial();                                                                                     // [0xa9aa280] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	// void ClearOverrideRenderMaterial();                                                                                      // [0xa9aa268] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshComponent
/// Size: 0x0260 (0x0005A0 - 0x000800)
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	CMember(class UDynamicMesh*)                       MeshObject                                                  OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(EDynamicMeshComponentTangentsMode)         TangentsType                                                OFFSET(get<T>, {0x6E0, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionType                                               OFFSET(get<T>, {0x720, 1, 0, 0})
	DMember(bool)                                      bUseAsyncCooking                                            OFFSET(get<bool>, {0x721, 1, 0, 0})
	DMember(bool)                                      bEnableComplexCollision                                     OFFSET(get<bool>, {0x722, 1, 0, 0})
	DMember(bool)                                      bDeferCollisionUpdates                                      OFFSET(get<bool>, {0x723, 1, 0, 0})
	CMember(class UBodySetup*)                         MeshBodySetup                                               OFFSET(get<T>, {0x728, 8, 0, 0})
	SMember(FKAggregateGeom)                           AggGeom                                                     OFFSET(getStruct<T>, {0x768, 120, 0, 0})
	CMember(TArray<class UBodySetup*>)                 AsyncBodySetupQueue                                         OFFSET(get<T>, {0x7E0, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	// bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);                                               // [0xa9ab514] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.UpdateCollision
	// void UpdateCollision(bool bOnlyIfPending);                                                                               // [0xa9ab490] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetTangentsType
	// void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);                                                 // [0xa9ab308] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                        // [0xa9aae24] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	// void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0xa9aad38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	// void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0xa9aab38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshVertexAttributesModified
	// void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors);                        // [0xa9aa6ac] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshModified
	// void NotifyMeshModified();                                                                                               // [0x8de8084] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsTypePure
	// EDynamicMeshComponentTangentsMode GetTangentsTypePure();                                                                 // [0xa9aa560] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsType
	// EDynamicMeshComponentTangentsMode GetTangentsType();                                                                     // [0xa9aa560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	// void EnableComplexAsSimpleCollision();                                                                                   // [0xa9aa334] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	// void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet);                                                  // [0xa9aa298] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ADynamicMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class UDynamicMeshComponent*)              DynamicMeshComponent                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bEnableComputeMeshPool                                      OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(class UDynamicMeshPool*)                   DynamicMeshPool                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	// bool ReleaseComputeMesh(class UDynamicMesh* Mesh);                                                                       // [0xa9aa82c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	// void ReleaseAllComputeMeshes();                                                                                          // [0xa9aa804] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	// class UDynamicMeshComponent* GetDynamicMeshComponent();                                                                  // [0x642786c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	// class UDynamicMeshPool* GetComputeMeshPool();                                                                            // [0xa9aa388] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	// void FreeAllComputeMeshes();                                                                                             // [0xa9aa34c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	// class UDynamicMesh* AllocateComputeMesh();                                                                               // [0xa9aa218] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicMeshGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryFramework.DynamicMesh
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UDynamicMesh : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  MeshModifiedBPEvent                                         OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(class UDynamicMeshGenerator*)              MeshGenerator                                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bEnableMeshGenerator                                        OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.DynamicMesh.ResetToCube
	// class UDynamicMesh* ResetToCube();                                                                                       // [0xa9aa990] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.Reset
	// class UDynamicMesh* Reset();                                                                                             // [0xa9aa96c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.IsEmpty
	// bool IsEmpty();                                                                                                          // [0xa9aa688] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMesh.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                              // [0xa9aa584] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryFramework.DynamicMeshPool
/// Size: 0x0020 (0x000028 - 0x000048)
class UDynamicMeshPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UDynamicMesh*>)               CachedMeshes                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UDynamicMesh*>)               AllCreatedMeshes                                            OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnMesh
	// void ReturnMesh(class UDynamicMesh* Mesh);                                                                               // [0xa9aa9c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	// void ReturnAllMeshes();                                                                                                  // [0xa9aa9b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.RequestMesh
	// class UDynamicMesh* RequestMesh();                                                                                       // [0xa9aa948] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.FreeAllMeshes
	// void FreeAllMeshes();                                                                                                    // [0xa9aa374] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryFramework.DynamicMeshChangeInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FDynamicMeshChangeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EDynamicMeshChangeType)                    Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EDynamicMeshAttributeChangeFlags)          Flags                                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsRevertChange                                             OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentTangentsMode
/// Size: 0x05
enum EDynamicMeshComponentTangentsMode : uint8_t
{
	EDynamicMeshComponentTangentsMode__NoTangents                                    = 0,
	EDynamicMeshComponentTangentsMode__AutoCalculated                                = 1,
	EDynamicMeshComponentTangentsMode__ExternallyProvided                            = 2,
	EDynamicMeshComponentTangentsMode__Default                                       = 255,
	EDynamicMeshComponentTangentsMode__EDynamicMeshComponentTangentsMode_MAX         = 256
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentColorOverrideMode
/// Size: 0x05
enum EDynamicMeshComponentColorOverrideMode : uint8_t
{
	EDynamicMeshComponentColorOverrideMode__None                                     = 0,
	EDynamicMeshComponentColorOverrideMode__VertexColors                             = 1,
	EDynamicMeshComponentColorOverrideMode__Polygroups                               = 2,
	EDynamicMeshComponentColorOverrideMode__Constant                                 = 3,
	EDynamicMeshComponentColorOverrideMode__EDynamicMeshComponentColorOverrideMode_MAX = 4
};

/// Enum /Script/GeometryFramework.EDynamicMeshVertexColorTransformMode
/// Size: 0x04
enum EDynamicMeshVertexColorTransformMode : uint8_t
{
	EDynamicMeshVertexColorTransformMode__NoTransform                                = 0,
	EDynamicMeshVertexColorTransformMode__LinearToSRGB                               = 1,
	EDynamicMeshVertexColorTransformMode__SRGBToLinear                               = 2,
	EDynamicMeshVertexColorTransformMode__EDynamicMeshVertexColorTransformMode_MAX   = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentRenderUpdateMode
/// Size: 0x04
enum EDynamicMeshComponentRenderUpdateMode : uint8_t
{
	EDynamicMeshComponentRenderUpdateMode__NoUpdate                                  = 0,
	EDynamicMeshComponentRenderUpdateMode__FullUpdate                                = 1,
	EDynamicMeshComponentRenderUpdateMode__FastUpdate                                = 2,
	EDynamicMeshComponentRenderUpdateMode__EDynamicMeshComponentRenderUpdateMode_MAX = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshChangeType
/// Size: 0x07
enum EDynamicMeshChangeType : uint8_t
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
enum EDynamicMeshAttributeChangeFlags : uint8_t
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

