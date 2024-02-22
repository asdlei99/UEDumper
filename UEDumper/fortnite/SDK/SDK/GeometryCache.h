
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0060 (0x000028 - 0x000088)
class UGeometryCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0030   (0x0010)  
	TArray<FName>                                      MaterialSlotNames;                                          // 0x0040   (0x0010)  
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                     // 0x0050   (0x0010)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0070   (0x0008)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0078   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x007C   (0x0004)  
	uint64_t                                           Hash;                                                       // 0x0080   (0x0008)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AGeometryCacheActor : public AActor
{ 
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                     // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// class UGeometryCacheComponent* GetGeometryCacheComponent();                                                           // [0x642786c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryCacheCodecBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0080 (0x000540 - 0x0005C0)
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
	class UGeometryCache*                              GeometryCache;                                              // 0x0538   (0x0008)  
	bool                                               bRunning;                                                   // 0x0540   (0x0001)  
	bool                                               bLooping;                                                   // 0x0541   (0x0001)  
	bool                                               bExtrapolateFrames;                                         // 0x0542   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0543   (0x0001)  MISSED
	float                                              StartTimeOffset;                                            // 0x0544   (0x0004)  
	float                                              PlaybackSpeed;                                              // 0x0548   (0x0004)  
	float                                              MotionVectorScale;                                          // 0x054C   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x0550   (0x0004)  
	float                                              ElapsedTime;                                                // 0x0554   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4C];                                      // 0x0558   (0x004C)  MISSED
	float                                              duration;                                                   // 0x05A4   (0x0004)  
	bool                                               bManualTick;                                                // 0x05A8   (0x0001)  
	bool                                               bOverrideWireframeColor;                                    // 0x05A9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x05AA   (0x0002)  MISSED
	FLinearColor                                       WireframeOverrideColor;                                     // 0x05AC   (0x0010)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x05BC   (0x0004)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	// void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                             // [0xb6759b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	// void Stop();                                                                                                          // [0xb67599c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
	// void SetWireframeOverrideColor(FLinearColor Color);                                                                   // [0xb675860] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                    // [0xb6757bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                        // [0xb67572c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
	// void SetOverrideWireframeColor(bool bOverride);                                                                       // [0xb6756ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	// void SetMotionVectorScale(float NewMotionVectorScale);                                                                // [0xb67561c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                    // [0xb6754e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	// bool SetGeometryCache(class UGeometryCache* NewGeomCache);                                                            // [0xb675454] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	// void SetExtrapolateFrames(bool bNewExtrapolating);                                                                    // [0xb6753d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// void PlayReversedFromEnd();                                                                                           // [0xb675384] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	// void PlayReversed();                                                                                                  // [0xb675340] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	// void PlayFromStart();                                                                                                 // [0xb6752f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	// void Play();                                                                                                          // [0xb6752b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	// void Pause();                                                                                                         // [0xb675294] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// bool IsPlayingReversed();                                                                                             // [0xb675260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x8fa6fb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	// bool IsLooping();                                                                                                     // [0xb675248] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	// bool IsExtrapolatingFrames();                                                                                         // [0xb675230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
	// FLinearColor GetWireframeOverrideColor();                                                                             // [0xb675214] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// float GetStartTimeOffset();                                                                                           // [0xb6751fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// float GetPlaybackSpeed();                                                                                             // [0xb6751d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// float GetPlaybackDirection();                                                                                         // [0x38e5f8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
	// bool GetOverrideWireframeColor();                                                                                     // [0xb6751b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// int32_t GetNumberOfFrames();                                                                                          // [0xb67518c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	// float GetMotionVectorScale();                                                                                         // [0xb675160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	// float GetDuration();                                                                                                  // [0x38e5f74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	// float GetAnimationTime();                                                                                             // [0xb67512c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (0x000028 - 0x000058)
class UGeometryCacheTrack : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              duration;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000058 - 0x000080)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x005C   (0x0024)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                               // [0xb674f80] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0078 (0x000058 - 0x0000D0)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
	class UGeometryCacheCodecBase*                     Codec;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0060   (0x0060)  MISSED
	float                                              StartSampleTime;                                            // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0058   (0x00C8)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                    // [0xb675564] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0058   (0x00C8)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                    // [0xb675564] Final|Native|Public|HasOutParms 
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheMICOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraGeometryCacheMICOverride
{ 
	class UMaterialInterface*                          OriginalMaterial;                                           // 0x0000   (0x0008)  
	class UMaterialInstanceConstant*                   ReplacementMaterial;                                        // 0x0008   (0x0008)  
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheReference
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraGeometryCacheReference
{ 
	class UGeometryCache*                              GeometryCache;                                              // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       GeometryCacheUserParamBinding;                              // 0x0008   (0x0018)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0020   (0x0010)  
	TArray<FNiagaraGeometryCacheMICOverride>           MICOverrideMaterials;                                       // 0x0030   (0x0010)  
};

/// Class /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
/// Size: 0x01B8 (0x0000B0 - 0x000268)
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraGeometryCacheReference>             GeometryCaches;                                             // 0x00B0   (0x0010)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00C0   (0x0001)  
	bool                                               bIsLooping;                                                 // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00C2   (0x0002)  MISSED
	uint32_t                                           ComponentCountLimit;                                        // 0x00C4   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00C8   (0x0028)  
	FNiagaraVariableAttributeBinding                   RotationBinding;                                            // 0x00F0   (0x0028)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0118   (0x0028)  
	FNiagaraVariableAttributeBinding                   ElapsedTimeBinding;                                         // 0x0140   (0x0028)  
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0168   (0x0028)  
	FNiagaraVariableAttributeBinding                   ArrayIndexBinding;                                          // 0x0190   (0x0028)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x01B8   (0x0028)  
	int32_t                                            RendererVisibility;                                         // 0x01E0   (0x0004)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01E5   (0x0003)  MISSED
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x01E8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0238   (0x0030)  MISSED
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0009 (0x000000 - 0x000009)
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData00_2[0x9];                                       // 0x0000   (0x0009)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0000   (0x00C8)  MISSED
};

