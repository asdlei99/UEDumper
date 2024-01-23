
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: NetworkPrediction

/// Enum /Script/Mover.ELayeredMove_ConstantVelocitySettingsFlags
/// Size: 0x04
enum class ELayeredMove_ConstantVelocitySettingsFlags : uint8_t
{
	ELayeredMove_ConstantVelocitySettingsFlags__NoFlags                              = 0,
	ELayeredMove_ConstantVelocitySettingsFlags__VelocityStartRelative                = 1,
	ELayeredMove_ConstantVelocitySettingsFlags__VelocityAlwaysRelative               = 2,
	ELayeredMove_ConstantVelocitySettingsFlags__ELayeredMove_MAX                     = 3
};

/// Enum /Script/Mover.EMoveMixMode
/// Size: 0x04
enum class EMoveMixMode : uint8_t
{
	EMoveMixMode__AdditiveVelocity                                                   = 0,
	EMoveMixMode__OverrideVelocity                                                   = 1,
	EMoveMixMode__OverrideAll                                                        = 2,
	EMoveMixMode__EMoveMixMode_MAX                                                   = 3
};

/// Enum /Script/Mover.EMoveInputType
/// Size: 0x04
enum class EMoveInputType : uint8_t
{
	EMoveInputType__Invalid                                                          = 0,
	EMoveInputType__DirectionalIntent                                                = 1,
	EMoveInputType__Velocity                                                         = 2,
	EMoveInputType__EMoveInputType_MAX                                               = 3
};

/// Class /Script/Mover.CommonLegacyMovementSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonLegacyMovementSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FName                                              GroundMovementModeName;                                     // 0x0030   (0x0004)  
	FName                                              AirMovementModeName;                                        // 0x0034   (0x0004)  
	float                                              MaxWalkSlopeCosine;                                         // 0x0038   (0x0004)  
	float                                              FloorSweepDistance;                                         // 0x003C   (0x0004)  
	float                                              MaxStepHeight;                                              // 0x0040   (0x0004)  
	float                                              MaxSpeed;                                                   // 0x0044   (0x0004)  
	float                                              GroundFriction;                                             // 0x0048   (0x0004)  
	bool                                               bUseSeparateBrakingFriction : 1;                            // 0x004C:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              BrakingFriction;                                            // 0x0050   (0x0004)  
	float                                              BrakingFrictionFactor;                                      // 0x0054   (0x0004)  
	float                                              Deceleration;                                               // 0x0058   (0x0004)  
	float                                              Acceleration;                                               // 0x005C   (0x0004)  
	float                                              TurningRate;                                                // 0x0060   (0x0004)  
	float                                              TurningBoost;                                               // 0x0064   (0x0004)  
	float                                              JumpUpwardsSpeed;                                           // 0x0068   (0x0004)  
	float                                              SwimmingStartImmersionDepth;                                // 0x006C   (0x0004)  
	float                                              SwimmingIdealImmersionDepth;                                // 0x0070   (0x0004)  
	float                                              SwimmingStopImmersionDepth;                                 // 0x0074   (0x0004)  
};

/// Class /Script/Mover.TurnGeneratorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnGeneratorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/Mover.TurnGeneratorInterface.GetTurn
	// FRotator GetTurn(FRotator TargetOrientation, FMoverTickStartData& FullStartState, FMoverDefaultSyncState& MoverState, FMoverTimeStep& TimeStep, FProposedMove& ProposedMove, class UMoverBlackboard* SimBlackboard); // [0x7fa874c] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/Mover.LinearTurnGenerator
/// Size: 0x0018 (0x000028 - 0x000040)
class ULinearTurnGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	float                                              HeadingRate;                                                // 0x0030   (0x0004)  
	float                                              PitchRate;                                                  // 0x0034   (0x0004)  
	float                                              RollRate;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/Mover.ExactDampedTurnGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class UExactDampedTurnGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	float                                              HalfLifeSeconds;                                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Mover.BlueprintableTurnGenerator
/// Size: 0x0008 (0x000028 - 0x000030)
class UBlueprintableTurnGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/Mover.MoverBackendLiaisonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverBackendLiaisonInterface : public UInterface
{ 
public:
};

/// Class /Script/Mover.MoverBasePawn
/// Size: 0x0008 (0x000318 - 0x000320)
class AMoverBasePawn : public APawn
{ 
public:
	class UMoverComponent*                             CharacterMotionComponent;                                   // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/Mover.MoverBasePawn.GetMoverComponent
	// class UMoverComponent* GetMoverComponent();                                                                           // [0x7fa85ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.MoverBlackboard
/// Size: 0x0050 (0x000028 - 0x000078)
class UMoverBlackboard : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/Mover.MoverDataModelBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverDataModelBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetVelocityFromSyncState
	// FVector GetVelocityFromSyncState(FMoverDefaultSyncState& SyncState);                                                  // [0x7fa8b9c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetOrientationFromSyncState
	// FRotator GetOrientationFromSyncState(FMoverDefaultSyncState& SyncState);                                              // [0x7fa85c4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromSyncState
	// FVector GetMoveDirectionIntentFromSyncState(FMoverDefaultSyncState& SyncState);                                       // [0x7fa8290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromInputs
	// FVector GetMoveDirectionIntentFromInputs(FKinematicDefaultInputs& Inputs);                                            // [0x7fa81a8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetLocationFromSyncState
	// FVector GetLocationFromSyncState(FMoverDefaultSyncState& SyncState);                                                  // [0x7fa80f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.MoverDebugComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UMoverDebugComponent : public UActorComponent
{ 
public:
	float                                              LookaheadSeconds;                                           // 0x00A0   (0x0004)  
	int32_t                                            LookaheadSamplesPerSecond;                                  // 0x00A4   (0x0004)  
	bool                                               bShowTrajectory;                                            // 0x00A8   (0x0001)  
	bool                                               bShowTrail;                                                 // 0x00A9   (0x0001)  
	bool                                               bShowCorrections;                                           // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              HistoryTrackingSeconds;                                     // 0x00AC   (0x0004)  
	int32_t                                            HistorySamplesPerSecond;                                    // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x64];                                      // 0x00B4   (0x0064)  MISSED


	/// Functions
	// Function /Script/Mover.MoverDebugComponent.SetHistoryTracking
	// void SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond);                                                // [0x7faa9b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.MoverDebugComponent.OnMovementSimTick
	// void OnMovementSimTick(FMoverTimeStep& TimeStep);                                                                     // [0x7faa138] Final|Native|Private|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.OnMovementSimRollback
	// void OnMovementSimRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep);                         // [0x7faa028] Final|Native|Private|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.OnHistoryTrackingRollback
	// void OnHistoryTrackingRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep);                     // [0x7fa9f18] Final|Native|Protected|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.GetPastTrajectory
	// TArray<FTrajectorySampleInfo> GetPastTrajectory();                                                                    // [0x7fa867c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/Mover.MoverDebugComponent.GetFutureTrajectory
	// TArray<FTrajectorySampleInfo> GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond);                       // [0x7fa7fb0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/Mover.MoverDeveloperSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UMoverDeveloperSettings : public UDeveloperSettingsBackedByCVars
{ 
public:
	int32_t                                            MaxTimesToRefundSubstep;                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Mover.MoverNetworkPhysicsLiaisonComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UMoverNetworkPhysicsLiaisonComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x00A0   (0x0068)  MISSED
};

/// Class /Script/Mover.MoverNetworkPredictionLiaisonComponent
/// Size: 0x0010 (0x000290 - 0x0002A0)
class UMoverNetworkPredictionLiaisonComponent : public UNetworkPredictionComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0290   (0x0010)  MISSED
};

/// Class /Script/Mover.MoverInputProducerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverInputProducerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/Mover.MoverInputProducerInterface.ProduceInput
	// void ProduceInput(int32_t SimTimeMs, FMoverInputCmdContext& InputCmdResult);                                          // [0x7faa684] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Mover.MoverDataCollectionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverDataCollectionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Mover.MoverDataCollectionLibrary.K2_GetDataFromCollection
	// void K2_GetDataFromCollection(bool& DidSucceed, FMoverDataCollection& Collection, int32_t& TargetAsRawBytes);         // [0x7fa96dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverDataCollectionLibrary.K2_AddDataToCollection
	// void K2_AddDataToCollection(FMoverDataCollection& Collection, int32_t& SourceAsRawBytes);                             // [0x7fa9430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Mover.PhysicsCharacterMovementModeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsCharacterMovementModeInterface : public UInterface
{ 
public:
};

/// Class /Script/Mover.BaseMovementMode
/// Size: 0x0010 (0x000028 - 0x000038)
class UBaseMovementMode : public UObject
{ 
public:
	class UClass*                                      SharedSettingsClass;                                        // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/Mover.BaseMovementMode.K2_OnUnregistered
	// void K2_OnUnregistered();                                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnSimulationTick
	// FMoverTickEndData K2_OnSimulationTick(FSimulationTickParams& Params);                                                 // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnRegistered
	// void K2_OnRegistered(FName ModeName);                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnGenerateMove
	// FProposedMove K2_OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep);                           // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/Mover.BaseMovementMode.GetMoverComponent
	// class UMoverComponent* GetMoverComponent();                                                                           // [0x32b4508] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.BaseMovementMode.GetBlackboard_Mutable
	// class UMoverBlackboard* GetBlackboard_Mutable();                                                                      // [0x7fa7f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.BaseMovementMode.GetBlackboard
	// class UMoverBlackboard* GetBlackboard();                                                                              // [0x7fa7f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.FallingMode
/// Size: 0x0038 (0x000038 - 0x000070)
class UFallingMode : public UBaseMovementMode
{ 
public:
	SDK_UNDEFINED(16,2619) /* FMulticastInlineDelegate */ __um(OnLanded);                                          // 0x0038   (0x0010)  
	float                                              AirControlPercentage;                                       // 0x0048   (0x0004)  
	float                                              FallingDeceleration;                                        // 0x004C   (0x0004)  
	float                                              OverTerminalSpeedFallingDeceleration;                       // 0x0050   (0x0004)  
	float                                              TerminalMovementPlaneSpeed;                                 // 0x0054   (0x0004)  
	bool                                               bShouldClampTerminalVerticalSpeed;                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              VerticalFallingDeceleration;                                // 0x005C   (0x0004)  
	float                                              TerminalVerticalSpeed;                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED


	/// Functions
	// Function /Script/Mover.FallingMode.ProcessLanded
	// void ProcessLanded(FFloorCheckResult& FloorResult, FVector& Velocity, FRelativeBaseInfo& BaseInfo, FMoverTickEndData& TickEndData); // [0x7faa3f8] Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.FallingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                 // [0x7faa250] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.FallingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);       // [0x7fa9da0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.FlyingMode
/// Size: 0x0008 (0x000038 - 0x000040)
class UFlyingMode : public UBaseMovementMode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/Mover.FlyingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                 // [0x7faa250] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.FlyingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);       // [0x7fa9da0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.SwimmingMode
/// Size: 0x0008 (0x000038 - 0x000040)
class USwimmingMode : public UBaseMovementMode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/Mover.SwimmingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                 // [0x7faa250] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.SwimmingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);       // [0x7fa9da0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.WalkingMode
/// Size: 0x0010 (0x000038 - 0x000048)
class UWalkingMode : public UBaseMovementMode
{ 
public:
	class UObject*                                     TurnGenerator;                                              // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/Mover.WalkingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                 // [0x7faa250] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.WalkingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);       // [0x7fa9da0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.MovementBaseUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementBaseUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Mover.MovementBaseUtils.TransformWorldRotatorToBased
	// bool TransformWorldRotatorToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FRotator WorldSpaceRotator, FRotator& OutLocalRotator); // [0x7faca88] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformWorldLocationToBased
	// bool TransformWorldLocationToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FVector WorldSpaceLocation, FVector& OutLocalLocation); // [0x7fac7f4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformWorldDirectionToBased
	// bool TransformWorldDirectionToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FVector WorldSpaceDirection, FVector& OutLocalDirection); // [0x7fac560] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformRotatorToWorld
	// void TransformRotatorToWorld(FQuat BaseQuat, FRotator LocalRotator, FRotator& OutWorldSpaceRotator);                  // [0x7fac298] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformRotatorToLocal
	// void TransformRotatorToLocal(FQuat BaseQuat, FRotator WorldSpaceRotator, FRotator& OutLocalRotator);                  // [0x7fabfd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformLocationToWorld
	// void TransformLocationToWorld(FVector BasePos, FQuat BaseQuat, FVector LocalLocation, FVector& OutLocationWorldSpace); // [0x7fabbe4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformLocationToLocal
	// void TransformLocationToLocal(FVector BasePos, FQuat BaseQuat, FVector WorldSpaceLocation, FVector& OutLocalLocation); // [0x7fab7f8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformDirectionToWorld
	// void TransformDirectionToWorld(FQuat BaseQuat, FVector LocalDirection, FVector& OutDirectionWorldSpace);              // [0x7fab4f4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformDirectionToLocal
	// void TransformDirectionToLocal(FQuat BaseQuat, FVector WorldSpaceDirection, FVector& OutLocalDirection);              // [0x7fab1f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformBasedRotatorToWorld
	// bool TransformBasedRotatorToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FRotator LocalRotator, FRotator& OutWorldSpaceRotator); // [0x7faafa4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformBasedLocationToWorld
	// bool TransformBasedLocationToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FVector LocalLocation, FVector& OutLocationWorldSpace); // [0x7faad10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.TransformBasedDirectionToWorld
	// bool TransformBasedDirectionToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FVector LocalDirection, FVector& OutDirectionWorldSpace); // [0x7faaa7c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.IsADynamicBase
	// bool IsADynamicBase(class UPrimitiveComponent* MovementBase);                                                         // [0x7fa8d04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Mover.MovementBaseUtils.GetMovementBaseTransform
	// bool GetMovementBaseTransform(class UPrimitiveComponent* MovementBase, FName BoneName, FVector& OutLocation, FQuat& OutQuat); // [0x7fa83b4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.MovementUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Mover.MovementUtils.TryWalkToSlideAlongSurface
	// float TryWalkToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord, float MaxWalkSlopeCosine); // [0x7faf290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.TrySafeMoveUpdatedComponent
	// bool TrySafeMoveUpdatedComponent(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, FVector& Delta, FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport, FMovementRecord& MoveRecord); // [0x7fae7e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.TryMoveToSlideAlongSurface
	// float TryMoveToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord); // [0x7fadbd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.TryMoveToFallAlongSurface
	// float TryMoveToFallAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult, FMovementRecord& MoveRecord); // [0x7facdb8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.IsValidLandingSpot
	// bool IsValidLandingSpot(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, FVector& Location, FHitResult& Hit, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult); // [0x7fa9100] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.IsHitSurfaceWalkable
	// bool IsHitSurfaceWalkable(FHitResult& Hit, float MaxWalkSlopeCosine);                                                 // [0x7fa8f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.IsExceedingMaxSpeed
	// bool IsExceedingMaxSpeed(FVector& Velocity, float InMaxSpeed);                                                        // [0x7fa8db8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ConstrainToPlane
	// FVector ConstrainToPlane(FVector& Vector, FPlane& MovementPlane, bool bMaintainMagnitude);                            // [0x7fa7a38] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocityFromPositions
	// FVector ComputeVelocityFromPositions(FVector& FromPos, FVector& ToPos, float DeltaSeconds);                           // [0x7fa783c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocityFromGravity
	// FVector ComputeVelocityFromGravity(FVector& GravityAccel, float DeltaSeconds);                                        // [0x7fa76d4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocity
	// FVector ComputeVelocity(FComputeVelocityParams& InParams);                                                            // [0x7fa75f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeSlideDelta
	// FVector ComputeSlideDelta(FVector& Delta, float PctOfDeltaToMove, FVector& Normal, FHitResult& Hit);                  // [0x7fa738c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeDirectionIntent
	// FVector ComputeDirectionIntent(FVector& MoveInput, EMoveInputType MoveInputType);                                     // [0x7fa7224] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeDeflectedMoveOntoRamp
	// FVector ComputeDeflectedMoveOntoRamp(FVector& OrigMoveDelta, FHitResult& RampHitResult, float MaxWalkSlopeCosine, bool bHitFromLineTrace); // [0x7fa6f8c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeControlledGroundMove
	// FProposedMove ComputeControlledGroundMove(FGroundMoveParams& InParams);                                               // [0x7fa6ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeControlledFreeMove
	// FProposedMove ComputeControlledFreeMove(FFreeMoveParams& InParams);                                                   // [0x7fa6db4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeAngularVelocity
	// FRotator ComputeAngularVelocity(FRotator& From, FRotator& To, float DeltaSeconds, float TurningRateLimit);            // [0x7fa6bb8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.CanStepUpOnHitSurface
	// bool CanStepUpOnHitSurface(FHitResult& Hit);                                                                          // [0x7fa6ae4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.CanEscapeGravity
	// bool CanEscapeGravity(FVector& PriorVelocity, FVector& NewVelocity, FVector& GravityAccel, float DeltaSeconds);       // [0x7fa6880] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.PlayMoverMontageCallbackProxy
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPlayMoverMontageCallbackProxy : public UPlayMontageCallbackProxy
{ 
public:


	/// Functions
	// Function /Script/Mover.PlayMoverMontageCallbackProxy.OnMoverMontageEnded
	// void OnMoverMontageEnded(FName IgnoredNotifyName);                                                                    // [0x7faa1d4] Final|Native|Protected 
	// Function /Script/Mover.PlayMoverMontageCallbackProxy.CreateProxyObjectForPlayMoverMontage
	// class UPlayMoverMontageCallbackProxy* CreateProxyObjectForPlayMoverMontage(class UMoverComponent* InMoverComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x7fa7c4c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Mover.MovementSettingsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementSettingsInterface : public UInterface
{ 
public:
};

/// Class /Script/Mover.NullMovementMode
/// Size: 0x0000 (0x000038 - 0x000038)
class UNullMovementMode : public UBaseMovementMode
{ 
public:
};

/// Class /Script/Mover.MovementModeStateMachine
/// Size: 0x0070 (0x000028 - 0x000098)
class UMovementModeStateMachine : public UObject
{ 
public:
	SDK_UNDEFINED(80,2620) /* TMap<FName, UBaseMovementMode*> */ __um(Modes);                                      // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0078   (0x0020)  MISSED
};

/// Class /Script/Mover.MoverComponent
/// Size: 0x01A8 (0x0000A0 - 0x000248)
class UMoverComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,2621) /* FMulticastInlineDelegate */ __um(OnPreSimulationTick);                               // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,2622) /* FMulticastInlineDelegate */ __um(OnPostSimulationTick);                              // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,2623) /* FMulticastInlineDelegate */ __um(OnPostSimulationRollback);                          // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,2624) /* FMulticastInlineDelegate */ __um(OnImpact);                                          // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,2625) /* FMulticastInlineDelegate */ __um(OnMovementModeChanged);                             // 0x00E0   (0x0010)  
	class UClass*                                      BackendClass;                                               // 0x00F0   (0x0008)  
	SDK_UNDEFINED(80,2626) /* TMap<FName, UBaseMovementMode*> */ __um(MovementModes);                              // 0x00F8   (0x0050)  
	FName                                              StartingMovementMode;                                       // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UObject*                                     InputProducer;                                              // 0x0150   (0x0008)  
	class USceneComponent*                             UpdatedComponent;                                           // 0x0158   (0x0008)  
	class UPrimitiveComponent*                         UpdatedPrimitive;                                           // 0x0160   (0x0008)  
	unsigned char                                      UnknownData01_5[0x88];                                      // 0x0168   (0x0088)  MISSED
	TArray<class UObject*>                             SharedSettings;                                             // 0x01F0   (0x0010)  
	bool                                               bHasGravityOverride;                                        // 0x0200   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0201   (0x0007)  MISSED
	FVector                                            GravityAccelOverride;                                       // 0x0208   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0220   (0x0008)  MISSED
	class UMovementModeStateMachine*                   ModeFSM;                                                    // 0x0228   (0x0008)  
	class UMoverBlackboard*                            SimBlackboard;                                              // 0x0230   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0238   (0x0010)  MISSED


	/// Functions
	// Function /Script/Mover.MoverComponent.TryGetFloorCheckHitResult
	// bool TryGetFloorCheckHitResult(FHitResult& OutHitResult);                                                             // [0x7faccd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.SetGravityOverride
	// void SetGravityOverride(bool bOverrideGravity, FVector GravityAcceleration);                                          // [0x7faa838] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.QueueNextMode
	// void QueueNextMode(FName DesiredModeName, bool bShouldReenter);                                                       // [0x7faa770] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.PhysicsVolumeChanged
	// void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);                                                           // [0x7faa374] Native|Protected     
	// Function /Script/Mover.MoverComponent.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x7fa9b68] Native|Public|HasOutParms 
	// Function /Script/Mover.MoverComponent.K2_QueueLayeredMove
	// void K2_QueueLayeredMove(int32_t& MoveAsRawData);                                                                     // [0x7fa9998] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.IsSlopeSliding
	// bool IsSlopeSliding();                                                                                                // [0x7fa90d8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.IsOnGround
	// bool IsOnGround();                                                                                                    // [0x7fa90b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.IsFalling
	// bool IsFalling();                                                                                                     // [0x15f8d00] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.IsAirborne
	// bool IsAirborne();                                                                                                    // [0x7fa8d90] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HasValidCachedState
	// bool HasValidCachedState();                                                                                           // [0x7fa8cec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HasValidCachedInputCmd
	// bool HasValidCachedInputCmd();                                                                                        // [0x3453084] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HandleImpact
	// void HandleImpact(FMoverOnImpactParams& ImpactParams);                                                                // [0x7fa8c54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.GetVelocity
	// FVector GetVelocity();                                                                                                // [0x7fa8b64] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetUpDirection
	// FVector GetUpDirection();                                                                                             // [0x7fa8b2c] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/Mover.MoverComponent.GetTargetOrientation
	// FRotator GetTargetOrientation();                                                                                      // [0x7fa8714] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetSyncState
	// FMoverSyncState GetSyncState();                                                                                       // [0x7fa86b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementModeName
	// FName GetMovementModeName();                                                                                          // [0x7fa8580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementIntent
	// FVector GetMovementIntent();                                                                                          // [0x7fa8548] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementBaseBoneName
	// FName GetMovementBaseBoneName();                                                                                      // [0x7fa836c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementBase
	// class UPrimitiveComponent* GetMovementBase();                                                                         // [0x7fa8348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetLastInputCmd
	// FMoverInputCmdContext GetLastInputCmd();                                                                              // [0x7fa80c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetGravityAcceleration
	// FVector GetGravityAcceleration();                                                                                     // [0x7fa808c] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/Mover.MoverComponent.FindSharedSettings_Mutable_BP
	// class UObject* FindSharedSettings_Mutable_BP(class UClass* SharedSetting);                                            // [0x7fa7e84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.FindSharedSettings_BP
	// class UObject* FindSharedSettings_BP(class UClass* SharedSetting);                                                    // [0x7fa7e84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.FindMovementMode
	// class UBaseMovementMode* FindMovementMode(class UClass* MovementMode);                                                // [0x7fa7dc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.PhysicsDrivenFallingMode
/// Size: 0x0018 (0x000070 - 0x000088)
class UPhysicsDrivenFallingMode : public UFallingMode
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0070   (0x0008)  MISSED
	float                                              TwistTorqueLimit;                                           // 0x0078   (0x0004)  
	float                                              SwingTorqueLimit;                                           // 0x007C   (0x0004)  
	float                                              TargetHeight;                                               // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/Mover.PhysicsDrivenSwimmingMode
/// Size: 0x0008 (0x000040 - 0x000048)
class UPhysicsDrivenSwimmingMode : public USwimmingMode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/Mover.PhysicsDrivenWalkingMode
/// Size: 0x0030 (0x000048 - 0x000078)
class UPhysicsDrivenWalkingMode : public UWalkingMode
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0048   (0x0008)  MISSED
	float                                              RadialForceLimit;                                           // 0x0050   (0x0004)  
	float                                              FrictionForceLimit;                                         // 0x0054   (0x0004)  
	float                                              TwistTorqueLimit;                                           // 0x0058   (0x0004)  
	float                                              SwingTorqueLimit;                                           // 0x005C   (0x0004)  
	float                                              TargetHeight;                                               // 0x0060   (0x0004)  
	float                                              GroundDamping;                                              // 0x0064   (0x0004)  
	float                                              FractionalVelocityToTarget;                                 // 0x0068   (0x0004)  
	float                                              FractionalDownwardVelocityToTarget;                         // 0x006C   (0x0004)  
	float                                              MaxUnsupportedTimeBeforeFalling;                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Mover.PhysicsMoverManager
/// Size: 0x0020 (0x000030 - 0x000050)
class UPhysicsMoverManager : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Struct /Script/Mover.MoverOnImpactParams
/// Size: 0x0108 (0x000000 - 0x000108)
struct FMoverOnImpactParams
{ 
	FName                                              MovementModeName;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FHitResult                                         HitResult;                                                  // 0x0008   (0x00E8)  
	FVector                                            AttemptedMoveDelta;                                         // 0x00F0   (0x0018)  
};

/// Struct /Script/Mover.MoverTimeStep
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMoverTimeStep
{ 
	int32_t                                            ServerFrame;                                                // 0x0000   (0x0004)  
	float                                              BaseSimTimeMs;                                              // 0x0004   (0x0004)  
	float                                              StepMs;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/Mover.MoverDataCollection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMoverDataCollection
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/Mover.MoverInputCmdContext
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMoverInputCmdContext
{ 
	FMoverDataCollection                               InputCollection;                                            // 0x0000   (0x0018)  
};

/// Struct /Script/Mover.LayeredMoveBase
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLayeredMoveBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	EMoveMixMode                                       MixMode;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              DurationMs;                                                 // 0x000C   (0x0004)  
	float                                              StartSimTimeMs;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Mover.LayeredMove_AnimRootMotion
/// Size: 0x0010 (0x000018 - 0x000028)
struct FLayeredMove_AnimRootMotion : FLayeredMoveBase
{ 
	class UAnimMontage*                                Montage;                                                    // 0x0018   (0x0008)  
	float                                              StartingMontagePosition;                                    // 0x0020   (0x0004)  
	float                                              PlayRate;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/Mover.LayeredMove_LinearVelocity
/// Size: 0x0020 (0x000018 - 0x000038)
struct FLayeredMove_LinearVelocity : FLayeredMoveBase
{ 
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	char                                               SettingsFlags;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Mover.LayeredMove_JumpImpulse
/// Size: 0x0008 (0x000018 - 0x000020)
struct FLayeredMove_JumpImpulse : FLayeredMoveBase
{ 
	float                                              UpwardsSpeed;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/Mover.LayeredMove_Teleport
/// Size: 0x0018 (0x000018 - 0x000030)
struct FLayeredMove_Teleport : FLayeredMoveBase
{ 
	FVector                                            TargetLocation;                                             // 0x0018   (0x0018)  
};

/// Struct /Script/Mover.LayeredMove_Launch
/// Size: 0x0020 (0x000018 - 0x000038)
struct FLayeredMove_Launch : FLayeredMoveBase
{ 
	FVector                                            LaunchVelocity;                                             // 0x0018   (0x0018)  
	FName                                              ForceMovementMode;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/Mover.LayeredMoveGroup
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLayeredMoveGroup
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/Mover.MovementSubstep
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovementSubstep
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/Mover.MovementRecord
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMovementRecord
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/Mover.ProposedMove
/// Size: 0x0088 (0x000000 - 0x000088)
struct FProposedMove
{ 
	EMoveMixMode                                       MixMode;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              PreferredMode;                                              // 0x0004   (0x0004)  
	bool                                               bHasDirIntent : 1;                                          // 0x0008:0 (0x0001)  
	bool                                               bHasTargetLocation : 1;                                     // 0x0008:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0009   (0x0007)  MISSED
	FVector                                            DirectionIntent;                                            // 0x0010   (0x0018)  
	FVector                                            LinearVelocity;                                             // 0x0028   (0x0018)  
	FRotator                                           AngularVelocity;                                            // 0x0040   (0x0018)  
	FVector                                            MovePlaneVelocity;                                          // 0x0058   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x0070   (0x0018)  
};

/// Struct /Script/Mover.MoverDataStructBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMoverDataStructBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Mover.KinematicDefaultInputs
/// Size: 0x0068 (0x000008 - 0x000070)
struct FKinematicDefaultInputs : FMoverDataStructBase
{ 
	EMoveInputType                                     MoveInputType;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FVector                                            MoveInput;                                                  // 0x0010   (0x0018)  
	FVector                                            OrientationIntent;                                          // 0x0028   (0x0018)  
	FRotator                                           ControlRotation;                                            // 0x0040   (0x0018)  
	FName                                              SuggestedMovementMode;                                      // 0x0058   (0x0004)  
	bool                                               bUsingMovementBase;                                         // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	class UPrimitiveComponent*                         MovementBase;                                               // 0x0060   (0x0008)  
	FName                                              MovementBaseBoneName;                                       // 0x0068   (0x0004)  
	bool                                               bIsJumpJustPressed;                                         // 0x006C   (0x0001)  
	bool                                               bIsJumpPressed;                                             // 0x006D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x006E   (0x0002)  MISSED
};

/// Struct /Script/Mover.MoverDefaultSyncState
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FMoverDefaultSyncState : FMoverDataStructBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FRotator                                           orientation;                                                // 0x0020   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0038   (0x0018)  
	FVector                                            MoveDirectionIntent;                                        // 0x0050   (0x0018)  
	FName                                              MovementMode;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	class UPrimitiveComponent*                         MovementBase;                                               // 0x0070   (0x0008)  
	FName                                              MovementBaseBoneName;                                       // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FVector                                            MovementBasePos;                                            // 0x0080   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FQuat                                              MovementBaseQuat;                                           // 0x00A0   (0x0020)  
	FLayeredMoveGroup                                  LayeredMoves;                                               // 0x00C0   (0x0028)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/Mover.NetworkPhysicsMoverInputs
/// Size: 0x0018 (0x000018 - 0x000030)
struct FNetworkPhysicsMoverInputs : FNetworkPhysicsDatas
{ 
	FMoverInputCmdContext                              InputCmdContext;                                            // 0x0018   (0x0018)  
};

/// Struct /Script/Mover.MoverSyncState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMoverSyncState
{ 
	FMoverDataCollection                               SyncStateCollection;                                        // 0x0000   (0x0018)  
};

/// Struct /Script/Mover.MoverAuxStateContext
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMoverAuxStateContext
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Mover.NetworkPhysicsMoverState
/// Size: 0x0020 (0x000018 - 0x000038)
struct FNetworkPhysicsMoverState : FNetworkPhysicsDatas
{ 
	FMoverSyncState                                    SyncStateContext;                                           // 0x0018   (0x0018)  
	FMoverAuxStateContext                              AuxStateContext;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Mover.MovementModeTickEndState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovementModeTickEndState
{ 
	float                                              RemainingMs;                                                // 0x0000   (0x0004)  
	FName                                              NextModeName;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Mover.MoverTickStartData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMoverTickStartData
{ 
	FMoverInputCmdContext                              InputCmd;                                                   // 0x0000   (0x0018)  
	FMoverSyncState                                    SyncState;                                                  // 0x0018   (0x0018)  
	FMoverAuxStateContext                              AuxState;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Mover.MoverTickEndData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FMoverTickEndData
{ 
	FMoverSyncState                                    SyncState;                                                  // 0x0000   (0x0018)  
	FMoverAuxStateContext                              AuxState;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FMovementModeTickEndState                          MovementEndState;                                           // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x0024   (0x004C)  MISSED
};

/// Struct /Script/Mover.RelativeBaseInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRelativeBaseInfo
{ 
	class UPrimitiveComponent*                         MovementBase;                                               // 0x0000   (0x0008)  
	FName                                              BoneName;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0030   (0x0020)  
	FVector                                            ContactLocalPosition;                                       // 0x0050   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/Mover.WaterCheckResult
/// Size: 0x0110 (0x000000 - 0x000110)
struct FWaterCheckResult
{ 
	bool                                               bSwimmableVolume : 1;                                       // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Velocity;                                                   // 0x0008   (0x0018)  
	float                                              Depth;                                                      // 0x0020   (0x0004)  
	float                                              ImmersionDepth;                                             // 0x0024   (0x0004)  
	FHitResult                                         HitResult;                                                  // 0x0028   (0x00E8)  
};

/// Struct /Script/Mover.FloorCheckResult
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FFloorCheckResult
{ 
	bool                                               bBlockingHit : 1;                                           // 0x0000:0 (0x0001)  
	bool                                               bWalkableFloor : 1;                                         // 0x0000:1 (0x0001)  
	bool                                               bLineTrace : 1;                                             // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LineDist;                                                   // 0x0004   (0x0004)  
	float                                              FloorDist;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FHitResult                                         HitResult;                                                  // 0x0010   (0x00E8)  
};

/// Struct /Script/Mover.TrajectorySampleInfo
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FTrajectorySampleInfo
{ 
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/Mover.GroundMoveParams
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FGroundMoveParams
{ 
	EMoveInputType                                     MoveInputType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            MoveInput;                                                  // 0x0008   (0x0018)  
	FRotator                                           OrientationIntent;                                          // 0x0020   (0x0018)  
	FVector                                            PriorVelocity;                                              // 0x0038   (0x0018)  
	FRotator                                           PriorOrientation;                                           // 0x0050   (0x0018)  
	float                                              MaxSpeed;                                                   // 0x0068   (0x0004)  
	float                                              Acceleration;                                               // 0x006C   (0x0004)  
	float                                              Deceleration;                                               // 0x0070   (0x0004)  
	float                                              Friction;                                                   // 0x0074   (0x0004)  
	float                                              TurningRate;                                                // 0x0078   (0x0004)  
	float                                              TurningBoost;                                               // 0x007C   (0x0004)  
	FVector                                            GroundNormal;                                               // 0x0080   (0x0018)  
	float                                              DeltaSeconds;                                               // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/Mover.FreeMoveParams
/// Size: 0x0080 (0x000000 - 0x000080)
struct FFreeMoveParams
{ 
	EMoveInputType                                     MoveInputType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            MoveInput;                                                  // 0x0008   (0x0018)  
	FRotator                                           OrientationIntent;                                          // 0x0020   (0x0018)  
	FVector                                            PriorVelocity;                                              // 0x0038   (0x0018)  
	FRotator                                           PriorOrientation;                                           // 0x0050   (0x0018)  
	float                                              MaxSpeed;                                                   // 0x0068   (0x0004)  
	float                                              Acceleration;                                               // 0x006C   (0x0004)  
	float                                              Deceleration;                                               // 0x0070   (0x0004)  
	float                                              TurningBoost;                                               // 0x0074   (0x0004)  
	float                                              TurningRate;                                                // 0x0078   (0x0004)  
	float                                              DeltaSeconds;                                               // 0x007C   (0x0004)  
};

/// Struct /Script/Mover.ComputeVelocityParams
/// Size: 0x0050 (0x000000 - 0x000050)
struct FComputeVelocityParams
{ 
	float                                              DeltaSeconds;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            InitialVelocity;                                            // 0x0008   (0x0018)  
	FVector                                            MoveDirectionIntent;                                        // 0x0020   (0x0018)  
	float                                              MaxSpeed;                                                   // 0x0038   (0x0004)  
	float                                              TurningBoost;                                               // 0x003C   (0x0004)  
	float                                              Friction;                                                   // 0x0040   (0x0004)  
	float                                              Deceleration;                                               // 0x0044   (0x0004)  
	float                                              Acceleration;                                               // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Mover.SimulationTickParams
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FSimulationTickParams
{ 
	class USceneComponent*                             UpdatedComponent;                                           // 0x0000   (0x0008)  
	class UPrimitiveComponent*                         UpdatedPrimitive;                                           // 0x0008   (0x0008)  
	FMoverTickStartData                                StartState;                                                 // 0x0010   (0x0038)  
	FMoverTimeStep                                     TimeStep;                                                   // 0x0048   (0x0010)  
	FProposedMove                                      ProposedMove;                                               // 0x0058   (0x0088)  
};

