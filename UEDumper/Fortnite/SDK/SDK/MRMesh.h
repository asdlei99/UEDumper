
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
/// Size: 0x0070 (0x000220 - 0x000290)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,11680) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                             // 0x0220   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0230   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0231   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0232   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x0233   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0234   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0238   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0248   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0258   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0268   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x026C   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0270   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0278   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                           // [0x6075628] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x60754e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
/// Size: 0x0080 (0x000500 - 0x000580)
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0500   (0x0008)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0508   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0510   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0518   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0519   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x051A   (0x0001)  MISSED
	bool                                               bNeverCreateCollisionMesh;                                  // 0x051B   (0x0001)  
	unsigned char                                      UnknownData02_5[0x44];                                      // 0x051C   (0x0044)  MISSED
	TArray<class UMRMeshBodyHolder*>                   BodyHolders;                                                // 0x0560   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0570   (0x0010)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                      // [0x60759d4] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                        // [0x607594c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                             // [0x6075884] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                            // [0x60757c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate
	// void RequestNavMeshUpdate();                                                                                          // [0x607579c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                   // [0x6075748] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                     // [0x607572c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                               // [0x6075714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                        // [0x60756fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                            // [0x60756e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                         // [0x6075400] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                            // [0x6075a98] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                           // [0x13d65e0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                           // [0x1d39114] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                       // [0x349af2c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                        // [0x6075774] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                              // [0x1d03fcc] RequiredAPI|Native|Public 
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                     // [0x607541c] RequiredAPI|Native|Public 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

