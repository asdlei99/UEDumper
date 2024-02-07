
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioShapes
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: TargetingSystem

/// Class /Script/TrainRuntime.FortTrainCheatManager
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortTrainCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/TrainRuntime.FortTrainCheatManager.TeleportTrainToTrainStartLocation
	// void TeleportTrainToTrainStartLocation();                                                                                // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.TeleportTrainToCursor
	// void TeleportTrainToCursor();                                                                                            // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.TeleportToTrainStartLocation
	// void TeleportToTrainStartLocation();                                                                                     // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.TeleportToTrain
	// void TeleportToTrain();                                                                                                  // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.SetTrainStartLocationToCursor
	// void SetTrainStartLocationToCursor();                                                                                    // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.SetTrainMoveInPositiveRailDirection
	// void SetTrainMoveInPositiveRailDirection(bool bMoveInPositiveRailDirection);                                             // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.PrintTrainDebug
	// void PrintTrainDebug();                                                                                                  // [0x307d48c] Final|Exec|Native|Private|Const 
};

/// Class /Script/TrainRuntime.FortTrainSpawner
/// Size: 0x0088 (0x000290 - 0x000318)
class AFortTrainSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UTrainConfig*)                       TrainConfig                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FScalableFloat)                            RandomizeSpawnLocation                                      OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	SMember(FScalableFloat)                            ReverseDirection                                            OFFSET(getStruct<T>, {0x2C0, 40, 0, 0})
	SMember(FScalableFloat)                            RandomizeDirection                                          OFFSET(getStruct<T>, {0x2E8, 40, 0, 0})
	CMember(class AFortTrainRail*)                     Rail                                                        OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Script/TrainRuntime.TrainCar
/// Size: 0x0188 (0x0002B8 - 0x000440)
class ATrainCar : public AFortGameplayTagActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	DMember(bool)                                      bCanBeMarked                                                OFFSET(get<bool>, {0x2CC, 1, 1, 0})
	DMember(bool)                                      bBlockMarking                                               OFFSET(get<bool>, {0x2CC, 1, 1, 1})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               OFFSET(getStruct<T>, {0x2D0, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        OFFSET(getStruct<T>, {0x378, 24, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     ConnectorLength                                             OFFSET(get<float>, {0x394, 4, 0, 0})
	CMember(class UTargetingPreset*)                   DestructionTargetingPreset                                  OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UTargetingPreset*)                   ImpulseTargetingPreset                                      OFFSET(get<T>, {0x3A0, 8, 0, 0})
	SMember(FScalableFloat)                            DestroyBuildings                                            OFFSET(getStruct<T>, {0x3A8, 40, 0, 0})
	SMember(FScalableFloat)                            DestroyOnlyTargetPlayerBuilds                               OFFSET(getStruct<T>, {0x3D0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     DestructionActorTags                                        OFFSET(getStruct<T>, {0x3F8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DestructionIgnoredActorTags                                 OFFSET(getStruct<T>, {0x418, 32, 0, 0})
	SMember(FTargetingRequestHandle)                   DestructionAsyncTargetingHandle                             OFFSET(getStruct<T>, {0x438, 4, 0, 0})
	SMember(FTargetingRequestHandle)                   ImpulseAsyncTargetingHandle                                 OFFSET(getStruct<T>, {0x43C, 4, 0, 0})


	/// Functions
	// Function /Script/TrainRuntime.TrainCar.OnPawnDebasedTrainCar
	// void OnPawnDebasedTrainCar(class AFortPawn* Pawn, class AActor* NewBase);                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/TrainRuntime.TrainCar.OnPawnBasedOnTrainCar
	// void OnPawnBasedOnTrainCar(class AFortPawn* Pawn);                                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/TrainRuntime.TrainCar.OnActorTargetedForImpulse
	// void OnActorTargetedForImpulse(class AActor* Actor);                                                                     // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/TrainRuntime.TrainCar.GetTransformAtServerTime
	// FTransform GetTransformAtServerTime(float ServerTime);                                                                   // [0xabd6368] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TrainRuntime.TrainCar.GetTrainManager
	// class UFortTrainManager* GetTrainManager();                                                                              // [0xabd6344] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TrainRuntime.TrainCar.GetCarIndex
	// int32_t GetCarIndex();                                                                                                   // [0xabd6320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TrainRuntime.TrainConfig
/// Size: 0x0068 (0x000030 - 0x000098)
class UTrainConfig : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UClass*)                             TrainManagerClass                                           OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<class UClass*>)                     Cars                                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FScalableFloat)                            MoveSpeed                                                   OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultConnectorLength                                      OFFSET(getStruct<T>, {0x70, 40, 0, 0})
};

/// Class /Script/TrainRuntime.FortTrainManager
/// Size: 0x0148 (0x000108 - 0x000250)
class UFortTrainManager : public UMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	DMember(bool)                                      bProceduralCarOrder                                         OFFSET(get<bool>, {0x118, 1, 0, 0})
	CMember(class UDataTable*)                         CarTable                                                    OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               CarOrder                                                    OFFSET(get<T>, {0x128, 16, 0, 0})
	DMember(float)                                     DefaultConnectorLength                                      OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     BaseMoveSpeed                                               OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FScalableFloat)                            TruckLocationTolerance                                      OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            MaxIterations                                               OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            MaxErrorOffset                                              OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            ErrorCatchupSpeedModifier                                   OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	CMember(class AFortTrainRail*)                     Rail                                                        OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(TArray<FTrainCarRuntimeData>)              Cars                                                        OFFSET(get<T>, {0x1E8, 16, 0, 0})
	SMember(FTrainMovementData)                        ReplicatedMovementData                                      OFFSET(getStruct<T>, {0x208, 16, 0, 0})
	CMember(class UAudioShapeLineListComponent*)       CachedAudioShapeLineList                                    OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/TrainRuntime.FortTrainManager.PlaceOnRails
	// void PlaceOnRails();                                                                                                     // [0xabd69e8] Final|Native|Protected 
	// Function /Script/TrainRuntime.FortTrainManager.OnRep_Rail
	// void OnRep_Rail();                                                                                                       // [0x2757a2c] Final|Native|Protected 
	// Function /Script/TrainRuntime.FortTrainManager.MoveToTimeAlongRail
	// void MoveToTimeAlongRail(float Time, bool bUpdateReplicatedMovementData);                                                // [0xabd68a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/TrainRuntime.FortTrainManager.MoveToPositionOnRailAtCurrentServerTime
	// void MoveToPositionOnRailAtCurrentServerTime(bool bUpdateReplicatedMovementData);                                        // [0xabd67e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/TrainRuntime.FortTrainManager.MoveToPositionOnRail
	// void MoveToPositionOnRail(float RailDistance, bool bUpdateReplicatedMovementData);                                       // [0xabd66a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/TrainRuntime.FortTrainManager.MoveAlongRail
	// void MoveAlongRail(float DeltaDistance, bool bUpdateReplicatedMovementData);                                             // [0xabd655c] Final|Native|Public|BlueprintCallable 
	// Function /Script/TrainRuntime.FortTrainManager.GetWorldLocationAtServerTime
	// FVector GetWorldLocationAtServerTime(float ServerTime);                                                                  // [0xabd6478] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TrainRuntime.FortTrainStationComponent
/// Size: 0x00B0 (0x000220 - 0x0002D0)
class UFortTrainStationComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FGameplayTag)                              IdentifierTag                                               OFFSET(getStruct<T>, {0x220, 4, 0, 0})
	SMember(FScalableFloat)                            EnterLength                                                 OFFSET(getStruct<T>, {0x228, 40, 0, 0})
	SMember(FScalableFloat)                            CoastLength                                                 OFFSET(getStruct<T>, {0x250, 40, 0, 0})
	SMember(FScalableFloat)                            ExitLength                                                  OFFSET(getStruct<T>, {0x278, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedMultiplier                                             OFFSET(getStruct<T>, {0x2A0, 40, 0, 0})
};

/// Class /Script/TrainRuntime.FortTrainRail
/// Size: 0x0058 (0x000290 - 0x0002E8)
class AFortTrainRail : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TWeakObjectPtr<ALandscapeSplineActor*>)    LandscapeSplineActor                                        OFFSET(get<T>, {0x290, 32, 0, 0})
	DMember(bool)                                      bMinimizeSplineComponent                                    OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(float)                                     MaxTangentDifference                                        OFFSET(get<float>, {0x2B4, 4, 0, 0})
	CMember(class USplineComponent*)                   SplineComponent                                             OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/TrainRuntime.FortTrainRail.ValidateSpline
	// void ValidateSpline();                                                                                                   // [0x307d48c] Final|Native|Private|Const 
	// Function /Script/TrainRuntime.FortTrainRail.GetTimeFromNextTrainArrival
	// float GetTimeFromNextTrainArrival(FGameplayTag& StationIdentifierTag);                                                   // [0x27dd730] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TrainRuntime.FortTrainRail.GenerateSpline
	// void GenerateSpline();                                                                                                   // [0x307d48c] Final|Native|Private|Const 
};

/// Class /Script/TrainRuntime.FortTrainMovingPlatformComponent
/// Size: 0x0038 (0x0001E0 - 0x000218)
class UFortTrainMovingPlatformComponent : public UFortMovingPlatformComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(class UCurveVector*)                       PickupPushCurve                                             OFFSET(get<T>, {0x1E0, 8, 0, 0})
	SMember(FScalableFloat)                            PickupTeleportDistance                                      OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})


	/// Functions
	// Function /Script/TrainRuntime.FortTrainMovingPlatformComponent.FindOrGetTrainManager
	// class UFortTrainManager* FindOrGetTrainManager();                                                                        // [0xabd62fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TrainRuntime.TrainCarRuntimeData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FTrainCarRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class ATrainCar*)                          Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ConnectorLength                                             OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/TrainRuntime.TrainRailKeyframe
/// Size: 0x0018 (0x000000 - 0x000018)
class FTrainRailKeyframe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/TrainRuntime.TrainMovementData
/// Size: 0x0010 (0x000000 - 0x000010)
class FTrainMovementData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DistanceAlongRail                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TimeAlongRail                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bReverseDirection                                           OFFSET(get<bool>, {0xC, 1, 0, 0})
};

