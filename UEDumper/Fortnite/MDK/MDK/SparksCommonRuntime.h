
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SparksCommonRuntime.SparksCrowdSpawner
/// Size: 0x0110 (0x000290 - 0x0003A0)
class USparksCrowdSpawner : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(TMap<UInstancedStaticMeshComponent*, int32_t>) MeshWeights                                             OFFSET(get<T>, {0x290, 80, 0, 0})
	DMember(int32_t)                                   TotalMeshWeight                                             OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	SMember(FVector)                                   Area                                                        OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	SMember(FIntPoint)                                 CrowdSize                                                   OFFSET(getStruct<T>, {0x300, 8, 0, 0})
	SMember(FVector2D)                                 PositionRandomness                                          OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FVector)                                   LookAt                                                      OFFSET(getStruct<T>, {0x318, 24, 0, 0})
	DMember(float)                                     LookAtRandomness                                            OFFSET(get<float>, {0x330, 4, 0, 0})
	SMember(FRotator)                                  AdditionalRotation                                          OFFSET(getStruct<T>, {0x338, 24, 0, 0})
	SMember(FVector2D)                                 ScaleVariance                                               OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	DMember(int32_t)                                   BatchSize                                                   OFFSET(get<int32_t>, {0x360, 4, 0, 0})
	CMember(TArray<FCrowdMemberToSpawn>)               CrowdMembersToSpawn                                         OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(class UCurveFloat*)                        ParamTransitionCurve                                        OFFSET(get<T>, {0x378, 8, 0, 0})
	SMember(FTimerHandle)                              TransitionTickTimerHandle                                   OFFSET(getStruct<T>, {0x380, 8, 0, 0})
	DMember(int32_t)                                   CurrentTransitionParamIndex                                 OFFSET(get<int32_t>, {0x388, 4, 0, 0})
	DMember(float)                                     ParamValueAtStartOfTransition                               OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     CurrentParamValue                                           OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     CurrentTransitionTarget                                     OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     CurrentTransitionDuration                                   OFFSET(get<float>, {0x398, 4, 0, 0})
	DMember(float)                                     TimeElapsedInCurrentTransition                              OFFSET(get<float>, {0x39C, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.TransitionCrowdToTargetParamValue
	// void TransitionCrowdToTargetParamValue(int32_t DataIndex, float TargetValue, float TimeToTransition);                    // [0xab9898c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.SpawnCrowdNow
	// bool SpawnCrowdNow(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // [0xab98190] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.SpawnCrowd
	// bool SpawnCrowd(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, int32_t InBatchSize, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // [0xab978bc] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/SparksCommonRuntime.SparksCommonAllPlayersReadyEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksCommonAllPlayersReadyEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SparksCommonRuntime.SparksCommonStartCameraEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksCommonStartCameraEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SparksCommonRuntime.SparksCommonCameraFinishedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksCommonCameraFinishedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SparksCommonRuntime.SparksCommonEnableCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksCommonEnableCameraDirectorEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SparksCommonRuntime.SparksCommonCameraDirectorFinishedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksCommonCameraDirectorFinishedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SparksCommonRuntime.CrowdMemberToSpawn
/// Size: 0x0040 (0x000000 - 0x000040)
class FCrowdMemberToSpawn : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector2D)                                 Location                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(class UInstancedStaticMeshComponent*)      Mesh                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

