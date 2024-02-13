
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SparksCommonRuntime.SparksCrowdSpawner
/// Size: 0x0110 (0x000220 - 0x000330)
class USparksCrowdSpawner : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(TMap<UInstancedStaticMeshComponent*, int32_t>) MeshWeights                                             OFFSET(get<T>, {0x220, 80, 0, 0})
	DMember(int32_t)                                   TotalMeshWeight                                             OFFSET(get<int32_t>, {0x270, 4, 0, 0})
	SMember(FVector)                                   Area                                                        OFFSET(getStruct<T>, {0x278, 24, 0, 0})
	SMember(FIntPoint)                                 CrowdSize                                                   OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	SMember(FVector2D)                                 PositionRandomness                                          OFFSET(getStruct<T>, {0x298, 16, 0, 0})
	SMember(FVector)                                   LookAt                                                      OFFSET(getStruct<T>, {0x2A8, 24, 0, 0})
	DMember(float)                                     LookAtRandomness                                            OFFSET(get<float>, {0x2C0, 4, 0, 0})
	SMember(FRotator)                                  AdditionalRotation                                          OFFSET(getStruct<T>, {0x2C8, 24, 0, 0})
	SMember(FVector2D)                                 ScaleVariance                                               OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	DMember(int32_t)                                   BatchSize                                                   OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	CMember(TArray<FCrowdMemberToSpawn>)               CrowdMembersToSpawn                                         OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(class UCurveFloat*)                        ParamTransitionCurve                                        OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FTimerHandle)                              TransitionTickTimerHandle                                   OFFSET(getStruct<T>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   CurrentTransitionParamIndex                                 OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	DMember(float)                                     ParamValueAtStartOfTransition                               OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     CurrentParamValue                                           OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     CurrentTransitionTarget                                     OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     CurrentTransitionDuration                                   OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(float)                                     TimeElapsedInCurrentTransition                              OFFSET(get<float>, {0x32C, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.TransitionCrowdToTargetParamValue
	// void TransitionCrowdToTargetParamValue(int32_t DataIndex, float TargetValue, float TimeToTransition);                    // [0xada3b54] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.SpawnCrowdNow
	// bool SpawnCrowdNow(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // [0xada3660] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.SpawnCrowd
	// bool SpawnCrowd(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, int32_t InBatchSize, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // [0xada30ec] Final|Native|Public|HasDefaults|BlueprintCallable 
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

