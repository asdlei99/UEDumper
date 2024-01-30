
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCache
/// dependency: MLDeformerFramework
/// dependency: NNE
/// dependency: OptimusCore

/// Class /Script/NearestNeighborModel.NearestNeighborModelVizSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UNearestNeighborModelVizSettings : public UMLDeformerMorphModelVizSettings
{ 
public:
};

/// Struct /Script/NearestNeighborModel.NearestNeighborNetworkParameter
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNearestNeighborNetworkParameter
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
	TArray<int32_t>                                    Shape;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNearestNeighborNetworkLayer : public UObject
{ 
public:
	int32_t                                            NumInputs;                                                  // 0x0028   (0x0004)  
	int32_t                                            NumOutputs;                                                 // 0x002C   (0x0004)  
	TArray<FNearestNeighborNetworkParameter>           Parameters;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu
/// Size: 0x0000 (0x000040 - 0x000040)
class UNearestNeighborNetworkLayer_Gemm_Prelu : public UNearestNeighborNetworkLayer
{ 
public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm
/// Size: 0x0000 (0x000040 - 0x000040)
class UNearestNeighborNetworkLayer_Gemm : public UNearestNeighborNetworkLayer
{ 
public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork
/// Size: 0x0030 (0x000028 - 0x000058)
class UNearestNeighborOptimizedNetwork : public UObject
{ 
public:
	class UNNEModelData*                               ModelData;                                                  // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	int32_t                                            NumInputs;                                                  // 0x0040   (0x0004)  
	int32_t                                            NumOutputs;                                                 // 0x0044   (0x0004)  
	TArray<class UNearestNeighborNetworkLayer*>        Layers;                                                     // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork.Empty
	// void Empty();                                                                                                         // [0x160abec] Native|Public|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
/// Size: 0x0038 (0x000028 - 0x000060)
class UNearestNeighborOptimizedNetworkInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0028   (0x0030)  MISSED
	class UNearestNeighborOptimizedNetwork*            Network;                                                    // 0x0058   (0x0008)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader
/// Size: 0x0008 (0x000028 - 0x000030)
class UNearestNeighborOptimizedNetworkLoader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.LoadOptimizedNetwork
	// bool LoadOptimizedNetwork(FString OnnxPath);                                                                          // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.GetOptimizedNetwork
	// class UNearestNeighborOptimizedNetwork* GetOptimizedNetwork();                                                        // [0x7c4ef68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/NearestNeighborModel.ClothPartData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FClothPartData
{ 
	int32_t                                            PCACoeffNum;                                                // 0x0000   (0x0004)  
	uint32_t                                           PCACoeffStart;                                              // 0x0004   (0x0004)  
	uint32_t                                           NumVertices;                                                // 0x0008   (0x0004)  
	uint32_t                                           NumNeighbors;                                               // 0x000C   (0x0004)  
	TArray<float>                                      NeighborCoeffs;                                             // 0x0010   (0x0010)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborModel
/// Size: 0x0070 (0x000190 - 0x000200)
class UNearestNeighborModel : public UMLDeformerMorphModel
{ 
public:
	int32_t                                            InputDim;                                                   // 0x0190   (0x0004)  
	int32_t                                            OutputDim;                                                  // 0x0194   (0x0004)  
	bool                                               bUseInputMultipliers;                                       // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0199   (0x0007)  MISSED
	TArray<FVector3f>                                  InputMultipliers;                                           // 0x01A0   (0x0010)  
	TArray<FClothPartData>                             ClothPartData;                                              // 0x01B0   (0x0010)  
	TArray<float>                                      InputsMin;                                                  // 0x01C0   (0x0010)  
	TArray<float>                                      InputsMax;                                                  // 0x01D0   (0x0010)  
	float                                              DecayFactor;                                                // 0x01E0   (0x0004)  
	float                                              NearestNeighborOffsetWeight;                                // 0x01E4   (0x0004)  
	bool                                               bUseRBF;                                                    // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01E9   (0x0003)  MISSED
	float                                              RBFSigma;                                                   // 0x01EC   (0x0004)  
	class UNearestNeighborOptimizedNetwork*            OptimizedNetwork;                                           // 0x01F0   (0x0008)  
	bool                                               bUseOptimizedNetwork;                                       // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPCACoeffStart
	// int32_t GetPCACoeffStart(int32_t PartId);                                                                             // [0xb314428] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPCACoeffNum
	// int32_t GetPCACoeffNum(int32_t PartId);                                                                               // [0xb314394] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPartNumVerts
	// int32_t GetPartNumVerts(int32_t PartId);                                                                              // [0xb3144bc] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetNumParts
	// int32_t GetNumParts();                                                                                                // [0xb31437c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.ClipInputs
	// TArray<float> ClipInputs(TArray<float>& Input);                                                                       // [0xb314120] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInputInfo
/// Size: 0x0010 (0x000068 - 0x000078)
class UNearestNeighborModelInputInfo : public UMLDeformerMorphModelInputInfo
{ 
public:
	TArray<FQuat>                                      RefBoneRotations;                                           // 0x0068   (0x0010)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInstance
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UNearestNeighborModelInstance : public UMLDeformerMorphModelInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00A8   (0x0010)  MISSED
	class UNearestNeighborOptimizedNetworkInstance*    OptimizedNetworkInstance;                                   // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModelInstance.Eval
	// TArray<float> Eval(TArray<float>& InputData);                                                                         // [0xb314278] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkeletonWithQuatsDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkeletonWithQuatsDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/NearestNeighborModel.SkeletonCachePair
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSkeletonCachePair
{ 
	class UAnimSequence*                               Skeletons;                                                  // 0x0000   (0x0008)  
	class UGeometryCache*                              Cache;                                                      // 0x0008   (0x0008)  
	TArray<int32_t>                                    ExcludedFrames;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/NearestNeighborModel.ClothPartEditorData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FClothPartEditorData
{ 
	int32_t                                            PCACoeffNum;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14690) /* FString */              __um(VertexMapPath);                                        // 0x0008   (0x0010)  
	int32_t                                            MeshIndex;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

