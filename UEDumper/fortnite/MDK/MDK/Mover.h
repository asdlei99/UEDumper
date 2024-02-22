
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: NetworkPrediction

/// Class /Script/Mover.CommonLegacyMovementSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonLegacyMovementSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     GroundMovementModeName                                      OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     AirMovementModeName                                         OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxWalkSlopeCosine                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     FloorSweepDistance                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxStepHeight                                               OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     GroundFriction                                              OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      bUseSeparateBrakingFriction                                 OFFSET(get<bool>, {0x4C, 1, 1, 0})
	DMember(float)                                     BrakingFriction                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     BrakingFrictionFactor                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     JumpUpwardsSpeed                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     SwimmingStartImmersionDepth                                 OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     SwimmingIdealImmersionDepth                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     SwimmingStopImmersionDepth                                  OFFSET(get<float>, {0x74, 4, 0, 0})
};

/// Class /Script/Mover.TurnGeneratorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnGeneratorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.TurnGeneratorInterface.GetTurn
	// FRotator GetTurn(FRotator TargetOrientation, FMoverTickStartData& FullStartState, FMoverDefaultSyncState& MoverState, FMoverTimeStep& TimeStep, FProposedMove& ProposedMove, class UMoverBlackboard* SimBlackboard); // [0x7feeed0] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/Mover.LinearTurnGenerator
/// Size: 0x0018 (0x000028 - 0x000040)
class ULinearTurnGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     HeadingRate                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     PitchRate                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     RollRate                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/Mover.ExactDampedTurnGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class UExactDampedTurnGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     HalfLifeSeconds                                             OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/Mover.BlueprintableTurnGenerator
/// Size: 0x0008 (0x000028 - 0x000030)
class UBlueprintableTurnGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Mover.MoverBackendLiaisonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverBackendLiaisonInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.MoverBasePawn
/// Size: 0x0008 (0x000318 - 0x000320)
class AMoverBasePawn : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UMoverComponent*)                    CharacterMotionComponent                                    OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/Mover.MoverBasePawn.GetMoverComponent
	// class UMoverComponent* GetMoverComponent();                                                                              // [0x7feed30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.MoverBlackboard
/// Size: 0x0050 (0x000028 - 0x000078)
class UMoverBlackboard : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/Mover.MoverDataModelBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverDataModelBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetVelocityFromSyncState
	// FVector GetVelocityFromSyncState(FMoverDefaultSyncState& SyncState);                                                     // [0x7fef344] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetOrientationFromSyncState
	// FRotator GetOrientationFromSyncState(FMoverDefaultSyncState& SyncState);                                                 // [0x7feed48] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromSyncState
	// FVector GetMoveDirectionIntentFromSyncState(FMoverDefaultSyncState& SyncState);                                          // [0x7feea14] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromInputs
	// FVector GetMoveDirectionIntentFromInputs(FKinematicDefaultInputs& Inputs);                                               // [0x7fee92c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetLocationFromSyncState
	// FVector GetLocationFromSyncState(FMoverDefaultSyncState& SyncState);                                                     // [0x7fee874] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.MoverDebugComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UMoverDebugComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(float)                                     LookaheadSeconds                                            OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   LookaheadSamplesPerSecond                                   OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bShowTrajectory                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowTrail                                                  OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bShowCorrections                                            OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(float)                                     HistoryTrackingSeconds                                      OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   HistorySamplesPerSecond                                     OFFSET(get<int32_t>, {0xB0, 4, 0, 0})


	/// Functions
	// Function /Script/Mover.MoverDebugComponent.SetHistoryTracking
	// void SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond);                                                   // [0x7ff11d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.MoverDebugComponent.OnMovementSimTick
	// void OnMovementSimTick(FMoverTimeStep& TimeStep);                                                                        // [0x7ff091c] Final|Native|Private|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.OnMovementSimRollback
	// void OnMovementSimRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep);                            // [0x7ff080c] Final|Native|Private|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.OnHistoryTrackingRollback
	// void OnHistoryTrackingRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep);                        // [0x7ff06fc] Final|Native|Protected|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.GetPastTrajectory
	// TArray<FTrajectorySampleInfo> GetPastTrajectory();                                                                       // [0x7feee00] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/Mover.MoverDebugComponent.GetFutureTrajectory
	// TArray<FTrajectorySampleInfo> GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond);                          // [0x7fee734] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/Mover.MoverDeveloperSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UMoverDeveloperSettings : public UDeveloperSettingsBackedByCVars
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   MaxTimesToRefundSubstep                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/Mover.MoverNetworkPhysicsLiaisonComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UMoverNetworkPhysicsLiaisonComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/Mover.MoverNetworkPredictionLiaisonComponent
/// Size: 0x0010 (0x000290 - 0x0002A0)
class UMoverNetworkPredictionLiaisonComponent : public UNetworkPredictionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Class /Script/Mover.MoverInputProducerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverInputProducerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MoverInputProducerInterface.ProduceInput
	// void ProduceInput(int32_t SimTimeMs, FMoverInputCmdContext& InputCmdResult);                                             // [0x7ff0e84] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Mover.MoverDataCollectionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverDataCollectionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MoverDataCollectionLibrary.K2_GetDataFromCollection
	// void K2_GetDataFromCollection(bool& DidSucceed, FMoverDataCollection& Collection, int32_t& TargetAsRawBytes);            // [0x7fefea8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverDataCollectionLibrary.K2_AddDataToCollection
	// void K2_AddDataToCollection(FMoverDataCollection& Collection, int32_t& SourceAsRawBytes);                                // [0x7fefbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Mover.PhysicsCharacterMovementModeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsCharacterMovementModeInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.BaseMovementMode
/// Size: 0x0010 (0x000028 - 0x000038)
class UBaseMovementMode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             SharedSettingsClass                                         OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/Mover.BaseMovementMode.K2_OnUnregistered
	// void K2_OnUnregistered();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnSimulationTick
	// FMoverTickEndData K2_OnSimulationTick(FSimulationTickParams& Params);                                                    // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnRegistered
	// void K2_OnRegistered(FName ModeName);                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnGenerateMove
	// FProposedMove K2_OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep);                              // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/Mover.BaseMovementMode.GetMoverComponent
	// class UMoverComponent* GetMoverComponent();                                                                              // [0x33ac1bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.BaseMovementMode.GetBlackboard_Mutable
	// class UMoverBlackboard* GetBlackboard_Mutable();                                                                         // [0x7fee714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.BaseMovementMode.GetBlackboard
	// class UMoverBlackboard* GetBlackboard();                                                                                 // [0x7fee714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.FallingMode
/// Size: 0x0038 (0x000038 - 0x000070)
class UFallingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FMulticastInlineDelegate)                  OnLanded                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     AirControlPercentage                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     FallingDeceleration                                         OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     OverTerminalSpeedFallingDeceleration                        OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     TerminalMovementPlaneSpeed                                  OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bShouldClampTerminalVerticalSpeed                           OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(float)                                     VerticalFallingDeceleration                                 OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     TerminalVerticalSpeed                                       OFFSET(get<float>, {0x60, 4, 0, 0})


	/// Functions
	// Function /Script/Mover.FallingMode.ProcessLanded
	// void ProcessLanded(FFloorCheckResult& FloorResult, FVector& Velocity, FRelativeBaseInfo& BaseInfo, FMoverTickEndData& TickEndData); // [0x7ff0bdc] Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.FallingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                    // [0x7ff0a34] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.FallingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);          // [0x7ff0584] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.FlyingMode
/// Size: 0x0008 (0x000038 - 0x000040)
class UFlyingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/Mover.FlyingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                    // [0x7ff0a34] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.FlyingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);          // [0x7ff0584] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.SwimmingMode
/// Size: 0x0008 (0x000038 - 0x000040)
class USwimmingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/Mover.SwimmingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                    // [0x7ff0a34] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.SwimmingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);          // [0x7ff0584] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.WalkingMode
/// Size: 0x0010 (0x000038 - 0x000048)
class UWalkingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UObject*)                            TurnGenerator                                               OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/Mover.WalkingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                    // [0x7ff0a34] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.WalkingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);          // [0x7ff0584] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.MovementBaseUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementBaseUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MovementBaseUtils.TransformWorldRotatorToBased
	// bool TransformWorldRotatorToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FRotator WorldSpaceRotator, FRotator& OutLocalRotator); // [0x7ff3464] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformWorldLocationToBased
	// bool TransformWorldLocationToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FVector WorldSpaceLocation, FVector& OutLocalLocation); // [0x7ff31b4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformWorldDirectionToBased
	// bool TransformWorldDirectionToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FVector WorldSpaceDirection, FVector& OutLocalDirection); // [0x7ff2f04] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformRotatorToWorld
	// void TransformRotatorToWorld(FQuat BaseQuat, FRotator LocalRotator, FRotator& OutWorldSpaceRotator);                     // [0x7ff2c0c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformRotatorToLocal
	// void TransformRotatorToLocal(FQuat BaseQuat, FRotator WorldSpaceRotator, FRotator& OutLocalRotator);                     // [0x7ff2914] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformLocationToWorld
	// void TransformLocationToWorld(FVector BasePos, FQuat BaseQuat, FVector LocalLocation, FVector& OutLocationWorldSpace);   // [0x7ff24ec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformLocationToLocal
	// void TransformLocationToLocal(FVector BasePos, FQuat BaseQuat, FVector WorldSpaceLocation, FVector& OutLocalLocation);   // [0x7ff20c4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformDirectionToWorld
	// void TransformDirectionToWorld(FQuat BaseQuat, FVector LocalDirection, FVector& OutDirectionWorldSpace);                 // [0x7ff1d94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformDirectionToLocal
	// void TransformDirectionToLocal(FQuat BaseQuat, FVector WorldSpaceDirection, FVector& OutLocalDirection);                 // [0x7ff1a64] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformBasedRotatorToWorld
	// bool TransformBasedRotatorToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FRotator LocalRotator, FRotator& OutWorldSpaceRotator); // [0x7ff17fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformBasedLocationToWorld
	// bool TransformBasedLocationToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FVector LocalLocation, FVector& OutLocationWorldSpace); // [0x7ff154c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformBasedDirectionToWorld
	// bool TransformBasedDirectionToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FVector LocalDirection, FVector& OutDirectionWorldSpace); // [0x7ff129c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.IsADynamicBase
	// bool IsADynamicBase(class UPrimitiveComponent* MovementBase);                                                            // [0x7fef4c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.GetMovementBaseTransform
	// bool GetMovementBaseTransform(class UPrimitiveComponent* MovementBase, FName BoneName, FVector& OutLocation, FQuat& OutQuat); // [0x7feeb38] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.MovementUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MovementUtils.TryWalkToSlideAlongSurface
	// float TryWalkToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord, float MaxWalkSlopeCosine); // [0x7ff5d34] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.TrySafeMoveUpdatedComponent
	// bool TrySafeMoveUpdatedComponent(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, FVector& Delta, FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport, FMovementRecord& MoveRecord); // [0x7ff5268] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.TryMoveToSlideAlongSurface
	// float TryMoveToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord); // [0x7ff4624] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.TryMoveToFallAlongSurface
	// float TryMoveToFallAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult, FMovementRecord& MoveRecord); // [0x7ff37b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.IsValidLandingSpot
	// bool IsValidLandingSpot(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, FVector& Location, FHitResult& Hit, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult); // [0x7fef8c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.IsHitSurfaceWalkable
	// bool IsHitSurfaceWalkable(FHitResult& Hit, float MaxWalkSlopeCosine);                                                    // [0x7fef700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.IsExceedingMaxSpeed
	// bool IsExceedingMaxSpeed(FVector& Velocity, float InMaxSpeed);                                                           // [0x7fef578] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ConstrainToPlane
	// FVector ConstrainToPlane(FVector& Vector, FPlane& MovementPlane, bool bMaintainMagnitude);                               // [0x7fee1a8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocityFromPositions
	// FVector ComputeVelocityFromPositions(FVector& FromPos, FVector& ToPos, float DeltaSeconds);                              // [0x7fedfac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocityFromGravity
	// FVector ComputeVelocityFromGravity(FVector& GravityAccel, float DeltaSeconds);                                           // [0x7fede44] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocity
	// FVector ComputeVelocity(FComputeVelocityParams& InParams);                                                               // [0x7fedd60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeSlideDelta
	// FVector ComputeSlideDelta(FVector& Delta, float PctOfDeltaToMove, FVector& Normal, FHitResult& Hit);                     // [0x7fedafc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeDirectionIntent
	// FVector ComputeDirectionIntent(FVector& MoveInput, EMoveInputType MoveInputType);                                        // [0x7fed994] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeDeflectedMoveOntoRamp
	// FVector ComputeDeflectedMoveOntoRamp(FVector& OrigMoveDelta, FHitResult& RampHitResult, float MaxWalkSlopeCosine, bool bHitFromLineTrace); // [0x7fed6fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeControlledGroundMove
	// FProposedMove ComputeControlledGroundMove(FGroundMoveParams& InParams);                                                  // [0x7fed610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeControlledFreeMove
	// FProposedMove ComputeControlledFreeMove(FFreeMoveParams& InParams);                                                      // [0x7fed524] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeAngularVelocity
	// FRotator ComputeAngularVelocity(FRotator& From, FRotator& To, float DeltaSeconds, float TurningRateLimit);               // [0x7fed328] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.CanStepUpOnHitSurface
	// bool CanStepUpOnHitSurface(FHitResult& Hit);                                                                             // [0x7fed254] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.CanEscapeGravity
	// bool CanEscapeGravity(FVector& PriorVelocity, FVector& NewVelocity, FVector& GravityAccel, float DeltaSeconds);          // [0x7fecff0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.PlayMoverMontageCallbackProxy
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPlayMoverMontageCallbackProxy : public UPlayMontageCallbackProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/Mover.PlayMoverMontageCallbackProxy.OnMoverMontageEnded
	// void OnMoverMontageEnded(FName IgnoredNotifyName);                                                                       // [0x7ff09b8] Final|Native|Protected 
	// Function /Script/Mover.PlayMoverMontageCallbackProxy.CreateProxyObjectForPlayMoverMontage
	// class UPlayMoverMontageCallbackProxy* CreateProxyObjectForPlayMoverMontage(class UMoverComponent* InMoverComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x7fee3d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Mover.MovementSettingsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementSettingsInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.NullMovementMode
/// Size: 0x0000 (0x000038 - 0x000038)
class UNullMovementMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Mover.MovementModeStateMachine
/// Size: 0x0070 (0x000028 - 0x000098)
class UMovementModeStateMachine : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<FName, UBaseMovementMode*>)           Modes                                                       OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/Mover.MoverComponent
/// Size: 0x01A8 (0x0000A0 - 0x000248)
class UMoverComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FMulticastInlineDelegate)                  OnPreSimulationTick                                         OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSimulationTick                                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSimulationRollback                                    OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnImpact                                                    OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMovementModeChanged                                       OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(class UClass*)                             BackendClass                                                OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TMap<FName, UBaseMovementMode*>)           MovementModes                                               OFFSET(get<T>, {0xF8, 80, 0, 0})
	SMember(FName)                                     StartingMovementMode                                        OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	CMember(class UObject*)                            InputProducer                                               OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class USceneComponent*)                    UpdatedComponent                                            OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                UpdatedPrimitive                                            OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<class UObject*>)                    SharedSettings                                              OFFSET(get<T>, {0x1F0, 16, 0, 0})
	DMember(bool)                                      bHasGravityOverride                                         OFFSET(get<bool>, {0x200, 1, 0, 0})
	SMember(FVector)                                   GravityAccelOverride                                        OFFSET(getStruct<T>, {0x208, 24, 0, 0})
	CMember(class UMovementModeStateMachine*)          ModeFSM                                                     OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UMoverBlackboard*)                   SimBlackboard                                               OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/Mover.MoverComponent.TryGetFloorCheckHitResult
	// bool TryGetFloorCheckHitResult(FHitResult& OutHitResult);                                                                // [0x7ff36cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.SetGravityOverride
	// void SetGravityOverride(bool bOverrideGravity, FVector GravityAcceleration);                                             // [0x7ff1038] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.QueueNextMode
	// void QueueNextMode(FName DesiredModeName, bool bShouldReenter);                                                          // [0x7ff0f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.PhysicsVolumeChanged
	// void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);                                                              // [0x7ff0b58] Native|Protected     
	// Function /Script/Mover.MoverComponent.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x7ff034c] Native|Public|HasOutParms 
	// Function /Script/Mover.MoverComponent.K2_QueueLayeredMove
	// void K2_QueueLayeredMove(int32_t& MoveAsRawData);                                                                        // [0x7ff0174] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.IsSlopeSliding
	// bool IsSlopeSliding();                                                                                                   // [0x7fef898] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.IsOnGround
	// bool IsOnGround();                                                                                                       // [0x7fef870] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.IsFalling
	// bool IsFalling();                                                                                                        // [0x1a3e9b4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.IsAirborne
	// bool IsAirborne();                                                                                                       // [0x7fef550] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HasValidCachedState
	// bool HasValidCachedState();                                                                                              // [0x7fef4ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HasValidCachedInputCmd
	// bool HasValidCachedInputCmd();                                                                                           // [0x7fef494] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HandleImpact
	// void HandleImpact(FMoverOnImpactParams& ImpactParams);                                                                   // [0x7fef3fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.GetVelocity
	// FVector GetVelocity();                                                                                                   // [0x7fef30c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetUpDirection
	// FVector GetUpDirection();                                                                                                // [0x7fef2d4] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/Mover.MoverComponent.GetTargetOrientation
	// FRotator GetTargetOrientation();                                                                                         // [0x7feee98] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetSyncState
	// FMoverSyncState GetSyncState();                                                                                          // [0x7feee3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementModeName
	// FName GetMovementModeName();                                                                                             // [0x7feed04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementIntent
	// FVector GetMovementIntent();                                                                                             // [0x7feeccc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementBaseBoneName
	// FName GetMovementBaseBoneName();                                                                                         // [0x7feeaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementBase
	// class UPrimitiveComponent* GetMovementBase();                                                                            // [0x7feeacc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetLastInputCmd
	// FMoverInputCmdContext GetLastInputCmd();                                                                                 // [0x7fee848] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetGravityAcceleration
	// FVector GetGravityAcceleration();                                                                                        // [0x7fee810] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/Mover.MoverComponent.FindSharedSettings_Mutable_BP
	// class UObject* FindSharedSettings_Mutable_BP(class UClass* SharedSetting);                                               // [0x7fee608] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.FindSharedSettings_BP
	// class UObject* FindSharedSettings_BP(class UClass* SharedSetting);                                                       // [0x7fee608] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.FindMovementMode
	// class UBaseMovementMode* FindMovementMode(class UClass* MovementMode);                                                   // [0x7fee54c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.PhysicsDrivenFallingMode
/// Size: 0x0018 (0x000070 - 0x000088)
class UPhysicsDrivenFallingMode : public UFallingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     TwistTorqueLimit                                            OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     TargetHeight                                                OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsDrivenSwimmingMode
/// Size: 0x0008 (0x000040 - 0x000048)
class UPhysicsDrivenSwimmingMode : public USwimmingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Mover.PhysicsDrivenWalkingMode
/// Size: 0x0030 (0x000048 - 0x000078)
class UPhysicsDrivenWalkingMode : public UWalkingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     RadialForceLimit                                            OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     FrictionForceLimit                                          OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     TwistTorqueLimit                                            OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     TargetHeight                                                OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     GroundDamping                                               OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     FractionalVelocityToTarget                                  OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     FractionalDownwardVelocityToTarget                          OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     MaxUnsupportedTimeBeforeFalling                             OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsMoverManager
/// Size: 0x0020 (0x000030 - 0x000050)
class UPhysicsMoverManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Mover.MoverOnImpactParams
/// Size: 0x0108 (0x000000 - 0x000108)
class FMoverOnImpactParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FName)                                     MovementModeName                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x8, 232, 0, 0})
	SMember(FVector)                                   AttemptedMoveDelta                                          OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
};

/// Struct /Script/Mover.MoverTimeStep
/// Size: 0x0010 (0x000000 - 0x000010)
class FMoverTimeStep : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   ServerFrame                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     BaseSimTimeMs                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StepMs                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Mover.MoverInputCmdContext
/// Size: 0x0018 (0x000000 - 0x000018)
class FMoverInputCmdContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMoverDataCollection)                      InputCollection                                             OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Mover.MoverDataCollection
/// Size: 0x0018 (0x000000 - 0x000018)
class FMoverDataCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Mover.LayeredMoveBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FLayeredMoveBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EMoveMixMode)                              MixMode                                                     OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     DurationMs                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     StartSimTimeMs                                              OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_AnimRootMotion
/// Size: 0x0010 (0x000018 - 0x000028)
class FLayeredMove_AnimRootMotion : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     StartingMontagePosition                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_LinearVelocity
/// Size: 0x0020 (0x000018 - 0x000038)
class FLayeredMove_LinearVelocity : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(char)                                      SettingsFlags                                               OFFSET(get<char>, {0x30, 1, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_JumpImpulse
/// Size: 0x0008 (0x000018 - 0x000020)
class FLayeredMove_JumpImpulse : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     UpwardsSpeed                                                OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_Teleport
/// Size: 0x0018 (0x000018 - 0x000030)
class FLayeredMove_Teleport : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_Launch
/// Size: 0x0020 (0x000018 - 0x000038)
class FLayeredMove_Launch : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   LaunchVelocity                                              OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FName)                                     ForceMovementMode                                           OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMoveGroup
/// Size: 0x0028 (0x000000 - 0x000028)
class FLayeredMoveGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Mover.MovementSubstep
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovementSubstep : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Mover.MovementRecord
/// Size: 0x0048 (0x000000 - 0x000048)
class FMovementRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/Mover.ProposedMove
/// Size: 0x0088 (0x000000 - 0x000088)
class FProposedMove : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(EMoveMixMode)                              MixMode                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     PreferredMode                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHasDirIntent                                               OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bHasTargetLocation                                          OFFSET(get<bool>, {0x8, 1, 1, 1})
	SMember(FVector)                                   DirectionIntent                                             OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  AngularVelocity                                             OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   MovePlaneVelocity                                           OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/Mover.MoverDataStructBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FMoverDataStructBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Mover.KinematicDefaultInputs
/// Size: 0x0068 (0x000008 - 0x000070)
class FKinematicDefaultInputs : public FMoverDataStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   OrientationIntent                                           OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  ControlRotation                                             OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FName)                                     SuggestedMovementMode                                       OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bUsingMovementBase                                          OFFSET(get<bool>, {0x5C, 1, 0, 0})
	CMember(class UPrimitiveComponent*)                MovementBase                                                OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FName)                                     MovementBaseBoneName                                        OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(bool)                                      bIsJumpJustPressed                                          OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bIsJumpPressed                                              OFFSET(get<bool>, {0x6D, 1, 0, 0})
};

/// Struct /Script/Mover.MoverDefaultSyncState
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FMoverDefaultSyncState : public FMoverDataStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  orientation                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FName)                                     MovementMode                                                OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	CMember(class UPrimitiveComponent*)                MovementBase                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FName)                                     MovementBaseBoneName                                        OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FVector)                                   MovementBasePos                                             OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FQuat)                                     MovementBaseQuat                                            OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FLayeredMoveGroup)                         LayeredMoves                                                OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
};

/// Struct /Script/Mover.NetworkPhysicsMoverInputs
/// Size: 0x0018 (0x000018 - 0x000030)
class FNetworkPhysicsMoverInputs : public FNetworkPhysicsDatas
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FMoverInputCmdContext)                     InputCmdContext                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Mover.NetworkPhysicsMoverState
/// Size: 0x0020 (0x000018 - 0x000038)
class FNetworkPhysicsMoverState : public FNetworkPhysicsDatas
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMoverSyncState)                           SyncStateContext                                            OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FMoverAuxStateContext)                     AuxStateContext                                             OFFSET(getStruct<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/Mover.MoverAuxStateContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FMoverAuxStateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Mover.MoverSyncState
/// Size: 0x0018 (0x000000 - 0x000018)
class FMoverSyncState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMoverDataCollection)                      SyncStateCollection                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Mover.MovementModeTickEndState
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovementModeTickEndState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     RemainingMs                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FName)                                     NextModeName                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Mover.MoverTickStartData
/// Size: 0x0038 (0x000000 - 0x000038)
class FMoverTickStartData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMoverInputCmdContext)                     InputCmd                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FMoverSyncState)                           SyncState                                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FMoverAuxStateContext)                     AuxState                                                    OFFSET(getStruct<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/Mover.MoverTickEndData
/// Size: 0x0070 (0x000000 - 0x000070)
class FMoverTickEndData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FMoverSyncState)                           SyncState                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FMoverAuxStateContext)                     AuxState                                                    OFFSET(getStruct<T>, {0x18, 1, 0, 0})
	SMember(FMovementModeTickEndState)                 MovementEndState                                            OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/Mover.RelativeBaseInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FRelativeBaseInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UPrimitiveComponent*)                MovementBase                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FVector)                                   ContactLocalPosition                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/Mover.WaterCheckResult
/// Size: 0x0110 (0x000000 - 0x000110)
class FWaterCheckResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bSwimmableVolume                                            OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     ImmersionDepth                                              OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x28, 232, 0, 0})
};

/// Struct /Script/Mover.FloorCheckResult
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FFloorCheckResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bBlockingHit                                                OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bWalkableFloor                                              OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bLineTrace                                                  OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(float)                                     LineDist                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FloorDist                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x10, 232, 0, 0})
};

/// Struct /Script/Mover.TrajectorySampleInfo
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FTrajectorySampleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/Mover.GroundMoveParams
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FGroundMoveParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FVector)                                   GroundNormal                                                OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Struct /Script/Mover.FreeMoveParams
/// Size: 0x0080 (0x000000 - 0x000080)
class FFreeMoveParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Struct /Script/Mover.ComputeVelocityParams
/// Size: 0x0050 (0x000000 - 0x000050)
class FComputeVelocityParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   InitialVelocity                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/Mover.SimulationTickParams
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FSimulationTickParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class USceneComponent*)                    UpdatedComponent                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                UpdatedPrimitive                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FMoverTickStartData)                       StartState                                                  OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	SMember(FMoverTimeStep)                            TimeStep                                                    OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FProposedMove)                             ProposedMove                                                OFFSET(getStruct<T>, {0x58, 136, 0, 0})
};

/// Enum /Script/Mover.ELayeredMove_ConstantVelocitySettingsFlags
/// Size: 0x04
enum ELayeredMove_ConstantVelocitySettingsFlags : uint8_t
{
	ELayeredMove_ConstantVelocitySettingsFlags__NoFlags                              = 0,
	ELayeredMove_ConstantVelocitySettingsFlags__VelocityStartRelative                = 1,
	ELayeredMove_ConstantVelocitySettingsFlags__VelocityAlwaysRelative               = 2,
	ELayeredMove_ConstantVelocitySettingsFlags__ELayeredMove_MAX                     = 3
};

/// Enum /Script/Mover.EMoveMixMode
/// Size: 0x04
enum EMoveMixMode : uint8_t
{
	EMoveMixMode__AdditiveVelocity                                                   = 0,
	EMoveMixMode__OverrideVelocity                                                   = 1,
	EMoveMixMode__OverrideAll                                                        = 2,
	EMoveMixMode__EMoveMixMode_MAX                                                   = 3
};

/// Enum /Script/Mover.EMoveInputType
/// Size: 0x04
enum EMoveInputType : uint8_t
{
	EMoveInputType__Invalid                                                          = 0,
	EMoveInputType__DirectionalIntent                                                = 1,
	EMoveInputType__Velocity                                                         = 2,
	EMoveInputType__EMoveInputType_MAX                                               = 3
};

