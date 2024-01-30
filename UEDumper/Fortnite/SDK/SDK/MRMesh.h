
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x04
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX                     = 3
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0070 (0x000290 - 0x000300)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,11643) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                             // 0x0290   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x02A0   (0x0001)  
	bool                                               RequestNormals;                                             // 0x02A1   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x02A2   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x02A3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x02A8   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x02B8   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x02C8   (0x0010)  
	float                                              UpdateInterval;                                             // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02DC   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x02E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                           // [0x6353d44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x6353c40] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshBodyHolder
/// Size: 0x0208 (0x000028 - 0x000230)
class UMRMeshBodyHolder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x0030   (0x0008)  
	FBodyInstance                                      BodyInstance;                                               // 0x0038   (0x0190)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x01C8   (0x0068)  MISSED
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0080 (0x000570 - 0x0005F0)
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0570   (0x0008)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0578   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0580   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0588   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0589   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x058A   (0x0001)  MISSED
	bool                                               bNeverCreateCollisionMesh;                                  // 0x058B   (0x0001)  
	unsigned char                                      UnknownData02_5[0x44];                                      // 0x058C   (0x0044)  MISSED
	TArray<class UMRMeshBodyHolder*>                   BodyHolders;                                                // 0x05D0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x05E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                      // [0x635402c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                        // [0x6353fa4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                             // [0x6353f1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                            // [0x6353e9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate
	// void RequestNavMeshUpdate();                                                                                          // [0x6353e78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                   // [0x6353e24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                     // [0x6353e08] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                               // [0x6353df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                        // [0x6353dd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                            // [0x6353dc4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                         // [0x6353ba0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                            // [0x63540b0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                           // [0x160abec] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                           // [0x1efdc98] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                       // [0x34b6d90] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                        // [0x6353e50] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                              // [0x21c958c] RequiredAPI|Native|Public 
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                     // [0x6353bbc] RequiredAPI|Native|Public 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

