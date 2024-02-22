
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0070 (0x000220 - 0x000290)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FMulticastInlineDelegate)                  OnMeshTrackerUpdated                                        OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	DMember(bool)                                      ScanWorld                                                   OFFSET(get<bool>, {0x230, 1, 0, 0})
	DMember(bool)                                      RequestNormals                                              OFFSET(get<bool>, {0x231, 1, 0, 0})
	DMember(bool)                                      RequestVertexConfidence                                     OFFSET(get<bool>, {0x232, 1, 0, 0})
	CMember(EMeshTrackerVertexColorMode)               VertexColorMode                                             OFFSET(get<T>, {0x233, 1, 0, 0})
	CMember(TArray<FColor>)                            BlockVertexColors                                           OFFSET(get<T>, {0x238, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceZero                               OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceOne                                OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	DMember(float)                                     UpdateInterval                                              OFFSET(get<float>, {0x268, 4, 0, 0})
	CMember(class UMRMeshComponent*)                   MRMesh                                                      OFFSET(get<T>, {0x270, 8, 0, 0})


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x3d1d968] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x610d95c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x610d858] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshBodyHolder
/// Size: 0x0208 (0x000028 - 0x000230)
class UMRMeshBodyHolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UBodySetup*)                         BodySetup                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x38, 400, 0, 0})
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0080 (0x000500 - 0x000580)
class UMRMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UMaterialInterface*)                 WireframeMaterial                                           OFFSET(get<T>, {0x510, 8, 0, 0})
	DMember(bool)                                      bCreateMeshProxySections                                    OFFSET(get<bool>, {0x518, 1, 0, 0})
	DMember(bool)                                      bUpdateNavMeshOnMeshUpdate                                  OFFSET(get<bool>, {0x519, 1, 0, 0})
	DMember(bool)                                      bNeverCreateCollisionMesh                                   OFFSET(get<bool>, {0x51B, 1, 0, 0})
	CMember(TArray<class UMRMeshBodyHolder*>)          BodyHolders                                                 OFFSET(get<T>, {0x560, 16, 0, 0})


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0x610dc44] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x610dbbc] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x610db34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x610dab4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate
	// void RequestNavMeshUpdate();                                                                                             // [0x610da90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x610da3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x610da20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x610da08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x610d9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x610d9dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x610d7b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x610dcc8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x19b5bd0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0x1aea248] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0x3519bc8] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x610da68] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0x1e2bc88] RequiredAPI|Native|Public 
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x610d7d4] RequiredAPI|Native|Public 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
class FMRMeshConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x04
enum EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX                     = 3
};

