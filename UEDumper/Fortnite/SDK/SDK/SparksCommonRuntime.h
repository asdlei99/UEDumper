
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/SparksCommonRuntime.CrowdMemberToSpawn
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCrowdMemberToSpawn
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0010)  
	FRotator                                           Rotator;                                                    // 0x0010   (0x0018)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UInstancedStaticMeshComponent*               Mesh;                                                       // 0x0030   (0x0008)  
	int32_t                                            ID;                                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/SparksCommonRuntime.SparksCrowdSpawner
/// Size: 0x0110 (0x000290 - 0x0003A0)
class USparksCrowdSpawner : public USceneComponent
{ 
public:
	SDK_UNDEFINED(80,15177) /* TMap<UInstancedStaticMeshComponent*, int32_t> */ __um(MeshWeights);                 // 0x0290   (0x0050)  
	int32_t                                            TotalMeshWeight;                                            // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	FVector                                            Area;                                                       // 0x02E8   (0x0018)  
	FIntPoint                                          CrowdSize;                                                  // 0x0300   (0x0008)  
	FVector2D                                          PositionRandomness;                                         // 0x0308   (0x0010)  
	FVector                                            LookAt;                                                     // 0x0318   (0x0018)  
	float                                              LookAtRandomness;                                           // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0334   (0x0004)  MISSED
	FRotator                                           AdditionalRotation;                                         // 0x0338   (0x0018)  
	FVector2D                                          ScaleVariance;                                              // 0x0350   (0x0010)  
	int32_t                                            BatchSize;                                                  // 0x0360   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0364   (0x0004)  MISSED
	TArray<FCrowdMemberToSpawn>                        CrowdMembersToSpawn;                                        // 0x0368   (0x0010)  
	class UCurveFloat*                                 ParamTransitionCurve;                                       // 0x0378   (0x0008)  
	FTimerHandle                                       TransitionTickTimerHandle;                                  // 0x0380   (0x0008)  
	int32_t                                            CurrentTransitionParamIndex;                                // 0x0388   (0x0004)  
	float                                              ParamValueAtStartOfTransition;                              // 0x038C   (0x0004)  
	float                                              CurrentParamValue;                                          // 0x0390   (0x0004)  
	float                                              CurrentTransitionTarget;                                    // 0x0394   (0x0004)  
	float                                              CurrentTransitionDuration;                                  // 0x0398   (0x0004)  
	float                                              TimeElapsedInCurrentTransition;                             // 0x039C   (0x0004)  


	/// Functions
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.TransitionCrowdToTargetParamValue
	// void TransitionCrowdToTargetParamValue(int32_t DataIndex, float TargetValue, float TimeToTransition);                 // [0xab8540c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.SpawnCrowdNow
	// bool SpawnCrowdNow(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // [0xab84c10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.SpawnCrowd
	// bool SpawnCrowd(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, int32_t InBatchSize, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // [0xab8433c] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/SparksCommonRuntime.SparksCommonAllPlayersReadyEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonAllPlayersReadyEvent
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCommonRuntime.SparksCommonStartCameraEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonStartCameraEvent
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCommonRuntime.SparksCommonCameraFinishedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonCameraFinishedEvent
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCommonRuntime.SparksCommonEnableCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonEnableCameraDirectorEvent
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCommonRuntime.SparksCommonCameraDirectorFinishedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonCameraDirectorFinishedEvent
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

