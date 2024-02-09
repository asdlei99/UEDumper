
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AudioGameplay
/// dependency: ClientPilot
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: DelMarTrackRuntime
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: LinkId
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: PlayspaceSystem
/// dependency: VehicleAudioRuntime
/// dependency: VehicleCosmeticsAudioRuntime
/// dependency: VehicleCosmeticsRuntime

/// Enum /Script/DelMarCore.EDelmarDraftingState
/// Size: 0x06
enum class EDelmarDraftingState : uint8_t
{
	EDelmarDraftingState__NotActive                                                  = 0,
	EDelmarDraftingState__HasTarget                                                  = 1,
	EDelmarDraftingState__GainingSpeed                                               = 2,
	EDelmarDraftingState__GracePeriod                                                = 3,
	EDelmarDraftingState__LosingSpeed                                                = 4,
	EDelmarDraftingState__EDelmarDraftingState_MAX                                   = 5
};

/// Enum /Script/DelMarCore.EDelMarVehicleDriftState
/// Size: 0x08
enum class EDelMarVehicleDriftState : uint8_t
{
	EDelMarVehicleDriftState__NotDrifting                                            = 0,
	EDelMarVehicleDriftState__Drifting                                               = 1,
	EDelMarVehicleDriftState__InitialKick                                            = 2,
	EDelMarVehicleDriftState__SwapKick                                               = 3,
	EDelMarVehicleDriftState__ExitVelocity                                           = 4,
	EDelMarVehicleDriftState__ExitForward                                            = 5,
	EDelMarVehicleDriftState__ForcedDrift                                            = 6,
	EDelMarVehicleDriftState__EDelMarVehicleDriftState_MAX                           = 7
};

/// Enum /Script/DelMarCore.EDelMarTurboZoneState
/// Size: 0x07
enum class EDelMarTurboZoneState : uint8_t
{
	EDelMarTurboZoneState__None                                                      = 0,
	EDelMarTurboZoneState__Visible                                                   = 1,
	EDelMarTurboZoneState__Failed                                                    = 2,
	EDelMarTurboZoneState__Active                                                    = 3,
	EDelMarTurboZoneState__Success                                                   = 4,
	EDelMarTurboZoneState__Missed                                                    = 5,
	EDelMarTurboZoneState__EDelMarTurboZoneState_MAX                                 = 6
};

/// Enum /Script/DelMarCore.EDelMarVehicleForwardState
/// Size: 0x05
enum class EDelMarVehicleForwardState : uint8_t
{
	EDelMarVehicleForwardState__None                                                 = 0,
	EDelMarVehicleForwardState__ForwardAccel                                         = 1,
	EDelMarVehicleForwardState__Braking                                              = 2,
	EDelMarVehicleForwardState__Reversing                                            = 3,
	EDelMarVehicleForwardState__EDelMarVehicleForwardState_MAX                       = 4
};

/// Enum /Script/DelMarCore.EDelMarSplineMovementType
/// Size: 0x04
enum class EDelMarSplineMovementType : uint8_t
{
	EDelMarSplineMovementType__OneShot                                               = 0,
	EDelMarSplineMovementType__Repeat                                                = 1,
	EDelMarSplineMovementType__PingPong                                              = 2,
	EDelMarSplineMovementType__EDelMarSplineMovementType_MAX                         = 3
};

/// Enum /Script/DelMarCore.EDelMarFloatOperation
/// Size: 0x08
enum class EDelMarFloatOperation : uint8_t
{
	DMFO_Set                                                                         = 0,
	DMFO_Add                                                                         = 1,
	DMFO_Subtract                                                                    = 2,
	DMFO_Multiply                                                                    = 3,
	DMFO_BaseMultiply                                                                = 4,
	DMFO_Divide                                                                      = 5,
	DMFO_Min                                                                         = 6,
	DMFO_Max                                                                         = 7
};

/// Enum /Script/DelMarCore.EDelMarModifierStackingPolicy
/// Size: 0x04
enum class EDelMarModifierStackingPolicy : uint8_t
{
	DMSP_Allow                                                                       = 0,
	DMSP_DontAdd                                                                     = 1,
	DMSP_ClearOthers                                                                 = 2,
	DMSP_MAX                                                                         = 3
};

/// Enum /Script/DelMarCore.EDelMarNetModel
/// Size: 0x03
enum class EDelMarNetModel : uint8_t
{
	EDelMarNetModel__ClientAuthoritative                                             = 0,
	EDelMarNetModel__ChaosRollback                                                   = 1,
	EDelMarNetModel__EDelMarNetModel_MAX                                             = 2
};

/// Enum /Script/DelMarCore.EDelMarJellyHazardProcessorInfo
/// Size: 0x04
enum class EDelMarJellyHazardProcessorInfo : uint32_t
{
	EDelMarJellyHazardProcessorInfo__None                                            = 0,
	EDelMarJellyHazardProcessorInfo__WithoutJellyHazardHit                           = 1,
	EDelMarJellyHazardProcessorInfo__WithJellyHazardHit                              = 2,
	EDelMarJellyHazardProcessorInfo__EDelMarJellyHazardProcessorInfo_MAX             = 3
};

/// Enum /Script/DelMarCore.EDelMarDemolishedProcessorInfo
/// Size: 0x04
enum class EDelMarDemolishedProcessorInfo : uint32_t
{
	EDelMarDemolishedProcessorInfo__None                                             = 0,
	EDelMarDemolishedProcessorInfo__WithoutDemolish                                  = 1,
	EDelMarDemolishedProcessorInfo__WithDemolish                                     = 2,
	EDelMarDemolishedProcessorInfo__EDelMarDemolishedProcessorInfo_MAX               = 3
};

/// Enum /Script/DelMarCore.EDelMarPositionChangeInfo
/// Size: 0x04
enum class EDelMarPositionChangeInfo : uint8_t
{
	EDelMarPositionChangeInfo__None                                                  = 0,
	EDelMarPositionChangeInfo__PassPlayer                                            = 1,
	EDelMarPositionChangeInfo__PassedByPlayer                                        = 2,
	EDelMarPositionChangeInfo__EDelMarPositionChangeInfo_MAX                         = 3
};

/// Enum /Script/DelMarCore.EDelMarPlaylistTypeInfo
/// Size: 0x04
enum class EDelMarPlaylistTypeInfo : uint8_t
{
	EDelMarPlaylistTypeInfo__Any                                                     = 0,
	EDelMarPlaylistTypeInfo__Casual                                                  = 1,
	EDelMarPlaylistTypeInfo__Ranked                                                  = 2,
	EDelMarPlaylistTypeInfo__EDelMarPlaylistTypeInfo_MAX                             = 3
};

/// Enum /Script/DelMarCore.EDelMarPhysicsRate
/// Size: 0x04
enum class EDelMarPhysicsRate : uint8_t
{
	EDelMarPhysicsRate__ThirtyHz                                                     = 0,
	EDelMarPhysicsRate__SixtyHz                                                      = 1,
	EDelMarPhysicsRate__OneHundredTwentyHz                                           = 2,
	EDelMarPhysicsRate__EDelMarPhysicsRate_MAX                                       = 3
};

/// Enum /Script/DelMarCore.EDelMarSplineGenerationMode
/// Size: 0x03
enum class EDelMarSplineGenerationMode : uint8_t
{
	EDelMarSplineGenerationMode__PerSplinePoint                                      = 0,
	EDelMarSplineGenerationMode__UserAmount                                          = 1,
	EDelMarSplineGenerationMode__EDelMarSplineGenerationMode_MAX                     = 2
};

/// Enum /Script/DelMarCore.EDelMarRaceMode
/// Size: 0x06
enum class EDelMarRaceMode : uint8_t
{
	EDelMarRaceMode__ChallengeMode                                                   = 0,
	EDelMarRaceMode__CompetitiveMode                                                 = 1,
	EDelMarRaceMode__DeathRaceMode                                                   = 2,
	EDelMarRaceMode__TutorialRaceMode                                                = 3,
	EDelMarRaceMode__Invalid                                                         = 4,
	EDelMarRaceMode__EDelMarRaceMode_MAX                                             = 5
};

/// Enum /Script/DelMarCore.EDelMarInvertSteerMethod
/// Size: 0x06
enum class EDelMarInvertSteerMethod : uint8_t
{
	EDelMarInvertSteerMethod__CeilingAngle                                           = 0,
	EDelMarInvertSteerMethod__CeilingTimeDelay                                       = 1,
	EDelMarInvertSteerMethod__CeilingReleaseInput                                    = 2,
	EDelMarInvertSteerMethod__Never                                                  = 3,
	EDelMarInvertSteerMethod__Always                                                 = 4,
	EDelMarInvertSteerMethod__EDelMarInvertSteerMethod_MAX                           = 5
};

/// Enum /Script/DelMarCore.EDelMarKickflipDirection
/// Size: 0x10
enum class EDelMarKickflipDirection : uint8_t
{
	EDelMarKickflipDirection__None                                                   = 0,
	EDelMarKickflipDirection__Up                                                     = 1,
	EDelMarKickflipDirection__Down                                                   = 2,
	EDelMarKickflipDirection__Left                                                   = 3,
	EDelMarKickflipDirection__Right                                                  = 4,
	EDelMarKickflipDirection__UpLeft                                                 = 5,
	EDelMarKickflipDirection__DownLeft                                               = 6,
	EDelMarKickflipDirection__UpRight                                                = 7,
	EDelMarKickflipDirection__DownRight                                              = 8,
	EDelMarKickflipDirection__EDelMarKickflipDirection_MAX                           = 9
};

/// Enum /Script/DelMarCore.EDelMarVehicleWheelIndex
/// Size: 0x06
enum class EDelMarVehicleWheelIndex : uint8_t
{
	EDelMarVehicleWheelIndex__FrontLeft                                              = 0,
	EDelMarVehicleWheelIndex__FrontRight                                             = 1,
	EDelMarVehicleWheelIndex__BackLeft                                               = 2,
	EDelMarVehicleWheelIndex__BackRight                                              = 3,
	EDelMarVehicleWheelIndex__Num                                                    = 4,
	EDelMarVehicleWheelIndex__EDelMarVehicleWheelIndex_MAX                           = 5
};

/// Enum /Script/DelMarCore.EMixModifierTarget
/// Size: 0x04
enum class EMixModifierTarget : uint8_t
{
	EMixModifierTarget__Volume                                                       = 0,
	EMixModifierTarget__Pitch                                                        = 1,
	EMixModifierTarget__LowpassFrequency                                             = 2,
	EMixModifierTarget__EMixModifierTarget_MAX                                       = 3
};

/// Enum /Script/DelMarCore.EDelMarCheckpointMeshType
/// Size: 0x04
enum class EDelMarCheckpointMeshType : uint8_t
{
	EDelMarCheckpointMeshType__Default                                               = 0,
	EDelMarCheckpointMeshType__StartLine                                             = 1,
	EDelMarCheckpointMeshType__FinishLine                                            = 2,
	EDelMarCheckpointMeshType__EDelMarCheckpointMeshType_MAX                         = 3
};

/// Enum /Script/DelMarCore.EDelMarTimerDirection
/// Size: 0x03
enum class EDelMarTimerDirection : uint8_t
{
	EDelMarTimerDirection__CountUp                                                   = 0,
	EDelMarTimerDirection__CountDown                                                 = 1,
	EDelMarTimerDirection__EDelMarTimerDirection_MAX                                 = 2
};

/// Enum /Script/DelMarCore.EDelMarPostRaceVote
/// Size: 0x04
enum class EDelMarPostRaceVote : uint8_t
{
	EDelMarPostRaceVote__Unset                                                       = 0,
	EDelMarPostRaceVote__PlayAgain                                                   = 1,
	EDelMarPostRaceVote__NextMap                                                     = 2,
	EDelMarPostRaceVote__MAX                                                         = 3
};

/// Enum /Script/DelMarCore.EDelMarVehicleCollisionOverrideSetting
/// Size: 0x04
enum class EDelMarVehicleCollisionOverrideSetting : uint8_t
{
	EDelMarVehicleCollisionOverrideSetting__Disabled                                 = 0,
	EDelMarVehicleCollisionOverrideSetting__Enabled                                  = 1,
	EDelMarVehicleCollisionOverrideSetting__Unset                                    = 2,
	EDelMarVehicleCollisionOverrideSetting__Max                                      = 3
};

/// Enum /Script/DelMarCore.EDelMarRaceSpawnMode
/// Size: 0x05
enum class EDelMarRaceSpawnMode : uint8_t
{
	EDelMarRaceSpawnMode__SpawnAtMostRecentSplinePoint                               = 0,
	EDelMarRaceSpawnMode__SpawnAtMostRecentCheckpoint                                = 1,
	EDelMarRaceSpawnMode__SpawnAtRaceStart                                           = 2,
	EDelMarRaceSpawnMode__NoAutomaticRespawn                                         = 3,
	EDelMarRaceSpawnMode__EDelMarRaceSpawnMode_MAX                                   = 4
};

/// Enum /Script/DelMarCore.EDelMarPostMatchFlows
/// Size: 0x03
enum class EDelMarPostMatchFlows : uint8_t
{
	EDelMarPostMatchFlows__PlayTogetherFlow                                          = 0,
	EDelMarPostMatchFlows__PlayTrackFlow                                             = 1,
	EDelMarPostMatchFlows__EDelMarPostMatchFlows_MAX                                 = 2
};

/// Enum /Script/DelMarCore.EDelMarPostMatchState
/// Size: 0x11
enum class EDelMarPostMatchState : uint8_t
{
	EDelMarPostMatchState__WaitingForParty                                           = 0,
	EDelMarPostMatchState__WaitingForLobby                                           = 1,
	EDelMarPostMatchState__StartingNextRace                                          = 2,
	EDelMarPostMatchState__MatchmakingStarted                                        = 3,
	EDelMarPostMatchState__MatchmakingSucceeded                                      = 4,
	EDelMarPostMatchState__MatchmakingFailed                                         = 5,
	EDelMarPostMatchState__Idle                                                      = 6,
	EDelMarPostMatchState__Failed                                                    = 7,
	EDelMarPostMatchState__Completed                                                 = 8,
	EDelMarPostMatchState__INVALID                                                   = 9,
	EDelMarPostMatchState__EDelMarPostMatchState_MAX                                 = 10
};

/// Class /Script/DelMarCore.DelMarActorMover
/// Size: 0x0040 (0x000BD8 - 0x000C18)
class ADelMarActorMover : public AFortCreativeDeviceProp
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x0BD8   (0x0008)  
	class USplineComponent*                            MovementSpline;                                             // 0x0BE0   (0x0008)  
	EDelMarSplineMovementType                          MovementType;                                               // 0x0BE8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0BE9   (0x0007)  MISSED
	class AActor*                                      ManagedActor;                                               // 0x0BF0   (0x0008)  
	class UDelMarSplineActorMovementComponent*         SplineMovementComponent;                                    // 0x0BF8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0C00   (0x0010)  MISSED
	float                                              ServerMovementStartTime;                                    // 0x0C10   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0C14   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarActorMover.OnRep_ServerStartTime
	// void OnRep_ServerStartTime();                                                                                         // [0xb958e10] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarActorMover.InitializeMovement
	// void InitializeMovement();                                                                                            // [0xb958d54] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarAIController
/// Size: 0x0230 (0x0003B8 - 0x0005E8)
class ADelMarAIController : public AAIController
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x03B8   (0x0020)  MISSED
	SDK_UNDEFINED(16,12689) /* FMulticastInlineDelegate */ __um(OnLoadoutChanged);                                 // 0x03D8   (0x0010)  
	FFortAthenaLoadout                                 CosmeticLoadoutBC;                                          // 0x03E8   (0x0170)  
	FCosmeticLoadout                                   VehicleCosmeticLoadout;                                     // 0x0558   (0x0010)  
	EDelMarInvertSteerMethod                           BotSteerMethod;                                             // 0x0568   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0569   (0x0007)  MISSED
	class UBehaviorTree*                               BTAssetToRunOnPawnAISpawned;                                // 0x0570   (0x0008)  
	TArray<class UBehaviorTree*>                       SkillLevelBehaviorTrees;                                    // 0x0578   (0x0010)  
	int32_t                                            MinSkillLevelForRubberbanding;                              // 0x0588   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x058C   (0x0004)  MISSED
	class UClass*                                      OobTubePositionRenderingComponentClass;                     // 0x0590   (0x0008)  
	SDK_UNDEFINED(8,12690) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(DelMarVehicle);                              // 0x0598   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x05A0   (0x0010)  MISSED
	int32_t                                            DelMarBotControllerUID;                                     // 0x05B0   (0x0004)  
	int32_t                                            DelMarBotSkillLevel;                                        // 0x05B4   (0x0004)  
	SDK_UNDEFINED(16,12691) /* FString */              __um(DelMarBotPlayerName);                                  // 0x05B8   (0x0010)  
	class UDelMarAIService*                            DelMarAIService;                                            // 0x05C8   (0x0008)  
	class AFortPlayerPawn*                             PlayerBotPawn;                                              // 0x05D0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x05D8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarAIController.HandleGroundedStateChanged
	// void HandleGroundedStateChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                    // [0xb9586c8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarAIService
/// Size: 0x00F0 (0x000078 - 0x000168)
class UDelMarAIService : public UAthenaAIService
{ 
public:
	class UClass*                                      CosmeticComponentClass;                                     // 0x0078   (0x0008)  
	SDK_UNDEFINED(32,12692) /* TWeakObjectPtr<UDelMarAIVehicleCosmeticLibraryData*> */ __um(VehicleCosmeticLibrary); // 0x0080   (0x0020)  
	bool                                               bBotsUniqueIDUseValidAccountID;                             // 0x00A0   (0x0001)  
	bool                                               bUseRegionalNameList;                                       // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00A2   (0x0006)  MISSED
	SDK_UNDEFINED(32,12693) /* TWeakObjectPtr<UFortAthenaAIBotNameDataAsset*> */ __um(BotNameDataAsset);           // 0x00A8   (0x0020)  
	class UClass*                                      AIControllerClass;                                          // 0x00C8   (0x0008)  
	SDK_UNDEFINED(32,12694) /* TWeakObjectPtr<UDataTable*> */ __um(MMRSpawnTablePtr);                              // 0x00D0   (0x0020)  
	TArray<class ADelMarAIController*>                 DelMarAIControllers;                                        // 0x00F0   (0x0010)  
	SDK_UNDEFINED(8,12695) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x0100   (0x0008)  
	SDK_UNDEFINED(8,12696) /* TWeakObjectPtr<UDelMarRespawnManagerComponent*> */ __um(RespawnManagerComponent);    // 0x0108   (0x0008)  
	SDK_UNDEFINED(80,12697) /* TSet<FString> */        __um(ReservedPlayerNames);                                  // 0x0110   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0160   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarAIService.HandlePlayerUnregistered
	// void HandlePlayerUnregistered(class AFortPlayerState* UnregisteredPlayerState, bool bSetAsInactive);                  // [0xb958a00] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarAIService.HandlePlayerRegistered
	// void HandlePlayerRegistered(class AFortPlayerState* RegisteredPlayerState);                                           // [0xb95886c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarAIService.GetRegisteredAIBotControllers
	// TArray<ADelMarAIController*> GetRegisteredAIBotControllers();                                                         // [0xb95751c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarAIService.GetMaxNumberOfPlayers
	// int32_t GetMaxNumberOfPlayers();                                                                                      // [0x98791d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DelMarCore.DelMarAIVehicleCosmeticSlotDataTableInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDelMarAIVehicleCosmeticSlotDataTableInfo
{ 
	SDK_UNDEFINED(32,12698) /* TWeakObjectPtr<UCosmeticLoadoutSlotTemplate*> */ __um(SlotTemplate);                // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,12699) /* TWeakObjectPtr<UDataTable*> */ __um(VehicleSlotCosmeticDataTable);                  // 0x0020   (0x0020)  
};

/// Class /Script/DelMarCore.DelMarAIVehicleCosmeticLibraryData
/// Size: 0x0030 (0x000030 - 0x000060)
class UDelMarAIVehicleCosmeticLibraryData : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(32,12700) /* TWeakObjectPtr<UDataTable*> */ __um(PredefineVehiclCosmeticSetsDataTable);          // 0x0030   (0x0020)  
	TArray<FDelMarAIVehicleCosmeticSlotDataTableInfo>  RandomizedVehicleSlotDataTables;                            // 0x0050   (0x0010)  
};

/// Class /Script/DelMarCore.DriveHazardInfo
/// Size: 0x0050 (0x000028 - 0x000078)
class UDriveHazardInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(8,12701) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0030   (0x0048)  MISSED
};

/// Class /Script/DelMarCore.DelMarBTService_VehicleBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UDelMarBTService_VehicleBase : public UBTService
{ 
public:
	FBlackboardKeySelector                             VehicleKey;                                                 // 0x0070   (0x0028)  
	SDK_UNDEFINED(8,12702) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(DelMarVehicle);                              // 0x0098   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarScaledCurve
/// Size: 0x0090 (0x000000 - 0x000090)
struct FDelMarScaledCurve
{ 
	float                                              Scale;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Class /Script/DelMarCore.DelMarBTService_FindDriveGoal
/// Size: 0x0430 (0x0000A0 - 0x0004D0)
class UDelMarBTService_FindDriveGoal : public UDelMarBTService_VehicleBase
{ 
public:
	FBlackboardKeySelector                             DriveGoalLocationKey;                                       // 0x00A0   (0x0028)  
	FBlackboardKeySelector                             DriveGoalRotationKey;                                       // 0x00C8   (0x0028)  
	FBlackboardKeySelector                             IsAirDriveGoalKey;                                          // 0x00F0   (0x0028)  
	FBlackboardKeySelector                             HasUpcomingCollisionKey;                                    // 0x0118   (0x0028)  
	float                                              GroundedDriveGoalVehicleForwardOffset;                      // 0x0140   (0x0004)  
	float                                              AirDriveGoalVehicleForwardOffset;                           // 0x0144   (0x0004)  
	float                                              PathNoiseAmplitude;                                         // 0x0148   (0x0004)  
	float                                              PathNoiseFrequency;                                         // 0x014C   (0x0004)  
	int32_t                                            MaxNumberOfCheckedTrackSegments;                            // 0x0150   (0x0004)  
	int32_t                                            NumberOfSideAvoidanceRaycasts;                              // 0x0154   (0x0004)  
	float                                              DegreesBetweenRaycasts;                                     // 0x0158   (0x0004)  
	float                                              DriftPrimaryTraceRotationFactor;                            // 0x015C   (0x0004)  
	float                                              NonJumpableHazardMinHitNormalDegrees;                       // 0x0160   (0x0004)  
	SDK_UNDEFINED(1,12703) /* TEnumAsByte<ECollisionChannel> */ __um(RaycastCollisionChannel);                     // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0165   (0x0003)  MISSED
	TArray<class UClass*>                              IgnoredActorClasses;                                        // 0x0168   (0x0010)  
	FDelMarScaledCurve                                 RaycastDistanceCurve;                                       // 0x0178   (0x0090)  
	FDelMarScaledCurve                                 RayCastDistanceContributionCurve;                           // 0x0208   (0x0090)  
	FDelMarScaledCurve                                 VehicleDistanceAvoidanceCurve;                              // 0x0298   (0x0090)  
	float                                              DriveGoalOffsetCancelPadding;                               // 0x0328   (0x0004)  
	float                                              DriveHazardOffsetCancelPadding;                             // 0x032C   (0x0004)  
	float                                              VehicleTrackOffsetCancelPadding;                            // 0x0330   (0x0004)  
	float                                              DriveHazardMaxJumpDistanceFactor;                           // 0x0334   (0x0004)  
	float                                              DriveHazardMinJumpDistanceFactor;                           // 0x0338   (0x0004)  
	float                                              BlockedJumpTracePadding;                                    // 0x033C   (0x0004)  
	float                                              TrackGapJumpHeightThreshold;                                // 0x0340   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	TArray<class UClass*>                              JumpableActorClasses;                                       // 0x0348   (0x0010)  
	FDelMarScaledCurve                                 PercentChanceToIgnoreJumpHazardCurve;                       // 0x0358   (0x0090)  
	float                                              PercentChanceToIgnoreDriveHazard;                           // 0x03E8   (0x0004)  
	float                                              PercentChanceToNotCheckForSafeLanding;                      // 0x03EC   (0x0004)  
	SDK_UNDEFINED(8,12704) /* TWeakObjectPtr<UDelMarTrackPositionComponent*> */ __um(TrackPositionComponent);      // 0x03F0   (0x0008)  
	SDK_UNDEFINED(8,12705) /* TWeakObjectPtr<UDelMarTrackOobTubePositionalRenderingComponent*> */ __um(OobTubePositionalRenderingComponent); // 0x03F8   (0x0008)  
	SDK_UNDEFINED(80,12706) /* TMap<TWeakObjectPtr<AActor*>, UDriveHazardInfo*> */ __um(PrevFrameDriveHazardInfoMap); // 0x0400   (0x0050)  
	unsigned char                                      UnknownData02_6[0x80];                                      // 0x0450   (0x0080)  MISSED
};

/// Class /Script/DelMarCore.DelMarBTService_ResetVehicle
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarBTService_ResetVehicle : public UDelMarBTService_VehicleBase
{ 
public:
	SDK_UNDEFINED(8,12707) /* TWeakObjectPtr<UDelMarPlayerRaceDataComponent*> */ __um(PlayerRaceDataComponent);    // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12708) /* TWeakObjectPtr<UDelMarTrackPositionComponent*> */ __um(TrackPositionComponent);      // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/DelMarCore.DelMarBTTask_VehicleBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UDelMarBTTask_VehicleBase : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             VehicleKey;                                                 // 0x0070   (0x0028)  
	SDK_UNDEFINED(8,12709) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(DelMarVehicle);                              // 0x0098   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarBTTask_DriveTrack
/// Size: 0x0750 (0x0000A0 - 0x0007F0)
class UDelMarBTTask_DriveTrack : public UDelMarBTTask_VehicleBase
{ 
public:
	FBlackboardKeySelector                             DriveGoalLocationKey;                                       // 0x00A0   (0x0028)  
	FBlackboardKeySelector                             DriveGoalRotationKey;                                       // 0x00C8   (0x0028)  
	FBlackboardKeySelector                             IsAirDriveGoalKey;                                          // 0x00F0   (0x0028)  
	FBlackboardKeySelector                             HasUpcomingCollisionKey;                                    // 0x0118   (0x0028)  
	FDelMarScaledCurve                                 GroundedTrackHorizontalOffsetSteerCurve;                    // 0x0140   (0x0090)  
	FDelMarScaledCurve                                 AirTrackHorizontalOffsetSteerCurve;                         // 0x01D0   (0x0090)  
	FDelMarScaledCurve                                 CollisionAvoidanceHorizontalOffsetSteerCurve;               // 0x0260   (0x0090)  
	FDelMarScaledCurve                                 GroundedTurnDegreesSteerDecisionCurve;                      // 0x02F0   (0x0090)  
	FDelMarScaledCurve                                 AirTurnDegreesSteerDecisionCurve;                           // 0x0380   (0x0090)  
	FDelMarScaledCurve                                 CollisionTurnDegreesSteerDecisionCurve;                     // 0x0410   (0x0090)  
	float                                              DriveThrottle;                                              // 0x04A0   (0x0004)  
	bool                                               bCanKickDrift;                                              // 0x04A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04A5   (0x0003)  MISSED
	int32_t                                            NumberOfDriftCheckSamples;                                  // 0x04A8   (0x0004)  
	float                                              MinDriftSampleDistanceScaleFactor;                          // 0x04AC   (0x0004)  
	float                                              MaxDriftSampleDistanceScaleFactor;                          // 0x04B0   (0x0004)  
	float                                              MinExitDriftSampleDistanceFromVehicle;                      // 0x04B4   (0x0004)  
	float                                              MaxExitDriftSampleDistanceFromVehicle;                      // 0x04B8   (0x0004)  
	float                                              MinRequiredDriftDegrees;                                    // 0x04BC   (0x0004)  
	float                                              MaxRequiredDriftDegrees;                                    // 0x04C0   (0x0004)  
	float                                              MinRequiredKickDriftDegrees;                                // 0x04C4   (0x0004)  
	float                                              MaxRequiredKickDriftDegrees;                                // 0x04C8   (0x0004)  
	float                                              MinSecondsToUpdateRandomDriftConfigValues;                  // 0x04CC   (0x0004)  
	FDelMarScaledCurve                                 PercentChanceToKickDriftCurve;                              // 0x04D0   (0x0090)  
	float                                              MinDriftSlipRatioForExitKickDrift;                          // 0x0560   (0x0004)  
	float                                              MinDriftSpeed;                                              // 0x0564   (0x0004)  
	float                                              DriftKickUnderSteerDegreesThreshold;                        // 0x0568   (0x0004)  
	float                                              DriftKickOverSteerDegreesThreshold;                         // 0x056C   (0x0004)  
	float                                              DriftTapUnderSteerDegreesThreshold;                         // 0x0570   (0x0004)  
	float                                              DriftTapOverSteerDegreesThreshold;                          // 0x0574   (0x0004)  
	float                                              DriftCounterSteerDegreesThreshold;                          // 0x0578   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x057C   (0x0004)  MISSED
	FDelMarScaledCurve                                 MinDriftSlipRatioCurve;                                     // 0x0580   (0x0090)  
	FDelMarScaledCurve                                 DistanceBetweenDriftSamplesCurve;                           // 0x0610   (0x0090)  
	FDelMarScaledCurve                                 DriftSampleDistanceFromVehicleCurve;                        // 0x06A0   (0x0090)  
	float                                              DriveGoalJumpHeightThreshold;                               // 0x0730   (0x0004)  
	float                                              DriveGoalStopJumpEarlyHeightThreshold;                      // 0x0734   (0x0004)  
	float                                              StopJumpEarlyChance;                                        // 0x0738   (0x0004)  
	float                                              MinNumTurboChargesNeededToTurbo;                            // 0x073C   (0x0004)  
	float                                              MaxTurboTrackCutoffAngleInDegrees;                          // 0x0740   (0x0004)  
	float                                              TurboActivationBaseChance;                                  // 0x0744   (0x0004)  
	float                                              SecondaryTurboBoostChance;                                  // 0x0748   (0x0004)  
	float                                              MinTimeBetweenTurboCheck;                                   // 0x074C   (0x0004)  
	float                                              MaxTimeBetweenTurboCheck;                                   // 0x0750   (0x0004)  
	SDK_UNDEFINED(8,12710) /* TWeakObjectPtr<UDelMarTrackPositionComponent*> */ __um(TrackPositionComponent);      // 0x0754   (0x0008)  
	unsigned char                                      UnknownData02_6[0x94];                                      // 0x075C   (0x0094)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarBTTask_DriveTrack.TurboBonusZoneStateChanged
	// void TurboBonusZoneStateChanged(EDelMarTurboZoneState NewState);                                                      // [0xb958ee4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarBTTask_DriveTrack.HandleVehicleGroundedStateChanged
	// void HandleVehicleGroundedStateChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                             // [0xb958bb0] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarBTTask_DriveTrack.HandleTurboActivated
	// void HandleTurboActivated();                                                                                          // [0xb958b84] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarBTTask_RaceCountdown
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarBTTask_RaceCountdown : public UDelMarBTTask_VehicleBase
{ 
public:
	float                                              MaxReactionTime;                                            // 0x00A0   (0x0004)  
	float                                              MinReactionTime;                                            // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

/// Class /Script/DelMarCore.DelMarCameraModeOverrideComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UDelMarCameraModeOverrideComponent : public UFortCameraModeOverrideComponent
{ 
public:
};

/// Class /Script/DelMarCore.DelMarChallengeGhostSystemControllerComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UDelMarChallengeGhostSystemControllerComponent : public UControllerComponent
{ 
public:
	class UClass*                                      GhostPlaybackSessionComponentClass;                         // 0x00A0   (0x0008)  
	class UClass*                                      GhostRecordingSessionComponentClass;                        // 0x00A8   (0x0008)  
	double                                             BestRunTime;                                                // 0x00B0   (0x0008)  
	SDK_UNDEFINED(8,12711) /* TWeakObjectPtr<UDelMarGhostPlaybackSessionComponent*> */ __um(CachedPlaybackSession); // 0x00B8   (0x0008)  
	SDK_UNDEFINED(8,12712) /* TWeakObjectPtr<UDelMarGhostRecordingSessionComponent*> */ __um(CachedRecordingSession); // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,12713) /* TWeakObjectPtr<ADelMarChallengeRaceManager*> */ __um(CachedRaceManager);             // 0x00C8   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarRaceManager
/// Size: 0x0210 (0x000290 - 0x0004A0)
class ADelMarRaceManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x90];                                      // 0x0290   (0x0090)  MISSED
	SDK_UNDEFINED(16,12714) /* FMulticastInlineDelegate */ __um(OnRaceFinished);                                   // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,12715) /* FMulticastInlineDelegate */ __um(OnRaceStarted);                                    // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,12716) /* FMulticastInlineDelegate */ __um(OnRaceCountdownStarted);                           // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,12717) /* FMulticastInlineDelegate */ __um(OnRaceReset);                                      // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,12718) /* FMulticastInlineDelegate */ __um(OnPlayerFinishedRace);                             // 0x0360   (0x0010)  
	SDK_UNDEFINED(16,12719) /* FMulticastInlineDelegate */ __um(OnPlayerLapComplete);                              // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,12720) /* FMulticastInlineDelegate */ __um(OnPlayerResetRun);                                 // 0x0380   (0x0010)  
	bool                                               bRaceStarted;                                               // 0x0390   (0x0001)  
	bool                                               bRaceFinished;                                              // 0x0391   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0392   (0x0006)  MISSED
	TArray<class AFortPlayerState*>                    SpectatorPlayerStates;                                      // 0x0398   (0x0010)  
	TArray<class AFortPlayerState*>                    ActiveRacerPlayerStates;                                    // 0x03A8   (0x0010)  
	class UDelMarRaceConfigComponent*                  RaceConfig;                                                 // 0x03B8   (0x0008)  
	SDK_UNDEFINED(8,12721) /* TWeakObjectPtr<ADelMarRaceLevelConfig*> */ __um(ActiveRaceLevelConfig);              // 0x03C0   (0x0008)  
	class UDelMarTimeManagerComponent*                 TimeManager;                                                // 0x03C8   (0x0008)  
	class UDelMarRespawnManagerComponent*              RespawnManager;                                             // 0x03D0   (0x0008)  
	class UDelMarCheckpointManagerComponent*           CheckpointManager;                                          // 0x03D8   (0x0008)  
	class UDelMarRubberbandingManagerComponent*        RubberbandingManager;                                       // 0x03E0   (0x0008)  
	class UDelMarPositionalTrackerComponent*           PositionalTracker;                                          // 0x03E8   (0x0008)  
	class UDelMarEliminationRaceManagerComponent*      EliminationManager;                                         // 0x03F0   (0x0008)  
	class UDelMarGlobalInputDisabler*                  InputDisablerComponent;                                     // 0x03F8   (0x0008)  
	SDK_UNDEFINED(80,12722) /* TSet<AFortPlayerState*> */ __um(ManagedPlayerStates);                               // 0x0400   (0x0050)  
	SDK_UNDEFINED(80,12723) /* TSet<TWeakObjectPtr<AFortPlayerState*>> */ __um(InactivePlayerStates);              // 0x0450   (0x0050)  


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceManager.UnregisterPlayerState
	// void UnregisterPlayerState(class AFortPlayerState* InPlayerState, bool bSetAsInactive);                               // [0xba06ec4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.UnregisterPlayerController
	// void UnregisterPlayerController(class AController* InController, bool bSetAsInactive);                                // [0xba06d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.UnregisterAllPlayers
	// void UnregisterAllPlayers(bool bSetAsInactive);                                                                       // [0xba06cc0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.SetSpectatorAsPlayer
	// void SetSpectatorAsPlayer(class AFortPlayerState* PlayerState);                                                       // [0x912733c] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.SetPlayerAsSpectator
	// void SetPlayerAsSpectator(class AFortPlayerState* PlayerState);                                                       // [0xba06a3c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.SetActiveRaceLevelConfig
	// void SetActiveRaceLevelConfig(class ADelMarRaceLevelConfig* InRaceLevelConfig);                                       // [0x9125490] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.ResetRun
	// void ResetRun(class AFortPlayerState* PlayerState, bool bPlayerTriggered);                                            // [0xba05e44] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.ResetRace
	// void ResetRace(bool bIsRoundReset);                                                                                   // [0x891b598] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.RequestStartRace
	// void RequestStartRace(bool bSkipCountdown);                                                                           // [0xba05d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.RegisterPlayerState
	// void RegisterPlayerState(class AFortPlayerState* InPlayerState);                                                      // [0xba05a2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.RegisterPlayerController
	// void RegisterPlayerController(class AController* InController);                                                       // [0xba0596c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.OnRep_ActiveRaceLevelConfig
	// void OnRep_ActiveRaceLevelConfig();                                                                                   // [0xba04f68] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.NetMulticast_ResetRun
	// void NetMulticast_ResetRun(class AFortPlayerState* InPlayerState, bool bPlayerTriggered);                             // [0xba04c00] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.NetMulticast_ResetRace
	// void NetMulticast_ResetRace(bool bNextRound);                                                                         // [0x60d4dac] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.NetMulticast_FinishRace
	// void NetMulticast_FinishRace(double RaceFinishedTime);                                                                // [0x7b3d064] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.IsSpectator
	// bool IsSpectator(class AFortPlayerState* PlayerState);                                                                // [0xba048a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.IsActiveRacer
	// bool IsActiveRacer(class AFortPlayerState* PlayerState);                                                              // [0xba047d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.HandleRegisteredPlayerPawnSet
	// void HandleRegisteredPlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);           // [0xba04570] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.GetTimeManager
	// class UDelMarTimeManagerComponent* GetTimeManager();                                                                  // [0x6f75b74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetSpectators
	// TArray<AFortPlayerState*> GetSpectators();                                                                            // [0xba0443c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetRubberbandingManager
	// class UDelMarRubberbandingManagerComponent* GetRubberbandingManager();                                                // [0xaa36a48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetRespawnManagerComponent
	// class UDelMarRespawnManagerComponent* GetRespawnManagerComponent();                                                   // [0xa38e63c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetRaceConfig
	// class UDelMarRaceConfigComponent* GetRaceConfig();                                                                    // [0xba0440c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetPositionalTracker
	// class UDelMarPositionalTrackerComponent* GetPositionalTracker();                                                      // [0xba043f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetNumInactiveRacers
	// int32_t GetNumInactiveRacers();                                                                                       // [0xba042e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetNumberOfLapsForRace
	// int32_t GetNumberOfLapsForRace();                                                                                     // [0xba04304] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetManagedPlayerStatesArray
	// TArray<AFortPlayerState*> GetManagedPlayerStatesArray();                                                              // [0xba042a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetEliminationManagerComponent
	// class UDelMarEliminationRaceManagerComponent* GetEliminationManagerComponent();                                       // [0x5fe2b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetCurrentSpawnMode
	// EDelMarRaceSpawnMode GetCurrentSpawnMode();                                                                           // [0xba04288] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetCurrentRaceMode
	// EDelMarRaceMode GetCurrentRaceMode();                                                                                 // [0xba04264] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetActiveRacers
	// TArray<AFortPlayerState*> GetActiveRacers();                                                                          // [0xba04228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetActiveRaceLevelConfig
	// class ADelMarRaceLevelConfig* GetActiveRaceLevelConfig();                                                             // [0xba04204] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.FinishRace
	// void FinishRace();                                                                                                    // [0x2e61dfc] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.FinalizeRegisteredPlayerInitialization
	// void FinalizeRegisteredPlayerInitialization(class AFortPlayerState* PlayerState);                                     // [0xba04140] Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarChallengeRaceManager
/// Size: 0x0000 (0x0004A0 - 0x0004A0)
class ADelMarChallengeRaceManager : public ADelMarRaceManager
{ 
public:
};

/// Struct /Script/DelMarCore.DelMarStateOverride
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDelMarStateOverride
{ 
	FGameplayTag                                       StateTag;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,12724) /* TWeakObjectPtr<UClass*> */ __um(StateClass);                                        // 0x0008   (0x0020)  
};

/// Class /Script/DelMarCore.DelMarStateMachine
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UDelMarStateMachine : public UActorComponent
{ 
public:
	TArray<FDelMarStateOverride>                       StateOverrides;                                             // 0x00A0   (0x0010)  
	SDK_UNDEFINED(80,12725) /* TMap<FGameplayTag, UClass*> */ __um(StateMappings);                                 // 0x00B0   (0x0050)  
	FGameplayTag                                       RequestedStateTag;                                          // 0x0100   (0x0004)  
	FGameplayTag                                       CurrentStateTag;                                            // 0x0104   (0x0004)  
	FGameplayTag                                       DefaultStateTag;                                            // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	TArray<class UDelMarState*>                        ActiveStates;                                               // 0x0110   (0x0010)  
	TArray<class UDelMarState*>                        ReplicatedStates;                                           // 0x0120   (0x0010)  
	FGameplayTag                                       WaitingForStateReplicationTag;                              // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x74];                                      // 0x0134   (0x0074)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarStateMachine.RequestState
	// void RequestState(FGameplayTag StateTag);                                                                             // [0xba3c188] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarStateMachine.OnRep_RequestedStateTag
	// void OnRep_RequestedStateTag();                                                                                       // [0xba3bb00] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarStateMachine.GetRequestedStateTag
	// FGameplayTag GetRequestedStateTag();                                                                                  // [0x5ed871c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarStateMachine.GetCurrentStateTag
	// FGameplayTag GetCurrentStateTag();                                                                                    // [0xba3b47c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarStateMachine.GetCurrentState
	// class UDelMarState* GetCurrentState();                                                                                // [0xba3b428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarStateMachine.GetActiveStateByTag
	// class UDelMarState* GetActiveStateByTag(FGameplayTag GameplayTag);                                                    // [0xba3b000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarState
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGameplayTag                                       StateTag;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarRacerState
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarRacerState : public UDelMarState
{ 
public:
};

/// Class /Script/DelMarCore.DelMarRacerState_WithSpectatorTransitionBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarRacerState_WithSpectatorTransitionBase : public UDelMarRacerState
{ 
public:
};

/// Class /Script/DelMarCore.DelMarChallengeRacerState_RunActive
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarChallengeRacerState_RunActive : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarRacerStateMachineComponent
/// Size: 0x0010 (0x0001A8 - 0x0001B8)
class UDelMarRacerStateMachineComponent : public UDelMarStateMachine
{ 
public:
	SDK_UNDEFINED(8,12726) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x01A8   (0x0008)  
	FGameplayTag                                       PreviousStateTag;                                           // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarChallengeRacerStateMachineComponent
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UDelMarChallengeRacerStateMachineComponent : public UDelMarRacerStateMachineComponent
{ 
public:
};

/// Class /Script/DelMarCore.DelMarSpectatorControllerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UDelMarSpectatorControllerComponent : public UControllerComponent
{ 
public:
	class UInputAction*                                SpectateNextPlayerAction;                                   // 0x00A0   (0x0008)  
	class UInputAction*                                SpectatePrevPlayerAction;                                   // 0x00A8   (0x0008)  
	class UInputAction*                                ExitSpectateAction;                                         // 0x00B0   (0x0008)  
	class UClass*                                      InputManagerClass;                                          // 0x00B8   (0x0008)  
	SDK_UNDEFINED(8,12727) /* TWeakObjectPtr<UEnhancedInputComponent*> */ __um(InputComponent);                    // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,12728) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00C8   (0x0008)  
	SDK_UNDEFINED(8,12729) /* TWeakObjectPtr<UDelMarRequestComponent*> */ __um(SpectatorRequestComponent);         // 0x00D0   (0x0008)  
	SDK_UNDEFINED(8,12730) /* TWeakObjectPtr<AFortPlayerState*> */ __um(CurrentViewTarget);                        // 0x00D8   (0x0008)  
	SDK_UNDEFINED(8,12731) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PrevValidViewTarget);                      // 0x00E0   (0x0008)  
	SDK_UNDEFINED(8,12732) /* TWeakObjectPtr<AFortPlayerState*> */ __um(SpectatorPlayerState);                     // 0x00E8   (0x0008)  
	SDK_UNDEFINED(8,12733) /* TWeakObjectPtr<AFortPlayerControllerZone*> */ __um(SpectatorController);             // 0x00F0   (0x0008)  
	bool                                               bIsLateJoinSpectator;                                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.SpectatePrevPlayer
	// void SpectatePrevPlayer();                                                                                            // [0xba06cac] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.SpectateNextPlayer
	// void SpectateNextPlayer();                                                                                            // [0xba06c98] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.SetSpectatorTarget
	// void SetSpectatorTarget(class AFortPlayerState* PlayerState);                                                         // [0xba06afc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.SetIsLateJoinSpectator
	// void SetIsLateJoinSpectator(bool bNewLateJoinSpectator);                                                              // [0xba068b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.ServerSetSpectatorTarget
	// void ServerSetSpectatorTarget(class AFortPlayerState* PlayerState);                                                   // [0x80b8a60] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.NetMulticast_FinishSpectating
	// void NetMulticast_FinishSpectating();                                                                                 // [0x1fda954] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.NetMulticast_BeginSpectating
	// void NetMulticast_BeginSpectating();                                                                                  // [0x1c0d610] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.IsLateJoinSpectator
	// bool IsLateJoinSpectator();                                                                                           // [0x305d8a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.ExitSpectate
	// void ExitSpectate();                                                                                                  // [0xba0412c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarChallengeSpectatorControllerComponent
/// Size: 0x0000 (0x000100 - 0x000100)
class UDelMarChallengeSpectatorControllerComponent : public UDelMarSpectatorControllerComponent
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarChallengeSpectatorControllerComponent.ClientUpdateFinishedSpectatorTarget
	// void ClientUpdateFinishedSpectatorTarget();                                                                           // [0x2888030] Net|NetReliableNative|Event|Protected|NetClient|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarCompetitiveRaceManager
/// Size: 0x0018 (0x0004A0 - 0x0004B8)
class ADelMarCompetitiveRaceManager : public ADelMarRaceManager
{ 
public:
	float                                              FinishRaceAfterFirstPlayerFinishedSeconds;                  // 0x04A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x04A4   (0x000C)  MISSED
	double                                             FirstPlayerFinishedTimestamp;                               // 0x04B0   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarCompetitiveRaceManager.OnRep_FirstPlayerFinishedTimestamp
	// void OnRep_FirstPlayerFinishedTimestamp();                                                                            // [0xb958d68] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCompetitiveRaceManager.HandleFinalRacePositionsUpdated
	// void HandleFinalRacePositionsUpdated(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarFinalRacePositionEntry& NewPlayerEntry); // [0xb957fbc] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarCompetitiveRacerState_RunActive
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarCompetitiveRacerState_RunActive : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarCompetitiveRacerState_RunFinished
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarCompetitiveRacerState_RunFinished : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarCompetitiveRacerStateMachineComponent
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UDelMarCompetitiveRacerStateMachineComponent : public UDelMarRacerStateMachineComponent
{ 
public:
};

/// Class /Script/DelMarCore.DelMarConnectedHintComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UDelMarConnectedHintComponent : public UActorComponent
{ 
public:
	bool                                               bShouldShowHint;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	class UClass*                                      VehicleActionClass;                                         // 0x00A8   (0x0008)  
	bool                                               bAcceptMultipleTags;                                        // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FGameplayTagContainer                              MultipleTagContainer;                                       // 0x00B8   (0x0020)  
	SDK_UNDEFINED(8,12734) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedVehicle);                              // 0x00D8   (0x0008)  
	class UDelMarVehicleAction*                        VehicleAction;                                              // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.PassNuxHintTypeToConnectedHintComponent
	// void PassNuxHintTypeToConnectedHintComponent(FGameplayTag HintTypeTag);                                               // [0xb958e28] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.HandleVehicleActionPerformed
	// void HandleVehicleActionPerformed();                                                                                  // [0xb958b98] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.HandleActorEndOverlap
	// void HandleActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                  // [0xb957d78] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.HandleActorBeginOverlap
	// void HandleActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                // [0xb957bc4] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.BeginPlay
	// void BeginPlay();                                                                                                     // [0x8babf44] Native|Public        
};

/// Class /Script/DelMarCore.DelMarCoreOobTubePositionalRenderingComponent
/// Size: 0x0008 (0x000110 - 0x000118)
class UDelMarCoreOobTubePositionalRenderingComponent : public UDelMarTrackOobTubePositionalRenderingComponent
{ 
public:
	SDK_UNDEFINED(8,12735) /* TWeakObjectPtr<APlayerState*> */ __um(ViewTargetPlayerState);                        // 0x0110   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarCoreSplineMeshComponent
/// Size: 0x0000 (0x000700 - 0x000700)
class UDelMarCoreSplineMeshComponent : public USplineMeshComponent
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarCoreSplineMeshComponent.OnBeginActorOverlap
	// void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb95a440] Final|Native|Private|HasOutParms 
};

/// Struct /Script/DelMarCore.DelMarCosmeticSlotInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FDelMarCosmeticSlotInfo
{ 
	FGameplayTag                                       SlotTag;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,12736) /* FText */                __um(SlotName);                                             // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,12737) /* FText */                __um(ShortDescription);                                     // 0x0020   (0x0018)  
	bool                                               bCanBeEmpty;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	SDK_UNDEFINED(32,12738) /* TWeakObjectPtr<UTexture2D*> */ __um(UnassignedPreviewImage);                        // 0x0040   (0x0020)  
};

/// Class /Script/DelMarCore.DelMarCosmeticsDatabase
/// Size: 0x0020 (0x000030 - 0x000050)
class UDelMarCosmeticsDatabase : public UPrimaryDataAsset
{ 
public:
	TArray<class UDelMarCosmeticItemDefinition*>       Items;                                                      // 0x0030   (0x0010)  
	TArray<FDelMarCosmeticSlotInfo>                    SlotInfos;                                                  // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/DelMarCore.DelMarCosmeticsDatabase.GetSlotInfos
	// TArray<FDelMarCosmeticSlotInfo> GetSlotInfos();                                                                       // [0xb95a17c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCosmeticsDatabase.GetItemsForSlot
	// TArray<UDelMarCosmeticItemDefinition*> GetItemsForSlot(FGameplayTag Slot);                                            // [0xb95a074] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarDeathRacerState_ActiveRace
/// Size: 0x0010 (0x000030 - 0x000040)
class UDelMarDeathRacerState_ActiveRace : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
public:
	SDK_UNDEFINED(8,12739) /* TWeakObjectPtr<ADelMarDeathRaceManager*> */ __um(DeathRaceManager);                  // 0x0030   (0x0008)  
	bool                                               bFinishedRound;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/DelMarCore.DelMarDeathRacerState_FinishedRace
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarDeathRacerState_FinishedRace : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarDeathRacerStateMachineComponent
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UDelMarDeathRacerStateMachineComponent : public UDelMarRacerStateMachineComponent
{ 
public:
};

/// Class /Script/DelMarCore.DelMarDoubleTapInputTrigger
/// Size: 0x0010 (0x000050 - 0x000060)
class UDelMarDoubleTapInputTrigger : public UInputTrigger
{ 
public:
	float                                              Delay;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Class /Script/DelMarCore.DelMarPhysMatAttribute
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarPhysMatAttribute : public UObject
{ 
public:
};

/// Class /Script/DelMarCore.DelMarDriveParticlesPhysMatAttribute
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarDriveParticlesPhysMatAttribute : public UDelMarPhysMatAttribute
{ 
public:
	class UNiagaraSystem*                              DriveParticles;                                             // 0x0028   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarDriverInteractionComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UDelMarDriverInteractionComponent : public UControllerComponent
{ 
public:
	class AFortPlayerState*                            ViewPlayerState;                                            // 0x00A0   (0x0008)  
	class ADelMarVehicle*                              ViewVehicle;                                                // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x00B0   (0x0030)  MISSED
	float                                              PassEventSquareDistThreshold;                               // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UDelMarPlayerRaceDataComponent*              RaceData;                                                   // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarDriverInteractionComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xb95a198] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarEvent_FinalFirstPlaceChanged
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarEvent_FinalFirstPlaceChanged : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(8,12740) /* TWeakObjectPtr<AFortPlayerState*> */ __um(NewFirstPlace);                            // 0x0028   (0x0008)  
	SDK_UNDEFINED(8,12741) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PrevFirstPlace);                           // 0x0030   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardActive
/// Size: 0x0020 (0x000028 - 0x000048)
class UDelMarEvent_GlobalLeaderboardActive : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,12742) /* FString */              __um(LeaderboardEventId);                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,12743) /* FString */              __um(LeaderboardWindowId);                                  // 0x0038   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated : public UObject
{ 
public:
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated : public UObject
{ 
public:
};

/// Struct /Script/DelMarCore.DelMarGlobalLeaderboardEntry
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDelMarGlobalLeaderboardEntry
{ 
	bool                                               bIsLocalPlayer;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,12744) /* FString */              __um(PlayerAccountId);                                      // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,12745) /* FString */              __um(PlayerName);                                           // 0x0018   (0x0010)  
	double                                             RunDuration;                                                // 0x0028   (0x0008)  
	int64_t                                            Rank;                                                       // 0x0030   (0x0008)  
	double                                             Percentile;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardPersonalBestRetrieved
/// Size: 0x0040 (0x000028 - 0x000068)
class UDelMarEvent_GlobalLeaderboardPersonalBestRetrieved : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FDelMarGlobalLeaderboardEntry                      PersonalBest;                                               // 0x0028   (0x0040)  
};

/// Class /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarFlowAnalyticsControllerComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(16,12746) /* FString */              __um(FlowAnalyicsEventName);                                // 0x00A0   (0x0010)  
	SDK_UNDEFINED(8,12747) /* TWeakObjectPtr<AFortPlayerController*> */ __um(PlayerController);                    // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent.TutorialReplay
	// void TutorialReplay();                                                                                                // [0xb95a81c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent.TutorialKeepTraining
	// void TutorialKeepTraining();                                                                                          // [0xb95a808] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent.TutorialGoRace
	// void TutorialGoRace();                                                                                                // [0xb95a7f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent.TutorialComplete
	// void TutorialComplete();                                                                                              // [0xb95a7e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarGameplayState
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarGameplayState : public UDelMarState
{ 
public:
};

/// Class /Script/DelMarCore.DelMarGameUserSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarGameUserSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bNuxHasShownVideo;                                          // 0x0028   (0x0001)  
	bool                                               bNuxHasPromptedToPlayTutorial;                              // 0x0029   (0x0001)  
	bool                                               bNuxHasShownDefaultMode;                                    // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	SDK_UNDEFINED(16,12748) /* FString */              __um(LastPlayedDelMarMnemonic);                             // 0x0030   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarGhostSessionComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarGhostSessionComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostSessionComponent.StopSession
	// void StopSession();                                                                                                   // [0x1fda954] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarGhostSessionComponent.StartSession
	// void StartSession();                                                                                                  // [0x6d0e0b0] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarGhostSessionComponent.IsSessionActive
	// bool IsSessionActive();                                                                                               // [0xad6f994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarGhostPlaybackSessionComponent
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class UDelMarGhostPlaybackSessionComponent : public UDelMarGhostSessionComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00B0   (0x0020)  MISSED
	ETeleportType                                      TeleportSetting;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UClass*                                      PlaybackActorClass;                                         // 0x00D8   (0x0008)  
	int32_t                                            CurrentFrame;                                               // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UDelMarGhostReplayLog*                       PlaybackLog;                                                // 0x00E8   (0x0008)  
	class AFortPhysicsPawn*                            PlaybackActor;                                              // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostPlaybackSessionComponent.SetPlaybackLog
	// void SetPlaybackLog(class UDelMarGhostReplayLog* InLog);                                                              // [0xb95c6cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarGhostPlaybackTrigger
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ADelMarGhostPlaybackTrigger : public AActor
{ 
public:
	int32_t                                            PreviewFrame;                                               // 0x0290   (0x0004)  
	int32_t                                            StartFrame;                                                 // 0x0294   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0298   (0x0004)  
	int32_t                                            MaxFrame;                                                   // 0x029C   (0x0004)  
	class UDelMarGhostReplayLog*                       PlaybackLog;                                                // 0x02A0   (0x0008)  
	class UBoxComponent*                               BoxCollider;                                                // 0x02A8   (0x0008)  
	class UClass*                                      PlaybackSessionClassOverride;                               // 0x02B0   (0x0008)  
	class UDelMarGhostPlaybackSessionComponent*        PlaybackSession;                                            // 0x02B8   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostPlaybackTrigger.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb95b648] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarGhostPlaybackTrigger.HandlePlaybackCompleted
	// void HandlePlaybackCompleted();                                                                                       // [0xb95b578] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarGhostPlaybackTrigger.BP_HandlePlaybackCompleted
	// void BP_HandlePlaybackCompleted(FVector Location);                                                                    // [0x2047e54] Event|Protected|HasDefaults|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarGhostRecordingSessionComponent
/// Size: 0x0050 (0x0000B0 - 0x000100)
class UDelMarGhostRecordingSessionComponent : public UDelMarGhostSessionComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00B0   (0x0018)  MISSED
	class UDelMarGhostReplayLog*                       RecordLog;                                                  // 0x00C8   (0x0008)  
	bool                                               bRecordOffPhysicsDelegate;                                  // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x23];                                      // 0x00D1   (0x0023)  MISSED
	int32_t                                            CurrentFrame;                                               // 0x00F4   (0x0004)  
	SDK_UNDEFINED(8,12749) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedDelMarVehicle);                        // 0x00F8   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostRecordingSessionComponent.SetRecordOffPhysicsDelegate
	// void SetRecordOffPhysicsDelegate(bool bEnabled);                                                                      // [0xb95c78c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DelMarCore.GhostReplayFrame
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGhostReplayFrame
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0020   (0x0020)  
	double                                             Time;                                                       // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/DelMarCore.DelMarGhostReplayLog
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarGhostReplayLog : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	TArray<FGhostReplayFrame>                          Frames;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UDelMarGlobalLeaderboardControllerComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(16,12750) /* FString */              __um(LeaderboardEventId);                                   // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12751) /* FString */              __um(LeaderboardWindowId);                                  // 0x00B0   (0x0010)  
	bool                                               bIsLeaderboardEnabled;                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	TArray<FDelMarGlobalLeaderboardEntry>              TopLeaderboardEntries;                                      // 0x00C8   (0x0010)  
	TArray<FDelMarGlobalLeaderboardEntry>              FocusedLeaderboardEntries;                                  // 0x00D8   (0x0010)  
	bool                                               bIsFocusedLeaderboardPopulated;                             // 0x00E8   (0x0001)  
	bool                                               bHasPersonalBest;                                           // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FDelMarGlobalLeaderboardEntry                      PersonalBest;                                               // 0x00F0   (0x0040)  


	/// Functions
	// Function /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent.ServerNewPersonalBest
	// void ServerNewPersonalBest(FDelMarEvent_GlobalLeaderboardNewPersonalBest PersonalBestRetrievedEvent);                 // [0xb95c5f4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent.ClientUpdateLeaderboards
	// void ClientUpdateLeaderboards();                                                                                      // [0x6d0e0b0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent.ClientNewPersonalBest
	// void ClientNewPersonalBest(FDelMarEvent_GlobalLeaderboardNewPersonalBest PersonalBestEvent);                          // [0xb95b4a0] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/DelMarCore.GuidedZoneRequirement
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement : public UObject
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Drift
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Drift : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_DriftKick
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_DriftKick : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Kickflip
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Kickflip : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Turbo
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Turbo : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_TurboBonusZone
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_TurboBonusZone : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Underthrust
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Underthrust : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Jump
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Jump : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_JumpOrUnderthrust
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_JumpOrUnderthrust : public UGuidedZoneRequirement_Jump
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_DriftActive
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_DriftActive : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_DriftBoostActive
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_DriftBoostActive : public UGuidedZoneRequirement
{ 
public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_MidTutorial
/// Size: 0x0010 (0x000028 - 0x000038)
class UGuidedZoneRequirement_MidTutorial : public UGuidedZoneRequirement
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_SetTutorialAnnouncement
/// Size: 0x0058 (0x000000 - 0x000058)
struct FDelMarEvent_SetTutorialAnnouncement
{ 
	SDK_UNDEFINED(24,12752) /* FText */                __um(KBMText);                                              // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,12753) /* FText */                __um(GamepadText);                                          // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,12754) /* FText */                __um(TouchText);                                            // 0x0030   (0x0018)  
	TArray<class UInputAction*>                        AssociatedInputActions;                                     // 0x0048   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarGuidedTutorialZoneActor
/// Size: 0x0130 (0x000290 - 0x0003C0)
class ADelMarGuidedTutorialZoneActor : public AActor
{ 
public:
	class UBoxComponent*                               BoxCollider;                                                // 0x0290   (0x0008)  
	float                                              FinalTimeDilation;                                          // 0x0298   (0x0004)  
	float                                              TransitionSeconds;                                          // 0x029C   (0x0004)  
	float                                              MaxTimeDilationSeconds;                                     // 0x02A0   (0x0004)  
	bool                                               bDemoVehicleOnFail;                                         // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A5   (0x0003)  MISSED
	FDelMarEvent_SetTutorialAnnouncement               ScreenMessage;                                              // 0x02A8   (0x0058)  
	float                                              HintDelaySeconds;                                           // 0x0300   (0x0004)  
	float                                              HintRemovalDelaySeconds;                                    // 0x0304   (0x0004)  
	class UClass*                                      ZoneRequirementClass;                                       // 0x0308   (0x0008)  
	FGameplayTagContainer                              InputTagsToRemoveOnZoneStart;                               // 0x0310   (0x0020)  
	FGameplayTagContainer                              InputTagsToAddOnZoneStart;                                  // 0x0330   (0x0020)  
	FGameplayTagContainer                              InputTagsToRemoveOnZoneEnd;                                 // 0x0350   (0x0020)  
	FGameplayTagContainer                              InputTagsToAddOnZoneEnd;                                    // 0x0370   (0x0020)  
	class UGuidedZoneRequirement*                      ZoneRequirement;                                            // 0x0390   (0x0008)  
	SDK_UNDEFINED(8,12755) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x0398   (0x0008)  
	SDK_UNDEFINED(8,12756) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(ActiveVehicle);                              // 0x03A0   (0x0008)  
	SDK_UNDEFINED(8,12757) /* TWeakObjectPtr<AFortPlayerController*> */ __um(ActivePlayerController);              // 0x03A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x03B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.OnEndOverlap
	// void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xb95c3c0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb95b990] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                               // [0xb95b58c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.BP_OnTutorialZoneStarted
	// void BP_OnTutorialZoneStarted();                                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.BP_OnTutorialZoneFailed
	// void BP_OnTutorialZoneFailed();                                                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.BP_OnTutorialZoneComplete
	// void BP_OnTutorialZoneComplete();                                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Struct /Script/DelMarCore.DelMarActivatedInput
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarActivatedInput
{ 
	class UInputAction*                                Action;                                                     // 0x0000   (0x0008)  
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/DelMarCore.DelMarActivatedInputFrame
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarActivatedInputFrame
{ 
	float                                              duration;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FDelMarActivatedInput>                      Inputs;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarDisabledInputData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarDisabledInputData
{ 
	float                                              duration;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      EffectClass;                                                // 0x0008   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarInputModifierHazard
/// Size: 0x0040 (0x000290 - 0x0002D0)
class ADelMarInputModifierHazard : public AActor
{ 
public:
	TArray<FDelMarActivatedInputFrame>                 ActivatedInputSequence;                                     // 0x0290   (0x0010)  
	TArray<FDelMarDisabledInputData>                   DisabledEffects;                                            // 0x02A0   (0x0010)  
	class UBoxComponent*                               BoxCollider;                                                // 0x02B0   (0x0008)  
	class APlayerController*                           LocalController;                                            // 0x02B8   (0x0008)  
	class UEnhancedPlayerInput*                        LocalPlayerInput;                                           // 0x02C0   (0x0008)  
	float                                              StartOverlapTime;                                           // 0x02C8   (0x0004)  
	float                                              TotalActivationSequenceTime;                                // 0x02CC   (0x0004)  


	/// Functions
	// Function /Script/DelMarCore.DelMarInputModifierHazard.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb95be5c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarInputModifierPitchInversion
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarInputModifierPitchInversion : public UInputModifier
{ 
public:
};

/// Class /Script/DelMarCore.DelMarInputModifierZeroOut
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarInputModifierZeroOut : public UInputModifier
{ 
public:
};

/// Class /Script/DelMarCore.DelMarInputModifierAlwaysOne
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarInputModifierAlwaysOne : public UInputModifier
{ 
public:
};

/// Class /Script/DelMarCore.DelMarInputModifierScalarBySign
/// Size: 0x0030 (0x000028 - 0x000058)
class UDelMarInputModifierScalarBySign : public UInputModifier
{ 
public:
	FVector                                            PositiveScalar;                                             // 0x0028   (0x0018)  
	FVector                                            NegativeScalar;                                             // 0x0040   (0x0018)  
};

/// Class /Script/DelMarCore.DelMarInputModifierClamp
/// Size: 0x0030 (0x000028 - 0x000058)
class UDelMarInputModifierClamp : public UInputModifier
{ 
public:
	FVector                                            Minimum;                                                    // 0x0028   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0040   (0x0018)  
};

/// Class /Script/DelMarCore.DelMarLevelDataAsset
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UDelMarLevelDataAsset : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(24,12758) /* FText */                __um(DisplayName);                                          // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,12759) /* FText */                __um(LevelDescription);                                     // 0x0048   (0x0018)  
	SDK_UNDEFINED(32,12760) /* TWeakObjectPtr<UTexture2D*> */ __um(LevelBackgroundImage);                          // 0x0060   (0x0020)  
	SDK_UNDEFINED(16,12761) /* TArray<TWeakObjectPtr<UWorld*>> */ __um(Levels);                                    // 0x0080   (0x0010)  
	FGameplayTagContainer                              LevelDescriptionTags;                                       // 0x0090   (0x0020)  
};

/// Class /Script/DelMarCore.DelMarLoadoutSave
/// Size: 0x0050 (0x000028 - 0x000078)
class UDelMarLoadoutSave : public USaveGame
{ 
public:
	SDK_UNDEFINED(80,12762) /* TMap<FGameplayTag, TWeakObjectPtr<UDelMarCosmeticItemDefinition*>> */ __um(EquippedLoadout); // 0x0028   (0x0050)  
};

/// Class /Script/DelMarCore.DelMarMatchmakingFlowInjector
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarMatchmakingFlowInjector : public UInjectPreMatchmakingFlow
{ 
public:
};

/// Class /Script/DelMarCore.DelMarMatchmakingGracefulUpgrader
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarMatchmakingGracefulUpgrader : public UGracefulUpgradeOverrider
{ 
public:
};

/// Class /Script/DelMarCore.DelMarNetModelSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarNetModelSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/DelMarCore.DelMarMutator
/// Size: 0x0008 (0x000338 - 0x000340)
class ADelMarMutator : public AFortAthenaMutator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0338   (0x0008)  MISSED
};

/// Class /Script/DelMarCore.DelMarNetworkPredictionMutator
/// Size: 0x0018 (0x000340 - 0x000358)
class ADelMarNetworkPredictionMutator : public ADelMarMutator
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0340   (0x0018)  MISSED
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessorBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessorBase : public UFortObjectiveProcessor
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_BeatPlayers
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_BeatPlayers : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_BonusTurboActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_BonusTurboActivated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_BoostPadBonusSpeedEnded
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_BoostPadBonusSpeedEnded : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_BoostPadHit
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_BoostPadHit : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DistanceTraveled
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DistanceTraveled : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DraftActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DraftActivated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DriftBoostActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DriftBoostActivated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DriftBoostDeactivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DriftBoostDeactivated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DriftComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DriftComplete : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_HighestSpeedUpdated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_HighestSpeedUpdated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_InitialTurboActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_InitialTurboActivated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_Kickflipped
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_Kickflipped : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_LapComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_LapComplete : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_PlacementUpdated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_PlacementUpdated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_PlayedDelMarExperience
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_PlayedDelMarExperience : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_RaceFinished
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_RaceFinished : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_RankAchieved
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_RankAchieved : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_RunComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_RunComplete : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_RunCompleteTest
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_RunCompleteTest : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_StartlineBoostActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_StartlineBoostActivated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_UnderthrustDeactivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_UnderthrustDeactivated : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_UnderthrustPercentUsed
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_UnderthrustPercentUsed : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_VehicleJumped
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_VehicleJumped : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_VehicleLanded
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_VehicleLanded : public UDelMarObjectiveProcessorBase
{ 
public:
};

/// Class /Script/DelMarCore.DelMarPhysicsRateDevice
/// Size: 0x0050 (0x000BD8 - 0x000C28)
class ADelMarPhysicsRateDevice : public AFortCreativeDeviceProp
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0BD8   (0x0050)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPhysicsRateDevice.SetPhysicsRate
	// void SetPhysicsRate(EDelMarPhysicsRate PhysicsRate);                                                                  // [0xb95e0f4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarPhysMatAttribute_SoundTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarPhysMatAttribute_SoundTag : public UDelMarPhysMatAttribute
{ 
public:
	FName                                              SoundTag;                                                   // 0x0028   (0x0004)  
	int32_t                                            Priority;                                                   // 0x002C   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarTerrainData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarTerrainData
{ 
	float                                              MaxForwardSpeedPercentage;                                  // 0x0000   (0x0004)  
	float                                              AccelerationMultiplier;                                     // 0x0004   (0x0004)  
	float                                              DecelerationMultiplier;                                     // 0x0008   (0x0004)  
	float                                              SteerMultiplier;                                            // 0x000C   (0x0004)  
	float                                              SlipMultiplier;                                             // 0x0010   (0x0004)  
	float                                              TargetSpeedPenalty;                                         // 0x0014   (0x0004)  
};

/// Class /Script/DelMarCore.DelMarPhysMatAttribute_Terrain
/// Size: 0x0020 (0x000028 - 0x000048)
class UDelMarPhysMatAttribute_Terrain : public UDelMarPhysMatAttribute
{ 
public:
	FDelMarTerrainData                                 TerrainData;                                                // 0x0028   (0x0018)  
	bool                                               bDriveableSurface;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/DelMarCore.DelMarPlayerStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarPlayerStateComponent : public UPlayerStateComponent
{ 
public:
};

/// Class /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarPlayerActiveRaceManagerComponent : public UDelMarPlayerStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	class ADelMarRaceManager*                          ActiveRaceManager;                                          // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent.SetActiveRaceManager
	// void SetActiveRaceManager(class ADelMarRaceManager* RaceManager);                                                     // [0xb95e034] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent.OnRep_ActiveRaceManager
	// void OnRep_ActiveRaceManager(class ADelMarRaceManager* PreviousRaceManager);                                          // [0xb95df74] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent.GetActiveRaceManager
	// class ADelMarRaceManager* GetActiveRaceManager();                                                                     // [0x8f91428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DelMarCore.DelMarAnalyticsPlayerRaceData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDelMarAnalyticsPlayerRaceData
{ 
	class AFortPlayerController*                       DriverPC;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0008   (0x0030)  MISSED
};

/// Class /Script/DelMarCore.DelMarPlayerAnalyticsComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UDelMarPlayerAnalyticsComponent : public UDelMarPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(8,12763) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12764) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedVehicle);                              // 0x00A8   (0x0008)  
	SDK_UNDEFINED(8,12765) /* TWeakObjectPtr<UDelMarPlayerRaceDataComponent*> */ __um(CachedPlayerRaceData);       // 0x00B0   (0x0008)  
	SDK_UNDEFINED(8,12766) /* TWeakObjectPtr<UDelMarRaceInfoComponent*> */ __um(CachedRaceInfo);                   // 0x00B8   (0x0008)  
	SDK_UNDEFINED(8,12767) /* TWeakObjectPtr<UDelMarPositionalTrackerComponent*> */ __um(CachedPositionalTracker); // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,12768) /* TWeakObjectPtr<UDelmarCompetitiveMatchmakeRatingComponent*> */ __um(MatchmakeRatingComponent); // 0x00C8   (0x0008)  
	FDelMarAnalyticsPlayerRaceData                     CurrentRaceData;                                            // 0x00D0   (0x0038)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0108   (0x0010)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleWorldBonusSpeedStackGained
	// void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                           // [0xb95dcf8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleVehicleHitHazard
	// void HandleVehicleHitHazard();                                                                                        // [0xb95dccc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                               // [0xb95da84] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleUnderthrustPercentChanged
	// void HandleUnderthrustPercentChanged(float PercentageUnderthrustRemaining);                                           // [0xb95d9c4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleUnderthrustDeactivated
	// void HandleUnderthrustDeactivated();                                                                                  // [0xb95d9b0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleUnderthrustActivated
	// void HandleUnderthrustActivated();                                                                                    // [0xb95d99c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                         // [0xb95d988] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleTurboBonusZoneChanged
	// void HandleTurboBonusZoneChanged(EDelMarTurboZoneState BonusZoneState);                                               // [0xb95d8b8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleRaceStarted
	// void HandleRaceStarted();                                                                                             // [0xb95d888] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleRaceFinished
	// void HandleRaceFinished();                                                                                            // [0xb95d874] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandlePotentialDriftBoostChanged
	// void HandlePotentialDriftBoostChanged(float Percent);                                                                 // [0xb95d7b4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleKickflipActivated
	// void HandleKickflipActivated(bool bLeft);                                                                             // [0xb95d6f4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleDriftKickActivated
	// void HandleDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState);                             // [0xb95d5a8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleDriftBoostDeactivated
	// void HandleDriftBoostDeactivated();                                                                                   // [0xb95d590] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleDraftActivated
	// void HandleDraftActivated();                                                                                          // [0xb95d57c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPlayerIdleComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UDelMarPlayerIdleComponent : public UDelMarPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(8,12769) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12770) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedDelMarVehicle);                        // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00B0   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerIdleComponent.OnPlayerDisconnected
	// void OnPlayerDisconnected(class AFortPlayerStateAthena* PlayerState, bool bIsDisconnected);                           // [0xb95de34] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPlayerQuestDistanceTraveledComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UDelMarPlayerQuestDistanceTraveledComponent : public UDelMarPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(8,12771) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedVehicle);                              // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12772) /* TWeakObjectPtr<AFortPlayerState*> */ __um(CachedPlayerState);                        // 0x00A8   (0x0008)  
	SDK_UNDEFINED(8,12773) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00B0   (0x0008)  
	FTimerHandle                                       DistanceTraveledTimer;                                      // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x00C0   (0x0028)  MISSED
	SDK_UNDEFINED(8,12774) /* TWeakObjectPtr<UDelMarObjectiveProcessor_DistanceTraveled*> */ __um(DistanceTravelledObjectiveProcessor); // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerQuestDistanceTraveledComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                               // [0xb95db44] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarPlayerQuestMatchInfoComponent : public UDelMarPlayerStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x00A0   (0x0004)  MISSED
	SDK_UNDEFINED(8,12775) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedVehicle);                              // 0x00A4   (0x0008)  
	SDK_UNDEFINED(8,12776) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00AC   (0x0008)  
	SDK_UNDEFINED(8,12777) /* TWeakObjectPtr<AFortPlayerState*> */ __um(CachedPlayerState);                        // 0x00B4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent.HandleVehicleHitHazard
	// void HandleVehicleHitHazard();                                                                                        // [0xb95dce0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                               // [0xb95dc04] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent.HandleRaceStarted
	// void HandleRaceStarted();                                                                                             // [0xb95d89c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPlayerStart
/// Size: 0x0010 (0x000300 - 0x000310)
class ADelMarPlayerStart : public AFortPlayerStart
{ 
public:
	int32_t                                            StartlinePriority;                                          // 0x0300   (0x0004)  
	float                                              IsClaimedZDistanceCheck;                                    // 0x0304   (0x0004)  
	SDK_UNDEFINED(8,12778) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(DelMarRaceManager);                      // 0x0308   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarPlayerWrongwayComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UDelMarPlayerWrongwayComponent : public UDelMarPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(8,12779) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedDelMarVehicle);                        // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12780) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00A8   (0x0008)  
	SDK_UNDEFINED(8,12781) /* TWeakObjectPtr<UDelMarTrackPositionComponent*> */ __um(CachedTrackPositionComp);     // 0x00B0   (0x0008)  
	SDK_UNDEFINED(8,12782) /* TWeakObjectPtr<UDelMarPlayerRaceDataComponent*> */ __um(CachedRaceData);             // 0x00B8   (0x0008)  
	SDK_UNDEFINED(8,12783) /* TWeakObjectPtr<UDelMarCheckpointManagerComponent*> */ __um(CachedCheckpointManager); // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,12784) /* TWeakObjectPtr<UDelMarTrackManager*> */ __um(CachedTrackManager);                    // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x00D0   (0x0048)  MISSED
};

/// Class /Script/DelMarCore.DelMarPlayspaceComponent_ServerExpiration
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UDelMarPlayspaceComponent_ServerExpiration : public UPlayspaceComponent_ServerExpiration
{ 
public:
};

/// Class /Script/DelMarCore.DelMarProxyGhostVisualComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UDelMarProxyGhostVisualComponent : public UDelMarPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(8,12785) /* TWeakObjectPtr<AFortAthenaVehicle*> */ __um(CachedVehicle);                          // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12786) /* TWeakObjectPtr<UVehicleCosmeticsAssembledMeshUserComponent*> */ __um(CachedVCAMUC);  // 0x00A8   (0x0008)  
	class UMaterialInterface*                          ProxyGhostMaterial;                                         // 0x00B0   (0x0008)  
	SDK_UNDEFINED(80,12787) /* TMap<FGameplayTag, FDelMarProxyMeshMaterialInfo> */ __um(VehicleMaterialInfoMap);   // 0x00B8   (0x0050)  


	/// Functions
	// Function /Script/DelMarCore.DelMarProxyGhostVisualComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xb9607c8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarProxyGhostVisualComponent.HandleVehicleCosmeticsFinished
	// void HandleVehicleCosmeticsFinished();                                                                                // [0xb9607b4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarProxyGhostVisualComponent.HandlePartCustomizationUpdated
	// void HandlePartCustomizationUpdated(int32_t MeshPartIndex);                                                           // [0xb96057c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRaceManagerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarRaceManagerComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/DelMarCore.DelMarRaceInfoComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarRaceInfoComponent : public UDelMarRaceManagerComponent
{ 
public:
	SDK_UNDEFINED(16,12788) /* FString */              __um(RaceGUID);                                             // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceInfoComponent.HandleRaceStarted
	// void HandleRaceStarted();                                                                                             // [0xb96078c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRaceLevelConfig
/// Size: 0x0080 (0x000BD8 - 0x000C58)
class ADelMarRaceLevelConfig : public AFortCreativeDeviceProp
{ 
public:
	EDelMarRaceMode                                    RaceMode;                                                   // 0x0BD8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0BD9   (0x0003)  MISSED
	int32_t                                            DefaultNumRequiredLaps;                                     // 0x0BDC   (0x0004)  
	float                                              ZKillOffsetDistanceFromLowestSplinePoint;                   // 0x0BE0   (0x0004)  
	bool                                               bShouldRunAsADelMarExperience;                              // 0x0BE4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0BE5   (0x0003)  MISSED
	int32_t                                            MatchTimeLimitSeconds;                                      // 0x0BE8   (0x0004)  
	bool                                               bOverrideTurboChargeRegenRateSeconds;                       // 0x0BEC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0BED   (0x0003)  MISSED
	float                                              TurboChargeRegenRateSeconds;                                // 0x0BF0   (0x0004)  
	bool                                               bOverrideTurboRaceStartCharges;                             // 0x0BF4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0BF5   (0x0003)  MISSED
	float                                              TurboRaceStartCharges;                                      // 0x0BF8   (0x0004)  
	bool                                               bOverrideTurboLapCompleteCharges;                           // 0x0BFC   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0BFD   (0x0003)  MISSED
	float                                              TurboLapCompleteCharges;                                    // 0x0C00   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0C04   (0x0004)  MISSED
	SDK_UNDEFINED(80,12789) /* TMap<EDelMarRaceMode, UClass*> */ __um(RaceManagerClassMap);                        // 0x0C08   (0x0050)  


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceLevelConfig.SpawnRaceManager
	// class ADelMarRaceManager* SpawnRaceManager(bool bFireInitializationEvent);                                            // [0xb9614fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceLevelConfig.GetRaceModeTag
	// FGameplayTag GetRaceModeTag();                                                                                        // [0xb95fa4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceLevelConfig.GetRaceManagerClass
	// class UClass* GetRaceManagerClass();                                                                                  // [0xb95fa18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarRaceManagerVerbComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarRaceManagerVerbComponent : public UDelMarRaceManagerComponent
{ 
public:
	SDK_UNDEFINED(8,12790) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12791) /* TWeakObjectPtr<UDelMarPositionalTrackerComponent*> */ __um(PositionalTracker);       // 0x00A8   (0x0008)  
	TArray<class AFortPlayerState*>                    PrevRacePositions;                                          // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandleRaceStarted
	// void HandleRaceStarted();                                                                                             // [0xb9607a0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandleRaceFinished
	// void HandleRaceFinished();                                                                                            // [0xb960778] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandlePlayerPositionsChanged
	// void HandlePlayerPositionsChanged(TArray<AFortPlayerState*>& RacePositions);                                          // [0xb9606dc] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandlePlayerLapCompleted
	// void HandlePlayerLapCompleted(FDelMarEvent_LapComplete& LapCompleteEvent);                                            // [0xb96063c] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandleFinalRacePositionsChanged
	// void HandleFinalRacePositionsChanged(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarFinalRacePositionEntry& UpdatedPlayerEntry); // [0xb95fe70] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandleCountdownStarted
	// void HandleCountdownStarted();                                                                                        // [0xb95fe5c] Final|Native|Protected 
};

/// Struct /Script/DelMarCore.DelMarMusicTrack
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarMusicTrack
{ 
	class USoundWave*                                  StartLineIntro;                                             // 0x0000   (0x0008)  
	class USoundWave*                                  MainTrack;                                                  // 0x0008   (0x0008)  
	class USoundWave*                                  MainTrack_LowSpec;                                          // 0x0010   (0x0008)  
	float                                              BPM;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarRaceMusicPlaylist
/// Size: 0x0010 (0x000030 - 0x000040)
class UDelMarRaceMusicPlaylist : public UPrimaryDataAsset
{ 
public:
	TArray<FDelMarMusicTrack>                          Tracks;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarRaceMusicPlaylistComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarRaceMusicPlaylistComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceMusicPlaylistComponent.SetMusicPlaylist
	// void SetMusicPlaylist(class UDelMarRaceMusicPlaylist* SetPlaylist, bool bEnableMusic);                                // [0xb9612dc] Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarRacerState_Spectator
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarRacerState_Spectator : public UDelMarRacerState
{ 
public:
};

/// Class /Script/DelMarCore.DelMarRacerState_Countdown
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarRacerState_Countdown : public UDelMarRacerState
{ 
public:
	SDK_UNDEFINED(8,12792) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(Vehicle);                                    // 0x0030   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarRacerState_RunFinished
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarRacerState_RunFinished : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
public:
	SDK_UNDEFINED(8,12793) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(Vehicle);                                    // 0x0030   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarSpeedUpDevice
/// Size: 0x0018 (0x000BD8 - 0x000BF0)
class ADelMarSpeedUpDevice : public AFortCreativeDeviceProp
{ 
public:
	float                                              SpeedAmount;                                                // 0x0BD8   (0x0004)  
	float                                              SpeedEffectDuration;                                        // 0x0BDC   (0x0004)  
	float                                              MinDotProductAngleValue;                                    // 0x0BE0   (0x0004)  
	FGameplayTag                                       SpeedSourceTag;                                             // 0x0BE4   (0x0004)  
	class UStaticMeshComponent*                        Collider;                                                   // 0x0BE8   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarSpeedUpDevice.ShouldGrantSpeedEffect
	// bool ShouldGrantSpeedEffect(class AActor* OtherActor);                                                                // [0xb961424] Native|Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarSpeedUpDevice.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb960ba8] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarSpeedUpDevice.BP_HandleSpeedEffectGranted
	// void BP_HandleSpeedEffectGranted();                                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarSplineActorMovementComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarSplineActorMovementComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(8,12794) /* TWeakObjectPtr<USplineComponent*> */ __um(MovementSpline);                           // 0x00A0   (0x0008)  
	float                                              MovementSpeed;                                              // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarStartLineActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ADelMarStartLineActor : public AActor
{ 
public:
	class ADelMarCheckpoint*                           Checkpoint;                                                 // 0x0290   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarTimeManagerComponent
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UDelMarTimeManagerComponent : public UDelMarRaceManagerComponent
{ 
public:
	SDK_UNDEFINED(16,12795) /* FMulticastInlineDelegate */ __um(OnPlayerCountdownStarted);                         // 0x00A0   (0x0010)  
	double                                             ServerRaceStartTime;                                        // 0x00B0   (0x0008)  
	double                                             ServerRaceFinishTime;                                       // 0x00B8   (0x0008)  
	double                                             ServerCountdownIntervalTime;                                // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,12796) /* TWeakObjectPtr<UDelMarRaceConfigComponent*> */ __um(RaceConfig);                     // 0x00C8   (0x0008)  
	SDK_UNDEFINED(8,12797) /* TWeakObjectPtr<ADelMarRaceLevelConfig*> */ __um(RaceLevelConfig);                    // 0x00D0   (0x0008)  
	SDK_UNDEFINED(8,12798) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00E0   (0x0058)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.StartCountdownForRace
	// void StartCountdownForRace(double ServerCountdownStartTime, double ServerRunStartTime, double InServerCountdownIntervalTime); // [0xb96179c] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.StartCountdownForPlayer
	// void StartCountdownForPlayer(class AFortPlayerState* PlayerState, double ServerCountdownStartTime, double ServerRunStartTime); // [0xb9615cc] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.OnRep_RaceStartTimeUpdated
	// void OnRep_RaceStartTimeUpdated();                                                                                    // [0xb960fa0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetServerRaceStartTime
	// float GetServerRaceStartTime();                                                                                       // [0xb95fb2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetServerRaceFinishTime
	// float GetServerRaceFinishTime();                                                                                      // [0xb95fb0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetServerCountdownIntervalTime
	// float GetServerCountdownIntervalTime();                                                                               // [0xb95faec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetSecondsSinceRaceStart
	// float GetSecondsSinceRaceStart();                                                                                     // [0xb95fac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetSecondsRemainingTillRaceStart
	// float GetSecondsRemainingTillRaceStart();                                                                             // [0xb95fa9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetRaceTimeRemaining
	// float GetRaceTimeRemaining();                                                                                         // [0xb95fa74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.ConfigureRaceStart
	// void ConfigureRaceStart(class AGameStateBase* GameState);                                                             // [0xb95f7d0] Final|Native|Protected 
};

/// Struct /Script/DelMarCore.DelMarVehicleAbilityConfig
/// Size: 0x0011 (0x000000 - 0x000011)
struct FDelMarVehicleAbilityConfig
{ 
	bool                                               bAirControlEnabled;                                         // 0x0000   (0x0001)  
	bool                                               bAirFreestyleEnabled;                                       // 0x0001   (0x0001)  
	bool                                               bAirThrottleEnabled;                                        // 0x0002   (0x0001)  
	bool                                               bAutoAerialRotationEnabled;                                 // 0x0003   (0x0001)  
	bool                                               bAutoUprightEnabled;                                        // 0x0004   (0x0001)  
	bool                                               bDraftingEnabled;                                           // 0x0005   (0x0001)  
	bool                                               bDriftEnabled;                                              // 0x0006   (0x0001)  
	bool                                               bDriftBoostEnabled;                                         // 0x0007   (0x0001)  
	bool                                               bInfiniteUnderthrustEnabled;                                // 0x0008   (0x0001)  
	bool                                               bJumpEnabled;                                               // 0x0009   (0x0001)  
	bool                                               bKickflipEnabled;                                           // 0x000A   (0x0001)  
	bool                                               bOversteerEnabled;                                          // 0x000B   (0x0001)  
	bool                                               bReattachmentEnabled;                                       // 0x000C   (0x0001)  
	bool                                               bStartlineBoostEnabled;                                     // 0x000D   (0x0001)  
	bool                                               bStrafeEnabled;                                             // 0x000E   (0x0001)  
	bool                                               bTurboEnabled;                                              // 0x000F   (0x0001)  
	bool                                               bUnderthrustEnabled;                                        // 0x0010   (0x0001)  
};

/// Struct /Script/DelMarCore.DelMarEvent_SetControlsText
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarEvent_SetControlsText
{ 
	SDK_UNDEFINED(24,12799) /* FText */                __um(KBMText);                                              // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,12800) /* FText */                __um(GamepadText);                                          // 0x0018   (0x0018)  
};

/// Struct /Script/DelMarCore.DelMarTutorialSection
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FDelMarTutorialSection
{ 
	float                                              FinishTargetTime;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class ADelMarStartLineActor*                       StartLine;                                                  // 0x0008   (0x0008)  
	class ADelMarStartLineActor*                       FinishLine;                                                 // 0x0010   (0x0008)  
	TArray<class AActor*>                              DisabledActors;                                             // 0x0018   (0x0010)  
	FGameplayTagContainer                              InputDisabledTags;                                          // 0x0028   (0x0020)  
	FDelMarVehicleAbilityConfig                        VehicleAbilityConfig;                                       // 0x0048   (0x0011)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              StartingTurboCharges;                                       // 0x005C   (0x0004)  
	SDK_UNDEFINED(24,12801) /* FText */                __um(Title);                                                // 0x0060   (0x0018)  
	FDelMarEvent_SetControlsText                       ControlsText;                                               // 0x0078   (0x0030)  
	FGameplayTag                                       DialogTag;                                                  // 0x00A8   (0x0004)  
	bool                                               bSkipCountdown;                                             // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/DelMarCore.DelMarTutorialConfigComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarTutorialConfigComponent : public UActorComponent
{ 
public:
	TArray<FDelMarTutorialSection>                     Sections;                                                   // 0x00A0   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarTutorialInteractableSpline
/// Size: 0x0060 (0x000290 - 0x0002F0)
class ADelMarTutorialInteractableSpline : public AActor
{ 
public:
	bool                                               bMustTriggerInOrder;                                        // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0291   (0x0007)  MISSED
	FVector                                            ChildActorScaleMultiplier;                                  // 0x0298   (0x0018)  
	EDelMarSplineGenerationMode                        SplineGenerationMode;                                       // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B1   (0x0003)  MISSED
	int32_t                                            ChildActorCount;                                            // 0x02B4   (0x0004)  
	bool                                               bUseSplineRotationForActors;                                // 0x02B8   (0x0001)  
	bool                                               bShowDebugNumbers;                                          // 0x02B9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x02BA   (0x0002)  MISSED
	float                                              DebugTextZOffset;                                           // 0x02BC   (0x0004)  
	float                                              DebugTextSize;                                              // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class UMaterial*                                   DebugTextMaterial;                                          // 0x02C8   (0x0008)  
	class USplineComponent*                            SplineComponent;                                            // 0x02D0   (0x0008)  
	class UClass*                                      ChildActorClass;                                            // 0x02D8   (0x0008)  
	TArray<class UChildActorComponent*>                ChildActorComponents;                                       // 0x02E0   (0x0010)  


	/// Functions
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.ResetTriggers
	// void ResetTriggers();                                                                                                 // [0xb96118c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.HandleColliderOverlap
	// void HandleColliderOverlap(class ADelMarTutorialTriggerActor* InTrigger);                                             // [0xb95fd9c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.GetTriggerIndexAsRatio
	// float GetTriggerIndexAsRatio(class ADelMarTutorialTriggerActor* InTrigger);                                           // [0xb95fc54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.GetTriggerIndex
	// int32_t GetTriggerIndex(class ADelMarTutorialTriggerActor* InTrigger);                                                // [0xb95fb4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.GetHaveAllTriggersCompleted
	// bool GetHaveAllTriggersCompleted();                                                                                   // [0xb95f9f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.BP_HandleAllSplineTriggersCompleted
	// void BP_HandleAllSplineTriggersCompleted(class AActor* FinalCompletedTrigger);                                        // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarTutorialRaceManager
/// Size: 0x0008 (0x0004A0 - 0x0004A8)
class ADelMarTutorialRaceManager : public ADelMarRaceManager
{ 
public:
	class UDelMarTutorialConfigComponent*              TutorialConfigComponent;                                    // 0x04A0   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarTutorialRaceManager.SetCurrentTutorialSection
	// void SetCurrentTutorialSection(int32_t SectionIndex, class AFortPlayerState* PlayerState);                            // [0xb9611a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRaceManager.RequestPrevTutorialSection
	// void RequestPrevTutorialSection(class AFortPlayerState* PlayerState);                                                 // [0xb9610a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRaceManager.RequestNextTutorialSection
	// void RequestNextTutorialSection(class AFortPlayerState* PlayerState);                                                 // [0xb960fb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRaceManager.NetMulticast_TutorialSectionChanged
	// void NetMulticast_TutorialSectionChanged(class AFortPlayerState* PlayerState, int32_t SectionIndex, int32_t PrevSectionIndex); // [0xb9609ec] Net|NetReliableNative|Event|NetMulticast|Protected 
};

/// Class /Script/DelMarCore.DelMarTutorialTriggerActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ADelMarTutorialTriggerActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UBoxComponent*                               BoxCollider;                                                // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x02A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.ResetTrigger
	// void ResetTrigger();                                                                                                  // [0xb9640b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.HandleColliderOverlap
	// void HandleColliderOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb963300] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.CanTriggerActor
	// bool CanTriggerActor(class AActor* OtherActor);                                                                       // [0xb962a00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.BP_HandleColliderTriggered
	// void BP_HandleColliderTriggered();                                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.BP_HandleColliderReset
	// void BP_HandleColliderReset();                                                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.BP_CanTriggerActor
	// bool BP_CanTriggerActor(class AActor* OtherActor);                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarUIInputControllerComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UDelMarUIInputControllerComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x00A0   (0x0068)  MISSED
	class UInputAction*                                HudWidgetExpandAction;                                      // 0x0108   (0x0008)  
	class UInputAction*                                ToggleQuestListAction;                                      // 0x0110   (0x0008)  
	class UClass*                                      InputManagerClass;                                          // 0x0118   (0x0008)  
	SDK_UNDEFINED(8,12802) /* TWeakObjectPtr<UEnhancedInputComponent*> */ __um(InputComponent);                    // 0x0120   (0x0008)  
	SDK_UNDEFINED(8,12803) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x0128   (0x0008)  
	SDK_UNDEFINED(8,12804) /* TWeakObjectPtr<AFortPlayerController*> */ __um(PlayerController);                    // 0x0130   (0x0008)  
	SDK_UNDEFINED(8,12805) /* TWeakObjectPtr<UDelMarPlayerPreferencesComponent*> */ __um(PlayerPreferences);       // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarUIInputControllerComponent.HandleToggleQuestList
	// void HandleToggleQuestList();                                                                                         // [0x307d48c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarUIInputControllerComponent.HandleHudWidgetExpandTriggered
	// void HandleHudWidgetExpandTriggered();                                                                                // [0xb9637e4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarUIInputControllerComponent.HandleHudWidgetExpandCompleted
	// void HandleHudWidgetExpandCompleted();                                                                                // [0xb9637d0] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarVehicleAction
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarVehicleAction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,12806) /* FMulticastInlineDelegate */ __um(OnActionPerformed);                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/DelMarCore.DelMarVehicleAction_Jump
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_Jump : public UDelMarVehicleAction
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_Jump.HandleJump
	// void HandleJump();                                                                                                    // [0xb9637b8] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_Drift
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_Drift : public UDelMarVehicleAction
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_Drift.HandleDrift
	// void HandleDrift(float DriftDirection, EDelMarVehicleDriftState DriftState);                                          // [0xb963680] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_HazardHit
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_HazardHit : public UDelMarVehicleAction
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_HazardHit.HandleHazardHit
	// void HandleHazardHit();                                                                                               // [0xb9637b8] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_KickFlip
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_KickFlip : public UDelMarVehicleAction
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_KickFlip.HandleKickflip
	// void HandleKickflip(bool bLeftSide);                                                                                  // [0xb9637f8] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_Turbo
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_Turbo : public UDelMarVehicleAction
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_Turbo.HandleTurbo
	// void HandleTurbo();                                                                                                   // [0xb9637b8] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_Underthrust
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_Underthrust : public UDelMarVehicleAction
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_Underthrust.HandleUnderthrust
	// void HandleUnderthrust();                                                                                             // [0xb9637b8] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAutoInputComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarVehicleAutoInputComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00A0   (0x0020)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleSuspensionConfig
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDelMarVehicleSuspensionConfig
{ 
	float                                              MaxRaise;                                                   // 0x0000   (0x0004)  
	float                                              MaxDrop;                                                    // 0x0004   (0x0004)  
	float                                              Stiffness;                                                  // 0x0008   (0x0004)  
	float                                              DampingCompression;                                         // 0x000C   (0x0004)  
	float                                              DampingRelaxation;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleAxleConfig
/// Size: 0x002C (0x000000 - 0x00002C)
struct FDelMarVehicleAxleConfig
{ 
	float                                              TranslateX;                                                 // 0x0000   (0x0004)  
	float                                              TranslateY;                                                 // 0x0004   (0x0004)  
	float                                              TranslateZ;                                                 // 0x0008   (0x0004)  
	float                                              WheelRadius;                                                // 0x000C   (0x0004)  
	float                                              VehicleHitboxHeight;                                        // 0x0010   (0x0004)  
	float                                              RestDistanceZ;                                              // 0x0014   (0x0004)  
	FDelMarVehicleSuspensionConfig                     Suspension;                                                 // 0x0018   (0x0014)  
};

/// Class /Script/DelMarCore.DelMarVehicleBodySetup
/// Size: 0x0058 (0x000030 - 0x000088)
class UDelMarVehicleBodySetup : public UDataAsset
{ 
public:
	FDelMarVehicleAxleConfig                           FrontAxle;                                                  // 0x0030   (0x002C)  
	FDelMarVehicleAxleConfig                           BackAxle;                                                   // 0x005C   (0x002C)  
};

/// Class /Script/DelMarCore.DelMarVehicleBodySetupMap
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarVehicleBodySetupMap : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,12807) /* TMap<FName, UDelMarVehicleBodySetup*> */ __um(BodySetupMap);                        // 0x0030   (0x0050)  
};

/// Struct /Script/DelMarCore.DelMarCameraFloatBlendedProperty
/// Size: 0x01D0 (0x000000 - 0x0001D0)
struct FDelMarCameraFloatBlendedProperty
{ 
	bool                                               bEvaluateInputOnCurve;                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FRuntimeFloatCurve                                 InputCurve;                                                 // 0x0008   (0x0088)  
	float                                              ActiveValue;                                                // 0x0090   (0x0004)  
	bool                                               bRemapOutputValue;                                          // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	FRuntimeFloatCurve                                 RemapCurve;                                                 // 0x0098   (0x0088)  
	float                                              BlendInLambda;                                              // 0x0120   (0x0004)  
	float                                              BlendOutLambda;                                             // 0x0124   (0x0004)  
	bool                                               bUseBlendOutCurve;                                          // 0x0128   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0129   (0x0007)  MISSED
	FRuntimeFloatCurve                                 BlendOutLambdaCurve;                                        // 0x0130   (0x0088)  
	float                                              Tolerance;                                                  // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x14];                                      // 0x01BC   (0x0014)  MISSED
};

/// Struct /Script/DelMarCore.DelMarCameraFloatProperty
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FDelMarCameraFloatProperty
{ 
	bool                                               bEvaluateInputOnCurve;                                      // 0x0000   (0x0001)  
	bool                                               bAccumulateInput;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
	float                                              InterpLambda;                                               // 0x0090   (0x0004)  
	float                                              DecayLambda;                                                // 0x0094   (0x0004)  
	FFloatRange                                        ClampedRange;                                               // 0x0098   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/DelMarCore.DelMarVehicleCameraMode_V2
/// Size: 0x3050 (0x000060 - 0x0030B0)
class UDelMarVehicleCameraMode_V2 : public UFortCameraMode
{ 
public:
	class UClass*                                      CameraInputControllerComponentClass;                        // 0x0060   (0x0008)  
	float                                              FOV;                                                        // 0x0068   (0x0004)  
	float                                              TotalFOVInterpLambda;                                       // 0x006C   (0x0004)  
	FFloatRange                                        TotalFOVClamp;                                              // 0x0070   (0x0010)  
	float                                              Distance;                                                   // 0x0080   (0x0004)  
	float                                              TotalDistanceInterpLambda;                                  // 0x0084   (0x0004)  
	FFloatRange                                        TotalDistanceClamp;                                         // 0x0088   (0x0010)  
	float                                              Height;                                                     // 0x0098   (0x0004)  
	float                                              TotalHeightInterpLambda;                                    // 0x009C   (0x0004)  
	float                                              HeightOffsetInterpLambda;                                   // 0x00A0   (0x0004)  
	FFloatRange                                        TotalHeightClamp;                                           // 0x00A4   (0x0010)  
	float                                              AngleToOriginDegrees;                                       // 0x00B4   (0x0004)  
	float                                              AngleToOriginInterpLambda;                                  // 0x00B8   (0x0004)  
	FFloatRange                                        TotalAngleToOriginClamp;                                    // 0x00BC   (0x0010)  
	float                                              SwivelInterpLambda;                                         // 0x00CC   (0x0004)  
	float                                              SwivelPitchMax;                                             // 0x00D0   (0x0004)  
	float                                              SwivelYawMax;                                               // 0x00D4   (0x0004)  
	float                                              GroundNormalInterpLambda;                                   // 0x00D8   (0x0004)  
	float                                              ForwardInterpLambda;                                        // 0x00DC   (0x0004)  
	float                                              CarPitchInterpLambda;                                       // 0x00E0   (0x0004)  
	float                                              PitchRotationAxisInterpLambda;                              // 0x00E4   (0x0004)  
	float                                              VerticalDriftDegreeThreshold;                               // 0x00E8   (0x0004)  
	float                                              MinDegreesVehicleWorldUpThreshold;                          // 0x00EC   (0x0004)  
	float                                              WorldUpInterpRate;                                          // 0x00F0   (0x0004)  
	bool                                               bPreventPenetration;                                        // 0x00F4   (0x0001)  
	bool                                               bDoPredictiveAvoidance;                                     // 0x00F5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00F6   (0x0002)  MISSED
	float                                              CollisionPushOutDistance;                                   // 0x00F8   (0x0004)  
	float                                              PenetrationBlendOutTime;                                    // 0x00FC   (0x0004)  
	float                                              PenetrationBlendInTime;                                     // 0x0100   (0x0004)  
	SDK_UNDEFINED(1,12808) /* TEnumAsByte<ECollisionChannel> */ __um(PenetrationTraceChannel);                     // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	TArray<FPenetrationAvoidanceFeeler>                PenetrationAvoidanceFeelers;                                // 0x0108   (0x0010)  
	FDelMarScaledCurve                                 ForwardAirInterpLambdaCurve;                                // 0x0118   (0x0090)  
	FRuntimeFloatCurve                                 ForwardAirBlendCurve;                                       // 0x01A8   (0x0088)  
	float                                              MinForwardSpeedForAerialBlend;                              // 0x0230   (0x0004)  
	float                                              MinTimeInAirBeforeUsingVehicleUp;                           // 0x0234   (0x0004)  
	FDelMarScaledCurve                                 GroundNormalAirInterpLambdaCurve;                           // 0x0238   (0x0090)  
	float                                              AirFreestyleDeactivationExtendedSeconds;                    // 0x02C8   (0x0004)  
	float                                              AirFreestyleDeactivationLambdaSeconds;                      // 0x02CC   (0x0004)  
	float                                              AirFreestyleDeactivationForwardLambda;                      // 0x02D0   (0x0004)  
	float                                              AirFreestyleDeactivationNormalLambda;                       // 0x02D4   (0x0004)  
	FRuntimeFloatCurve                                 DriftForwardBlendCurve;                                     // 0x02D8   (0x0088)  
	FRuntimeFloatCurve                                 AerialDriftForwardBlendCurve;                               // 0x0360   (0x0088)  
	FRuntimeFloatCurve                                 DriftForwardInterpLambdaCurve;                              // 0x03E8   (0x0088)  
	FRuntimeFloatCurve                                 DriftOriginOffsetCurve;                                     // 0x0470   (0x0088)  
	FDelMarScaledCurve                                 DriftOriginOffsetInterpLambdaCurve;                         // 0x04F8   (0x0090)  
	float                                              DriftOriginOffsetInactiveLambda;                            // 0x0588   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x058C   (0x0004)  MISSED
	FDelMarCameraFloatBlendedProperty                  DriftKickOffsetDistance;                                    // 0x0590   (0x01D0)  
	float                                              DriftKickOffsetLambda;                                      // 0x0760   (0x0004)  
	float                                              DriftKickOffsetInactiveLambda;                              // 0x0764   (0x0004)  
	bool                                               bDeactivateKickOffsetOnKickEnd;                             // 0x0768   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0769   (0x0007)  MISSED
	FRuntimeFloatCurve                                 DriftRollDegreesCurve;                                      // 0x0770   (0x0088)  
	FDelMarScaledCurve                                 DriftRollDegreesInterpLambdaCurve;                          // 0x07F8   (0x0090)  
	FDelMarScaledCurve                                 DriftScalarCurveCurve;                                      // 0x0888   (0x0090)  
	float                                              GroundMaxPitchForNormalBlend;                               // 0x0918   (0x0004)  
	float                                              GroundExtraPitchForNormalBlend;                             // 0x091C   (0x0004)  
	FDelMarCameraFloatProperty                         StableSpeedDistance;                                        // 0x0920   (0x00B0)  
	FDelMarCameraFloatProperty                         StableSpeedFOV;                                             // 0x09D0   (0x00B0)  
	FDelMarCameraFloatProperty                         StableSpeedHeight;                                          // 0x0A80   (0x00B0)  
	FDelMarCameraFloatProperty                         StableSpeedAngleToOrigin;                                   // 0x0B30   (0x00B0)  
	FDelMarCameraFloatProperty                         AccelerationDistance;                                       // 0x0BE0   (0x00B0)  
	FDelMarCameraFloatProperty                         AccelerationFOV;                                            // 0x0C90   (0x00B0)  
	FDelMarCameraFloatProperty                         AccelerationHeight;                                         // 0x0D40   (0x00B0)  
	FDelMarCameraFloatProperty                         AccelerationAngleToOrigin;                                  // 0x0DF0   (0x00B0)  
	FDelMarCameraFloatProperty                         BaseSpeedDistance;                                          // 0x0EA0   (0x00B0)  
	FDelMarCameraFloatProperty                         BaseSpeedFOV;                                               // 0x0F50   (0x00B0)  
	FDelMarCameraFloatProperty                         BaseSpeedHeight;                                            // 0x1000   (0x00B0)  
	FDelMarCameraFloatProperty                         BaseSpeedAngleToOrigin;                                     // 0x10B0   (0x00B0)  
	FDelMarCameraFloatProperty                         BaseAccelerationDistance;                                   // 0x1160   (0x00B0)  
	FDelMarCameraFloatProperty                         BaseAccelerationFOV;                                        // 0x1210   (0x00B0)  
	FDelMarCameraFloatProperty                         BaseAccelerationHeight;                                     // 0x12C0   (0x00B0)  
	FDelMarCameraFloatProperty                         BaseAccelerationAngleToOrigin;                              // 0x1370   (0x00B0)  
	FDelMarCameraFloatBlendedProperty                  TurboDistance;                                              // 0x1420   (0x01D0)  
	FDelMarCameraFloatBlendedProperty                  TurboFOV;                                                   // 0x15F0   (0x01D0)  
	FDelMarCameraFloatBlendedProperty                  TurboBonusZoneSuccessDistance;                              // 0x17C0   (0x01D0)  
	FDelMarCameraFloatBlendedProperty                  TurboBonusZoneSuccessFOV;                                   // 0x1990   (0x01D0)  
	FDelMarCameraFloatBlendedProperty                  DriftBonusDistance;                                         // 0x1B60   (0x01D0)  
	FDelMarCameraFloatBlendedProperty                  DriftBonusFOV;                                              // 0x1D30   (0x01D0)  
	FDelMarCameraFloatBlendedProperty                  StartlineDistance;                                          // 0x1F00   (0x01D0)  
	FDelMarCameraFloatBlendedProperty                  StartlineFOV;                                               // 0x20D0   (0x01D0)  
	FDelMarCameraFloatProperty                         DraftDistance;                                              // 0x22A0   (0x00B0)  
	FDelMarCameraFloatProperty                         DraftFOV;                                                   // 0x2350   (0x00B0)  
	FDelMarCameraFloatBlendedProperty                  WorldBonusSpeedDistance;                                    // 0x2400   (0x01D0)  
	FDelMarCameraFloatBlendedProperty                  WorldBonusSpeedFOV;                                         // 0x25D0   (0x01D0)  
	SDK_UNDEFINED(8,12809) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(VehicleTarget);                              // 0x27A0   (0x0008)  
	SDK_UNDEFINED(8,12810) /* TWeakObjectPtr<UDelMarCameraInputControllerComponent*> */ __um(CameraInputControllerComponent); // 0x27A8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x900];                                     // 0x27B0   (0x0900)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnWorldBonusSpeedStackLost
	// void OnWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks);                                                 // [0xb963f68] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnWorldBonusSpeedStackGained
	// void OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                               // [0xb963e2c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnTurboDeactivated
	// void OnTurboDeactivated();                                                                                            // [0xb963dfc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnTurboBonusZoneStateChanged
	// void OnTurboBonusZoneStateChanged(EDelMarTurboZoneState ZoneState);                                                   // [0xb963d04] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnTurboActivated
	// void OnTurboActivated();                                                                                              // [0xb963cf0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnStartlineBoostDeactivated
	// void OnStartlineBoostDeactivated();                                                                                   // [0xb963cd0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnStartlineBoostActivated
	// void OnStartlineBoostActivated(float StartlineBoostPerc);                                                             // [0xb963c0c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnDriftKickDeactivated
	// void OnDriftKickDeactivated();                                                                                        // [0xb963be8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnDriftKickActivated
	// void OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState);                                 // [0xb963aa8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnDriftBonusDeactivated
	// void OnDriftBonusDeactivated();                                                                                       // [0xb963a88] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnDriftBonusActivated
	// void OnDriftBonusActivated();                                                                                         // [0xb963a74] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnAppliedTeleportRotation
	// void OnAppliedTeleportRotation();                                                                                     // [0xb963a60] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnAirFreestyleDeactivated
	// void OnAirFreestyleDeactivated();                                                                                     // [0xb963a48] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarVehicleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarVehicleInterface : public UVehicleCosmeticsInterface
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleInterface.WheelsOnGround
	// bool WheelsOnGround();                                                                                                // [0x8f48654] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsStrafeLeft
	// bool IsStrafeLeft();                                                                                                  // [0xb963a20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsStrafeDisabled
	// bool IsStrafeDisabled();                                                                                              // [0x90039cc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsStrafeActive
	// bool IsStrafeActive();                                                                                                // [0x90029d4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsSkyDiving
	// bool IsSkyDiving();                                                                                                   // [0xb9639f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsReattaching
	// bool IsReattaching();                                                                                                 // [0x8fff4d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsLosingAppliedBonusSpeed
	// bool IsLosingAppliedBonusSpeed();                                                                                     // [0xb9639d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsKickingWheels
	// bool IsKickingWheels();                                                                                               // [0xb9639a8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsKickflipSuctionActive
	// bool IsKickflipSuctionActive();                                                                                       // [0xb963980] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsInvulnerabilityActive
	// bool IsInvulnerabilityActive();                                                                                       // [0xb963958] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsDriftControlled
	// bool IsDriftControlled();                                                                                             // [0x58c5340] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsBraking
	// bool IsBraking();                                                                                                     // [0xb963930] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsAllVehicleInputDisabled
	// bool IsAllVehicleInputDisabled();                                                                                     // [0xb963908] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsAirFreestyling
	// bool IsAirFreestyling();                                                                                              // [0x6d0da80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsAccelerating
	// bool IsAccelerating();                                                                                                // [0xb9638e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.InDriftBoostRange
	// bool InDriftBoostRange();                                                                                             // [0xb9638b8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.HasValidDraftingTarget
	// bool HasValidDraftingTarget();                                                                                        // [0xae13684] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetWorldAppliedBonusSpeed
	// float GetWorldAppliedBonusSpeed();                                                                                    // [0xb9632d4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetVelocity
	// FVector GetVelocity();                                                                                                // [0xb963298] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetVehicleForwardState
	// EDelMarVehicleForwardState GetVehicleForwardState();                                                                  // [0xb963270] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetUnderthrustPercentageTankRemaining
	// float GetUnderthrustPercentageTankRemaining();                                                                        // [0x3993430] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetUnderthrustActiveDuration
	// float GetUnderthrustActiveDuration();                                                                                 // [0xb963244] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTurboBonusZoneBonusSpeed
	// float GetTurboBonusZoneBonusSpeed();                                                                                  // [0xb963218] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTurboAppliedBonusSpeed
	// float GetTurboAppliedBonusSpeed();                                                                                    // [0xb9631ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTurboAdditionalActiveSeconds
	// float GetTurboAdditionalActiveSeconds();                                                                              // [0x60fa3cc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTrackPositionComponent
	// class UDelMarTrackPositionComponent* GetTrackPositionComponent();                                                     // [0x39933b4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTotalTimeSkydiving
	// float GetTotalTimeSkydiving();                                                                                        // [0xb9631c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetThrottle
	// float GetThrottle();                                                                                                  // [0xb963194] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTargetSpeed
	// float GetTargetSpeed();                                                                                               // [0xb963168] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTargetDriftSide
	// float GetTargetDriftSide();                                                                                           // [0xb96313c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStrafeCooldownPercentage
	// float GetStrafeCooldownPercentage();                                                                                  // [0xb963110] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSteeringAngle
	// float GetSteeringAngle();                                                                                             // [0xb9630e4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSteering
	// float GetSteering();                                                                                                  // [0xb9630b8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStartlinePercentageMaxBonusSpeedEarned
	// float GetStartlinePercentageMaxBonusSpeedEarned();                                                                    // [0xb96308c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStartlineMaxEarnedBonusSpeed
	// float GetStartlineMaxEarnedBonusSpeed();                                                                              // [0xb963060] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStartlineAppliedBonusSpeed
	// float GetStartlineAppliedBonusSpeed();                                                                                // [0xb963034] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStableSpeed
	// float GetStableSpeed();                                                                                               // [0xb963008] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSpeedometerSpeed
	// float GetSpeedometerSpeed();                                                                                          // [0xb962fdc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSkeletalMeshComponent
	// class USkeletalMeshComponent* GetSkeletalMeshComponent();                                                             // [0xb962fb4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSideSpeed
	// float GetSideSpeed();                                                                                                 // [0xb962f88] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetRemainingTurboActiveSeconds
	// float GetRemainingTurboActiveSeconds();                                                                               // [0xb962f5c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetReattachmentDirection
	// FVector GetReattachmentDirection();                                                                                   // [0xb962f20] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetQueuedBonusSpeed
	// float GetQueuedBonusSpeed();                                                                                          // [0xb962ef4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetPotentialDriftBoostPercentage
	// float GetPotentialDriftBoostPercentage();                                                                             // [0xb962ec8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetPostProcessComponent
	// class UPostProcessComponent* GetPostProcessComponent();                                                               // [0xb962ea0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetPercentageTurboActiveTimeRemaining
	// float GetPercentageTurboActiveTimeRemaining();                                                                        // [0xb962e74] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetOversteerAccumulationPercentage
	// float GetOversteerAccumulationPercentage();                                                                           // [0xb962e48] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetNormalizedForwardSpeed
	// float GetNormalizedForwardSpeed();                                                                                    // [0xb962e1c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetNormalizedBonusSpeed
	// float GetNormalizedBonusSpeed();                                                                                      // [0xb962df0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetMaxNumTurboCharges
	// float GetMaxNumTurboCharges();                                                                                        // [0xb962dc4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetLandingData
	// FDelMarVehicleLandingData GetLandingData();                                                                           // [0xb962d8c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetKickflipDuration
	// float GetKickflipDuration();                                                                                          // [0xb962d60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetKickflipDistanceToSuctionSurface
	// float GetKickflipDistanceToSuctionSurface();                                                                          // [0x662f1f4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetKickflipActivationCharges
	// int32_t GetKickflipActivationCharges();                                                                               // [0xb962d38] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetForwardSpeed
	// float GetForwardSpeed();                                                                                              // [0xb962d0c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDriftSlipAngleRatio
	// float GetDriftSlipAngleRatio();                                                                                       // [0xb962ce0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDriftDuration
	// float GetDriftDuration();                                                                                             // [0xb962cb4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDriftBoostAppliedBonusSpeed
	// float GetDriftBoostAppliedBonusSpeed();                                                                               // [0xb962c88] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDriftAngle
	// float GetDriftAngle();                                                                                                // [0xb962c5c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDraftingState
	// EDelmarDraftingState GetDraftingState();                                                                              // [0x634794c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDraftingMaxBonusSpeedPercentage
	// float GetDraftingMaxBonusSpeedPercentage();                                                                           // [0xa8dafe0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetCurrentTurboBonusZoneState
	// EDelMarTurboZoneState GetCurrentTurboBonusZoneState();                                                                // [0xb962c34] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetCurrentNumTurboCharges
	// float GetCurrentNumTurboCharges();                                                                                    // [0xb962c08] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetCosmeticComponent
	// class UDelMarVehicleCosmeticComponent* GetCosmeticComponent();                                                        // [0xb962be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetBonusSpeed
	// float GetBonusSpeed();                                                                                                // [0xb962bb4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetBaseTargetSpeed
	// float GetBaseTargetSpeed();                                                                                           // [0xb962b88] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetBaseForwardSpeed
	// float GetBaseForwardSpeed();                                                                                          // [0xb962b5c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetAcceleration
	// float GetAcceleration();                                                                                              // [0xb962b30] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.CanStrafeBeActivated
	// bool CanStrafeBeActivated();                                                                                          // [0xb9629d8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.AnyWheelsOnGround
	// bool AnyWheelsOnGround();                                                                                             // [0xb9629b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DelMarCore.DelMarLoadout
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDelMarLoadout
{ 
	SDK_UNDEFINED(80,12811) /* TMap<FGameplayTag, UDelMarCosmeticItemDefinition*> */ __um(Items);                  // 0x0000   (0x0050)  
};

/// Class /Script/DelMarCore.DelMarVehicleLoadoutSetup
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarVehicleLoadoutSetup : public UPrimaryDataAsset
{ 
public:
	FDelMarLoadout                                     Loadout;                                                    // 0x0030   (0x0050)  
};

/// Class /Script/DelMarCore.DelMarVehicleManager
/// Size: 0x0170 (0x000030 - 0x0001A0)
class UDelMarVehicleManager : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x170];                                     // 0x0030   (0x0170)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleManager.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xb969358] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarVehicleManager.HandlePawnPlayerStateSet
	// void HandlePawnPlayerStateSet(class AFortPlayerPawn* Pawn);                                                           // [0xb968c14] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarVehicleManager.HandlePawnExitedVehicle
	// void HandlePawnExitedVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* Pawn, int32_t SeatIndex);             // [0xb96898c] Final|Native|Public|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleManager.HandlePawnEnteredVehicle
	// void HandlePawnEnteredVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* Pawn, int32_t SeatIndex);            // [0xb968704] Final|Native|Public|HasOutParms 
};

/// Struct /Script/DelMarCore.DelMarInputAction
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarInputAction
{ 
	class UInputAction*                                Action;                                                     // 0x0000   (0x0008)  
	FGameplayTag                                       DisabledTag;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleCachedContact
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDelMarVehicleCachedContact
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FVector                                            Impulse;                                                    // 0x0030   (0x0018)  
	FVector                                            DeltaVelocity;                                              // 0x0048   (0x0018)  
	bool                                               bVehicleContact;                                            // 0x0060   (0x0001)  
	bool                                               bDriveableContact;                                          // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	SDK_UNDEFINED(8,12812) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(Component);                             // 0x0064   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarRubberbandingConfig
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDelMarRubberbandingConfig
{ 
	bool                                               bRubberbandingEnabled;                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinPackDistance;                                            // 0x0004   (0x0004)  
	float                                              MaxPackDistance;                                            // 0x0008   (0x0004)  
	float                                              PackDistanceOffset;                                         // 0x000C   (0x0004)  
	float                                              MinDistanceFromPack;                                        // 0x0010   (0x0004)  
	float                                              MaxDistanceFromPack;                                        // 0x0014   (0x0004)  
	int32_t                                            NumPlayersForPackDistance;                                  // 0x0018   (0x0004)  
	float                                              MaxPackDistanceGainedPerSecond;                             // 0x001C   (0x0004)  
	float                                              MaxPackDistanceLostPerSecond;                               // 0x0020   (0x0004)  
	float                                              MaxBonusSpeedScalar;                                        // 0x0024   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarStartlineBoostData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarStartlineBoostData
{ 
	bool                                               bFailed;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ReactionSeconds;                                            // 0x0004   (0x0004)  
	float                                              RunStartTime;                                               // 0x0008   (0x0004)  
	float                                              IntervalSeconds;                                            // 0x000C   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarVehicleSpawnInfo
{ 
	bool                                               bFirstVehicleForPlayer;                                     // 0x0000   (0x0001)  
	bool                                               bPreviousVehicleDemolished;                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	double                                             ServerSpawnTime;                                            // 0x0008   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarVehicle
/// Size: 0x0C90 (0x001EF0 - 0x002B80)
class ADelMarVehicle : public AFortAthenaSKVehicle
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x1EF0   (0x0050)  MISSED
	TArray<class UClass*>                              DelMarCameraModes;                                          // 0x1F40   (0x0010)  
	bool                                               bLocalDriverHasReplicatedVehicle;                           // 0x1F50   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x1F51   (0x000F)  MISSED
	FFortAthenaVehicleInputState                       PendingDriverInputState;                                    // 0x1F60   (0x0040)  
	float                                              TurboCharges;                                               // 0x1FA0   (0x0004)  
	float                                              DistanceToPack;                                             // 0x1FA4   (0x0004)  
	float                                              DistanceFromTrackFinish;                                    // 0x1FA8   (0x0004)  
	bool                                               ATTR_bVehicleThrottleDisabled;                              // 0x1FAC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x1FAD   (0x0003)  MISSED
	FDelMarInputAction                                 ThrottleAction;                                             // 0x1FB0   (0x0010)  
	FDelMarInputAction                                 BrakeAction;                                                // 0x1FC0   (0x0010)  
	FDelMarInputAction                                 SteerAction;                                                // 0x1FD0   (0x0010)  
	FDelMarInputAction                                 SteerLeftAction;                                            // 0x1FE0   (0x0010)  
	FDelMarInputAction                                 SteerRightAction;                                           // 0x1FF0   (0x0010)  
	FDelMarInputAction                                 PitchAction;                                                // 0x2000   (0x0010)  
	FDelMarInputAction                                 PitchUpAction;                                              // 0x2010   (0x0010)  
	FDelMarInputAction                                 PitchDownAction;                                            // 0x2020   (0x0010)  
	FDelMarInputAction                                 RollAction;                                                 // 0x2030   (0x0010)  
	FDelMarInputAction                                 YawAction;                                                  // 0x2040   (0x0010)  
	FDelMarInputAction                                 DriftAction;                                                // 0x2050   (0x0010)  
	FDelMarInputAction                                 JumpAction;                                                 // 0x2060   (0x0010)  
	FDelMarInputAction                                 KickFlipAction;                                             // 0x2070   (0x0010)  
	FDelMarInputAction                                 UnderthrustAction;                                          // 0x2080   (0x0010)  
	FDelMarInputAction                                 TurboAction;                                                // 0x2090   (0x0010)  
	FDelMarInputAction                                 DelMarExitAction;                                           // 0x20A0   (0x0010)  
	FDelMarInputAction                                 ResetRunAction;                                             // 0x20B0   (0x0010)  
	FDelMarInputAction                                 AirFreestyleAction;                                         // 0x20C0   (0x0010)  
	FDelMarInputAction                                 StrafeAction;                                               // 0x20D0   (0x0010)  
	FDelMarInputAction                                 AerialPitchAction;                                          // 0x20E0   (0x0010)  
	FDelMarInputAction                                 DemolishAction;                                             // 0x20F0   (0x0010)  
	class UClass*                                      InputManagerClass;                                          // 0x2100   (0x0008)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x2108   (0x0018)  MISSED
	float                                              IdleVelocityLengthThreshold;                                // 0x2120   (0x0004)  
	SDK_UNDEFINED(8,12813) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x2124   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x212C   (0x0004)  MISSED
	class UDelMarVehicleNetworkPhysicsComponent*       NetworkPhysicsComponent;                                    // 0x2130   (0x0008)  
	class UDelMarVehicleCosmeticComponent*             CosmeticComponent;                                          // 0x2138   (0x0008)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x2140   (0x0008)  MISSED
	class UDelMarVehicleMovementSet*                   DelMarVehicleMovementSet;                                   // 0x2148   (0x0008)  
	class UFortClientSettingsRecord*                   FortSettings;                                               // 0x2150   (0x0008)  
	class UClass*                                      TrackPositionComponentClass;                                // 0x2158   (0x0008)  
	class UDelMarTrackPositionComponent*               TrackPositionComponent;                                     // 0x2160   (0x0008)  
	TArray<FDelMarVehicleCachedContact>                CachedContacts;                                             // 0x2168   (0x0010)  
	float                                              NearbyTrackDistanceThreshold;                               // 0x2178   (0x0004)  
	unsigned char                                      UnknownData06_5[0xA0];                                      // 0x217C   (0x00A0)  MISSED
	float                                              VisualSteerAngleInterpRate;                                 // 0x221C   (0x0004)  
	class UDelMarVehicleBodySetup*                     BodySetup;                                                  // 0x2220   (0x0008)  
	SDK_UNDEFINED(8,12814) /* TWeakObjectPtr<UDelMarRaceConfigComponent*> */ __um(ActiveRaceConfig);               // 0x2228   (0x0008)  
	SDK_UNDEFINED(8,12815) /* TWeakObjectPtr<UDelMarTimeManagerComponent*> */ __um(RaceTimeManager);               // 0x2230   (0x0008)  
	SDK_UNDEFINED(8,12816) /* TWeakObjectPtr<UDelMarGlobalInputDisabler*> */ __um(GlobalInputDisabler);            // 0x2238   (0x0008)  
	unsigned char                                      UnknownData07_5[0x10];                                      // 0x2240   (0x0010)  MISSED
	SDK_UNDEFINED(16,12817) /* FMulticastInlineDelegate */ __um(OnVehicleWheelsLeftGround);                        // 0x2250   (0x0010)  
	SDK_UNDEFINED(16,12818) /* FMulticastInlineDelegate */ __um(OnSpeedometerSpeedChanged);                        // 0x2260   (0x0010)  
	float                                              MinNoThrottleSpeed;                                         // 0x2270   (0x0004)  
	float                                              SpeedSlowdownSpeedometerSeconds;                            // 0x2274   (0x0004)  
	TArray<FGameplayTag>                               SpeedSlowdownTags;                                          // 0x2278   (0x0010)  
	EDelMarInvertSteerMethod                           InvertSteerMethod;                                          // 0x2288   (0x0001)  
	bool                                               bPitchInverted;                                             // 0x2289   (0x0001)  
	bool                                               bVerticalKickflipInverted;                                  // 0x228A   (0x0001)  
	bool                                               bAerialPitchActivationEnabled;                              // 0x228B   (0x0001)  
	unsigned char                                      UnknownData08_5[0x34];                                      // 0x228C   (0x0034)  MISSED
	SDK_UNDEFINED(16,12819) /* FMulticastInlineDelegate */ __um(OnBonusSpeedActivated);                            // 0x22C0   (0x0010)  
	SDK_UNDEFINED(16,12820) /* FMulticastInlineDelegate */ __um(OnBonusSpeedDeactivated);                          // 0x22D0   (0x0010)  
	SDK_UNDEFINED(16,12821) /* FMulticastInlineDelegate */ __um(OnBonusSpeedChanged);                              // 0x22E0   (0x0010)  
	SDK_UNDEFINED(16,12822) /* FMulticastInlineDelegate */ __um(OnAnyWheelsOnGroundChanged);                       // 0x22F0   (0x0010)  
	SDK_UNDEFINED(16,12823) /* FMulticastInlineDelegate */ __um(OnWheelsOnGroundChanged);                          // 0x2300   (0x0010)  
	SDK_UNDEFINED(16,12824) /* FMulticastInlineDelegate */ __um(OnVehicleForwardStateChanged);                     // 0x2310   (0x0010)  
	unsigned char                                      UnknownData09_5[0xC0];                                      // 0x2320   (0x00C0)  MISSED
	SDK_UNDEFINED(16,12825) /* FMulticastInlineDelegate */ __um(OnDelMarVehicleHitWall);                           // 0x23E0   (0x0010)  
	SDK_UNDEFINED(16,12826) /* FMulticastInlineDelegate */ __um(OnDelMarVehicleHitVehicle);                        // 0x23F0   (0x0010)  
	SDK_UNDEFINED(16,12827) /* FMulticastInlineDelegate */ __um(OnDelMarVehicleHitByVehicle);                      // 0x2400   (0x0010)  
	SDK_UNDEFINED(16,12828) /* FMulticastInlineDelegate */ __um(OnVehicleLanded);                                  // 0x2410   (0x0010)  
	unsigned char                                      UnknownData10_5[0x10];                                      // 0x2420   (0x0010)  MISSED
	SDK_UNDEFINED(16,12829) /* FMulticastInlineDelegate */ __um(OnWorldBonusSpeedStackGained);                     // 0x2430   (0x0010)  
	SDK_UNDEFINED(16,12830) /* FMulticastInlineDelegate */ __um(OnWorldBonusSpeedStackLost);                       // 0x2440   (0x0010)  
	unsigned char                                      UnknownData11_5[0x70];                                      // 0x2450   (0x0070)  MISSED
	SDK_UNDEFINED(16,12831) /* FMulticastInlineDelegate */ __um(OnVehicleStartedSkydiving);                        // 0x24C0   (0x0010)  
	SDK_UNDEFINED(16,12832) /* FMulticastInlineDelegate */ __um(OnVehicleStoppedSkydiving);                        // 0x24D0   (0x0010)  
	unsigned char                                      UnknownData12_5[0x8];                                       // 0x24E0   (0x0008)  MISSED
	SDK_UNDEFINED(16,12833) /* FMulticastInlineDelegate */ __um(OnDriftActivated);                                 // 0x24E8   (0x0010)  
	SDK_UNDEFINED(16,12834) /* FMulticastInlineDelegate */ __um(OnDriftDeactivated);                               // 0x24F8   (0x0010)  
	SDK_UNDEFINED(16,12835) /* FMulticastInlineDelegate */ __um(OnDriftSlipAngleRatioChanged);                     // 0x2508   (0x0010)  
	SDK_UNDEFINED(16,12836) /* FMulticastInlineDelegate */ __um(OnDriftKickActivated);                             // 0x2518   (0x0010)  
	SDK_UNDEFINED(16,12837) /* FMulticastInlineDelegate */ __um(OnDriftKickDeactivated);                           // 0x2528   (0x0010)  
	SDK_UNDEFINED(16,12838) /* FMulticastInlineDelegate */ __um(OnDriftControlChanged);                            // 0x2538   (0x0010)  
	SDK_UNDEFINED(16,12839) /* FMulticastInlineDelegate */ __um(OnDriftDurationChanged);                           // 0x2548   (0x0010)  
	unsigned char                                      UnknownData13_5[0x40];                                      // 0x2558   (0x0040)  MISSED
	SDK_UNDEFINED(16,12840) /* FMulticastInlineDelegate */ __um(OnEnteredDriftBoostRange);                         // 0x2598   (0x0010)  
	SDK_UNDEFINED(16,12841) /* FMulticastInlineDelegate */ __um(OnExitedDriftBoostRange);                          // 0x25A8   (0x0010)  
	SDK_UNDEFINED(16,12842) /* FMulticastInlineDelegate */ __um(OnStartedLosingAppliedDriftBoost);                 // 0x25B8   (0x0010)  
	SDK_UNDEFINED(16,12843) /* FMulticastInlineDelegate */ __um(OnDriftBoostActivated);                            // 0x25C8   (0x0010)  
	SDK_UNDEFINED(16,12844) /* FMulticastInlineDelegate */ __um(OnDriftBoostDeactivated);                          // 0x25D8   (0x0010)  
	SDK_UNDEFINED(16,12845) /* FMulticastInlineDelegate */ __um(OnMaxPotentialReached);                            // 0x25E8   (0x0010)  
	SDK_UNDEFINED(16,12846) /* FMulticastInlineDelegate */ __um(OnMaxPotentialLost);                               // 0x25F8   (0x0010)  
	SDK_UNDEFINED(16,12847) /* FMulticastInlineDelegate */ __um(OnAllPotentialLost);                               // 0x2608   (0x0010)  
	SDK_UNDEFINED(16,12848) /* FMulticastInlineDelegate */ __um(OnEarnedDriftBoost);                               // 0x2618   (0x0010)  
	SDK_UNDEFINED(16,12849) /* FMulticastInlineDelegate */ __um(OnPotentialDriftBoostChanged);                     // 0x2628   (0x0010)  
	unsigned char                                      UnknownData14_5[0x38];                                      // 0x2638   (0x0038)  MISSED
	SDK_UNDEFINED(16,12850) /* FMulticastInlineDelegate */ __um(OnDraftActivated);                                 // 0x2670   (0x0010)  
	SDK_UNDEFINED(16,12851) /* FMulticastInlineDelegate */ __um(OnDraftDeactivated);                               // 0x2680   (0x0010)  
	SDK_UNDEFINED(16,12852) /* FMulticastInlineDelegate */ __um(OnDraftStateChanged);                              // 0x2690   (0x0010)  
	SDK_UNDEFINED(16,12853) /* FMulticastInlineDelegate */ __um(OnReachedMaxBonusSpeed);                           // 0x26A0   (0x0010)  
	unsigned char                                      UnknownData15_5[0x2C];                                      // 0x26B0   (0x002C)  MISSED
	FDelMarRubberbandingConfig                         RubberbandingConfig;                                        // 0x26DC   (0x0028)  
	unsigned char                                      UnknownData16_5[0x34];                                      // 0x2704   (0x0034)  MISSED
	SDK_UNDEFINED(16,12854) /* FMulticastInlineDelegate */ __um(OnStartlineBoostActivated);                        // 0x2738   (0x0010)  
	SDK_UNDEFINED(16,12855) /* FMulticastInlineDelegate */ __um(OnStartlineBoostDeactivated);                      // 0x2748   (0x0010)  
	SDK_UNDEFINED(16,12856) /* FMulticastInlineDelegate */ __um(OnStartlineBoostFailed);                           // 0x2758   (0x0010)  
	FDelMarStartlineBoostData                          StartlineBoostData;                                         // 0x2768   (0x0010)  
	unsigned char                                      UnknownData17_5[0x20];                                      // 0x2778   (0x0020)  MISSED
	SDK_UNDEFINED(16,12857) /* FMulticastInlineDelegate */ __um(OnStrafeActivated);                                // 0x2798   (0x0010)  
	SDK_UNDEFINED(16,12858) /* FMulticastInlineDelegate */ __um(OnStrafeDeactivated);                              // 0x27A8   (0x0010)  
	SDK_UNDEFINED(16,12859) /* FMulticastInlineDelegate */ __um(OnStrafeCooldownChanged);                          // 0x27B8   (0x0010)  
	SDK_UNDEFINED(16,12860) /* FMulticastInlineDelegate */ __um(OnStrafeUsabilityChanged);                         // 0x27C8   (0x0010)  
	SDK_UNDEFINED(16,12861) /* FMulticastInlineDelegate */ __um(OnStrafeDisabledChanged);                          // 0x27D8   (0x0010)  
	unsigned char                                      UnknownData18_5[0x20];                                      // 0x27E8   (0x0020)  MISSED
	SDK_UNDEFINED(16,12862) /* FMulticastInlineDelegate */ __um(OnTurboActivated);                                 // 0x2808   (0x0010)  
	SDK_UNDEFINED(16,12863) /* FMulticastInlineDelegate */ __um(OnTurboDeactivated);                               // 0x2818   (0x0010)  
	SDK_UNDEFINED(16,12864) /* FMulticastInlineDelegate */ __um(OnTurboChargesUpdated);                            // 0x2828   (0x0010)  
	SDK_UNDEFINED(16,12865) /* FMulticastInlineDelegate */ __um(OnTurboBonusZoneStateChanged);                     // 0x2838   (0x0010)  
	SDK_UNDEFINED(16,12866) /* FMulticastInlineDelegate */ __um(OnTurboChargeUsed);                                // 0x2848   (0x0010)  
	unsigned char                                      UnknownData19_5[0x38];                                      // 0x2858   (0x0038)  MISSED
	SDK_UNDEFINED(16,12867) /* FMulticastInlineDelegate */ __um(OnKickflipActivated);                              // 0x2890   (0x0010)  
	SDK_UNDEFINED(16,12868) /* FMulticastInlineDelegate */ __um(OnKickflipDeactivated);                            // 0x28A0   (0x0010)  
	SDK_UNDEFINED(16,12869) /* FMulticastInlineDelegate */ __um(OnKickflipSuctionActivated);                       // 0x28B0   (0x0010)  
	SDK_UNDEFINED(16,12870) /* FMulticastInlineDelegate */ __um(OnKickflipSuctionDeactivated);                     // 0x28C0   (0x0010)  
	SDK_UNDEFINED(16,12871) /* FMulticastInlineDelegate */ __um(OnKickflipDistanceToSuctionSurfaceChanged);        // 0x28D0   (0x0010)  
	SDK_UNDEFINED(16,12872) /* FMulticastInlineDelegate */ __um(OnKickflipDurationChanged);                        // 0x28E0   (0x0010)  
	SDK_UNDEFINED(16,12873) /* FMulticastInlineDelegate */ __um(OnKickflipActivationChargesChanged);               // 0x28F0   (0x0010)  
	unsigned char                                      UnknownData20_5[0x88];                                      // 0x2900   (0x0088)  MISSED
	SDK_UNDEFINED(16,12874) /* FMulticastInlineDelegate */ __um(OnReattachmentActivated);                          // 0x2988   (0x0010)  
	SDK_UNDEFINED(16,12875) /* FMulticastInlineDelegate */ __um(OnReattachmentDeactivated);                        // 0x2998   (0x0010)  
	FVector                                            ForcedReattachmentDirection;                                // 0x29A8   (0x0018)  
	unsigned char                                      UnknownData21_5[0x28];                                      // 0x29C0   (0x0028)  MISSED
	SDK_UNDEFINED(16,12876) /* FMulticastInlineDelegate */ __um(OnUnderthrustActivated);                           // 0x29E8   (0x0010)  
	SDK_UNDEFINED(16,12877) /* FMulticastInlineDelegate */ __um(OnUnderthrustDeactivated);                         // 0x29F8   (0x0010)  
	SDK_UNDEFINED(16,12878) /* FMulticastInlineDelegate */ __um(OnUnderthrustPercentChanged);                      // 0x2A08   (0x0010)  
	unsigned char                                      UnknownData22_5[0x18];                                      // 0x2A18   (0x0018)  MISSED
	SDK_UNDEFINED(16,12879) /* FMulticastInlineDelegate */ __um(OnJumpActivated);                                  // 0x2A30   (0x0010)  
	SDK_UNDEFINED(16,12880) /* FMulticastInlineDelegate */ __um(OnJumpDeactivated);                                // 0x2A40   (0x0010)  
	unsigned char                                      UnknownData23_5[0x8];                                       // 0x2A50   (0x0008)  MISSED
	float                                              DemolitionRespawnSeconds;                                   // 0x2A58   (0x0004)  
	unsigned char                                      UnknownData24_5[0x4];                                       // 0x2A5C   (0x0004)  MISSED
	SDK_UNDEFINED(16,12881) /* FMulticastInlineDelegate */ __um(OnVehicleDemolished);                              // 0x2A60   (0x0010)  
	SDK_UNDEFINED(16,12882) /* FMulticastInlineDelegate */ __um(OnDemolishPressDurationUpdated);                   // 0x2A70   (0x0010)  
	unsigned char                                      UnknownData25_5[0x18];                                      // 0x2A80   (0x0018)  MISSED
	SDK_UNDEFINED(16,12883) /* FMulticastInlineDelegate */ __um(OnHazardHit);                                      // 0x2A98   (0x0010)  
	SDK_UNDEFINED(16,12884) /* FMulticastInlineDelegate */ __um(OnInvulnerabilityActivated);                       // 0x2AA8   (0x0010)  
	SDK_UNDEFINED(16,12885) /* FMulticastInlineDelegate */ __um(OnInvulnerabilityDeactivated);                     // 0x2AB8   (0x0010)  
	unsigned char                                      UnknownData26_5[0x4];                                       // 0x2AC8   (0x0004)  MISSED
	float                                              MaxSpawnBroadcastSeconds;                                   // 0x2ACC   (0x0004)  
	FDelMarVehicleSpawnInfo                            SpawnInfo;                                                  // 0x2AD0   (0x0010)  
	SDK_UNDEFINED(16,12886) /* FMulticastInlineDelegate */ __um(OnDelMarVehicleSpawned);                           // 0x2AE0   (0x0010)  
	bool                                               bAllowExitingVehicle;                                       // 0x2AF0   (0x0001)  
	unsigned char                                      UnknownData27_5[0x7];                                       // 0x2AF1   (0x0007)  MISSED
	SDK_UNDEFINED(16,12887) /* FMulticastInlineDelegate */ __um(OnVehicleTeleportEntered);                         // 0x2AF8   (0x0010)  
	SDK_UNDEFINED(16,12888) /* FMulticastInlineDelegate */ __um(OnVehicleTeleportExit);                            // 0x2B08   (0x0010)  
	SDK_UNDEFINED(16,12889) /* FMulticastInlineDelegate */ __um(OnVehicleAppliedTeleportRotation);                 // 0x2B18   (0x0010)  
	SDK_UNDEFINED(16,12890) /* FMulticastInlineDelegate */ __um(OnAirFreestyleActivated);                          // 0x2B28   (0x0010)  
	SDK_UNDEFINED(16,12891) /* FMulticastInlineDelegate */ __um(OnAirFreestyleDeactivated);                        // 0x2B38   (0x0010)  
	unsigned char                                      UnknownData28_5[0x8];                                       // 0x2B48   (0x0008)  MISSED
	class ADelMarAudioController*                      CachedVehicleAudioController;                               // 0x2B50   (0x0008)  
	bool                                               bVehicleCollisionsEnabled;                                  // 0x2B58   (0x0001)  
	bool                                               bPawnCollisionsEnabled;                                     // 0x2B59   (0x0001)  
	unsigned char                                      UnknownData29_5[0xE];                                       // 0x2B5A   (0x000E)  MISSED
	bool                                               bUsePredictiveInterpolation;                                // 0x2B68   (0x0001)  
	unsigned char                                      UnknownData30_5[0x7];                                       // 0x2B69   (0x0007)  MISSED
	class UPostProcessComponent*                       PostProcessComp;                                            // 0x2B70   (0x0008)  
	unsigned char                                      UnknownData31_6[0x8];                                       // 0x2B78   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicle.VehicleHasTag
	// bool VehicleHasTag(FGameplayTag InTag);                                                                               // [0xba3cab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.TryGetFortClientSettings
	// void TryGetFortClientSettings();                                                                                      // [0xba3caa0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.TeleportVehicleExited
	// void TeleportVehicleExited();                                                                                         // [0x84053a4] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarVehicle.TeleportVehicleEntered
	// void TeleportVehicleEntered();                                                                                        // [0x9578f94] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarVehicle.SetVehicleMesh
	// void SetVehicleMesh(class USkeletalMesh* NewMesh, class UPhysicsAsset* PhysicsAsset);                                 // [0xba3c958] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.SetTeleportRotation
	// void SetTeleportRotation(FRotator DestRotation);                                                                      // [0xba3c898] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
	// Function /Script/DelMarCore.DelMarVehicle.ServerTeleportVehicleExited
	// void ServerTeleportVehicleExited();                                                                                   // [0x965cc04] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.ServerTeleportVehicleEntered
	// void ServerTeleportVehicleEntered();                                                                                  // [0x9659fcc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.ServerSetLocalDriverHasReplicatedTheVehicle
	// void ServerSetLocalDriverHasReplicatedTheVehicle(bool bNewValue);                                                     // [0xba3c7d0] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerRemoveReplicatedGameplayTags
	// void ServerRemoveReplicatedGameplayTags(FGameplayTagContainer InTags);                                                // [0xba3c6e0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerRemoveReplicatedGameplayTag
	// void ServerRemoveReplicatedGameplayTag(FGameplayTag InTag);                                                           // [0xba3c61c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerNotifyTurboActivated
	// void ServerNotifyTurboActivated();                                                                                    // [0x964c518] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerDemolishVehicle
	// void ServerDemolishVehicle(FGameplayTag InCausedByTag);                                                               // [0xba3c558] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.ServerAddReplicatedGameplayTags
	// void ServerAddReplicatedGameplayTags(FGameplayTagContainer InTags);                                                   // [0xba3c468] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerAddReplicatedGameplayTag
	// void ServerAddReplicatedGameplayTag(FGameplayTag InTag);                                                              // [0xba3c3a4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ResetTrackPosition
	// void ResetTrackPosition(class ADelMarTrackBase* Track, int32_t TrackSegment);                                         // [0xba3c260] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarVehicle.ResetRunPressed
	// void ResetRunPressed();                                                                                               // [0xba3c248] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_TurboCharges
	// void OnRep_TurboCharges();                                                                                            // [0xba3bb40] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_StartlineBoostData
	// void OnRep_StartlineBoostData();                                                                                      // [0xba3bb28] Final|Native|Private 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_SpawnInfo
	// void OnRep_SpawnInfo();                                                                                               // [0xba3bb14] Final|Native|Private 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_bVehicleCollisionsEnabled
	// void OnRep_bVehicleCollisionsEnabled();                                                                               // [0xba3bb74] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_bPawnCollisionsEnabled
	// void OnRep_bPawnCollisionsEnabled();                                                                                  // [0xba3bb5c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.IsWheelOnGround
	// bool IsWheelOnGround(EDelMarVehicleWheelIndex WheelIndex);                                                            // [0xba3b75c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.IsRespawnEffectSignificant
	// bool IsRespawnEffectSignificant();                                                                                    // [0xba3b728] Final|Native|Private|BlueprintCallable|Const 
	// Function /Script/DelMarCore.DelMarVehicle.IsInvulnerabilityActive
	// bool IsInvulnerabilityActive();                                                                                       // [0xba3b6f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.HandleThrottleToggleChanged
	// void HandleThrottleToggleChanged();                                                                                   // [0xba3b6e4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleThrottleDeadzoneChanged
	// void HandleThrottleDeadzoneChanged();                                                                                 // [0xba3b6d0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleSteerDeadzoneChanged
	// void HandleSteerDeadzoneChanged();                                                                                    // [0xba3b6bc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandlePitchDeadzoneChanged
	// void HandlePitchDeadzoneChanged();                                                                                    // [0xba3b6a8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleOnVehicleCosmeticsFinished
	// void HandleOnVehicleCosmeticsFinished();                                                                              // [0xba3b694] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleAerialThrottleBrakeChanged
	// void HandleAerialThrottleBrakeChanged();                                                                              // [0xba3b5bc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.GetTrackPositionComponent
	// class UDelMarTrackPositionComponent* GetTrackPositionComponent();                                                     // [0xba3b58c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.GetRaceManager
	// class ADelMarRaceManager* GetRaceManager();                                                                           // [0xba3b564] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.GetNewestStackActiveDurationFromSource
	// float GetNewestStackActiveDurationFromSource(FGameplayTag Source);                                                    // [0xba3b494] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.GetCosmeticComponent
	// class UDelMarVehicleCosmeticComponent* GetCosmeticComponent();                                                        // [0xba3b3f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.GetAudioComponentGroup
	// class UDelMarAudioComponentGroup* GetAudioComponentGroup();                                                           // [0xba3b0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.DemolishVehicle
	// void DemolishVehicle(FGameplayTag InCausedByTag);                                                                     // [0xba3af3c] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarVehicle.AddWorldBonusSpeedStack
	// void AddWorldBonusSpeedStack(FDelMarWorldBonusSpeedStack& BonusSpeedStack);                                           // [0xba3ae90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.AddTargetSpeedAdjustment
	// void AddTargetSpeedAdjustment(FName Source, float Value);                                                             // [0xba3ad4c] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
};

/// Struct /Script/DelMarCore.DelMarVehicleInContinuous
/// Size: 0x0000 (0x000040 - 0x000040)
struct FDelMarVehicleInContinuous : FFortAthenaVehicleInputState
{ 
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Ability
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarVehicleReplicatedState_Ability
{ 
	bool                                               bActive;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              duration;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_AutoUpright
/// Size: 0x0018 (0x000008 - 0x000020)
struct FDelMarVehicleReplicatedState_AutoUpright : FDelMarVehicleReplicatedState_Ability
{ 
	FVector_NetQuantizeNormal                          TargetVehicleUp;                                            // 0x0008   (0x0018)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_BonusSpeedAbility
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FDelMarVehicleReplicatedState_BonusSpeedAbility : FDelMarVehicleReplicatedState_Ability
{ 
	float                                              AppliedBonusSpeed;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Drafting
/// Size: 0x000C (0x00000C - 0x000018)
struct FDelMarVehicleReplicatedState_Drafting : FDelMarVehicleReplicatedState_BonusSpeedAbility
{ 
	float                                              AccumulatedLosingSpeedSeconds;                              // 0x000C   (0x0004)  
	float                                              AccumulatedStartDraftingSeconds;                            // 0x0010   (0x0004)  
	float                                              TotalEarnedBonusSpeed;                                      // 0x0014   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Drift
/// Size: 0x0028 (0x000008 - 0x000030)
struct FDelMarVehicleReplicatedState_Drift : FDelMarVehicleReplicatedState_Ability
{ 
	float                                              CurrentRotationAngle;                                       // 0x0008   (0x0004)  
	EDelMarVehicleDriftState                           DriftState;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              TargetDriftSide;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector_NetQuantize100                             InitialImpulseTorque;                                       // 0x0018   (0x0018)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_DriftBoost
/// Size: 0x0014 (0x00000C - 0x000020)
struct FDelMarVehicleReplicatedState_DriftBoost : FDelMarVehicleReplicatedState_BonusSpeedAbility
{ 
	float                                              AccumulatedDriftBoostSeconds;                               // 0x000C   (0x0004)  
	float                                              AccumulatedWaitingPeriodSeconds;                            // 0x0010   (0x0004)  
	float                                              TotalEarnedBonusSpeed;                                      // 0x0014   (0x0004)  
	float                                              QueuedBonusSpeed;                                           // 0x0018   (0x0004)  
	float                                              QueuedBoostExtraSeconds;                                    // 0x001C   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Drive
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarVehicleReplicatedState_Drive
{ 
	float                                              BaseTargetSpeed;                                            // 0x0000   (0x0004)  
	bool                                               bInvertedSteeringActive;                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            bDisableDriveForces;                                        // 0x0008   (0x0004)  
	int32_t                                            bDisableWheelFriction;                                      // 0x000C   (0x0004)  
	FVector_NetQuantizeNormal                          LastAverageWheelWorldContactNormal;                         // 0x0010   (0x0018)  
	float                                              MinimumLandingSpeed;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Kickflip
/// Size: 0x0058 (0x000008 - 0x000060)
struct FDelMarVehicleReplicatedState_Kickflip : FDelMarVehicleReplicatedState_Ability
{ 
	FVector_NetQuantizeNormal                          RelativeUpDirection;                                        // 0x0008   (0x0018)  
	FVector_NetQuantizeNormal                          KickDirection;                                              // 0x0020   (0x0018)  
	bool                                               bLeftSide;                                                  // 0x0038   (0x0001)  
	bool                                               bTakeLongestRoll;                                           // 0x0039   (0x0001)  
	bool                                               bRotateTowardsVelocity;                                     // 0x003A   (0x0001)  
	bool                                               bCanStartLongRoll;                                          // 0x003B   (0x0001)  
	int32_t                                            StartingRollSign;                                           // 0x003C   (0x0004)  
	float                                              KickflipKeybindPressTime;                                   // 0x0040   (0x0004)  
	int32_t                                            ActivationCharges;                                          // 0x0044   (0x0004)  
	FVector_NetQuantizeNormal                          StartingPrimaryDirection;                                   // 0x0048   (0x0018)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Oversteer
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDelMarVehicleReplicatedState_Oversteer
{ 
	float                                              AccumulatedSteer;                                           // 0x0000   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Reattachment
/// Size: 0x0020 (0x000008 - 0x000028)
struct FDelMarVehicleReplicatedState_Reattachment : FDelMarVehicleReplicatedState_Ability
{ 
	FVector_NetQuantizeNormal                          AttachmentDirection;                                        // 0x0008   (0x0018)  
	bool                                               bCanActivate;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Rubberbanding
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDelMarVehicleReplicatedState_Rubberbanding
{ 
	float                                              AppliedBonusSpeed;                                          // 0x0000   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_StartlineBoost
/// Size: 0x0008 (0x00000C - 0x000014)
struct FDelMarVehicleReplicatedState_StartlineBoost : FDelMarVehicleReplicatedState_BonusSpeedAbility
{ 
	float                                              PercentageMaxBonusSpeedEarned;                              // 0x000C   (0x0004)  
	bool                                               bFailedAttempt;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Strafe
/// Size: 0x0008 (0x000008 - 0x000010)
struct FDelMarVehicleReplicatedState_Strafe : FDelMarVehicleReplicatedState_Ability
{ 
	bool                                               bLeftSide;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              StrafeKeybindPressTime;                                     // 0x000C   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Turbo
/// Size: 0x000C (0x00000C - 0x000018)
struct FDelMarVehicleReplicatedState_Turbo : FDelMarVehicleReplicatedState_BonusSpeedAbility
{ 
	int32_t                                            LastBonusZoneInteractionIndex;                              // 0x000C   (0x0004)  
	bool                                               bSuccessfulBonusZone;                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              AdditionalActiveSeconds;                                    // 0x0014   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Underthrust
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FDelMarVehicleReplicatedState_Underthrust : FDelMarVehicleReplicatedState_Ability
{ 
	float                                              RemainingThrustSeconds;                                     // 0x0008   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_AirControl
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FDelMarVehicleReplicatedState_AirControl : FDelMarVehicleReplicatedState_Ability
{ 
	float                                              AerialDivingBonusSpeed;                                     // 0x0008   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarInputBufferData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarInputBufferData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState
/// Size: 0x0290 (0x000000 - 0x000290)
struct FDelMarVehicleReplicatedState
{ 
	int32_t                                            FrameNum;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDelMarVehicleInContinuous                         Input;                                                      // 0x0008   (0x0040)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FRigidBodyState                                    RBState;                                                    // 0x0050   (0x0080)  
	FDelMarVehicleReplicatedState_AutoUpright          AutoUpright;                                                // 0x00D0   (0x0020)  
	FDelMarVehicleReplicatedState_Drafting             Drafting;                                                   // 0x00F0   (0x0018)  
	FDelMarVehicleReplicatedState_Drift                Drift;                                                      // 0x0108   (0x0030)  
	FDelMarVehicleReplicatedState_DriftBoost           DriftBoost;                                                 // 0x0138   (0x0020)  
	FDelMarVehicleReplicatedState_Drive                Drive;                                                      // 0x0158   (0x0030)  
	FDelMarVehicleReplicatedState_Ability              Jump;                                                       // 0x0188   (0x0008)  
	FDelMarVehicleReplicatedState_Kickflip             Kickflip;                                                   // 0x0190   (0x0060)  
	FDelMarVehicleReplicatedState_Oversteer            Oversteer;                                                  // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01F4   (0x0004)  MISSED
	FDelMarVehicleReplicatedState_Reattachment         Reattachment;                                               // 0x01F8   (0x0028)  
	FDelMarVehicleReplicatedState_Rubberbanding        Rubberbanding;                                              // 0x0220   (0x0004)  
	FDelMarVehicleReplicatedState_StartlineBoost       StartlineBoost;                                             // 0x0224   (0x0014)  
	FDelMarVehicleReplicatedState_Strafe               Strafe;                                                     // 0x0238   (0x0010)  
	FDelMarVehicleReplicatedState_Turbo                Turbo;                                                      // 0x0248   (0x0018)  
	FDelMarVehicleReplicatedState_Underthrust          Underthrust;                                                // 0x0260   (0x000C)  
	FDelMarVehicleReplicatedState_AirControl           AirControl;                                                 // 0x026C   (0x000C)  
	FDelMarInputBufferData                             BufferData;                                                 // 0x0278   (0x0018)  
};

/// Class /Script/DelMarCore.DelMarVehicleNetworkPhysicsComponent
/// Size: 0x0540 (0x0000A0 - 0x0005E0)
class UDelMarVehicleNetworkPhysicsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	FDelMarVehicleReplicatedState                      ReplicatedState;                                            // 0x00B0   (0x0290)  
	unsigned char                                      UnknownData01_6[0x2A0];                                     // 0x0340   (0x02A0)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleNetworkPhysicsComponent.OnRep_ReplicatedState
	// void OnRep_ReplicatedState(FDelMarVehicleReplicatedState& PrevReplicatedState);                                       // [0xb969b44] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleNetworkPhysicsComponent.OnPhysicsStateChanged
	// void OnPhysicsStateChanged(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);    // [0xb969a04] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarVehicleStateTagManagerComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarVehicleStateTagManagerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(8,12892) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedVehicle);                              // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12893) /* TWeakObjectPtr<UAbilitySystemComponent*> */ __um(CachedASC);                         // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleWorldBonusSpeedStackLost
	// void HandleWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks);                                             // [0xb96978c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleWorldBonusSpeedStackGained
	// void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                           // [0xb969514] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleTurboDeactivated
	// void HandleTurboDeactivated();                                                                                        // [0xb969130] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                         // [0xb969108] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDriftDeactivated
	// void HandleDriftDeactivated();                                                                                        // [0xb968538] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDriftBoostDeactivated
	// void HandleDriftBoostDeactivated();                                                                                   // [0xb968510] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDriftBoostActivated
	// void HandleDriftBoostActivated();                                                                                     // [0xb9684e8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDriftActivated
	// void HandleDriftActivated();                                                                                          // [0xb9684d4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDraftDeactivated
	// void HandleDraftDeactivated();                                                                                        // [0xb9684c0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDraftActivated
	// void HandleDraftActivated();                                                                                          // [0xb968498] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleAnyWheelsOnGroundChanged
	// void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& Vehicle, bool bWheelsOnGround);                          // [0xb968150] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarVehicleVerbComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UDelMarVehicleVerbComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleWorldBonusSpeedStackLost
	// void HandleWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks);                                             // [0xb9698c8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleWorldBonusSpeedStackGained
	// void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                           // [0xb969650] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleVehicleLanded
	// void HandleVehicleLanded(float LandingForce, bool bLandedKickflip);                                                   // [0xb969218] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleUnderthrustPercentChanged
	// void HandleUnderthrustPercentChanged(float PercentageUnderthrustRemaining);                                           // [0xb969158] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleUnderthrustDeactivated
	// void HandleUnderthrustDeactivated();                                                                                  // [0xb969144] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                         // [0xb96911c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleTurboBonusZoneChanged
	// void HandleTurboBonusZoneChanged(EDelMarTurboZoneState BonusZoneState);                                               // [0xb968f28] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleStartlineBoostActivated
	// void HandleStartlineBoostActivated(float BoostPercent);                                                               // [0xb968e64] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleSpeedometerSpeedChanged
	// void HandleSpeedometerSpeedChanged(float UpdatedSpeedometerSpeed);                                                    // [0xb968da0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandlePotentialDriftBoostChanged
	// void HandlePotentialDriftBoostChanged(float Percent);                                                                 // [0xb968cd4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleKickflipped
	// void HandleKickflipped(bool bLeft);                                                                                   // [0xb968640] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleJumpActivated
	// void HandleJumpActivated();                                                                                           // [0xb96862c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDriftDurationChanged
	// void HandleDriftDurationChanged(float duration);                                                                      // [0xb968560] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDriftDeactivated
	// void HandleDriftDeactivated();                                                                                        // [0xb96854c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDriftBoostDeactivated
	// void HandleDriftBoostDeactivated();                                                                                   // [0xb968524] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDriftBoostActivated
	// void HandleDriftBoostActivated();                                                                                     // [0xb9684fc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDraftActivated
	// void HandleDraftActivated();                                                                                          // [0xb9684ac] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleAnyWheelsOnGroundChanged
	// void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& Vehicle, bool bWheelsOnGround);                          // [0xb9682f4] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.GameFeatureAction_MergeRankedDisplayData
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_MergeRankedDisplayData : public UGameFeatureAction
{ 
public:
	class UFortHabaneroDisplayData*                    MergeSource;                                                // 0x0028   (0x0008)  
	class UFortHabaneroDisplayData*                    MergeDestination;                                           // 0x0030   (0x0008)  
};

/// Class /Script/DelMarCore.GameFeatureAction_OverrideGameModeAISettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_OverrideGameModeAISettings : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,12894) /* TWeakObjectPtr<UAthenaAISettings*> */ __um(AISettings);                             // 0x0028   (0x0020)  
};

/// Class /Script/DelMarCore.DelMarAudioComponentGroup
/// Size: 0x0010 (0x0003D0 - 0x0003E0)
class UDelMarAudioComponentGroup : public UAudioComponentGroup
{ 
public:
	class UDelMarAudioMixModifierExtension*            MixModifierExtension;                                       // 0x03C8   (0x0008)  
	class UDelMarSubmixSendExtension*                  SubmixSendExtension;                                        // 0x03D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarAudioComponentGroup.GetSubmixSends
	// class UDelMarSubmixSendExtension* GetSubmixSends();                                                                   // [0xa38e63c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarAudioComponentGroup.GetMixModifiers
	// class UDelMarAudioMixModifierExtension* GetMixModifiers();                                                            // [0x6f75b74] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarAudioController
/// Size: 0x00A0 (0x000338 - 0x0003D8)
class ADelMarAudioController : public AVehicleCosmeticsAudioController
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0338   (0x0018)  MISSED
	SDK_UNDEFINED(16,12895) /* FMulticastInlineDelegate */ __um(OnBigAirStarted);                                  // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,12896) /* FMulticastInlineDelegate */ __um(OnBigAirStopped);                                  // 0x0360   (0x0010)  
	class UDelMarAudioComponentGroup*                  ComponentGroup;                                             // 0x0370   (0x0008)  
	bool                                               bIsLocal;                                                   // 0x0378   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0379   (0x0003)  MISSED
	float                                              FinishLineDistanceThreshold;                                // 0x037C   (0x0004)  
	float                                              ApproachingFinishLineMinTime;                               // 0x0380   (0x0004)  
	float                                              BigAirLandingDistanceThreshold;                             // 0x0384   (0x0004)  
	float                                              BigAirTimeThreshold;                                        // 0x0388   (0x0004)  
	float                                              BigAirDownSpeedThreshold;                                   // 0x038C   (0x0004)  
	float                                              NonLocalVelocityInterpSpeed;                                // 0x0390   (0x0004)  
	float                                              MaxAcceleration;                                            // 0x0394   (0x0004)  
	bool                                               bInBigAir;                                                  // 0x0398   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0399   (0x0007)  MISSED
	class ADelMarVehicle*                              CachedVehicle;                                              // 0x03A0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x03A8   (0x0030)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarAudioController.PlaySound
	// class UAudioComponent* PlaySound(class USoundBase* sound, float InFadeInTime, float InTargetVolume, bool bDisableAttenuation, EAudioFaderCurve InFadeCurve); // [0xb984394] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarAudioController.IsVirtualized
	// bool IsVirtualized();                                                                                                 // [0xb984374] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarAudioController.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                               // [0xb9841d0] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarAudioController.GetComponentGroup
	// class UDelMarAudioComponentGroup* GetComponentGroup();                                                                // [0xa5d65d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarAudioMixModifierExtension
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UDelMarAudioMixModifierExtension : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarAudioMixModifierExtension.RemoveMixGroupByName
	// void RemoveMixGroupByName(FName InName);                                                                              // [0xb9848a8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarAudioMixModifierExtension.RemoveMixGroup
	// void RemoveMixGroup(FAudioMixModifierGroup& InMixModifier);                                                           // [0xb984808] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarAudioMixModifierExtension.AddMixGroup
	// void AddMixGroup(FAudioMixModifierGroup& InMixModifier);                                                              // [0xb982cbc] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarAudioReverbComponent
/// Size: 0x0288 (0x0000A0 - 0x000328)
class UDelMarAudioReverbComponent : public UActorComponent
{ 
public:
	class USoundSubmixBase*                            ReverbSend;                                                 // 0x00A0   (0x0008)  
	class USoundSubmixBase*                            EarlyReflectionSend;                                        // 0x00A8   (0x0008)  
	FRuntimeFloatCurve                                 EnclosureReverbBlendCurve;                                  // 0x00B0   (0x0088)  
	FRuntimeFloatCurve                                 WallDistanceBlendCurve;                                     // 0x0138   (0x0088)  
	FRuntimeFloatCurve                                 EnclosureSendLevelCurve;                                    // 0x01C0   (0x0088)  
	FRuntimeFloatCurve                                 WallDistanceSendLevelCurve;                                 // 0x0248   (0x0088)  
	int32_t                                            NumPoints;                                                  // 0x02D0   (0x0004)  
	float                                              TraceRadius;                                                // 0x02D4   (0x0004)  
	FVector                                            TraceOrigin;                                                // 0x02D8   (0x0018)  
	int32_t                                            NumTracesPerFrame;                                          // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	class ADelMarVehicle*                              CachedVehicleOwner;                                         // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0300   (0x0028)  MISSED
};

/// Class /Script/DelMarCore.DelMarSubmixSendExtension
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarSubmixSendExtension : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	float                                              SendInterpTime;                                             // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x00AC   (0x0014)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarSubmixSendExtension.SetSend
	// void SetSend(class USoundSubmixBase* InSubmix, float InLevel, bool bTrackCount);                                      // [0xb984d40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSubmixSendExtension.RemoveSend
	// void RemoveSend(class USoundSubmixBase* InSubmix);                                                                    // [0xb98496c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarNuxBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarNuxBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarNuxBlueprintFunctionLibrary.GetCurrentRankedInfoForVehicle
	// FDelMarRankedInfo GetCurrentRankedInfoForVehicle(class ADelMarVehicle* Vehicle);                                      // [0xb983638] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarNuxBlueprintFunctionLibrary.GetCurrentLapNumber
	// int32_t GetCurrentLapNumber(class ADelMarVehicle* Vehicle);                                                           // [0xb98352c] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/DelMarCore.CheckpointTrackDistance
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCheckpointTrackDistance
{ 
	class ADelMarTrack*                                Track;                                                      // 0x0000   (0x0008)  
	float                                              PrimaryDistance;                                            // 0x0008   (0x0004)  
	float                                              LocalDistance;                                              // 0x000C   (0x0004)  
};

/// Class /Script/DelMarCore.DelMarCheckpoint
/// Size: 0x0178 (0x000BD8 - 0x000D50)
class ADelMarCheckpoint : public AFortCreativeDeviceProp
{ 
public:
	SDK_UNDEFINED(16,12897) /* FMulticastInlineDelegate */ __um(OnCheckpointTirggeredEvent);                       // 0x0BD8   (0x0010)  
	float                                              DynamicSpawnOffset;                                         // 0x0BE8   (0x0004)  
	float                                              SpawnDistanceBeforeOrAfterSplineLocation;                   // 0x0BEC   (0x0004)  
	int32_t                                            CheckpointId;                                               // 0x0BF0   (0x0004)  
	int32_t                                            SplinePointIndex;                                           // 0x0BF4   (0x0004)  
	class ADelMarPlayerStart*                          SpawnPoint;                                                 // 0x0BF8   (0x0008)  
	class UDelMarTrackSnapToComponent*                 SnapToComponent;                                            // 0x0C00   (0x0008)  
	SDK_UNDEFINED(80,12898) /* TSet<TWeakObjectPtr<ADelMarCheckpoint*>> */ __um(NextCheckpoints);                  // 0x0C08   (0x0050)  
	SDK_UNDEFINED(80,12899) /* TSet<TWeakObjectPtr<ADelMarCheckpoint*>> */ __um(PreviousCheckpoints);              // 0x0C58   (0x0050)  
	FCheckpointTrackDistance                           NearestTrack;                                               // 0x0CA8   (0x0010)  
	bool                                               bIsFinishLine : 1;                                          // 0x0CB8:0 (0x0001)  
	bool                                               bIsStartingLine : 1;                                        // 0x0CB8:1 (0x0001)  
	bool                                               bIsTimeTrialSectionEnd : 1;                                 // 0x0CB8:2 (0x0001)  
	bool                                               bIsTeleportEnabled : 1;                                     // 0x0CB8:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0CB9   (0x0003)  MISSED
	SDK_UNDEFINED(8,12900) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(CheckpointToTeleportTo);                  // 0x0CBC   (0x0008)  
	int32_t                                            ComputedCheckpointIndex;                                    // 0x0CC4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0CC8   (0x0088)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarCheckpoint.UpdateCheckpointMesh
	// void UpdateCheckpointMesh(EDelMarCheckpointMeshType MeshType);                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.OnTriggered
	// void OnTriggered(class ADelMarVehicle* InDelMarVehicle);                                                              // [0x884e2d4] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarCheckpoint.IsAttachedToTrack
	// bool IsAttachedToTrack();                                                                                             // [0xb984290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.HandlePawnEnteredVehicle
	// void HandlePawnEnteredVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* Pawn, int32_t SeatIndex);            // [0xb983f48] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetSpawnTransform
	// FTransform GetSpawnTransform();                                                                                       // [0xb983c54] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetNearestTrackData
	// FCheckpointTrackDistance GetNearestTrackData();                                                                       // [0xb983924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetCheckpointMeshType
	// EDelMarCheckpointMeshType GetCheckpointMeshType();                                                                    // [0xb983428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetAttachedToTrack
	// class ADelMarTrack* GetAttachedToTrack();                                                                             // [0xb983404] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.ClientSetCheckpointInactive
	// void ClientSetCheckpointInactive();                                                                                   // [0x2047e54] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.ClientSetCheckpointActive
	// void ClientSetCheckpointActive(int32_t CurrentLap, int32_t TotalLaps);                                                // [0x2047e54] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_RaceReset
	// void BP_RaceReset();                                                                                                  // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_RaceFinished
	// void BP_RaceFinished();                                                                                               // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_LapFinished
	// void BP_LapFinished(int32_t CompletedLap, int32_t CurrentLap, int32_t TotalLaps);                                     // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_FirstPlaceChanged
	// void BP_FirstPlaceChanged(bool bValidPrevFirstPlace);                                                                 // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_DeactivateRift
	// void BP_DeactivateRift();                                                                                             // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_ActivateRift
	// void BP_ActivateRift();                                                                                               // [0x2047e54] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarCore.FortClientPilot_QuickSmokeDelMar
/// Size: 0x0010 (0x000310 - 0x000320)
class UFortClientPilot_QuickSmokeDelMar : public UFortClientPilot_GameplayBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0310   (0x0010)  MISSED
};

/// Class /Script/DelMarCore.DelMarBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.SetDelMarTutorialHint
	// void SetDelMarTutorialHint(class APlayerController* PlayerController, FDelMarEvent_SetTutorialHint& Event);           // [0xb984bf0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.SetDelMarControlsText
	// void SetDelMarControlsText(class APlayerController* PlayerController, FDelMarEvent_SetControlsText& Event);           // [0xb984a68] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.IsDelMarExperience
	// bool IsDelMarExperience(bool bEnableCaching);                                                                         // [0xb9842b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetTimerDeltaFromServerTime
	// double GetTimerDeltaFromServerTime(double TimestampSeconds, EDelMarTimerDirection Direction, bool bCapAtZero, bool& bIsPositive, class UObject* WorldContextObject); // [0xb983cb0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetPrimaryPlayerState
	// class AFortPlayerState* GetPrimaryPlayerState(class UObject* WorldContextObject);                                     // [0xb983b94] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetPrimaryPlayerController
	// class AFortPlayerController* GetPrimaryPlayerController(class UObject* WorldContextObject);                           // [0xb983a94] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetNetModel
	// EDelMarNetModel GetNetModel(class UObject* WorldContextObject);                                                       // [0xb983940] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetDelMarVehicle
	// class ADelMarVehicle* GetDelMarVehicle(class APlayerController* PlayerController);                                    // [0xb9837e8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetDelMarPlayspace
	// class ADelMarPlayspace* GetDelMarPlayspace(class UObject* WorldContextObject);                                        // [0xb983718] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetClientWorldTimeSeconds
	// double GetClientWorldTimeSeconds(class UObject* WorldContextObject);                                                  // [0xb983448] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.DelMarFormatTime
	// FText DelMarFormatTime(double TimeSeconds, bool bIncludeMilliseconds);                                                // [0xb982f0c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.BP_KillAndRespawnVehicle
	// bool BP_KillAndRespawnVehicle(class AController* Controller, FGameplayTag CausedByTag);                               // [0xb982d58] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarCheatManager
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarCheatManager : public UChildCheatManager
{ 
public:
	SDK_UNDEFINED(16,12901) /* TArray<FString> */      __um(SafePlayerNames);                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarUsePredictiveInterpolation
	// void DelMarUsePredictiveInterpolation(bool bEnabled, bool bEveryOther);                                               // [0xa605c08] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarStartTrackScrubberWithViewTarget
	// void DelMarStartTrackScrubberWithViewTarget(bool bRunCsvProfilerDuringScrub);                                         // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarStartRace
	// void DelMarStartRace();                                                                                               // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarStartQueuedAutoInput
	// void DelMarStartQueuedAutoInput();                                                                                    // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarStartFollowTrack
	// void DelMarStartFollowTrack(float Throttle);                                                                          // [0x6189d50] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSpectate
	// void DelMarSpectate();                                                                                                // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSpawnVehicleForSelf
	// void DelMarSpawnVehicleForSelf();                                                                                     // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSpawnBotsAtSkillLevel
	// void DelMarSpawnBotsAtSkillLevel(int32_t NumberOfBotsToSpawn, int32_t SkillLevel);                                    // [0x60dfe58] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSpawnBots
	// void DelMarSpawnBots(int32_t NumberOfBotsToSpawn);                                                                    // [0x63da070] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSkipWaitingForPlayers
	// void DelMarSkipWaitingForPlayers();                                                                                   // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetVerticalKickflipInverted
	// void DelMarSetVerticalKickflipInverted(bool InbVerticalKickflipInverted);                                             // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetVehicleCollisionsOverrideGlobal
	// void DelMarSetVehicleCollisionsOverrideGlobal(EDelMarVehicleCollisionOverrideSetting NewValue);                       // [0x809f754] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetVehicleCollisionsOverrideForSelf
	// void DelMarSetVehicleCollisionsOverrideForSelf(EDelMarVehicleCollisionOverrideSetting NewValue);                      // [0x809f754] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetTutorialSection
	// void DelMarSetTutorialSection(int32_t Index);                                                                         // [0x63da070] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetStrafeEnabled
	// void DelMarSetStrafeEnabled(bool bEnabled);                                                                           // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetStartlineBoostEnabled
	// void DelMarSetStartlineBoostEnabled(bool bEnabled);                                                                   // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetSpawnMode
	// void DelMarSetSpawnMode(EDelMarRaceSpawnMode SpawnMode);                                                              // [0x809f754] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingNumPlayersForPackDistance
	// void DelMarSetRubberbandingNumPlayersForPackDistance(int32_t InNumPlayersForPackDistance);                            // [0x63da070] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMMR
	// void DelMarSetRubberbandingMMR(int32_t InMMR);                                                                        // [0x63da070] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMinPackDistance
	// void DelMarSetRubberbandingMinPackDistance(float InMinPackDistance);                                                  // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMinDistanceFromPack
	// void DelMarSetRubberbandingMinDistanceFromPack(float InMinDistanceFromPack);                                          // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxPackDistanceLostPerSecond
	// void DelMarSetRubberbandingMaxPackDistanceLostPerSecond(float InMaxPackDistanceLostPerSecond);                        // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxPackDistanceGainedPerSecond
	// void DelMarSetRubberbandingMaxPackDistanceGainedPerSecond(float InMaxPackDistanceGainedPerSecond);                    // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxPackDistance
	// void DelMarSetRubberbandingMaxPackDistance(float InMaxPackDistance);                                                  // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxDistanceFromPack
	// void DelMarSetRubberbandingMaxDistanceFromPack(float InMaxDistanceFromPack);                                          // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxBonusSpeedScalar
	// void DelMarSetRubberbandingMaxBonusSpeedScalar(float InMaxBonusSpeedScalar);                                          // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingEnabled
	// void DelMarSetRubberbandingEnabled(bool bEnabled);                                                                    // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnTracesEnabled
	// void DelMarSetRespawnTracesEnabled(bool bEnabled);                                                                    // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnInvulnerabilitySeconds
	// void DelMarSetRespawnInvulnerabilitySeconds(float Seconds);                                                           // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnInvulnerabilityEnabled
	// void DelMarSetRespawnInvulnerabilityEnabled(bool bEnabled);                                                           // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnCollisionProtectionSeconds
	// void DelMarSetRespawnCollisionProtectionSeconds(float Seconds);                                                       // [0x6189d50] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnCollisionProtectionEnabled
	// void DelMarSetRespawnCollisionProtectionEnabled(bool bEnabled);                                                       // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetReplicatedTagEnabledOnSelf
	// void DelMarSetReplicatedTagEnabledOnSelf(FString InputTag, bool bEnabled);                                            // [0x89c0c34] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetLoadingScreenVisibility
	// void DelMarSetLoadingScreenVisibility(bool bShouldBeVisible);                                                         // [0xb983300] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetLapTotal
	// void DelMarSetLapTotal(int32_t NewTotal);                                                                             // [0x63da070] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetLap
	// void DelMarSetLap(int32_t LapNum);                                                                                    // [0x63da070] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetInvertSteerMethod
	// void DelMarSetInvertSteerMethod(EDelMarInvertSteerMethod InInvertSteerMethod);                                        // [0x809f754] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetInputMappingContextEnabled
	// void DelMarSetInputMappingContextEnabled(FString InputTag, bool bEnableInput);                                        // [0x89c0c34] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetInfiniteUnderthrustEnabled
	// void DelMarSetInfiniteUnderthrustEnabled(bool bEnabled);                                                              // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetGlobalInputEnabled
	// void DelMarSetGlobalInputEnabled(FString InputTag, bool bEnableInput);                                                // [0x89c0c34] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetDraftingEnabled
	// void DelMarSetDraftingEnabled(bool bEnabled);                                                                         // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetDemoModeEnabled
	// void DelMarSetDemoModeEnabled(bool bEnabled);                                                                         // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetCollisionDemosEnabled
	// void DelMarSetCollisionDemosEnabled(bool bEnabled);                                                                   // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetAirFreestyleEnabled
	// void DelMarSetAirFreestyleEnabled(bool bEnabled);                                                                     // [0x5d35ffc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarReturnToLobby
	// void DelMarReturnToLobby();                                                                                           // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarResumeAllBots
	// void DelMarResumeAllBots();                                                                                           // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRespawnAtLastCheckpoint_ParallelPath
	// void DelMarRespawnAtLastCheckpoint_ParallelPath();                                                                    // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRespawnAtLastCheckpoint
	// void DelMarRespawnAtLastCheckpoint();                                                                                 // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarResetTutorialSplines
	// void DelMarResetTutorialSplines();                                                                                    // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarResetRace
	// void DelMarResetRace();                                                                                               // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarResetPreRaceViewTarget
	// void DelMarResetPreRaceViewTarget();                                                                                  // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRenamePlayers
	// void DelMarRenamePlayers();                                                                                           // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRemoveNumberOfBots
	// void DelMarRemoveNumberOfBots(int32_t NumberOfBotsToRemove);                                                          // [0x63da070] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRemoveBotByName
	// void DelMarRemoveBotByName(FString& BotName);                                                                         // [0x859e374] Final|Exec|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRemoveAllBots
	// void DelMarRemoveAllBots();                                                                                           // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarQueueAutoInputThrottle
	// void DelMarQueueAutoInputThrottle(float Throttle, float duration);                                                    // [0x809fc60] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarQueueAutoInputJump
	// void DelMarQueueAutoInputJump(int32_t Repeat, float Delay);                                                           // [0xb5d4738] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarQueueAutoInputDriveThenTurn
	// void DelMarQueueAutoInputDriveThenTurn(int32_t Repeat, float Throttle, float StraightDuration, float Steer, float TurnDuration); // [0xb983074] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarPrintQuestProgress
	// void DelMarPrintQuestProgress();                                                                                      // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarPrintLogsToDiagnoseSpinout
	// void DelMarPrintLogsToDiagnoseSpinout();                                                                              // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarPrevTutorialSection
	// void DelMarPrevTutorialSection();                                                                                     // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarPauseAllBots
	// void DelMarPauseAllBots();                                                                                            // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarNextTutorialSection
	// void DelMarNextTutorialSection();                                                                                     // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarInitiateReturnToTrackDemoCountdown
	// void DelMarInitiateReturnToTrackDemoCountdown(float SecondsUntilDemo);                                                // [0x6189d50] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarInitiateMissedCheckpointDemoCountdown
	// void DelMarInitiateMissedCheckpointDemoCountdown(float SecondsUntilDemo);                                             // [0x6189d50] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGrantTurboCharges
	// void DelMarGrantTurboCharges(float Amount, bool bGrantToEveryone);                                                    // [0x9724740] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGrantQuestsInDir
	// void DelMarGrantQuestsInDir(FString Dir);                                                                             // [0x65b05c8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGiveSelfSomeCompetitiveMMRStats
	// void DelMarGiveSelfSomeCompetitiveMMRStats(int32_t MyPosition, int32_t TotalNumberOfPlayers, int32_t NumberOfTimesToSendMMRUpdate); // [0x7a174b4] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostStopPlayerRecording
	// void DelMarGhostStopPlayerRecording();                                                                                // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostStartPlayerRecording
	// void DelMarGhostStartPlayerRecording(FString SaveFileName, bool bSaveToFile);                                         // [0x89c0c34] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostStartPlayerPlayback
	// void DelMarGhostStartPlayerPlayback();                                                                                // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostSetReplayEnabled
	// void DelMarGhostSetReplayEnabled(bool bEnabled);                                                                      // [0x5d35ffc] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostSetRecordOffPhysics
	// void DelMarGhostSetRecordOffPhysics(bool bEnabled);                                                                   // [0x5d35ffc] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostForcePlayAllTriggers
	// void DelMarGhostForcePlayAllTriggers();                                                                               // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostClearPlaybackFile
	// void DelMarGhostClearPlaybackFile();                                                                                  // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarForceLoadUEFNIsland
	// void DelMarForceLoadUEFNIsland(FString IslandCode);                                                                   // [0x65b05c8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarForceLoadLevel
	// void DelMarForceLoadLevel(FString LevelName);                                                                         // [0x8c1108c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarForceEveryoneToReadyUp
	// void DelMarForceEveryoneToReadyUp();                                                                                  // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarFinishRaceSelf
	// void DelMarFinishRaceSelf();                                                                                          // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarFinishRace
	// void DelMarFinishRace();                                                                                              // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarExitVehicle
	// void DelMarExitVehicle();                                                                                             // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarEndSpectate
	// void DelMarEndSpectate();                                                                                             // [0xb982ef8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarDestroyTrackScrubbers
	// void DelMarDestroyTrackScrubbers();                                                                                   // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarDemolishSelfWithTag
	// void DelMarDemolishSelfWithTag(FString DemolishTagString);                                                            // [0x65b05c8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarDemolishSelf
	// void DelMarDemolishSelf();                                                                                            // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarCreateTrackScrubberForProfiling
	// void DelMarCreateTrackScrubberForProfiling();                                                                         // [0x307d48c] Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarClearQueuedAutoInput
	// void DelMarClearQueuedAutoInput();                                                                                    // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarClearActiveAutoInput
	// void DelMarClearActiveAutoInput();                                                                                    // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarCancelReturnToTrackDemoCountdown
	// void DelMarCancelReturnToTrackDemoCountdown();                                                                        // [0x307d48c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarCancelMissedCheckpointDemoCountdown
	// void DelMarCancelMissedCheckpointDemoCountdown();                                                                     // [0x307d48c] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarGlobals : public UObject
{ 
public:
};

/// Struct /Script/DelMarCore.DelMarVehicleCameraSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FDelMarVehicleCameraSettings
{ 
	float                                              FOV;                                                        // 0x0000   (0x0004)  
	float                                              Height;                                                     // 0x0004   (0x0004)  
	float                                              pitch;                                                      // 0x0008   (0x0004)  
	float                                              Distance;                                                   // 0x000C   (0x0004)  
	float                                              Stiffness;                                                  // 0x0010   (0x0004)  
	float                                              SwivelSpeed;                                                // 0x0014   (0x0004)  
	float                                              TransitionSpeed;                                            // 0x0018   (0x0004)  
};

/// Class /Script/DelMarCore.DelMarVehicleCameraMode
/// Size: 0x0620 (0x001BC0 - 0x0021E0)
class UDelMarVehicleCameraMode : public UFortCameraMode_AthenaVehicle
{ 
public:
	FDelMarVehicleCameraSettings                       CameraSettings;                                             // 0x1BB8   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1BD4   (0x0004)  MISSED
	FRuntimeFloatCurve                                 VelocityViewDistance;                                       // 0x1BD8   (0x0088)  
	FRuntimeFloatCurve                                 VelocityFOV;                                                // 0x1C60   (0x0088)  
	FRuntimeFloatCurve                                 AerialViewDistance;                                         // 0x1CE8   (0x0088)  
	FRuntimeFloatCurve                                 AerialFocusOffset;                                          // 0x1D70   (0x0088)  
	FRuntimeFloatCurve                                 AerialPitch;                                                // 0x1DF8   (0x0088)  
	FRuntimeFloatCurve                                 AccelViewDistance;                                          // 0x1E80   (0x0088)  
	FRuntimeFloatCurve                                 AccelPitch;                                                 // 0x1F08   (0x0088)  
	FRuntimeFloatCurve                                 AirRotationInterpRate;                                      // 0x1F90   (0x0088)  
	float                                              DriftSwivelSpeed;                                           // 0x2018   (0x0004)  
	float                                              ViewDistanceInterpSpeed;                                    // 0x201C   (0x0004)  
	float                                              FOVInterpSpeed;                                             // 0x2020   (0x0004)  
	float                                              AccelerationViewDistanceDecayRate;                          // 0x2024   (0x0004)  
	float                                              MaxAccumulatedAccelViewDistance;                            // 0x2028   (0x0004)  
	float                                              MinAccumulatedAccelViewDistance;                            // 0x202C   (0x0004)  
	float                                              AerialOffsetInterpSpeed;                                    // 0x2030   (0x0004)  
	float                                              MaximumDownwardAerialPitch;                                 // 0x2034   (0x0004)  
	float                                              MaximumUpwardAerialPitch;                                   // 0x2038   (0x0004)  
	float                                              AccelerationPitchDecayRate;                                 // 0x203C   (0x0004)  
	float                                              MaxAccumulatedAccelPitch;                                   // 0x2040   (0x0004)  
	float                                              MinAccumulatedAccelPitch;                                   // 0x2044   (0x0004)  
	bool                                               bPreventSpeedIncreaseInAir;                                 // 0x2048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x2049   (0x0003)  MISSED
	float                                              SpeedInputScalar;                                           // 0x204C   (0x0004)  
	float                                              SwivelPitchMax;                                             // 0x2050   (0x0004)  
	float                                              SwivelYawMax;                                               // 0x2054   (0x0004)  
	float                                              GroundPitchInterpRate;                                      // 0x2058   (0x0004)  
	float                                              GroundMaxPitchForNormalBlend;                               // 0x205C   (0x0004)  
	float                                              GroundNormalInterpRate;                                     // 0x2060   (0x0004)  
	float                                              GroundNormalAirInterpRate;                                  // 0x2064   (0x0004)  
	float                                              GroundYawRateMin;                                           // 0x2068   (0x0004)  
	float                                              GroundYawRateMax;                                           // 0x206C   (0x0004)  
	float                                              WallYawRateMin;                                             // 0x2070   (0x0004)  
	float                                              WallYawRateMax;                                             // 0x2074   (0x0004)  
	float                                              InterpToGroundTime;                                         // 0x2078   (0x0004)  
	float                                              InterpToAirTime;                                            // 0x207C   (0x0004)  
	float                                              AverageVelocityInterpRate;                                  // 0x2080   (0x0004)  
	float                                              FocusOffsetInterpRate;                                      // 0x2084   (0x0004)  
	float                                              DistanceSpeedScale;                                         // 0x2088   (0x0004)  
	float                                              DistanceOffsetMin;                                          // 0x208C   (0x0004)  
	float                                              DistanceOffsetMax;                                          // 0x2090   (0x0004)  
	float                                              DistanceInterpRate;                                         // 0x2094   (0x0004)  
	float                                              MaxSpeedFOVOffset;                                          // 0x2098   (0x0004)  
	float                                              SupersonicFOVOffset;                                        // 0x209C   (0x0004)  
	float                                              FOVInterpRate;                                              // 0x20A0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x20A4   (0x0004)  MISSED
	class ADelMarVehicle*                              VehicleTarget;                                              // 0x20A8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x130];                                     // 0x20B0   (0x0130)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEliminationMMRCountPair
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEliminationMMRCountPair
{ 
	int32_t                                            MaxMmr;                                                     // 0x0000   (0x0004)  
	int32_t                                            PlayersToEliminate;                                         // 0x0004   (0x0004)  
};

/// Class /Script/DelMarCore.DelMarEliminationRaceManagerComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarEliminationRaceManagerComponent : public UDelMarRaceManagerComponent
{ 
public:
	TArray<FDelMarEliminationMMRCountPair>             EliminationsConfig;                                         // 0x00A0   (0x0010)  
	int32_t                                            ParsedNumberOfPlayersToEliminate;                           // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarStateSequencerFXComponent
/// Size: 0x0128 (0x0000A0 - 0x0001C8)
class UDelMarStateSequencerFXComponent : public UActorComponent
{ 
public:
	float                                              FXSizeScalar;                                               // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	SDK_UNDEFINED(80,12902) /* TMap<FGameplayTag, UNiagaraSystem*> */ __um(ParticleClassMap);                      // 0x00A8   (0x0050)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FFXSystemSpawnParameters                           SpawnParams;                                                // 0x0100   (0x0070)  
	class ADelMarTimeDelayedStateSequencer*            ParentRef;                                                  // 0x0170   (0x0008)  
	SDK_UNDEFINED(80,12903) /* TMap<FGameplayTag, UNiagaraComponent*> */ __um(ParticleComponentMap);               // 0x0178   (0x0050)  


	/// Functions
	// Function /Script/DelMarCore.DelMarStateSequencerFXComponent.HandleEnabledChanged
	// void HandleEnabledChanged(bool bEnabled);                                                                             // [0xb9b87e8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarStateSequencerFXComponent.HandleCurrentStateChanged
	// void HandleCurrentStateChanged(FGameplayTag NewState);                                                                // [0xb9b8728] Final|Native|Protected 
};

/// Struct /Script/DelMarCore.DelMarTimeDelayedState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarTimeDelayedState
{ 
	FGameplayTag                                       Name;                                                       // 0x0000   (0x0004)  
	float                                              duration;                                                   // 0x0004   (0x0004)  
};

/// Class /Script/DelMarCore.DelMarTimeDelayedStateSequencer
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ADelMarTimeDelayedStateSequencer : public AActor
{ 
public:
	SDK_UNDEFINED(16,12904) /* FMulticastInlineDelegate */ __um(OnCurrentStateChanged);                            // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,12905) /* FMulticastInlineDelegate */ __um(OnEnabledChanged);                                 // 0x02A0   (0x0010)  
	bool                                               bEnableOnSpawn;                                             // 0x02B0   (0x0001)  
	bool                                               bLoopSpecificAmount;                                        // 0x02B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02B2   (0x0002)  MISSED
	int32_t                                            TotalLoopCount;                                             // 0x02B4   (0x0004)  
	TArray<FDelMarTimeDelayedState>                    StateArray;                                                 // 0x02B8   (0x0010)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x02C8   (0x000C)  MISSED
	bool                                               bIsEnabled;                                                 // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02D5   (0x0003)  MISSED
	int32_t                                            CurrentStateIndex;                                          // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x02DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.SetEnabled
	// void SetEnabled(bool bEnabled);                                                                                       // [0xb9b93ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.OnRep_CurrentStateIndex
	// void OnRep_CurrentStateIndex();                                                                                       // [0xb9b9288] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.OnRep_bIsEnabled
	// void OnRep_bIsEnabled();                                                                                              // [0xb9b92bc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.GetStateTagAtIndex
	// FGameplayTag GetStateTagAtIndex(int32_t Index);                                                                       // [0xb9b84fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.GetStateCount
	// int32_t GetStateCount();                                                                                              // [0x983d730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.GetCurrentStateTag
	// FGameplayTag GetCurrentStateTag();                                                                                    // [0xb9b84d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarGhostVehicle
/// Size: 0x0010 (0x001E60 - 0x001E70)
class ADelMarGhostVehicle : public AFortAthenaVehicle
{ 
public:
	class UMaterial*                                   GhostMaterial;                                              // 0x1E60   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1E68   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostVehicle.HandleVehicleCosmeticsFinished
	// void HandleVehicleCosmeticsFinished();                                                                                // [0xb9b899c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarGlobalInputDisabler
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDelMarGlobalInputDisabler : public UDelMarRaceManagerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	FGameplayTagContainer                              DisabledInputTags;                                          // 0x00B8   (0x0020)  


	/// Functions
	// Function /Script/DelMarCore.DelMarGlobalInputDisabler.SetGlobalInputsEnabled
	// void SetGlobalInputsEnabled(FGameplayTagContainer InputTags, bool bEnable);                                           // [0xb9b94b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarCosmeticActorSpawnLogic
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarCosmeticActorSpawnLogic : public UObject
{ 
public:
};

/// Class /Script/DelMarCore.DelMarCosmeticActorSpawnLogic_AttachTo
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarCosmeticActorSpawnLogic_AttachTo : public UDelMarCosmeticActorSpawnLogic
{ 
public:
	FName                                              AttachSocket;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarCosmeticActorSpawnLogic_AttachToEach
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarCosmeticActorSpawnLogic_AttachToEach : public UDelMarCosmeticActorSpawnLogic
{ 
public:
	TArray<FName>                                      AttachSockets;                                              // 0x0028   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarCosmeticActor
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ADelMarCosmeticActor : public AActor
{ 
public:
	class UDelMarCosmeticActorSpawnLogic*              SpawnLogic;                                                 // 0x0290   (0x0008)  
	TArray<class UClass*>                              CosmeticDependencies;                                       // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,12906) /* TScriptInterface<Class> */ __um(Vehicle);                                           // 0x02A8   (0x0010)  
	class UDelMarVehicleConfigs*                       VehicleConfig;                                              // 0x02B8   (0x0008)  
	class UDelMarVehicleCosmeticComponent*             VehicleCosmeticComponent;                                   // 0x02C0   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarCosmeticActor.GetBodyMeshComponent
	// class USkeletalMeshComponent* GetBodyMeshComponent();                                                                 // [0xb9b84b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnWorldBonusSpeedStackLost
	// void BP_OnWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks);                                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnWorldBonusSpeedStackGained
	// void BP_OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnWheelsOnGroundChanged
	// void BP_OnWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                    // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleWheelsLeftGround
	// void BP_OnVehicleWheelsLeftGround();                                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleStoppedSkydiving
	// void BP_OnVehicleStoppedSkydiving();                                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleStartedSkydiving
	// void BP_OnVehicleStartedSkydiving();                                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleLanded
	// void BP_OnVehicleLanded(float LandingForced, bool bLandedKickflip);                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleForwardStateChanged
	// void BP_OnVehicleForwardStateChanged(EDelMarVehicleForwardState NewForwardState);                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleDemolished
	// void BP_OnVehicleDemolished(FGameplayTag CausedByTag);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnUnderthrustDeactivated
	// void BP_OnUnderthrustDeactivated();                                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnUnderthrustActivated
	// void BP_OnUnderthrustActivated();                                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnTurboDeactivated
	// void BP_OnTurboDeactivated();                                                                                         // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnTurboBonusStateChanged
	// void BP_OnTurboBonusStateChanged(EDelMarTurboZoneState NewState);                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnTurboActivated
	// void BP_OnTurboActivated();                                                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeUsabilityChanged
	// void BP_OnStrafeUsabilityChanged(bool bCanActivate);                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeDisabledChanged
	// void BP_OnStrafeDisabledChanged(bool bDisabled);                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeDeactivated
	// void BP_OnStrafeDeactivated();                                                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeCooldownChanged
	// void BP_OnStrafeCooldownChanged(float CooldownPercentage);                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeActivated
	// void BP_OnStrafeActivated(bool bLeftSide);                                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStartlineBoostFailed
	// void BP_OnStartlineBoostFailed();                                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStartlineBoostDeactivated
	// void BP_OnStartlineBoostDeactivated();                                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStartlineBoostActivated
	// void BP_OnStartlineBoostActivated(float PercentageMaxBonusSpeedEarned);                                               // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnReattachmentDeactivated
	// void BP_OnReattachmentDeactivated();                                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnReattachmentActivated
	// void BP_OnReattachmentActivated();                                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnReachedMaxDraftBonusSpeed
	// void BP_OnReachedMaxDraftBonusSpeed();                                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipSuctionDeactivated
	// void BP_OnKickflipSuctionDeactivated();                                                                               // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipSuctionActivated
	// void BP_OnKickflipSuctionActivated();                                                                                 // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipDurationChanged
	// void BP_OnKickflipDurationChanged(float duration);                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipDistanceToSuctionSurfaceChanged
	// void BP_OnKickflipDistanceToSuctionSurfaceChanged(float Distance);                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipDeactivated
	// void BP_OnKickflipDeactivated();                                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipActivationChargesChanged
	// void BP_OnKickflipActivationChargesChanged(int32_t ActivationCharges);                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipActivated
	// void BP_OnKickflipActivated(bool bLeftSide);                                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnJumpDeactivated
	// void BP_OnJumpDeactivated();                                                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnJumpActivated
	// void BP_OnJumpActivated();                                                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnInvulnerabilityDeactivated
	// void BP_OnInvulnerabilityDeactivated();                                                                               // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnInvulnerabilityActivated
	// void BP_OnInvulnerabilityActivated();                                                                                 // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftKickDeactivated
	// void BP_OnDriftKickDeactivated();                                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftKickActivated
	// void BP_OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState);                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftDurationChanged
	// void BP_OnDriftDurationChanged(float duration);                                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftDeactivated
	// void BP_OnDriftDeactivated();                                                                                         // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftControlChanged
	// void BP_OnDriftControlChanged(bool bIsDriftingControlled);                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftBoostDeactivated
	// void BP_OnDriftBoostDeactivated();                                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftBoostActivated
	// void BP_OnDriftBoostActivated();                                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftActivated
	// void BP_OnDriftActivated();                                                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDraftStateChanged
	// void BP_OnDraftStateChanged(EDelmarDraftingState CurrentState);                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDelMarVehicleSpawned
	// void BP_OnDelMarVehicleSpawned(bool bFirstVehicleForPlayer, bool bPrevVehicleDemolished);                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDelMarTeleportExited
	// void BP_OnDelMarTeleportExited();                                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDelMarTeleportEntered
	// void BP_OnDelMarTeleportEntered();                                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDelMarAppliedTeleportRotation
	// void BP_OnDelMarAppliedTeleportRotation();                                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnCosmeticApplied
	// void BP_OnCosmeticApplied();                                                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnBonusSpeedDeactivated
	// void BP_OnBonusSpeedDeactivated();                                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnBonusSpeedChanged
	// void BP_OnBonusSpeedChanged(float BonusSpeed);                                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnBonusSpeedActivated
	// void BP_OnBonusSpeedActivated();                                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnAnyWheelsOnGroundChanged
	// void BP_OnAnyWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                 // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.ApplyCosmetic
	// void ApplyCosmetic();                                                                                                 // [0x1ff1b0c] Native|Public        
};

/// Class /Script/DelMarCore.DelMarCosmeticItemDefinition
/// Size: 0x0018 (0x0003B8 - 0x0003D0)
class UDelMarCosmeticItemDefinition : public UFortAccountItemDefinition
{ 
public:
	FGameplayTag                                       Slot;                                                       // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,12907) /* TArray<TWeakObjectPtr<UClass*>> */ __um(CosmeticActorClasses);                      // 0x03C0   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarVehicleBodyItemDefinition
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UDelMarVehicleBodyItemDefinition : public UDelMarCosmeticItemDefinition
{ 
public:
};

/// Class /Script/DelMarCore.DelMarMatchmakingComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarMatchmakingComponent : public UControllerComponent
{ 
public:


	/// Functions
	// Function /Script/DelMarCore.DelMarMatchmakingComponent.ClientStartMatchmaking
	// void ClientStartMatchmaking(FOnlineLinkId LinkId);                                                                    // [0xb9b83dc] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/DelMarCore.DelMarMutator_AllowSpectateOtherTeams
/// Size: 0x0000 (0x000340 - 0x000340)
class ADelMarMutator_AllowSpectateOtherTeams : public AFortAthenaMutator_AllowSpectateOtherTeams
{ 
public:
};

/// Class /Script/DelMarCore.DelMarAsyncPhysicsTickMutator
/// Size: 0x0010 (0x000340 - 0x000350)
class ADelMarAsyncPhysicsTickMutator : public ADelMarMutator
{ 
public:
	float                                              AsyncTickRate;                                              // 0x0340   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0344   (0x000C)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarAsyncPhysicsTickMutator.TryToApplySolverOverrides
	// void TryToApplySolverOverrides();                                                                                     // [0xb9b9648] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarConsoleVariableMutator
/// Size: 0x0030 (0x000340 - 0x000370)
class ADelMarConsoleVariableMutator : public ADelMarMutator
{ 
public:
	SDK_UNDEFINED(16,12908) /* FString */              __um(VariableName);                                         // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,12909) /* FString */              __um(Value);                                                // 0x0350   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0360   (0x0010)  MISSED
};

/// Class /Script/DelMarCore.DelMarPhysMatAttributeMap
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarPhysMatAttributeMap : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,12910) /* TMap<UPhysicalMaterial*, FPhysicalMaterialAttributes_X> */ __um(MaterialAttributesMap); // 0x0030   (0x0050)  
};

/// Class /Script/DelMarCore.DelMarCameraComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UDelMarCameraComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(8,12911) /* TWeakObjectPtr<UDelMarVehicleManager*> */ __um(VehicleManager);                      // 0x00A0   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarCameraInputControllerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UDelMarCameraInputControllerComponent : public UControllerComponent
{ 
public:
	FDelMarInputAction                                 TurnCameraAction;                                           // 0x00A0   (0x0010)  
	FDelMarInputAction                                 LookUpCameraAction;                                         // 0x00B0   (0x0010)  
	FDelMarInputAction                                 ReverseCameraAction;                                        // 0x00C0   (0x0010)  
	class UClass*                                      InputManagerClass;                                          // 0x00D0   (0x0008)  
	SDK_UNDEFINED(8,12912) /* TWeakObjectPtr<UEnhancedInputComponent*> */ __um(InputComponent);                    // 0x00D8   (0x0008)  
	SDK_UNDEFINED(8,12913) /* TWeakObjectPtr<UFortClientSettingsRecord*> */ __um(FortSettings);                    // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarCameraInputControllerComponent.HandleInputSettingsChanged
	// void HandleInputSettingsChanged();                                                                                    // [0xb9b88c0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCameraInputControllerComponent.HandleCameraSwivelDeadzoneChanged
	// void HandleCameraSwivelDeadzoneChanged();                                                                             // [0xb9b8680] Final|Native|Protected 
};

/// Struct /Script/DelMarCore.DelMarEvent_SetTutorialHint
/// Size: 0x0060 (0x000000 - 0x000060)
struct FDelMarEvent_SetTutorialHint
{ 
	SDK_UNDEFINED(24,12914) /* FText */                __um(KBMText);                                              // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,12915) /* FText */                __um(GamepadText);                                          // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,12916) /* FText */                __um(TouchText);                                            // 0x0030   (0x0018)  
	float                                              DisplayTime;                                                // 0x0048   (0x0004)  
	int32_t                                            Priority;                                                   // 0x004C   (0x0004)  
	TArray<class UInputAction*>                        AssociatedInputActions;                                     // 0x0050   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarContextualHintComponent
/// Size: 0x0128 (0x0000A0 - 0x0001C8)
class UDelMarContextualHintComponent : public UControllerComponent
{ 
public:
	FDelMarEvent_SetTutorialHint                       HazardHitHint;                                              // 0x00A0   (0x0060)  
	SDK_UNDEFINED(80,12917) /* TMap<FGameplayTag, FDelMarEvent_SetTutorialHint> */ __um(DemolishedByHints);        // 0x0100   (0x0050)  
	FDelMarEvent_SetTutorialHint                       SlowerTerrainHint;                                          // 0x0150   (0x0060)  
	SDK_UNDEFINED(8,12918) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(Vehicle);                                    // 0x01B0   (0x0008)  
	SDK_UNDEFINED(8,12919) /* TWeakObjectPtr<APlayerController*> */ __um(CachedPlayerController);                  // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarContextualHintComponent.HandleVehicleHazardHit
	// void HandleVehicleHazardHit();                                                                                        // [0xb9b8a70] Final|Native|Private 
	// Function /Script/DelMarCore.DelMarContextualHintComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                               // [0xb9b89b0] Final|Native|Private 
};

/// Class /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UDelMarLocalCheckpointVisibilityControllerComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(8,12920) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12921) /* TWeakObjectPtr<UDelMarCheckpointManagerComponent*> */ __um(CachedCheckpointManager); // 0x00A8   (0x0008)  
	SDK_UNDEFINED(8,12922) /* TWeakObjectPtr<AFortPlayerState*> */ __um(ViewTargetPlayerState);                    // 0x00B0   (0x0008)  
	SDK_UNDEFINED(80,12923) /* TSet<TWeakObjectPtr<ADelMarCheckpoint*>> */ __um(CurrentlyActiveCheckpoints);       // 0x00B8   (0x0050)  


	/// Functions
	// Function /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xb9b8a84] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent.HandleLapComplete
	// void HandleLapComplete(FDelMarEvent_LapComplete& LapEvent);                                                           // [0xb9b88e8] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent.HandleCheckpointPassed
	// void HandleCheckpointPassed(FDelMarEvent_CheckpointPassed_ParallelPath& CheckpointEvent);                             // [0xb9b8694] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarNetworkInputComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UDelMarNetworkInputComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x00A0   (0x0060)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarNetworkInputComponent.ServerSendInputs
	// void ServerSendInputs(FDelMarNetworkInputPacket InputPacket);                                                         // [0xb9b92d0] Final|Net|Native|Event|Private|NetServer|NetValidate 
};

/// Class /Script/DelMarCore.DelMarPlayerRaceDataComponent
/// Size: 0x0188 (0x0000A0 - 0x000228)
class UDelMarPlayerRaceDataComponent : public UDelMarPlayerStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	SDK_UNDEFINED(80,12924) /* TSet<int32_t> */        __um(VisitedCheckpoints);                                   // 0x00B8   (0x0050)  
	SDK_UNDEFINED(80,12925) /* TSet<TWeakObjectPtr<ADelMarCheckpoint*>> */ __um(VisitedCheckpoints_ParallelPath);  // 0x0108   (0x0050)  
	double                                             RunStartTime;                                               // 0x0158   (0x0008)  
	double                                             RunFinishTime;                                              // 0x0160   (0x0008)  
	double                                             CheckpointStartTime;                                        // 0x0168   (0x0008)  
	double                                             LapStartTime;                                               // 0x0170   (0x0008)  
	float                                              DistanceToFinishLine;                                       // 0x0178   (0x0004)  
	float                                              LapDistance;                                                // 0x017C   (0x0004)  
	float                                              PrimaryTrackDistance;                                       // 0x0180   (0x0004)  
	int32_t                                            LapsCompleted;                                              // 0x0184   (0x0004)  
	bool                                               bHasStartedFirstLap;                                        // 0x0188   (0x0001)  
	bool                                               bFinishedRace;                                              // 0x0189   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x018A   (0x0006)  MISSED
	TArray<class APlayerState*>                        ViewingSpectators;                                          // 0x0190   (0x0010)  
	SDK_UNDEFINED(8,12926) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(MostRecentlyVisitedCheckpoint);           // 0x01A0   (0x0008)  
	SDK_UNDEFINED(8,12927) /* TWeakObjectPtr<UDelMarCheckpointManagerComponent*> */ __um(CachedCheckpointManager); // 0x01A8   (0x0008)  
	SDK_UNDEFINED(8,12928) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x01B0   (0x0008)  
	SDK_UNDEFINED(8,12929) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedDelMarVehicle);                        // 0x01B8   (0x0008)  
	SDK_UNDEFINED(8,12930) /* TWeakObjectPtr<UDelMarPositionalTrackerComponent*> */ __um(CachedPositionalTracker); // 0x01C0   (0x0008)  
	SDK_UNDEFINED(8,12931) /* TWeakObjectPtr<UDelMarTrackPositionComponent*> */ __um(CachedLapTracker);            // 0x01C8   (0x0008)  
	SDK_UNDEFINED(80,12932) /* TSet<TWeakObjectPtr<ADelMarCheckpoint*>> */ __um(CheckpointsVisitedThisLap);        // 0x01D0   (0x0050)  
	int32_t                                            TimeTrialSectionIndex;                                      // 0x0220   (0x0004)  
	int32_t                                            CheckPointIndex;                                            // 0x0224   (0x0004)  


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.OnRep_ViewingSpectators
	// void OnRep_ViewingSpectators();                                                                                       // [0xb9b929c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_TeleportEntered
	// void NetMulticast_TeleportEntered(FDelMarEvent_TeleportEnteredEvent InCheckpointTeleportingEvent);                    // [0xb9b91c0] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_SectionCompleted_ParallelPath
	// void NetMulticast_SectionCompleted_ParallelPath(FDelMarEvent_SectionComplete_ParallelPath InSectionEvent);            // [0xb9b90e4] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_RaceCompleted
	// void NetMulticast_RaceCompleted(double RunTime, bool bValidRun);                                                      // [0xb9b8f98] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_LapCompleted
	// void NetMulticast_LapCompleted(FDelMarEvent_LapComplete InLapEvent);                                                  // [0xb9b8ec0] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_CheckpointPassedOutOfOrder_ParallelPath
	// void NetMulticast_CheckpointPassedOutOfOrder_ParallelPath(FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath InCheckpointPassedOutOfOrderEvent); // [0xb9b8d34] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_CheckpointPassed_ParallelPath
	// void NetMulticast_CheckpointPassed_ParallelPath(FDelMarEvent_CheckpointPassed_ParallelPath CheckpointEvent);          // [0xb9b8df8] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.GetViewingSpectators
	// TArray<APlayerState*> GetViewingSpectators();                                                                         // [0xb9b85dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.GetNumViewingSpectator
	// int32_t GetNumViewingSpectator();                                                                                     // [0x622b8b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarPlayerDeathRaceDataComponent
/// Size: 0x0008 (0x000228 - 0x000230)
class UDelMarPlayerDeathRaceDataComponent : public UDelMarPlayerRaceDataComponent
{ 
public:
	int32_t                                            Score;                                                      // 0x0228   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x022C   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarPlayerInputManagerComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UDelMarPlayerInputManagerComponent : public UDelMarPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(80,12933) /* TMap<FGameplayTag, FDelMarInputMappingContextData> */ __um(InputMappingContextMap); // 0x00A0   (0x0050)  
	SDK_UNDEFINED(8,12934) /* TWeakObjectPtr<AFortPlayerController*> */ __um(CachedController);                    // 0x00F0   (0x0008)  
	SDK_UNDEFINED(8,12935) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedVehicle);                              // 0x00F8   (0x0008)  
	SDK_UNDEFINED(8,12936) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x0100   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarPlayerPreferencesComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UDelMarPlayerPreferencesComponent : public UDelMarPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(16,12937) /* FMulticastInlineDelegate */ __um(OnUseToggleOnExpandableHudWidgetChanged);          // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12938) /* FMulticastInlineDelegate */ __um(OnUseIconOnlyPlayerNameplatesChanged);             // 0x00B0   (0x0010)  
	EDelMarInvertSteerMethod                           InvertSteerMethod;                                          // 0x00C0   (0x0001)  
	bool                                               bPitchInverted;                                             // 0x00C1   (0x0001)  
	bool                                               bVerticalKickflipInverted;                                  // 0x00C2   (0x0001)  
	bool                                               bAerialPitchActivationEnabled;                              // 0x00C3   (0x0001)  
	bool                                               bUseToggleOnExpandableHudWidget;                            // 0x00C4   (0x0001)  
	bool                                               bUseIconOnlyPlayerNameplates;                               // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00C6   (0x0002)  MISSED
	SDK_UNDEFINED(8,12939) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedDelMarVehicle);                        // 0x00C8   (0x0008)  
	SDK_UNDEFINED(8,12940) /* TWeakObjectPtr<UFortClientSettingsRecord*> */ __um(FortSettings);                    // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.TryGetFortClientSettings
	// void TryGetFortClientSettings();                                                                                      // [0xb9b9634] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.ServerUpdatePitchInverted
	// void ServerUpdatePitchInverted(bool bInPitchInverted);                                                                // [0xa044d08] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.ServerUpdateAerialPitchActivation
	// void ServerUpdateAerialPitchActivation(bool bInAerialPitchActivationEnabled);                                         // [0xaa38270] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.ServerSetInvertSteerMethod
	// void ServerSetInvertSteerMethod(EDelMarInvertSteerMethod InInvertSteerMethod);                                        // [0x96c8b0c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleLocalFortInputSettingsChanged
	// void HandleLocalFortInputSettingsChanged();                                                                           // [0xb9b8988] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleInvertSteerSettingChanged
	// void HandleInvertSteerSettingChanged();                                                                               // [0xb9b88d4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleIconOnlyNameplatesSettingChanged
	// void HandleIconOnlyNameplatesSettingChanged();                                                                        // [0xb9b88ac] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleAerialPitchActivationSettingChanged
	// void HandleAerialPitchActivationSettingChanged();                                                                     // [0xb9b866c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.GetUseToggleOnExpandableHudWidget
	// bool GetUseToggleOnExpandableHudWidget();                                                                             // [0xad3a8e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.GetUseIconOnlyPlayerNameplates
	// bool GetUseIconOnlyPlayerNameplates();                                                                                // [0xb9b85c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarPlayerRespawnComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UDelMarPlayerRespawnComponent : public UDelMarPlayerStateComponent
{ 
public:
	float                                              TeleportEnterPhaseSeconds;                                  // 0x00A0   (0x0004)  
	float                                              RespawnBackwardsRangeDistance;                              // 0x00A4   (0x0004)  
	float                                              RespawnForwardRangeDistance;                                // 0x00A8   (0x0004)  
	float                                              RespawnHeightStartDistance;                                 // 0x00AC   (0x0004)  
	float                                              RespawnHeightPenetrationDistance;                           // 0x00B0   (0x0004)  
	float                                              RespawnValidTrackRadius;                                    // 0x00B4   (0x0004)  
	bool                                               bCheckForObstacles;                                         // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              OppositeSideThreshold;                                      // 0x00BC   (0x0004)  
	FVector                                            ObstacleAreaBounds;                                         // 0x00C0   (0x0018)  
	TArray<class UClass*>                              ObstacleActorClasses;                                       // 0x00D8   (0x0010)  
	TArray<class UClass*>                              ObstacleActorIgnoreClasses;                                 // 0x00E8   (0x0010)  
	SDK_UNDEFINED(8,12941) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x00F8   (0x0008)  
	SDK_UNDEFINED(8,12942) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(DelMarVehicle);                              // 0x0100   (0x0008)  
	SDK_UNDEFINED(8,12943) /* TWeakObjectPtr<UDelMarCheckpointManagerComponent*> */ __um(CheckpointManager);       // 0x0108   (0x0008)  
	SDK_UNDEFINED(8,12944) /* TWeakObjectPtr<UDelMarPlayerRaceDataComponent*> */ __um(PlayerRaceData);             // 0x0110   (0x0008)  
	SDK_UNDEFINED(8,12945) /* TWeakObjectPtr<UDelMarRaceConfigComponent*> */ __um(RaceConfig);                     // 0x0118   (0x0008)  
	SDK_UNDEFINED(8,12946) /* TWeakObjectPtr<ADelMarTrack*> */ __um(LastActiveTrack);                              // 0x0120   (0x0008)  
	SDK_UNDEFINED(8,12947) /* TWeakObjectPtr<UDelMarTrackPositionComponent*> */ __um(TrackPosition);               // 0x0128   (0x0008)  
	int32_t                                            LastValidSegmentIndex;                                      // 0x0130   (0x0004)  
	float                                              LastValidDistanceAlongSpline;                               // 0x0134   (0x0004)  
	bool                                               bSpawnOnOppositeSide;                                       // 0x0138   (0x0001)  
	bool                                               bPreviousVehicleDemolished;                                 // 0x0139   (0x0001)  
	bool                                               bFirstVehicleForPlayer;                                     // 0x013A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x15];                                      // 0x013B   (0x0015)  MISSED
};

/// Class /Script/DelMarCore.DelMarPlayerStartlineComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UDelMarPlayerStartlineComponent : public UDelMarPlayerStateComponent
{ 
public:
	float                                              FailBufferSeconds;                                          // 0x00A0   (0x0004)  
	SDK_UNDEFINED(8,12948) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(DelMarVehicle);                              // 0x00A4   (0x0008)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x00AC   (0x0034)  MISSED
};

/// Class /Script/DelMarCore.DelMarPlayerTurboManagerComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UDelMarPlayerTurboManagerComponent : public UDelMarPlayerStateComponent
{ 
public:
	float                                              TurboCharges;                                               // 0x00A0   (0x0004)  
	float                                              RechargeRateSeconds;                                        // 0x00A4   (0x0004)  
	float                                              LapCompleteCharges;                                         // 0x00A8   (0x0004)  
	float                                              RaceStartCharges;                                           // 0x00AC   (0x0004)  
	float                                              MaxCharges;                                                 // 0x00B0   (0x0004)  
	SDK_UNDEFINED(8,12949) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(CachedDelMarVehicle);                        // 0x00B4   (0x0008)  
	SDK_UNDEFINED(8,12950) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerTurboManagerComponent.SetTurboCharges
	// void SetTurboCharges(float TurboChargeAmount);                                                                        // [0xba06bbc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerTurboManagerComponent.ModifyTurboCharges_Delayed
	// void ModifyTurboCharges_Delayed(float TurboChargeAmount);                                                             // [0xba04a4c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerTurboManagerComponent.ModifyTurboCharges
	// void ModifyTurboCharges(float TurboChargeAmount);                                                                     // [0xba04988] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerTurboManagerComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                         // [0xba047b8] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRemoveAthenaMarkerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarRemoveAthenaMarkerComponent : public UControllerComponent
{ 
public:
};

/// Class /Script/DelMarCore.DelMarRequestComponent
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UDelMarRequestComponent : public UDelMarPlayerStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x00A0   (0x0048)  MISSED
	FGameplayTagContainer                              MapChoice;                                                  // 0x00E8   (0x0020)  
	bool                                               bIsReadyToStartRace;                                        // 0x0108   (0x0001)  
	bool                                               bIsReadyToJoinRace;                                         // 0x0109   (0x0001)  
	EDelMarPostRaceVote                                PostRaceVote;                                               // 0x010A   (0x0001)  
	bool                                               bVotedPostRace;                                             // 0x010B   (0x0001)  
	SDK_UNDEFINED(8,12951) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x010C   (0x0008)  
	SDK_UNDEFINED(8,12952) /* TWeakObjectPtr<UDelMarRespawnManagerComponent*> */ __um(CachedRespawnManager);       // 0x0114   (0x0008)  
	SDK_UNDEFINED(8,12953) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x011C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0124   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerSetPostRaceVote
	// void ServerSetPostRaceVote(EDelMarPostRaceVote NewVote);                                                              // [0xba067f4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerSetJoinNextRace
	// void ServerSetJoinNextRace(bool bInReadyToJoinRace);                                                                  // [0xba0672c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestVehicleSpawn
	// void ServerRequestVehicleSpawn();                                                                                     // [0x9aa7504] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestSpectatorBecomePlayer
	// void ServerRequestSpectatorBecomePlayer();                                                                            // [0x2888030] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestResetRun
	// void ServerRequestResetRun();                                                                                         // [0xba06528] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestRacerCountdown
	// void ServerRequestRacerCountdown();                                                                                   // [0x205e768] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestMapFromGameplay
	// void ServerRequestMapFromGameplay(FGameplayTagContainer InMapChoice);                                                 // [0xba06420] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestMap
	// void ServerRequestMap(FGameplayTagContainer InMapChoice);                                                             // [0xba06318] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestFinalInitialization
	// void ServerRequestFinalInitialization();                                                                              // [0x1c0d610] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestBecomeSpectator
	// void ServerRequestBecomeSpectator();                                                                                  // [0x888df9c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerReadyUp
	// void ServerReadyUp(bool bInReadyUp);                                                                                  // [0xba05f8c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerPostRaceReturnToLobbySelected
	// void ServerPostRaceReturnToLobbySelected();                                                                           // [0x1fda954] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerPostRaceNextRaceSelected
	// void ServerPostRaceNextRaceSelected();                                                                                // [0x6d0e0b0] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.PostRaceReturnToLobbySelected
	// void PostRaceReturnToLobbySelected();                                                                                 // [0xba05180] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.PostRaceNextRaceSelected
	// void PostRaceNextRaceSelected();                                                                                      // [0xba0516c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.OnRep_PostRaceVote
	// void OnRep_PostRaceVote();                                                                                            // [0xba05034] Final|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarRequestComponent.OnRep_bIsReadyToStartRace
	// void OnRep_bIsReadyToStartRace();                                                                                     // [0xba05158] Final|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarRequestComponent.OnRep_bIsReadyToJoinRace
	// void OnRep_bIsReadyToJoinRace();                                                                                      // [0xba05144] Final|Native|Protected|Const 
};

/// Struct /Script/DelMarCore.DelMarLapRecord
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarLapRecord
{ 
	double                                             LapDuration;                                                // 0x0000   (0x0008)  
	TArray<double>                                     SectionTimes;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarRunRecord
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarRunRecord
{ 
	double                                             RunDuration;                                                // 0x0000   (0x0008)  
	double                                             RunStartTimestamp;                                          // 0x0008   (0x0008)  
	TArray<FDelMarLapRecord>                           LapRecords;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarRunRecordPlayerComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UDelMarRunRecordPlayerComponent : public UDelMarPlayerStateComponent
{ 
public:
	FDelMarRunRecord                                   CurrentRunRecord;                                           // 0x00A0   (0x0020)  
	FDelMarRunRecord                                   BestRunRecord;                                              // 0x00C0   (0x0020)  
	FDelMarRunRecord                                   BestSectionsRecord;                                         // 0x00E0   (0x0020)  
	double                                             BestSingleLapTime;                                          // 0x0100   (0x0008)  
	SDK_UNDEFINED(8,12954) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarRunRecordPlayerComponent.PrintRecords
	// void PrintRecords(FDelMarRunRecord& RunRecord, FString Name);                                                         // [0xba05194] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarRunRecordPlayerComponent.NetMulticast_SectionRecorded
	// void NetMulticast_SectionRecorded(FDelMarEvent_SectionRecorded InSectionRecordedEvent);                               // [0xba04e54] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRunRecordPlayerComponent.NetMulticast_RunRecorded
	// void NetMulticast_RunRecorded(FDelMarEvent_RunRecorded InRunRecordedEvent);                                           // [0xba04d48] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRunRecordPlayerComponent.NetMulticast_LapRecorded
	// void NetMulticast_LapRecorded(FDelMarEvent_LapRecorded InLapRecordedEvent);                                           // [0xba04b18] Net|NetReliableNative|Event|NetMulticast|Protected 
};

/// Class /Script/DelMarCore.DelMarTutorialPlayerRaceDataComponent
/// Size: 0x0008 (0x000228 - 0x000230)
class UDelMarTutorialPlayerRaceDataComponent : public UDelMarPlayerRaceDataComponent
{ 
public:
	int32_t                                            CurrentTutorialSectionIndex;                                // 0x0228   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x022C   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarTutorialRequestComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarTutorialRequestComponent : public UDelMarPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(8,12955) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12956) /* TWeakObjectPtr<ADelMarTutorialRaceManager*> */ __um(TutorialRaceManager);            // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.TutorialComplete
	// void TutorialComplete();                                                                                              // [0xba04478] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_RequestStartRace
	// void Server_RequestStartRace(bool bSkipCountdown);                                                                    // [0xa044d08] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_RequestSection
	// void Server_RequestSection(int32_t SectionIndex);                                                                     // [0xa3de818] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_RequestPrevSection
	// void Server_RequestPrevSection();                                                                                     // [0x9aa7504] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_RequestNextSection
	// void Server_RequestNextSection();                                                                                     // [0x2888030] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_KeepTraining
	// void Server_KeepTraining();                                                                                           // [0x6d0e0b0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|Const 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Replay
	// void Replay();                                                                                                        // [0xba05aec] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.KeepTraining
	// void KeepTraining();                                                                                                  // [0xba04974] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.GoRace
	// void GoRace();                                                                                                        // [0xba04478] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DelMarCore.DelMarLevelManagerComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UDelMarLevelManagerComponent : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x00A0   (0x0030)  MISSED
	SDK_UNDEFINED(8,12957) /* TWeakObjectPtr<UDelMarLevelDataAsset*> */ __um(CurrentLevelData);                    // 0x00D0   (0x0008)  
	FOnlineLinkId                                      CurrentLevelLinkId;                                         // 0x00D8   (0x0018)  
	FGameplayTagContainer                              DesiredMapDescription;                                      // 0x00F0   (0x0020)  
	FOnlineLinkId                                      DesiredLinkId;                                              // 0x0110   (0x0018)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0128   (0x0028)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarLevelManagerComponent.ServerRequestLevel
	// void ServerRequestLevel(FGameplayTagContainer DesiredMap);                                                            // [0xba06054] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarLevelManagerComponent.RequestLevelLoad
	// void RequestLevelLoad(FGameplayTagContainer& DesiredMap);                                                             // [0xba05b00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarLoadingScreenMutator
/// Size: 0x0010 (0x000338 - 0x000348)
class ADelMarLoadingScreenMutator : public AFortAthenaMutator
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0338   (0x0010)  MISSED
};

/// Struct /Script/DelMarCore.DelMarMapStatus
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarMapStatus
{ 
	class UDelMarLevelDataAsset*                       MapAsset;                                                   // 0x0000   (0x0008)  
	bool                                               bHasBeenPlayed;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarMapSet
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarMapSet
{ 
	bool                                               bShouldConsiderValid;                                       // 0x0000   (0x0001)  
	bool                                               bPlayLevelsRandomly;                                        // 0x0001   (0x0001)  
	bool                                               bShouldRepeat;                                              // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0003   (0x0005)  MISSED
	TArray<FDelMarMapStatus>                           Levels;                                                     // 0x0008   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarPlayspace
/// Size: 0x00D8 (0x0006C0 - 0x000798)
class ADelMarPlayspace : public AFortPlayspace
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x06C0   (0x0048)  MISSED
	SDK_UNDEFINED(8,12958) /* TWeakObjectPtr<UFortPlaylistAthena*> */ __um(MRSPlaylistData);                       // 0x0708   (0x0008)  
	class UDelMarGameStateMachine*                     PrimaryStateMachine;                                        // 0x0710   (0x0008)  
	bool                                               bShouldShowLoadingScreen;                                   // 0x0718   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0719   (0x0003)  MISSED
	SDK_UNDEFINED(8,12959) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(ActiveRaceManager);                      // 0x071C   (0x0008)  
	SDK_UNDEFINED(8,12960) /* TWeakObjectPtr<UFortPlaylistAthena*> */ __um(PlaylistData);                          // 0x0724   (0x0008)  
	SDK_UNDEFINED(8,12961) /* TWeakObjectPtr<UDelMarLevelManagerComponent*> */ __um(LevelManager);                 // 0x072C   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0734   (0x0004)  MISSED
	class UFortLevelStreamComponent*                   LevelStreamComponent;                                       // 0x0738   (0x0008)  
	FDelMarMapSet                                      MapSet;                                                     // 0x0740   (0x0018)  
	FGameplayTagContainer                              PlaylistDefinedMapTags;                                     // 0x0758   (0x0020)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0778   (0x0020)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayspace.ShouldShowLoadingScreen
	// bool ShouldShowLoadingScreen();                                                                                       // [0xba06c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayspace.SetLoadingScreenVisibiliy
	// void SetLoadingScreenVisibiliy(bool bInShouldShowLoadingScreen);                                                      // [0xba06978] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayspace.ServerReturnToSetupWithLinkCode
	// void ServerReturnToSetupWithLinkCode(FOnlineLinkId OptionalMapToForceLoad);                                           // [0xba06648] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.ServerReturnToSetup
	// void ServerReturnToSetup(FGameplayTagContainer OptionalMapToForceLoad);                                               // [0xba06540] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.ServerRequestLoadingLevelWithLinkCode
	// void ServerRequestLoadingLevelWithLinkCode(FOnlineLinkId DesiredMap);                                                 // [0xba06234] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.ServerRequestLoadingLevel
	// void ServerRequestLoadingLevel(FGameplayTagContainer DesiredMap);                                                     // [0xba06144] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.RequestNextMapFromMapSet
	// void RequestNextMapFromMapSet();                                                                                      // [0x2918dfc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.OnRep_ActiveRaceManagerUpdated
	// void OnRep_ActiveRaceManagerUpdated();                                                                                // [0xba04f7c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPreRaceControllerComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UDelMarPreRaceControllerComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	class UInputAction*                                NavigateAction;                                             // 0x00B8   (0x0008)  
	FViewTargetTransitionParams                        ViewTargetTransitionParams;                                 // 0x00C0   (0x0010)  
	float                                              NavigateInputDeadzone;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class UClass*                                      InputManagerClass;                                          // 0x00D8   (0x0008)  
	SDK_UNDEFINED(8,12962) /* TWeakObjectPtr<UDelMarPlayerInputManagerComponent*> */ __um(InputManager);           // 0x00E0   (0x0008)  
	SDK_UNDEFINED(8,12963) /* TWeakObjectPtr<UEnhancedInputComponent*> */ __um(InputComponent);                    // 0x00E8   (0x0008)  
	SDK_UNDEFINED(8,12964) /* TWeakObjectPtr<UDelMarPositionalTrackerComponent*> */ __um(PositionTracker);         // 0x00F0   (0x0008)  
	SDK_UNDEFINED(8,12965) /* TWeakObjectPtr<AFortPlayerState*> */ __um(CurrentViewTarget);                        // 0x00F8   (0x0008)  
	float                                              CellDistThreshold;                                          // 0x0100   (0x0004)  
	float                                              MaxGridDim;                                                 // 0x0104   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0108   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPreRaceControllerComponent.ServerSetViewTarget
	// void ServerSetViewTarget(class AFortPlayerState* PlayerState);                                                        // [0x80b8a60] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarCheckpointManagerComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UDelMarCheckpointManagerComponent : public UDelMarRaceManagerComponent
{ 
public:
	bool                                               bPromptFirstPlaceEvent;                                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	SDK_UNDEFINED(8,12966) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(StartingLineCheckpoint);                  // 0x00A4   (0x0008)  
	SDK_UNDEFINED(8,12967) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(FinishLineCheckpoint);                    // 0x00AC   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	SDK_UNDEFINED(80,12968) /* TSet<TWeakObjectPtr<ADelMarCheckpoint*>> */ __um(LevelCheckpoints);                 // 0x00B8   (0x0050)  


	/// Functions
	// Function /Script/DelMarCore.DelMarCheckpointManagerComponent.HandleResetRace
	// void HandleResetRace(FDelMarEvent_ResetRace& Event);                                                                  // [0xba0472c] Final|Native|Private|HasOutParms 
	// Function /Script/DelMarCore.DelMarCheckpointManagerComponent.HandleRaceFinished
	// void HandleRaceFinished(FDelMarEvent_RaceFinished& Event);                                                            // [0xba044e0] Final|Native|Private|HasOutParms 
};

/// Struct /Script/DelMarCore.DelMarDeathRaceConfig
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarDeathRaceConfig
{ 
	TArray<int32_t>                                    PlacementPointsMap;                                         // 0x0000   (0x0010)  
	int32_t                                            ScoreThresholdToEndMatch;                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarDeathRaceManager
/// Size: 0x0030 (0x0004A0 - 0x0004D0)
class ADelMarDeathRaceManager : public ADelMarRaceManager
{ 
public:
	float                                              NextRoundSeconds;                                           // 0x04A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x04A4   (0x0004)  MISSED
	FDelMarDeathRaceConfig                             DeathRaceConfigData;                                        // 0x04A8   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x04C0   (0x0008)  MISSED
	int32_t                                            NumPlayersFinished;                                         // 0x04C8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x04CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarDeathRaceManager.GetScoreThresholdToEndMatch
	// int32_t GetScoreThresholdToEndMatch();                                                                                // [0xba04424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarDeathRaceManager.GetPointsAwardForPlacement
	// int32_t GetPointsAwardForPlacement(int32_t InPlacement);                                                              // [0xba04328] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarMatchmakeRatingComponentBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarMatchmakeRatingComponentBase : public UDelMarRaceManagerComponent
{ 
public:
};

/// Class /Script/DelMarCore.DelmarCompetitiveMatchmakeRatingComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UDelmarCompetitiveMatchmakeRatingComponent : public UDelMarMatchmakeRatingComponentBase
{ 
public:
	SDK_UNDEFINED(80,12969) /* TSet<AFortPlayerState*> */ __um(PlayersGivenMMR);                                   // 0x00A0   (0x0050)  
};

/// Struct /Script/DelMarCore.DelMarFinalRacePositionEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarFinalRacePositionEntry
{ 
	SDK_UNDEFINED(8,12970) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerState);                              // 0x0000   (0x0008)  
	double                                             RunTime;                                                    // 0x0008   (0x0008)  
};

/// Class /Script/DelMarCore.DelMarPositionalTrackerComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UDelMarPositionalTrackerComponent : public UDelMarRaceManagerComponent
{ 
public:
	float                                              TargetUpdateRateInSeconds;                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x34];                                      // 0x00A4   (0x0034)  MISSED
	SDK_UNDEFINED(80,12971) /* TMap<AFortPlayerState*, FDelMarPositionValue> */ __um(SplinePositions);             // 0x00D8   (0x0050)  
	TArray<class AFortPlayerState*>                    RacePositions;                                              // 0x0128   (0x0010)  
	TArray<FDelMarFinalRacePositionEntry>              FinalRacePositions;                                         // 0x0138   (0x0010)  
	float                                              TimeSinceLastUpdate;                                        // 0x0148   (0x0004)  
	int32_t                                            NumLapsInRace;                                              // 0x014C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0150   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarPositionalTrackerComponent.OnRep_FinalRacePositions
	// void OnRep_FinalRacePositions();                                                                                      // [0xba04f90] Final|Native|Protected 
};

/// Struct /Script/DelMarCore.DelMarMatchmakingConfig
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDelMarMatchmakingConfig
{ 
	float                                              MaxLoadWaitSeconds;                                         // 0x0000   (0x0004)  
	float                                              LoadWaitBufferSeconds;                                      // 0x0004   (0x0004)  
	float                                              MatchStartDelaySeconds;                                     // 0x0008   (0x0004)  
	bool                                               bMatchInProgressBackFillEnabled;                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MinSecondsRemainingForBackfill;                             // 0x0010   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarRandomRange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarRandomRange
{ 
	float                                              MinValue;                                                   // 0x0000   (0x0004)  
	float                                              MaxValue;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarStartlineConfig
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDelMarStartlineConfig
{ 
	bool                                               bEnableDynamicStartline;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              InitialCountdownDelayTime;                                  // 0x0004   (0x0004)  
	float                                              RequestCountdownDelayTime;                                  // 0x0008   (0x0004)  
	float                                              DefaultIntervalSeconds;                                     // 0x000C   (0x0004)  
	TArray<FDelMarRandomRange>                         IntervalRanges;                                             // 0x0010   (0x0010)  
	int32_t                                            CountdownIntervalNum;                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleRuntimeConfig
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDelMarVehicleRuntimeConfig
{ 
	bool                                               bCollisionDemosEnabled;                                     // 0x0000   (0x0001)  
	bool                                               bDemolishActionEnabled;                                     // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              RequiredDemolishActionDuration;                             // 0x0004   (0x0004)  
	bool                                               bIdleDisablesVehicleCollision;                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              SecondsToSetIdle;                                           // 0x000C   (0x0004)  
	EDelMarVehicleCollisionOverrideSetting             VehicleCollisionsGlobalOverride;                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/DelMarCore.DelMarRespawnConfig
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarRespawnConfig
{ 
	EDelMarRaceSpawnMode                               SpawnMode;                                                  // 0x0000   (0x0001)  
	bool                                               bUseTracesToDetermineRespawn;                               // 0x0001   (0x0001)  
	bool                                               bRespawnInvulnerabilityEnabled;                             // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              RespawnInvulnerabilitySeconds;                              // 0x0004   (0x0004)  
	bool                                               bRespawnCollisionProtectionEnabled;                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              RespawnCollisionProtectionSeconds;                          // 0x000C   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarRubberbandingMMRConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarRubberbandingMMRConfig
{ 
	float                                              MinMmr;                                                     // 0x0000   (0x0004)  
	float                                              MaxMmr;                                                     // 0x0004   (0x0004)  
	FDelMarRubberbandingConfig                         RubberbandingConfig;                                        // 0x0008   (0x0028)  
};

/// Class /Script/DelMarCore.DelMarRaceConfigComponent
/// Size: 0x0160 (0x0000A0 - 0x000200)
class UDelMarRaceConfigComponent : public UDelMarRaceManagerComponent
{ 
public:
	bool                                               bGhostReplayEnabled;                                        // 0x00A0   (0x0001)  
	bool                                               bAllowExitingVehicles;                                      // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00A2   (0x0002)  MISSED
	float                                              SecondsBeforeWrongwayWarning;                               // 0x00A4   (0x0004)  
	float                                              SecondsBeforeDemoWarningsAppear;                            // 0x00A8   (0x0004)  
	float                                              SecondsBeforeMissedCheckpointDemo;                          // 0x00AC   (0x0004)  
	float                                              SecondsBeforeReturnToTrackDemo;                             // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	double                                             DistanceFromTrackBeforeDemoWarning;                         // 0x00B8   (0x0008)  
	SDK_UNDEFINED(32,12972) /* TWeakObjectPtr<UClass*> */ __um(DefaultVehicleClass);                               // 0x00C0   (0x0020)  
	TArray<class UClass*>                              ServerPlayerStateComponents;                                // 0x00E0   (0x0010)  
	TArray<class UClass*>                              ClientPlayerStateComponents;                                // 0x00F0   (0x0010)  
	TArray<class UClass*>                              ServerControllerComponents;                                 // 0x0100   (0x0010)  
	TArray<class UClass*>                              ClientControllerComponents;                                 // 0x0110   (0x0010)  
	class UClass*                                      SpectatorControllerComponentClass;                          // 0x0120   (0x0008)  
	FDelMarMatchmakingConfig                           MatchmakingConfig;                                          // 0x0128   (0x0014)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	FDelMarStartlineConfig                             StartlineConfig;                                            // 0x0140   (0x0028)  
	FDelMarVehicleRuntimeConfig                        VehicleRuntimeConfig;                                       // 0x0168   (0x0014)  
	FDelMarVehicleAbilityConfig                        VehicleAbilityConfig;                                       // 0x017C   (0x0011)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x018D   (0x0003)  MISSED
	FDelMarRespawnConfig                               RespawnConfig;                                              // 0x0190   (0x0010)  
	FDelMarRubberbandingConfig                         DefaultRubberbandingConfig;                                 // 0x01A0   (0x0028)  
	TArray<FDelMarRubberbandingMMRConfig>              RubberbandingMMRConfigs;                                    // 0x01C8   (0x0010)  
	TArray<FDelMarRubberbandingMMRConfig>              RubberbandingMMROverrideConfigs;                            // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x01E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceConfigComponent.OnRep_VehicleAbilityConfig
	// void OnRep_VehicleAbilityConfig(FDelMarVehicleAbilityConfig& OldConfig);                                              // [0xba050a8] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarRaceConfigComponent.BroadcastVehicleAbilityConfigUpdated
	// void BroadcastVehicleAbilityConfigUpdated();                                                                          // [0xba04108] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DelMarCore.DelMarEvent_TrackedPlayerReadyStates
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarEvent_TrackedPlayerReadyStates
{ 
	SDK_UNDEFINED(16,12973) /* TArray<TWeakObjectPtr<AFortPlayerState*>> */ __um(ReadyPlayers);                    // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12974) /* TArray<TWeakObjectPtr<AFortPlayerState*>> */ __um(UnreadyPlayers);                  // 0x0010   (0x0010)  
};

/// Class /Script/DelMarCore.DelMarRequestTrackerComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarRequestTrackerComponent : public UDelMarRaceManagerComponent
{ 
public:
	FDelMarEvent_TrackedPlayerReadyStates              PlayerReadyStates;                                          // 0x00A0   (0x0020)  


	/// Functions
	// Function /Script/DelMarCore.DelMarRequestTrackerComponent.OnRep_PlayerReadyStates
	// void OnRep_PlayerReadyStates();                                                                                       // [0xba04fe0] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRespawnManagerComponent
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UDelMarRespawnManagerComponent : public UDelMarRaceManagerComponent
{ 
public:
	float                                              RespawnRetrySeconds;                                        // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x00A4   (0x0014)  MISSED
	SDK_UNDEFINED(8,12975) /* TWeakObjectPtr<UDelMarCheckpointManagerComponent*> */ __um(CachedCheckpointManager); // 0x00B8   (0x0008)  
	SDK_UNDEFINED(8,12976) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,12977) /* TWeakObjectPtr<ADelMarPlayerStart*> */ __um(CachedChallengeStartSpawnPoint);         // 0x00C8   (0x0008)  
	SDK_UNDEFINED(16,12978) /* TArray<TWeakObjectPtr<AController*>> */ __um(RespawnRetryQueue);                    // 0x00D0   (0x0010)  
	SDK_UNDEFINED(80,12979) /* TMap<TWeakObjectPtr<AFortPlayerState*>, TWeakObjectPtr<ADelMarVehicle*>> */ __um(LastSpawnedVehicleMap); // 0x00E0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarRespawnManagerComponent.RequestRespawnVehicleForPawn
	// class ADelMarVehicle* RequestRespawnVehicleForPawn(class AFortPlayerPawn* InPlayerPawn);                              // [0xba05cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRespawnManagerComponent.RequestRespawnPawnAndVehicle
	// class ADelMarVehicle* RequestRespawnPawnAndVehicle(class AController* InController);                                  // [0xba05bb8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarRubberbandingManagerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UDelMarRubberbandingManagerComponent : public UDelMarRaceManagerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	float                                              PackDistance;                                               // 0x00B8   (0x0004)  
	FDelMarRubberbandingConfig                         RubberbandingConfig;                                        // 0x00BC   (0x0028)  
	int32_t                                            MMRUsed;                                                    // 0x00E4   (0x0004)  


	/// Functions
	// Function /Script/DelMarCore.DelMarRubberbandingManagerComponent.OnRep_RubberbandingConfig
	// void OnRep_RubberbandingConfig();                                                                                     // [0xba05058] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarGameStateMachine
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UDelMarGameStateMachine : public UDelMarStateMachine
{ 
public:
};

/// Class /Script/DelMarCore.DelMarState_Gameplay
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarState_Gameplay : public UDelMarState
{ 
public:
};

/// Class /Script/DelMarCore.DelMarState_Gameplay_ActiveRace
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarState_Gameplay_ActiveRace : public UDelMarGameplayState
{ 
public:
};

/// Class /Script/DelMarCore.DelMarState_Gameplay_Postrace
/// Size: 0x0280 (0x000030 - 0x0002B0)
class UDelMarState_Gameplay_Postrace : public UDelMarGameplayState
{ 
public:
	float                                              PostRaceDuration;                                           // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	double                                             PostRaceEndServerTime;                                      // 0x0038   (0x0008)  
	SDK_UNDEFINED(80,12980) /* TSet<TWeakObjectPtr<AFortPlayerState*>> */ __um(ReadyPlayers);                      // 0x0040   (0x0050)  
	SDK_UNDEFINED(8,12981) /* TWeakObjectPtr<ADelMarPlayspace*> */ __um(CachedPlayspace);                          // 0x0090   (0x0008)  
	SDK_UNDEFINED(8,12982) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(CachedRaceManager);                      // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x00A0   (0x0030)  MISSED
	SDK_UNDEFINED(16,12983) /* FString */              __um(EliminationList);                                      // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x1D0];                                     // 0x00E0   (0x01D0)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarState_Gameplay_Postrace.OnRep_PostRaceEndServerTime
	// void OnRep_PostRaceEndServerTime();                                                                                   // [0xba3bad8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarState_Gameplay_Postrace.OnRep_EliminationList
	// void OnRep_EliminationList();                                                                                         // [0xba3ba58] Final|Native|Private 
};

/// Class /Script/DelMarCore.DelMarState_Gameplay_Prerace
/// Size: 0x0018 (0x000030 - 0x000048)
class UDelMarState_Gameplay_Prerace : public UDelMarGameplayState
{ 
public:
	SDK_UNDEFINED(8,12984) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	double                                             PreRaceCountdownFinishServerTime;                           // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/DelMarCore.DelMarState_Gameplay_Prerace.OnRep_PreRaceCountdownFinishServerTime
	// void OnRep_PreRaceCountdownFinishServerTime();                                                                        // [0xba3baec] Final|Native|Private 
};

/// Struct /Script/DelMarCore.DelMarEvent_LoadedPlayerStates
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_LoadedPlayerStates
{ 
	int32_t                                            NumLoadedPlayers;                                           // 0x0000   (0x0004)  
	int32_t                                            TotalPlayers;                                               // 0x0004   (0x0004)  
};

/// Class /Script/DelMarCore.DelMarState_Gameplay_WaitingForPlayers
/// Size: 0x0040 (0x000030 - 0x000070)
class UDelMarState_Gameplay_WaitingForPlayers : public UDelMarGameplayState
{ 
public:
	int32_t                                            MinPlayers;                                                 // 0x0030   (0x0004)  
	SDK_UNDEFINED(8,12985) /* TWeakObjectPtr<ADelMarRaceManager*> */ __um(RaceManager);                            // 0x0034   (0x0008)  
	FDelMarEvent_LoadedPlayerStates                    LoadedPlayerStates;                                         // 0x003C   (0x0008)  
	SDK_UNDEFINED(8,12986) /* TWeakObjectPtr<AFortPartyBeaconHost*> */ __um(FortPartyBeacon);                      // 0x0044   (0x0008)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x004C   (0x0024)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarState_Gameplay_WaitingForPlayers.OnRep_LoadedPlayerStates
	// void OnRep_LoadedPlayerStates();                                                                                      // [0xba3ba74] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarState_LevelSetup
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarState_LevelSetup : public UDelMarGameplayState
{ 
public:
	bool                                               bVehiclesReady;                                             // 0x0030   (0x0001)  
	bool                                               bVehiclesSpawned;                                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Class /Script/DelMarCore.DelMarState_Loading
/// Size: 0x0038 (0x000030 - 0x000068)
class UDelMarState_Loading : public UDelMarGameplayState
{ 
public:
	float                                              DelayBeforeLoadingActuallyStarts;                           // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FGameplayTagContainer                              DesiredMap;                                                 // 0x0038   (0x0020)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/DelMarCore.DelMarState_Lobby
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarState_Lobby : public UDelMarGameplayState
{ 
public:
	bool                                               bLevelLoadRequested;                                        // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/DelMarCore.DelMarState_Setup
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarState_Setup : public UDelMarGameplayState
{ 
public:
	bool                                               bHasRequestedLink;                                          // 0x0030   (0x0001)  
	bool                                               bHasRecievedMatchAssignment;                                // 0x0031   (0x0001)  
	bool                                               bRequiresMatchAssignmentToProceed;                          // 0x0032   (0x0001)  
	bool                                               bCalledMapRotationService;                                  // 0x0033   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FGameplayTagContainer                              DebugMapToLoad;                                             // 0x0038   (0x0020)  
	FOnlineLinkId                                      DebugIslandCodeToLoad;                                      // 0x0058   (0x0018)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Struct /Script/DelMarCore.DelMarDynamicCameraShakeEffect
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FDelMarDynamicCameraShakeEffect
{ 
	class UClass*                                      CameraShakeClass;                                           // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,12987) /* TWeakObjectPtr<UCameraShakeBase*> */ __um(CameraShakeInstance);                      // 0x0008   (0x0008)  
	FRuntimeFloatCurve                                 ShakeIntensityCurve;                                        // 0x0010   (0x0088)  
	float                                              CurrentShakeIntensity;                                      // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/DelMarCore.DelMarCameraShakeComponent
/// Size: 0x04D0 (0x0000A0 - 0x000570)
class UDelMarCameraShakeComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(80,12988) /* TMap<EBrelmarCameraShake, float> */ __um(ShakeIntensitySettingMap);                 // 0x00A0   (0x0050)  
	class UClass*                                      JumpShakeEffect;                                            // 0x00F0   (0x0008)  
	class UClass*                                      HazardShakeEffect;                                          // 0x00F8   (0x0008)  
	bool                                               bUseVehicleLandedKickflipShake;                             // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0101   (0x0007)  MISSED
	class UClass*                                      VehicleLandedKickflipShake;                                 // 0x0108   (0x0008)  
	FDelMarScaledCurve                                 VehicleLandedKickflipShakeIntensityCurve;                   // 0x0110   (0x0090)  
	class UClass*                                      VehicleLandedCameraShakeEffect;                             // 0x01A0   (0x0008)  
	FDelMarScaledCurve                                 VehicleLandedShakeIntensityCurve;                           // 0x01A8   (0x0090)  
	float                                              MaxSecondsToDampenVehicleHit;                               // 0x0238   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	FDelMarScaledCurve                                 VehicleHitShakeIntensityCurve;                              // 0x0240   (0x0090)  
	FDelMarDynamicCameraShakeEffect                    VehicleImpactShakeEffect;                                   // 0x02D0   (0x00A0)  
	FDelMarDynamicCameraShakeEffect                    WallImpactShakeEffect;                                      // 0x0370   (0x00A0)  
	FDelMarDynamicCameraShakeEffect                    WallNoRedirectImpactShakeEffect;                            // 0x0410   (0x00A0)  
	FDelMarDynamicCameraShakeEffect                    BaseAccelerationShakeEffect;                                // 0x04B0   (0x00A0)  
	SDK_UNDEFINED(16,12989) /* TScriptInterface<Class> */ __um(Vehicle);                                           // 0x0550   (0x0010)  
	SDK_UNDEFINED(8,12990) /* TWeakObjectPtr<AFortPlayerController*> */ __um(CachedPlayerController);              // 0x0560   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0568   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnVehicleLanded
	// void OnVehicleLanded(float LandingForce, bool bLandedKickflip);                                                       // [0xba3bf08] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnVehicleHitWall
	// void OnVehicleHitWall(float Magnitude, FVector WorldLocation, float ForwardRotationDegrees);                          // [0xba3bd3c] Final|Native|Protected|HasDefaults 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnVehicleHitVehicle
	// void OnVehicleHitVehicle(float Magnitude, FVector WorldLocation);                                                     // [0xba3bbdc] Final|Native|Protected|HasDefaults 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnJumpActivated
	// void OnJumpActivated();                                                                                               // [0xba3ba30] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnHazardHit
	// void OnHazardHit();                                                                                                   // [0xba3ba08] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnCameraShakeIntensitySettingsChanged
	// void OnCameraShakeIntensitySettingsChanged(class UFortClientSettingsRecord* Settings);                                // [0xba3b834] Final|Native|Private 
};

/// Struct /Script/DelMarCore.DelMarVehicleCollisionConfig
/// Size: 0x0218 (0x000000 - 0x000218)
struct FDelMarVehicleCollisionConfig
{ 
	float                                              MinWallAngleDegrees;                                        // 0x0000   (0x0004)  
	float                                              MinTimeBetweenSpeedLossHits;                                // 0x0004   (0x0004)  
	float                                              MinSpeedForTargetSpeedReduction;                            // 0x0008   (0x0004)  
	float                                              ActiveBumpTime;                                             // 0x000C   (0x0004)  
	FDelMarScaledCurve                                 SpeedReductionPercentageCurve;                              // 0x0010   (0x0090)  
	FDelMarScaledCurve                                 AerialSpeedReductionPercentageCurve;                        // 0x00A0   (0x0090)  
	FDelMarScaledCurve                                 WallTargetRedirectAngleDegreesCurve;                        // 0x0130   (0x0090)  
	float                                              WallTargetRedirectPercent;                                  // 0x01C0   (0x0004)  
	float                                              WallTargetRedirectDriftPercent;                             // 0x01C4   (0x0004)  
	float                                              WallDriftHeadOnThresholdDegrees;                            // 0x01C8   (0x0004)  
	float                                              WallHeadOnDriftRedirectAngleDegrees;                        // 0x01CC   (0x0004)  
	float                                              WallTargetRedirectHeadOnDriftPercent;                       // 0x01D0   (0x0004)  
	float                                              DriftTargetAngleDegrees;                                    // 0x01D4   (0x0004)  
	float                                              DrivingTargetAngleDegrees;                                  // 0x01D8   (0x0004)  
	float                                              MinGroundedDemolitionSpeed;                                 // 0x01DC   (0x0004)  
	float                                              MinAerialDemolitionSpeed;                                   // 0x01E0   (0x0004)  
	float                                              MaxGroundedDemolitionAngleDegrees;                          // 0x01E4   (0x0004)  
	float                                              MaxAerialDemolitionAngleDegrees;                            // 0x01E8   (0x0004)  
	float                                              ParallelCollisionThresholdDegrees;                          // 0x01EC   (0x0004)  
	float                                              HeadOnCollisionThresholdDegrees;                            // 0x01F0   (0x0004)  
	float                                              BumperToBumperThresholdDegrees;                             // 0x01F4   (0x0004)  
	float                                              BumpToBumperSpeedPenalty;                                   // 0x01F8   (0x0004)  
	float                                              ContactNormalToVehicleRightThresholdDegrees;                // 0x01FC   (0x0004)  
	float                                              TrackDirectionThresholdDegrees;                             // 0x0200   (0x0004)  
	float                                              TrackTraceLength;                                           // 0x0204   (0x0004)  
	SDK_UNDEFINED(1,12991) /* TEnumAsByte<ECollisionChannel> */ __um(TrackTraceChannel);                           // 0x0208   (0x0001)  
	bool                                               bCounterWorldHitImpulses;                                   // 0x0209   (0x0001)  
	bool                                               bCounterVehicleHitImpulses;                                 // 0x020A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x020B   (0x0001)  MISSED
	float                                              VehicleHitImpulseScalar;                                    // 0x020C   (0x0004)  
	float                                              VehicleHitDriftImpulseScalar;                               // 0x0210   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0214   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleDriveSetup
/// Size: 0x0360 (0x000000 - 0x000360)
struct FDelMarVehicleDriveSetup
{ 
	float                                              MaxBaseForwardSpeed;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDelMarScaledCurve                                 DriveAccel;                                                 // 0x0008   (0x0090)  
	FDelMarScaledCurve                                 TargetSpeedMaxAccelCurve;                                   // 0x0098   (0x0090)  
	float                                              TargetSpeedAerialFriction;                                  // 0x0128   (0x0004)  
	bool                                               bAllowBrakingInAir;                                         // 0x012C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x012D   (0x0003)  MISSED
	float                                              BrakeAccel;                                                 // 0x0130   (0x0004)  
	float                                              StopSpeed;                                                  // 0x0134   (0x0004)  
	float                                              IdleBrakeFactor;                                            // 0x0138   (0x0004)  
	float                                              MaxSpeedToResetTargetSpeedDirection;                        // 0x013C   (0x0004)  
	FRuntimeFloatCurve                                 SteerAngleCurve;                                            // 0x0140   (0x0088)  
	TArray<FRuntimeFloatCurve>                         SteerAngleCurveOverrides;                                   // 0x01C8   (0x0010)  
	FDelMarScaledCurve                                 LatFrictionCurve;                                           // 0x01D8   (0x0090)  
	FRuntimeFloatCurve                                 WheelsGroundedFrictionCurve;                                // 0x0268   (0x0088)  
	float                                              MaxForwardSpeedToIgnoreLandingSpeed;                        // 0x02F0   (0x0004)  
	float                                              MaxKickflipLandingSeconds;                                  // 0x02F4   (0x0004)  
	float                                              MinSlipAngle;                                               // 0x02F8   (0x0004)  
	float                                              SkydiveVerticalVelocitySensitivity;                         // 0x02FC   (0x0004)  
	float                                              SkydiveVerticalPitchSensitivity;                            // 0x0300   (0x0004)  
	float                                              StableSpeedMinGroundedTime;                                 // 0x0304   (0x0004)  
	float                                              MinInAirTimeStableLanding;                                  // 0x0308   (0x0004)  
	int32_t                                            NumWheelsForActivelyLanding;                                // 0x030C   (0x0004)  
	float                                              MinAerialSpeedForPrimaryDirection;                          // 0x0310   (0x0004)  
	float                                              ForwardMaxSpeed;                                            // 0x0314   (0x0004)  
	float                                              UpwardMaxLandingSpeed;                                      // 0x0318   (0x0004)  
	float                                              UpwardMaxSpeed;                                             // 0x031C   (0x0004)  
	float                                              MaxLandingAngularVelocity;                                  // 0x0320   (0x0004)  
	float                                              MinCeilingDegrees;                                          // 0x0324   (0x0004)  
	float                                              MaxCeilingDegrees;                                          // 0x0328   (0x0004)  
	float                                              AerialCeilingDegrees;                                       // 0x032C   (0x0004)  
	float                                              MaxInvertedControlSteering;                                 // 0x0330   (0x0004)  
	float                                              MinCeilingSecondsToInvertControls;                          // 0x0334   (0x0004)  
	float                                              WheelPushForce;                                             // 0x0338   (0x0004)  
	float                                              MinSpeedForVelocityDirection;                               // 0x033C   (0x0004)  
	float                                              MinZSpeedForUpwardDirection;                                // 0x0340   (0x0004)  
	float                                              VerticalOrientationSensitivity;                             // 0x0344   (0x0004)  
	float                                              MaxInactiveLandedFlipTime;                                  // 0x0348   (0x0004)  
	int32_t                                            NumWheelsForWheelsOnGround;                                 // 0x034C   (0x0004)  
	float                                              MinDownDegreesForForwardDirection;                          // 0x0350   (0x0004)  
	float                                              MaxNormalizedForwardSpeed;                                  // 0x0354   (0x0004)  
	float                                              MaxNormalizedBonusSpeed;                                    // 0x0358   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x035C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleRigidBodyConfig
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDelMarVehicleRigidBodyConfig
{ 
	bool                                               bApplyGlobalBodySettings;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LinearDamping;                                              // 0x0004   (0x0004)  
	float                                              AngularDamping;                                             // 0x0008   (0x0004)  
	float                                              VehicleMass;                                                // 0x000C   (0x0004)  
	bool                                               bNotifyRigidBodyCollisions;                                 // 0x0010   (0x0001)  
	bool                                               bSmoothEdgeCollisionsEnabled;                               // 0x0011   (0x0001)  
	bool                                               bUseCCD;                                                    // 0x0012   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0013   (0x0005)  MISSED
	FVector                                            CenterOfMassOffset;                                         // 0x0018   (0x0018)  
	bool                                               bSuspensionIgnoresBodyCollision;                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxLinearSpeed;                                             // 0x0034   (0x0004)  
	float                                              MaxAngularSpeed;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Terrain
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarVehicleConfig_Terrain
{ 
	float                                              TargetSpeedPenaltyCooldownSeconds;                          // 0x0000   (0x0004)  
	int32_t                                            NumWheelsTargetSpeedPenalty;                                // 0x0004   (0x0004)  
	float                                              NoGripBrakeFactorWithThrottle;                              // 0x0008   (0x0004)  
	float                                              MinForwardSpeedPercentage;                                  // 0x000C   (0x0004)  
	TArray<class UClass*>                              NonDriveableActorClasses;                                   // 0x0010   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarWorldBonusSpeedSourceCap
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarWorldBonusSpeedSourceCap
{ 
	FGameplayTag                                       Source;                                                     // 0x0000   (0x0004)  
	int32_t                                            StackCap;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_WorldBonusSpeed
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarVehicleConfig_WorldBonusSpeed
{ 
	TArray<FDelMarWorldBonusSpeedSourceCap>            BonusSpeedSourceCaps;                                       // 0x0000   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AutoAerialRotation
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FDelMarVehicleConfig_AutoAerialRotation
{ 
	FVector                                            StabilizationDampingFactor;                                 // 0x0000   (0x0018)  
	FVector                                            StabilizationFactor;                                        // 0x0018   (0x0018)  
	float                                              IdleRotationThreshold;                                      // 0x0030   (0x0004)  
	float                                              UpsideDownRollTorque;                                       // 0x0034   (0x0004)  
	float                                              UpsideDownRollDamping;                                      // 0x0038   (0x0004)  
	float                                              MinRollInput;                                               // 0x003C   (0x0004)  
	float                                              SteerRollOffsetDegrees;                                     // 0x0040   (0x0004)  
	float                                              MinPitchInput;                                              // 0x0044   (0x0004)  
	float                                              MaxUserPitchOffsetDegrees;                                  // 0x0048   (0x0004)  
	float                                              LateralPitchOffsetDegrees;                                  // 0x004C   (0x0004)  
	float                                              UnderthrustPitchDegrees;                                    // 0x0050   (0x0004)  
	float                                              MinThrottleInput;                                           // 0x0054   (0x0004)  
	float                                              MaxUserThrottleOffsetDegrees;                               // 0x0058   (0x0004)  
	float                                              YawTorque;                                                  // 0x005C   (0x0004)  
	FVector                                            MaxRotationSpeed;                                           // 0x0060   (0x0018)  
	float                                              MinApproachTargetScalar;                                    // 0x0078   (0x0004)  
	float                                              MinForwardSpeedForYawRotation;                              // 0x007C   (0x0004)  
	float                                              MinSteerInputForForwardStateTurning;                        // 0x0080   (0x0004)  
	float                                              ForwardStateTurnRate;                                       // 0x0084   (0x0004)  
	bool                                               bLandingAssistanceEnabled;                                  // 0x0088   (0x0001)  
	SDK_UNDEFINED(1,12992) /* TEnumAsByte<ECollisionChannel> */ __um(LandingCollisionChannel);                     // 0x0089   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x008A   (0x0002)  MISSED
	float                                              LandingDetectionSeconds;                                    // 0x008C   (0x0004)  
	float                                              MinLandingDetectionDistance;                                // 0x0090   (0x0004)  
	float                                              LandingSurfaceNormalMaxDegrees;                             // 0x0094   (0x0004)  
	float                                              LandingRotationAmplifier;                                   // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AirControl
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FDelMarVehicleConfig_AirControl
{ 
	float                                              MaxPitchAdjustmentForwardSpeed;                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDelMarScaledCurve                                 LateralTurnRateCurve;                                       // 0x0008   (0x0090)  
	float                                              UnderthrustTurnRate;                                        // 0x0098   (0x0004)  
	bool                                               bAllowRedirectDuringKickflip;                               // 0x009C   (0x0001)  
	bool                                               bAllowVerticalRedirectDuringVerticalKickflip;               // 0x009D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x009E   (0x0002)  MISSED
	float                                              LateralKickflipScalar;                                      // 0x00A0   (0x0004)  
	float                                              VerticalTurnRate;                                           // 0x00A4   (0x0004)  
	float                                              VerticalTurnRateAboveHorizon;                               // 0x00A8   (0x0004)  
	float                                              MinSteerInput;                                              // 0x00AC   (0x0004)  
	float                                              MinPitchVerticalDegreesFromWorldDown;                       // 0x00B0   (0x0004)  
	float                                              MaxPitchVerticalDegreesFromWorldDown;                       // 0x00B4   (0x0004)  
	bool                                               bAerialDivingBonusEnabled;                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              MinPitchForAerialDivingBonus;                               // 0x00BC   (0x0004)  
	float                                              MaxAerialDivingBonusSpeed;                                  // 0x00C0   (0x0004)  
	float                                              MinAerialDivingBonusSpeed;                                  // 0x00C4   (0x0004)  
	float                                              AerialDivingBonusSpeedChangeRate;                           // 0x00C8   (0x0004)  
	float                                              AerialDivingBonusSpeedDecayRate;                            // 0x00CC   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AirFreestyle
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarVehicleConfig_AirFreestyle
{ 
	FVector                                            TorqueAccel;                                                // 0x0000   (0x0018)  
	FVector                                            TorqueDamping;                                              // 0x0018   (0x0018)  
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AirThrottle
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FDelMarVehicleConfig_AirThrottle
{ 
	FDelMarScaledCurve                                 AccelerationScalarCurve;                                    // 0x0000   (0x0090)  
	float                                              AerialSpeedCap;                                             // 0x0090   (0x0004)  
	float                                              OverCapSpeedLossPerSecond;                                  // 0x0094   (0x0004)  
	float                                              AerialSlowdownImmunitySeconds;                              // 0x0098   (0x0004)  
	bool                                               bApplyNoThrottleSlowdown;                                   // 0x009C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x009D   (0x0003)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AutoUpright
/// Size: 0x0024 (0x000000 - 0x000024)
struct FDelMarVehicleConfig_AutoUpright
{ 
	float                                              RotationTorque;                                             // 0x0000   (0x0004)  
	float                                              RotationDamping;                                            // 0x0004   (0x0004)  
	float                                              MinActiveSeconds;                                           // 0x0008   (0x0004)  
	float                                              MinActiveSecondsGrounded;                                   // 0x000C   (0x0004)  
	float                                              WheelsOnGroundChangedDelaySeconds;                          // 0x0010   (0x0004)  
	bool                                               bClearAngularVelocity;                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinDegreesFromVehicleUpThreshold;                           // 0x0018   (0x0004)  
	float                                              MinThrottleForWheelRotation;                                // 0x001C   (0x0004)  
	bool                                               bAllowActiveStateOnGround;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleDraftingConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarVehicleDraftingConfig
{ 
	float                                              TraceDistance;                                              // 0x0000   (0x0004)  
	float                                              MinEligibleDistance;                                        // 0x0004   (0x0004)  
	float                                              MaxHorizontalDegreesToDraftTarget;                          // 0x0008   (0x0004)  
	float                                              MaxVerticalDegreesToDraftTarget;                            // 0x000C   (0x0004)  
	SDK_UNDEFINED(1,12993) /* TEnumAsByte<ECollisionChannel> */ __um(LineOfSightChannel);                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              MinSpeedToStartDrafting;                                    // 0x0014   (0x0004)  
	float                                              NumSecondsToActivateDrafting;                               // 0x0018   (0x0004)  
	float                                              NumForgivenessSeconds;                                      // 0x001C   (0x0004)  
	float                                              NumGracePeriodSeconds;                                      // 0x0020   (0x0004)  
	float                                              NumSecondsToMaxBonusSpeed;                                  // 0x0024   (0x0004)  
	float                                              MaxBonusSpeed;                                              // 0x0028   (0x0004)  
	float                                              NumSpeedRemovalSeconds;                                     // 0x002C   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleDriftConfig
/// Size: 0x0718 (0x000000 - 0x000718)
struct FDelMarVehicleDriftConfig
{ 
	float                                              MinSpeed;                                                   // 0x0000   (0x0004)  
	float                                              MinDirectedDriftTime;                                       // 0x0004   (0x0004)  
	float                                              MinInAirTime;                                               // 0x0008   (0x0004)  
	float                                              AerialDriftNoKeybindGracePeriod;                            // 0x000C   (0x0004)  
	float                                              MaxForcedDriftTime;                                         // 0x0010   (0x0004)  
	float                                              MinKickDriftActiveSeconds;                                  // 0x0014   (0x0004)  
	bool                                               bForceSteerWhenKicking;                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              MinForcedSteerWhenKicking;                                  // 0x001C   (0x0004)  
	float                                              KickCooldownSeconds;                                        // 0x0020   (0x0004)  
	bool                                               bActivateDriftOnStrafeEnd;                                  // 0x0024   (0x0001)  
	bool                                               bActivateDriftOnLanding;                                    // 0x0025   (0x0001)  
	bool                                               bActivateDriftOnKickflipLanding;                            // 0x0026   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0027   (0x0001)  MISSED
	float                                              ActivateExitDriftTime;                                      // 0x0028   (0x0004)  
	float                                              MinSteerInput;                                              // 0x002C   (0x0004)  
	float                                              MinFullThrottleInput;                                       // 0x0030   (0x0004)  
	float                                              MinFullSteerInput;                                          // 0x0034   (0x0004)  
	float                                              MinFullDriftInput;                                          // 0x0038   (0x0004)  
	float                                              ForcedDriftSteer;                                           // 0x003C   (0x0004)  
	float                                              InitialTorqueImpulse;                                       // 0x0040   (0x0004)  
	float                                              SwapDirectionImpulse;                                       // 0x0044   (0x0004)  
	float                                              TorqueAccelInDriftDir;                                      // 0x0048   (0x0004)  
	float                                              TorqueAccelNoSteer;                                         // 0x004C   (0x0004)  
	float                                              TorqueAccelNotInDriftDir;                                   // 0x0050   (0x0004)  
	float                                              TorqueAccelChangeDir;                                       // 0x0054   (0x0004)  
	float                                              TorqueAccelDampening;                                       // 0x0058   (0x0004)  
	float                                              TorqueAccelWithKick;                                        // 0x005C   (0x0004)  
	float                                              TorqueAccelWithKickV2;                                      // 0x0060   (0x0004)  
	float                                              TorqueAccelForcedDrift;                                     // 0x0064   (0x0004)  
	float                                              TorqueAgainstExit;                                          // 0x0068   (0x0004)  
	float                                              MaxRotationSpeedWithThrottle;                               // 0x006C   (0x0004)  
	float                                              MaxRotationSpeedNoThrottle;                                 // 0x0070   (0x0004)  
	float                                              MaxRotationSpeedWithKick;                                   // 0x0074   (0x0004)  
	float                                              MaxRotationSpeedSwapDirections;                             // 0x0078   (0x0004)  
	float                                              MinDriftDegrees;                                            // 0x007C   (0x0004)  
	float                                              MaxDriftDegrees;                                            // 0x0080   (0x0004)  
	float                                              ExitDriftDegrees;                                           // 0x0084   (0x0004)  
	float                                              ApproachDistance;                                           // 0x0088   (0x0004)  
	float                                              PeakForwardSpeedDegrees;                                    // 0x008C   (0x0004)  
	float                                              KickRedirectRate;                                           // 0x0090   (0x0004)  
	float                                              KickRedirectRateV2;                                         // 0x0094   (0x0004)  
	float                                              ForcedDriftRedirectRate;                                    // 0x0098   (0x0004)  
	float                                              MinSteerRedirectInput;                                      // 0x009C   (0x0004)  
	FDelMarScaledCurve                                 NonKickRedirectRateCurve;                                   // 0x00A0   (0x0090)  
	FDelMarScaledCurve                                 VelocityRedirectAngleCurveControlled;                       // 0x0130   (0x0090)  
	FDelMarScaledCurve                                 VelocityRedirectAgainstAngleCurveControlled;                // 0x01C0   (0x0090)  
	FDelMarScaledCurve                                 VelocityRedirectAngleCurveNoSteer;                          // 0x0250   (0x0090)  
	FDelMarScaledCurve                                 VelocityRedirectAngleCurveUncontrolled;                     // 0x02E0   (0x0090)  
	FDelMarScaledCurve                                 VelocityRedirectAngleCurveKickback;                         // 0x0370   (0x0090)  
	FDelMarScaledCurve                                 VelocityRedirectAngleCurveKickbackV2;                       // 0x0400   (0x0090)  
	float                                              PeakSpeedIncreaseDegrees;                                   // 0x0490   (0x0004)  
	float                                              MaxAccelSpeed;                                              // 0x0494   (0x0004)  
	FDelMarScaledCurve                                 AccelerationScalarCurve;                                    // 0x0498   (0x0090)  
	FDelMarScaledCurve                                 AdditionalSpeedLossNoThrottle;                              // 0x0528   (0x0090)  
	float                                              MaxControlledDriftRatio;                                    // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x05BC   (0x0004)  MISSED
	FDelMarScaledCurve                                 ControlledSpeedCapBySlipAngle;                              // 0x05C0   (0x0090)  
	FDelMarScaledCurve                                 ControlledSpeedCapDecelRate;                                // 0x0650   (0x0090)  
	float                                              UncontrolledSpeedCap;                                       // 0x06E0   (0x0004)  
	float                                              UncontrolledSpeedLoss;                                      // 0x06E4   (0x0004)  
	float                                              ExitVelocityMaxDegrees;                                     // 0x06E8   (0x0004)  
	float                                              ExitKickEndMaxDegrees;                                      // 0x06EC   (0x0004)  
	float                                              ExitVelocityTorqueAccel;                                    // 0x06F0   (0x0004)  
	float                                              ExitVelocityMaxRotationSpeed;                               // 0x06F4   (0x0004)  
	float                                              ExitForwardMaxDegrees;                                      // 0x06F8   (0x0004)  
	float                                              ExitForwardTorqueSteer;                                     // 0x06FC   (0x0004)  
	float                                              ExitForwardMaxRotation;                                     // 0x0700   (0x0004)  
	float                                              ExitForwardTargetRedirectRate;                              // 0x0704   (0x0004)  
	float                                              ExitForwardRedirectRate;                                    // 0x0708   (0x0004)  
	float                                              MaxExitForwardLandingSpeed;                                 // 0x070C   (0x0004)  
	bool                                               bEnforceThrottleForControlledDrift;                         // 0x0710   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0711   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleDriftBoostConfig
/// Size: 0x01D8 (0x000000 - 0x0001D8)
struct FDelMarVehicleDriftBoostConfig
{ 
	float                                              MaxDriftBoostRatio;                                         // 0x0000   (0x0004)  
	float                                              MaxBonusSpeed;                                              // 0x0004   (0x0004)  
	FDelMarScaledCurve                                 BonusSpeedPercentageCurve;                                  // 0x0008   (0x0090)  
	float                                              WaitingPeriodSeconds;                                       // 0x0098   (0x0004)  
	float                                              MaxDriftBoostSeconds;                                       // 0x009C   (0x0004)  
	FDelMarScaledCurve                                 PotentialDriftBoostPercentageCurve;                         // 0x00A0   (0x0090)  
	float                                              MaxNumActiveBonusSpeedSeconds;                              // 0x0130   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	FDelMarScaledCurve                                 DriftBoostDurationCurve;                                    // 0x0138   (0x0090)  
	float                                              BonusSpeedDecaySeconds;                                     // 0x01C8   (0x0004)  
	float                                              PotentialRemovalRate;                                       // 0x01CC   (0x0004)  
	bool                                               bEnforceThrottleForDriftBoost;                              // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01D1   (0x0003)  MISSED
	float                                              QueuedBoostImpulseScalar;                                   // 0x01D4   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Gravity
/// Size: 0x001C (0x000000 - 0x00001C)
struct FDelMarVehicleConfig_Gravity
{ 
	float                                              ForceScaleCeiling;                                          // 0x0000   (0x0004)  
	float                                              ForceScaleWall;                                             // 0x0004   (0x0004)  
	float                                              ForceScaleGround;                                           // 0x0008   (0x0004)  
	float                                              AerialGravityForceMultiplier;                               // 0x000C   (0x0004)  
	float                                              CoyoteTimeDuration;                                         // 0x0010   (0x0004)  
	int32_t                                            MinWheelsForStickySurfaces;                                 // 0x0014   (0x0004)  
	bool                                               bCounterGravityInKickflipSuctionDirection;                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Jump
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarVehicleConfig_Jump
{ 
	float                                              MinJumpTime;                                                // 0x0000   (0x0004)  
	float                                              MaxJumpTime;                                                // 0x0004   (0x0004)  
	float                                              JumpVelocity;                                               // 0x0008   (0x0004)  
	float                                              ForwardVelocity;                                            // 0x000C   (0x0004)  
	float                                              PitchTorque;                                                // 0x0010   (0x0004)  
	float                                              EndThrustForce;                                             // 0x0014   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Kickflip
/// Size: 0x0150 (0x000000 - 0x000150)
struct FDelMarVehicleConfig_Kickflip
{ 
	float                                              DirectionalSensitivity;                                     // 0x0000   (0x0004)  
	float                                              SecondaryDirectionalSensitivity;                            // 0x0004   (0x0004)  
	bool                                               bAllowDiagonalKickDirection;                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            NumWheelsForLanding;                                        // 0x000C   (0x0004)  
	int32_t                                            NumActivationCharges;                                       // 0x0010   (0x0004)  
	float                                              MinActiveSecondsToReactivate;                               // 0x0014   (0x0004)  
	float                                              MinActiveTime;                                              // 0x0018   (0x0004)  
	float                                              MaxActiveLateralTime;                                       // 0x001C   (0x0004)  
	float                                              MaxActiveUpwardTime;                                        // 0x0020   (0x0004)  
	float                                              MaxActiveDownwardTime;                                      // 0x0024   (0x0004)  
	float                                              CooldownTime;                                               // 0x0028   (0x0004)  
	bool                                               bAllowGroundedKickflips;                                    // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              GroundedKickflipForce;                                      // 0x0030   (0x0004)  
	float                                              LateralVelocity;                                            // 0x0034   (0x0004)  
	FDelMarScaledCurve                                 LateralVelocityScalarCurve;                                 // 0x0038   (0x0090)  
	float                                              MinForwardSpeedForLateralScalar;                            // 0x00C8   (0x0004)  
	float                                              MaxLateralVelocityCancelled;                                // 0x00CC   (0x0004)  
	float                                              UpwardVerticalVelocity;                                     // 0x00D0   (0x0004)  
	float                                              DownwardVerticalVelocity;                                   // 0x00D4   (0x0004)  
	float                                              LateralVerticalForce;                                       // 0x00D8   (0x0004)  
	float                                              RotationDamping;                                            // 0x00DC   (0x0004)  
	float                                              RotationTorque;                                             // 0x00E0   (0x0004)  
	float                                              RotationTorqueIncomingCollision;                            // 0x00E4   (0x0004)  
	float                                              MinSpeedToRotateYaw;                                        // 0x00E8   (0x0004)  
	float                                              MaxVerticalYawLandingDegrees;                               // 0x00EC   (0x0004)  
	float                                              MaxLateralYawLandingDegrees;                                // 0x00F0   (0x0004)  
	float                                              MaxVerticalNormalLandingDegrees;                            // 0x00F4   (0x0004)  
	float                                              MaxLateralNormalLandingDegrees;                             // 0x00F8   (0x0004)  
	float                                              MinLongRollTimeCheck;                                       // 0x00FC   (0x0004)  
	float                                              MinLongRollTimeCheckDownwardKick;                           // 0x0100   (0x0004)  
	float                                              MaxLongRollDegrees;                                         // 0x0104   (0x0004)  
	float                                              MinDegreesToCompleteRoll;                                   // 0x0108   (0x0004)  
	float                                              FastTorqueDistanceCheck;                                    // 0x010C   (0x0004)  
	bool                                               bUseStartingDirectionWhenLanding;                           // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	int32_t                                            PredictionTickInterval;                                     // 0x0114   (0x0004)  
	float                                              MaxSimulationRedirectSeconds;                               // 0x0118   (0x0004)  
	float                                              MaxSimulationDistanceLateral;                               // 0x011C   (0x0004)  
	float                                              MaxSimulationDistanceUpward;                                // 0x0120   (0x0004)  
	float                                              MaxSimulationDistanceDownward;                              // 0x0124   (0x0004)  
	bool                                               bApplySuctionToSurfaces;                                    // 0x0128   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0129   (0x0003)  MISSED
	float                                              SuctionVelocity;                                            // 0x012C   (0x0004)  
	float                                              MaxSuctionPerSecond;                                        // 0x0130   (0x0004)  
	float                                              SuctionDistanceCheck;                                       // 0x0134   (0x0004)  
	float                                              MaxAdditionalVelocitySuctionDistance;                       // 0x0138   (0x0004)  
	SDK_UNDEFINED(1,12994) /* TEnumAsByte<ECollisionChannel> */ __um(SuctionChannel);                              // 0x013C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x013D   (0x0003)  MISSED
	float                                              MaxForwardVelocityDegreeDifference;                         // 0x0140   (0x0004)  
	float                                              MinSpeedForPrimaryForwardRotation;                          // 0x0144   (0x0004)  
	float                                              MaxGroundedDirectionDegrees;                                // 0x0148   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleOversteerConfig
/// Size: 0x0138 (0x000000 - 0x000138)
struct FDelMarVehicleOversteerConfig
{ 
	float                                              MinInput;                                                   // 0x0000   (0x0004)  
	float                                              MaxAccumulatedSteer;                                        // 0x0004   (0x0004)  
	FDelMarScaledCurve                                 CappedAccumulatedSteerCurve;                                // 0x0008   (0x0090)  
	FDelMarScaledCurve                                 AccumulatedSteerRateCurve;                                  // 0x0098   (0x0090)  
	float                                              AccumulatedSteerDecayRate;                                  // 0x0128   (0x0004)  
	float                                              DriftImpulseForce;                                          // 0x012C   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0130   (0x0004)  
	bool                                               bDecayAccumulatedSteer;                                     // 0x0134   (0x0001)  
	bool                                               bClearAccumulatedSteerOnDrift;                              // 0x0135   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0136   (0x0002)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Reattachment
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FDelMarVehicleConfig_Reattachment
{ 
	float                                              SurfaceTraceDistance;                                       // 0x0000   (0x0004)  
	float                                              ReattachmentForceAmount;                                    // 0x0004   (0x0004)  
	FDelMarScaledCurve                                 ReattachmentForceScalarCurve;                               // 0x0008   (0x0090)  
	SDK_UNDEFINED(1,12995) /* TEnumAsByte<ECollisionChannel> */ __um(ReattachmentChannel);                         // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Rubberbanding
/// Size: 0x01B8 (0x000000 - 0x0001B8)
struct FDelMarVehicleConfig_Rubberbanding
{ 
	float                                              MinSpeed;                                                   // 0x0000   (0x0004)  
	float                                              MaxBonusSpeedLostPerSecond;                                 // 0x0004   (0x0004)  
	FDelMarScaledCurve                                 MaxBonusSpeedGainedPerSecond;                               // 0x0008   (0x0090)  
	FDelMarScaledCurve                                 MaxBonusSpeed;                                              // 0x0098   (0x0090)  
	FDelMarScaledCurve                                 MaxSpeed;                                                   // 0x0128   (0x0090)  
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_StartlineBoost
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FDelMarVehicleConfig_StartlineBoost
{ 
	float                                              MaxBonusSpeed;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDelMarScaledCurve                                 PercentageMaxBonusSpeedEarned;                              // 0x0008   (0x0090)  
	float                                              BoostGainSeconds;                                           // 0x0098   (0x0004)  
	float                                              BoostDurationSeconds;                                       // 0x009C   (0x0004)  
	bool                                               bEnforceForwardThrottle;                                    // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Strafe
/// Size: 0x001C (0x000000 - 0x00001C)
struct FDelMarVehicleConfig_Strafe
{ 
	float                                              InitialVelocityForce;                                       // 0x0000   (0x0004)  
	bool                                               bVelocityRelative;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              MinSteerInput;                                              // 0x0008   (0x0004)  
	float                                              KeybindPressLandedBufferSeconds;                            // 0x000C   (0x0004)  
	float                                              MaxActiveSeconds;                                           // 0x0010   (0x0004)  
	float                                              RaceStartCooldownSeconds;                                   // 0x0014   (0x0004)  
	float                                              CooldownSeconds;                                            // 0x0018   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarFloatModifier
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDelMarFloatModifier
{ 
	FName                                              Category;                                                   // 0x0000   (0x0004)  
	int32_t                                            Priority;                                                   // 0x0004   (0x0004)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
	SDK_UNDEFINED(1,12996) /* TEnumAsByte<EDelMarFloatOperation> */ __um(Operation);                               // 0x000C   (0x0001)  
	SDK_UNDEFINED(1,12997) /* TEnumAsByte<EDelMarModifierStackingPolicy> */ __um(StackingPolicy);                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	int32_t                                            Handle;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarTurboBonusZone
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarTurboBonusZone
{ 
	float                                              ZoneStartTime;                                              // 0x0000   (0x0004)  
	float                                              ZoneEndTime;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleTurboConfig
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDelMarVehicleTurboConfig
{ 
	float                                              MaxActiveTimeSeconds;                                       // 0x0000   (0x0004)  
	float                                              CooldownSeconds;                                            // 0x0004   (0x0004)  
	float                                              InitialImpulseForce;                                        // 0x0008   (0x0004)  
	float                                              MinBaseTargetSpeed;                                         // 0x000C   (0x0004)  
	FDelMarFloatModifier                               TargetSpeedModifier;                                        // 0x0010   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FDelMarTurboBonusZone>                      BonusZones;                                                 // 0x0028   (0x0010)  
	float                                              BonusZoneImpulseForce;                                      // 0x0038   (0x0004)  
	float                                              BonusZoneSpeedDecaySeconds;                                 // 0x003C   (0x0004)  
	float                                              SuccessfulBonusZoneHitSeconds;                              // 0x0040   (0x0004)  
	float                                              ApproachingBonusZoneSeconds;                                // 0x0044   (0x0004)  
	float                                              MaxMissingZoneSeconds;                                      // 0x0048   (0x0004)  
	float                                              MaxNumCharges;                                              // 0x004C   (0x0004)  
	float                                              ChargeRegenRateSeconds;                                     // 0x0050   (0x0004)  
	float                                              RaceStartCharges;                                           // 0x0054   (0x0004)  
	float                                              LapCompleteCharges;                                         // 0x0058   (0x0004)  
	float                                              TurboGainedForDriftBoostPotential;                          // 0x005C   (0x0004)  
	float                                              TurboGainedPerSecondAtMaxDriftPotential;                    // 0x0060   (0x0004)  
	float                                              MaxTurboChargesFromDrift;                                   // 0x0064   (0x0004)  
	bool                                               bTerrainInvulnerabilityDuringTurbo;                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Underthrust
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FDelMarVehicleConfig_Underthrust
{ 
	float                                              UpwardAccel;                                                // 0x0000   (0x0004)  
	float                                              ForwardAccel;                                               // 0x0004   (0x0004)  
	float                                              MaxUpwardSpeed;                                             // 0x0008   (0x0004)  
	float                                              MaxForwardSpeed;                                            // 0x000C   (0x0004)  
	float                                              EndThrustForce;                                             // 0x0010   (0x0004)  
	float                                              MaxThrustSeconds;                                           // 0x0014   (0x0004)  
	float                                              ForwardSpeedCap;                                            // 0x0018   (0x0004)  
	float                                              MaxSpeedReduction;                                          // 0x001C   (0x0004)  
	float                                              SpeedCapSecondsBuffer;                                      // 0x0020   (0x0004)  
	float                                              MinJumpActiveSecondsBeforeActivating;                       // 0x0024   (0x0004)  
	FDelMarScaledCurve                                 FallingUpsideDownThrustDampeningPercentage;                 // 0x0028   (0x0090)  
};

/// Class /Script/DelMarCore.DelMarVehicleConfigs
/// Size: 0x1890 (0x000950 - 0x0021E0)
class UDelMarVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
public:
	FDelMarVehicleCollisionConfig                      Collision;                                                  // 0x0950   (0x0218)  
	class UDelMarVehicleBodySetup*                     DefaultBodySetup;                                           // 0x0B68   (0x0008)  
	class UDelMarVehicleBodySetupMap*                  BodySetupMap;                                               // 0x0B70   (0x0008)  
	FDelMarVehicleDriveSetup                           DriveSetup;                                                 // 0x0B78   (0x0360)  
	class UDelMarPhysMatAttributeMap*                  PhysMatAttributeMap;                                        // 0x0ED8   (0x0008)  
	FDelMarVehicleRigidBodyConfig                      RigidBody;                                                  // 0x0EE0   (0x0040)  
	FDelMarVehicleConfig_Terrain                       Terrain;                                                    // 0x0F20   (0x0020)  
	FDelMarVehicleConfig_WorldBonusSpeed               WorldBonusSpeed;                                            // 0x0F40   (0x0010)  
	FDelMarVehicleConfig_AutoAerialRotation            AerialRotation;                                             // 0x0F50   (0x00A0)  
	FDelMarVehicleConfig_AirControl                    AirControl;                                                 // 0x0FF0   (0x00D0)  
	FDelMarVehicleConfig_AirFreestyle                  AirFreestyle;                                               // 0x10C0   (0x0030)  
	FDelMarVehicleConfig_AirThrottle                   AirThrottle;                                                // 0x10F0   (0x00A0)  
	FDelMarVehicleConfig_AutoUpright                   AutoUpright;                                                // 0x1190   (0x0024)  
	FDelMarVehicleDraftingConfig                       Drafting;                                                   // 0x11B4   (0x0030)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x11E4   (0x0004)  MISSED
	FDelMarVehicleDriftConfig                          Drift;                                                      // 0x11E8   (0x0718)  
	FDelMarVehicleDriftBoostConfig                     DriftBoost;                                                 // 0x1900   (0x01D8)  
	FDelMarVehicleConfig_Gravity                       Gravity;                                                    // 0x1AD8   (0x001C)  
	FDelMarVehicleConfig_Jump                          Jump;                                                       // 0x1AF4   (0x0018)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x1B0C   (0x0004)  MISSED
	FDelMarVehicleConfig_Kickflip                      Kickflip;                                                   // 0x1B10   (0x0150)  
	FDelMarVehicleOversteerConfig                      Oversteer;                                                  // 0x1C60   (0x0138)  
	FDelMarVehicleConfig_Reattachment                  Reattachment;                                               // 0x1D98   (0x00A0)  
	FDelMarVehicleConfig_Rubberbanding                 Rubberbanding;                                              // 0x1E38   (0x01B8)  
	FDelMarVehicleConfig_StartlineBoost                StartlineBoost;                                             // 0x1FF0   (0x00A8)  
	FDelMarVehicleConfig_Strafe                        Strafe;                                                     // 0x2098   (0x001C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x20B4   (0x0004)  MISSED
	FDelMarVehicleTurboConfig                          Turbo;                                                      // 0x20B8   (0x0070)  
	FDelMarVehicleConfig_Underthrust                   Underthrust;                                                // 0x2128   (0x00B8)  
};

/// Class /Script/DelMarCore.DelMarVehicleCosmeticComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UDelMarVehicleCosmeticComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,12998) /* FMulticastInlineDelegate */ __um(OnCosmeticActorSpawned);                           // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12999) /* FMulticastInlineDelegate */ __um(OnAllCosmeticActorsSpawned);                       // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,13000) /* TArray<TWeakObjectPtr<UClass*>> */ __um(StaticCosmeticActorClasses);                // 0x00C0   (0x0010)  
	TArray<class UClass*>                              AllowedServerCosmeticActorClasses;                          // 0x00D0   (0x0010)  
	TArray<class ADelMarCosmeticActor*>                SpawnedCosmeticActors;                                      // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleCosmeticComponent.GetCosmeticActors
	// TArray<ADelMarCosmeticActor*> GetCosmeticActors(class UClass* CosmeticClass, bool bLookForChildClasses);              // [0xba3b254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleCosmeticComponent.GetCosmeticActor
	// class ADelMarCosmeticActor* GetCosmeticActor(class UClass* CosmeticClass, bool bLookForChildClasses);                 // [0xba3b0e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleCosmeticComponent.DelMarOnCosmeticItemSpawned__DelegateSignature
	// void DelMarOnCosmeticItemSpawned__DelegateSignature(class ADelMarCosmeticActor* CosmeticActor);                       // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/DelMarCore.DelMarVehicleCosmeticComponent.DelMarOnAllCosmeticActorsSpawned__DelegateSignature
	// void DelMarOnAllCosmeticActorsSpawned__DelegateSignature();                                                           // [0x2047e54] MulticastDelegate|Public|Delegate 
};

/// Struct /Script/DelMarCore.DelMarDynamicForceFeedbackEffect
/// Size: 0x0128 (0x000000 - 0x000128)
struct FDelMarDynamicForceFeedbackEffect
{ 
	FForceFeedbackChannelDetails                       Effect;                                                     // 0x0000   (0x0090)  
	FRuntimeFloatCurve                                 IntensityAmplifierCurve;                                    // 0x0090   (0x0088)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0118   (0x0010)  MISSED
};

/// Class /Script/DelMarCore.DelMarVehicleForceFeedbackComponent
/// Size: 0x0358 (0x0000A0 - 0x0003F8)
class UDelMarVehicleForceFeedbackComponent : public UControllerComponent
{ 
public:
	FDelMarDynamicForceFeedbackEffect                  DrivingForceFeedback;                                       // 0x00A0   (0x0128)  
	class UForceFeedbackEffect*                        JumpForceFeedbackEffect;                                    // 0x01C8   (0x0008)  
	class UForceFeedbackEffect*                        OversteerLeftForceFeedbackEffect;                           // 0x01D0   (0x0008)  
	class UForceFeedbackEffect*                        OversteerRightForceFeedbackEffect;                          // 0x01D8   (0x0008)  
	TArray<class UForceFeedbackEffect*>                LandingForceFeedbackEffects;                                // 0x01E0   (0x0010)  
	FRuntimeFloatCurve                                 LandingForceLevelLookupCurve;                               // 0x01F0   (0x0088)  
	class UForceFeedbackEffect*                        TurboForceFeedbackEffect;                                   // 0x0278   (0x0008)  
	FDelMarDynamicForceFeedbackEffect                  DriftForceFeedback;                                         // 0x0280   (0x0128)  
	class UForceFeedbackEffect*                        DriftUncontrolledForceFeedbackEffect;                       // 0x03A8   (0x0008)  
	class UForceFeedbackEffect*                        DriftBoostForceFeedbackEffect;                              // 0x03B0   (0x0008)  
	class UForceFeedbackEffect*                        DriftTractionForceFeedback;                                 // 0x03B8   (0x0008)  
	float                                              MaxTractionDriftShakeAngle;                                 // 0x03C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03C4   (0x0004)  MISSED
	class UForceFeedbackEffect*                        HazardHitForceFeedback;                                     // 0x03C8   (0x0008)  
	SDK_UNDEFINED(16,13001) /* TScriptInterface<Class> */ __um(Vehicle);                                           // 0x03D0   (0x0010)  
	SDK_UNDEFINED(8,13002) /* TWeakObjectPtr<APlayerController*> */ __um(CachedPlayerController);                  // 0x03E0   (0x0008)  
	SDK_UNDEFINED(8,13003) /* TWeakObjectPtr<UForceFeedbackEffect*> */ __um(CurrentOversteerForceFeedbackEffect);  // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnVehicleLanded
	// void OnVehicleLanded(float LandingForce, bool bLandedKickflip);                                                       // [0xba3c048] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnUnderthrustDeactivated
	// void OnUnderthrustDeactivated();                                                                                      // [0xba3bbc8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnUnderthrustActivated
	// void OnUnderthrustActivated();                                                                                        // [0xba3bbb4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnTurboDeactivated
	// void OnTurboDeactivated();                                                                                            // [0xba3bba0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnTurboActivated
	// void OnTurboActivated();                                                                                              // [0xba3bb8c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnJumpActivated
	// void OnJumpActivated();                                                                                               // [0xba3ba44] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnHazardHit
	// void OnHazardHit();                                                                                                   // [0xba3ba1c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftDeactivated
	// void OnDriftDeactivated();                                                                                            // [0xba3b9f4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftControlChanged
	// void OnDriftControlChanged(bool bIsDriftControlled);                                                                  // [0xba3b930] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftBoostDeactivated
	// void OnDriftBoostDeactivated();                                                                                       // [0xba3b91c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftBoostActivated
	// void OnDriftBoostActivated();                                                                                         // [0xba3b908] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftActivated
	// void OnDriftActivated();                                                                                              // [0xba3b8f4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.HandleLoadingScreenVisibilityChanged
	// void HandleLoadingScreenVisibilityChanged(bool bVisibility);                                                          // [0xba3b5d0] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarVehicleMovementSet
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UDelMarVehicleMovementSet : public UFortAttributeSet
{ 
public:
	FFortGameplayAttributeData                         AccelMultiplier;                                            // 0x0030   (0x0028)  
	FFortGameplayAttributeData                         bVehicleThrottleDisabled;                                   // 0x0058   (0x0028)  
	FFortGameplayAttributeData                         BonusSpeed;                                                 // 0x0080   (0x0028)  


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleMovementSet.OnRep_VehicleThrottleDisabled
	// void OnRep_VehicleThrottleDisabled(FFortGameplayAttributeData& OldInputDisabled);                                     // [0xba6b14c] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleMovementSet.OnRep_BonusSpeed
	// void OnRep_BonusSpeed(FFortGameplayAttributeData& OldBonusSpeed);                                                     // [0xba6b04c] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleMovementSet.OnRep_AccelMultiplier
	// void OnRep_AccelMultiplier(FFortGameplayAttributeData& OldSpeedMultiplier);                                           // [0xba6af4c] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/DelMarCore.DelMarAIDifficultySpawnInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarAIDifficultySpawnInfo
{ 
	int32_t                                            SkillLevel;                                                 // 0x0000   (0x0004)  
	float                                              BotFillPercentage;                                          // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarAIMMRSpawnDataTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FDelMarAIMMRSpawnDataTableRow : FTableRowBase
{ 
	int32_t                                            MMRBracketLow;                                              // 0x0008   (0x0004)  
	int32_t                                            MMRBracketHigh;                                             // 0x000C   (0x0004)  
	int32_t                                            FallbackSkillLevel;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FDelMarAIDifficultySpawnInfo>               BotSpawnInfo;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarCosmeticLoadoutSlotData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDelMarCosmeticLoadoutSlotData
{ 
	SDK_UNDEFINED(32,13004) /* TWeakObjectPtr<UCosmeticLoadoutSlotTemplate*> */ __um(SlotTemplate);                // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,13005) /* TWeakObjectPtr<UObject*> */ __um(EquippedItemDefinitionObject);                     // 0x0020   (0x0020)  
};

/// Struct /Script/DelMarCore.DelMarAIVehicleCosmeticLoadoutSetDataTableRow
/// Size: 0x0018 (0x000008 - 0x000020)
struct FDelMarAIVehicleCosmeticLoadoutSetDataTableRow : FTableRowBase
{ 
	TArray<FDelMarCosmeticLoadoutSlotData>             LoadoutSlots;                                               // 0x0008   (0x0010)  
	float                                              Weight;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarAIVehicleCosmeticSlotDataTableRow
/// Size: 0x0028 (0x000008 - 0x000030)
struct FDelMarAIVehicleCosmeticSlotDataTableRow : FTableRowBase
{ 
	SDK_UNDEFINED(32,13006) /* TWeakObjectPtr<UObject*> */ __um(EquippedItemDefinitionObject);                     // 0x0008   (0x0020)  
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.AvoidanceInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FAvoidanceInfo
{ 
	SDK_UNDEFINED(80,13007) /* TMap<TWeakObjectPtr<AActor*>, UDriveHazardInfo*> */ __um(DriveHazardInfoMap);       // 0x0000   (0x0050)  
	TArray<class UDriveHazardInfo*>                    NonJumpableDriveHazardInfos;                                // 0x0050   (0x0010)  
	TArray<class UDriveHazardInfo*>                    JumpableDriveHazardInfos;                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_DriverInteractionAdded
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_DriverInteractionAdded
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEventRouterExt
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarEventRouterExt
{ 
	bool                                               bWorldIsTearingDown;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UGameplayEventRouterComponent*               EventRouter;                                                // 0x0008   (0x0008)  
	class UObject*                                     EventRouterContextObject;                                   // 0x0010   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarGameplayStateChangedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarGameplayStateChangedEvent
{ 
	FGameplayTag                                       PrevStateId;                                                // 0x0000   (0x0004)  
	FGameplayTag                                       NewStateId;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarEvent_ResetRace
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDelMarEvent_ResetRace
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_ResetRun
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDelMarEvent_ResetRun
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_RaceFinished
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_RaceFinished
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_FirstPlayerFinishedCountdown
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarEvent_FirstPlayerFinishedCountdown
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_RaceActive
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_RaceActive
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_RunActive
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarEvent_RunActive
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_CountdownActive
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarEvent_CountdownActive
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_PlayerFinishedRace
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarEvent_PlayerFinishedRace
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_RacerStateChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarEvent_RacerStateChanged
{ 
	FGameplayTag                                       PrevStateId;                                                // 0x0008   (0x0004)  
	FGameplayTag                                       NewStateId;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarEvent_PlayerBecomeSpectator
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_PlayerBecomeSpectator
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_RaceManagerInitialized
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_RaceManagerInitialized
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_VehicleAssignedToPawn
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_VehicleAssignedToPawn
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_ServerRaceStartCountdownTime
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_ServerRaceStartCountdownTime
{ 
	double                                             ServerTime;                                                 // 0x0000   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarEvent_ServerPostRaceEndTime
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_ServerPostRaceEndTime
{ 
	double                                             ServerTime;                                                 // 0x0000   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarEvent_VehicleDemolished
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDelMarEvent_VehicleDemolished
{ 
	FGameplayTag                                       CausedByTag;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarEvent_VehicleWrongwayStatus
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDelMarEvent_VehicleWrongwayStatus
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_MissedCheckpointDemoCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_MissedCheckpointDemoCountdown
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_ReturnToTrackDemoCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_ReturnToTrackDemoCountdown
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_LoadingScreenData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarEvent_LoadingScreenData
{ 
	class UDelMarLevelDataAsset*                       LevelData;                                                  // 0x0000   (0x0008)  
	FGameplayTag                                       RaceMode;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_DialogRequest
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDelMarEvent_DialogRequest
{ 
	FGameplayTag                                       DialogTag;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarEvent_MidTutorialModal
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDelMarEvent_MidTutorialModal
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_CheckpointPassed_ParallelPath
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDelMarEvent_CheckpointPassed_ParallelPath
{ 
	SDK_UNDEFINED(8,13008) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(CurrentCheckPoint);                       // 0x0000   (0x0008)  
	int32_t                                            CheckpointIndexForLap;                                      // 0x0008   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarEvent_CheckpointPassedOutOfOrder_ParallelPath
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath
{ 
	SDK_UNDEFINED(8,13009) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(CurrentCheckPoint);                       // 0x0000   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarEvent_TeleportEnteredEvent
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDelMarEvent_TeleportEnteredEvent
{ 
	SDK_UNDEFINED(8,13010) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(CheckpointEntered);                       // 0x0000   (0x0008)  
	bool                                               bEnteredInFinalLap;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_TeleportExitedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_TeleportExitedEvent
{ 
	SDK_UNDEFINED(8,13011) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(CheckpointExited);                        // 0x0000   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarEvent_SectionComplete_ParallelPath
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarEvent_SectionComplete_ParallelPath
{ 
	int32_t                                            ActiveLap;                                                  // 0x0000   (0x0004)  
	int32_t                                            SectionIndex;                                               // 0x0004   (0x0004)  
	SDK_UNDEFINED(8,13012) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(CompletedCheckpoint);                     // 0x0008   (0x0008)  
	SDK_UNDEFINED(8,13013) /* TWeakObjectPtr<ADelMarCheckpoint*> */ __um(CurrentCheckPoint);                       // 0x0010   (0x0008)  
	double                                             CompletedSectionTime;                                       // 0x0018   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarEvent_LapComplete
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarEvent_LapComplete
{ 
	class AFortPlayerState*                            PlayerState;                                                // 0x0000   (0x0008)  
	int32_t                                            CompletedLap;                                               // 0x0008   (0x0004)  
	int32_t                                            CurrentLap;                                                 // 0x000C   (0x0004)  
	int32_t                                            TotalLaps;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	double                                             CompletedLapTime;                                           // 0x0018   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarEvent_LapRecorded
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarEvent_LapRecorded
{ 
	int32_t                                            CompletedLap;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDelMarRunRecord                                   CurrentRunRecord;                                           // 0x0008   (0x0020)  
	float                                              BestSingleLapTime;                                          // 0x0028   (0x0004)  
	bool                                               bIsNewLapRecord;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_SectionRecorded
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDelMarEvent_SectionRecorded
{ 
	int32_t                                            ActiveLap;                                                  // 0x0000   (0x0004)  
	int32_t                                            SectionIndex;                                               // 0x0004   (0x0004)  
	FDelMarRunRecord                                   BestSectionsRunRecord;                                      // 0x0008   (0x0020)  
	FDelMarRunRecord                                   CurrentRunRecord;                                           // 0x0028   (0x0020)  
	bool                                               bIsNewSectionRecord;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_RunRecorded
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDelMarEvent_RunRecorded
{ 
	class AFortPlayerState*                            PlayerState;                                                // 0x0000   (0x0008)  
	FDelMarRunRecord                                   CurrentRunRecord;                                           // 0x0008   (0x0020)  
	FDelMarRunRecord                                   BestRunRecord;                                              // 0x0028   (0x0020)  
	bool                                               bIsNewBestRun;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_NuxConnectedHintActionPerformed
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_NuxConnectedHintActionPerformed
{ 
	FGameplayTag                                       HintTypeTag;                                                // 0x0000   (0x0004)  
	bool                                               bDidPerformAction;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_RaceModeSet
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDelMarEvent_RaceModeSet
{ 
	FGameplayTag                                       RaceModeTag;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarEvent_GlobalLeaderboardNewPersonalBest
/// Size: 0x0048 (0x000000 - 0x000048)
struct FDelMarEvent_GlobalLeaderboardNewPersonalBest
{ 
	SDK_UNDEFINED(8,13014) /* TWeakObjectPtr<AFortPlayerState*> */ __um(Player);                                   // 0x0000   (0x0008)  
	FDelMarGlobalLeaderboardEntry                      PersonalBest;                                               // 0x0008   (0x0040)  
};

/// Struct /Script/DelMarCore.DelMarEvent_MatchmakingStateChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDelMarEvent_MatchmakingStateChanged
{ 
	char                                               NewPostMatchState;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/DelMarCore.DelMarEvent_PostRaceReturnToLobbySelected
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDelMarEvent_PostRaceReturnToLobbySelected
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_PostRaceNextRaceSelected
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDelMarEvent_PostRaceNextRaceSelected
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DelMarCore.DelMarFloatAttribute
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarFloatAttribute
{ 
	float                                              BaseValue;                                                  // 0x0000   (0x0004)  
	float                                              FinalValue;                                                 // 0x0004   (0x0004)  
	bool                                               bClampMin;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	bool                                               bClampMax;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              MaxValue;                                                   // 0x0014   (0x0004)  
	TArray<FDelMarFloatModifier>                       Modifiers;                                                  // 0x0018   (0x0010)  
	int32_t                                            CurrentHandleIdx;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarInputMappingContextData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarInputMappingContextData
{ 
	int32_t                                            Priority;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UFortInputMappingContext*                    MappingContext;                                             // 0x0008   (0x0008)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilterBase
/// Size: 0x00F0 (0x0000A0 - 0x000190)
struct FDelMarObjectiveFilterBase : FObjectiveFilter
{ 
	FObjectiveSubjectTags                              LevelDescriptionId;                                         // 0x00A0   (0x0048)  
	FObjectiveSubjectTags                              GameModeId;                                                 // 0x00E8   (0x0048)  
	FObjectiveSubjectTags                              VehicleTags;                                                // 0x0130   (0x0048)  
	EDelMarPlaylistTypeInfo                            RequiredPlaylistTypeInfo;                                   // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0179   (0x0007)  MISSED
	SDK_UNDEFINED(16,13015) /* TArray<TWeakObjectPtr<UDelMarCosmeticItemDefinition*>> */ __um(RequiredCosmetics);  // 0x0180   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_BeatPlayers
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_BeatPlayers : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_BonusTurboActivated
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_BonusTurboActivated : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_BoostPadBonusSpeedEnded
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_BoostPadBonusSpeedEnded : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_BoostPadHit
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_BoostPadHit : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DistanceTraveled
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_DistanceTraveled : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DraftActivated
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_DraftActivated : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DriftBoostActivated
/// Size: 0x0020 (0x000190 - 0x0001B0)
struct FDelMarObjectiveFilter_DriftBoostActivated : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredDriftBoostPercent;                                  // 0x0190   (0x0020)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DriftBoostDeactivated
/// Size: 0x0020 (0x000190 - 0x0001B0)
struct FDelMarObjectiveFilter_DriftBoostDeactivated : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredTotalDistance;                                      // 0x0190   (0x0020)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DriftComplete
/// Size: 0x0020 (0x000190 - 0x0001B0)
struct FDelMarObjectiveFilter_DriftComplete : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredDriftDuration;                                      // 0x0190   (0x0020)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_HighestSpeedUpdated
/// Size: 0x0020 (0x000190 - 0x0001B0)
struct FDelMarObjectiveFilter_HighestSpeedUpdated : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredHighestSpeed;                                       // 0x0190   (0x0020)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_InitialTurboActivated
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_InitialTurboActivated : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_Kickflipped
/// Size: 0x0008 (0x000190 - 0x000198)
struct FDelMarObjectiveFilter_Kickflipped : FDelMarObjectiveFilterBase
{ 
	EDelMarKickflipDirection                           RequiredKickflipDirection;                                  // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_LapComplete
/// Size: 0x0040 (0x000190 - 0x0001D0)
struct FDelMarObjectiveFilter_LapComplete : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredLapCompleteTime;                                    // 0x0190   (0x0020)  
	FInt32Range                                        RequiredLapCount;                                           // 0x01B0   (0x0010)  
	FInt32Range                                        RequiredLapPlacement;                                       // 0x01C0   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_PlacementUpdated
/// Size: 0x0018 (0x000190 - 0x0001A8)
struct FDelMarObjectiveFilter_PlacementUpdated : FDelMarObjectiveFilterBase
{ 
	FInt32Range                                        RequiredCurrentPosition;                                    // 0x0190   (0x0010)  
	EDelMarPositionChangeInfo                          RequiredPositionChangeInfo;                                 // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_PlayedDelMarExperience
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_PlayedDelMarExperience : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_RaceFinished
/// Size: 0x0048 (0x000190 - 0x0001D8)
struct FDelMarObjectiveFilter_RaceFinished : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredFinishTime;                                         // 0x0190   (0x0020)  
	FInt32Range                                        RequiredFinalPlacement;                                     // 0x01B0   (0x0010)  
	FInt32Range                                        RequiredPlayerCompetitiveRank;                              // 0x01C0   (0x0010)  
	EDelMarJellyHazardProcessorInfo                    RequiredJellyHazardInfo;                                    // 0x01D0   (0x0004)  
	EDelMarDemolishedProcessorInfo                     RequiredDemolishedInfo;                                     // 0x01D4   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_RankAchieved
/// Size: 0x0010 (0x000190 - 0x0001A0)
struct FDelMarObjectiveFilter_RankAchieved : FDelMarObjectiveFilterBase
{ 
	FInt32Range                                        RequiredRank;                                               // 0x0190   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_RunComplete
/// Size: 0x0038 (0x000190 - 0x0001C8)
struct FDelMarObjectiveFilter_RunComplete : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredFinishTime;                                         // 0x0190   (0x0020)  
	FInt32Range                                        RequiredFinalPlacement;                                     // 0x01B0   (0x0010)  
	EDelMarJellyHazardProcessorInfo                    RequiredJellyHazardInfo;                                    // 0x01C0   (0x0004)  
	EDelMarDemolishedProcessorInfo                     RequiredDemolishedInfo;                                     // 0x01C4   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_RunCompleteTest
/// Size: 0x0038 (0x000190 - 0x0001C8)
struct FDelMarObjectiveFilter_RunCompleteTest : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredFinishTime;                                         // 0x0190   (0x0020)  
	FInt32Range                                        RequiredFinalPlacement;                                     // 0x01B0   (0x0010)  
	EDelMarJellyHazardProcessorInfo                    RequiredJellyHazardInfo;                                    // 0x01C0   (0x0004)  
	EDelMarDemolishedProcessorInfo                     RequiredDemolishedInfo;                                     // 0x01C4   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_StartlineBoostActivated
/// Size: 0x0020 (0x000190 - 0x0001B0)
struct FDelMarObjectiveFilter_StartlineBoostActivated : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredStartlineBoostPercent;                              // 0x0190   (0x0020)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_UnderthrustDeactivated
/// Size: 0x0020 (0x000190 - 0x0001B0)
struct FDelMarObjectiveFilter_UnderthrustDeactivated : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredPercentUsed;                                        // 0x0190   (0x0020)  
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_UnderthrustPercentUsed
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_UnderthrustPercentUsed : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_VehicleJumped
/// Size: 0x0000 (0x000190 - 0x000190)
struct FDelMarObjectiveFilter_VehicleJumped : FDelMarObjectiveFilterBase
{ 
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_VehicleLanded
/// Size: 0x0020 (0x000190 - 0x0001B0)
struct FDelMarObjectiveFilter_VehicleLanded : FDelMarObjectiveFilterBase
{ 
	FDoubleRange                                       RequiredTimeInAir;                                          // 0x0190   (0x0020)  
};

/// Struct /Script/DelMarCore.DelMarProxyMeshMaterialInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarProxyMeshMaterialInfo
{ 
	TArray<class UMaterialInstanceDynamic*>            MaterialArray;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarEvent_MusicPlaylistUpdated
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDelMarEvent_MusicPlaylistUpdated
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/DelMarCore.DelMarEvent_TutorialSectionChanged
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FDelMarEvent_TutorialSectionChanged
{ 
	FDelMarTutorialSection                             CurrentSection;                                             // 0x0000   (0x00B0)  
	int32_t                                            CurrentSectionIndex;                                        // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarHintText
/// Size: 0x0048 (0x000000 - 0x000048)
struct FDelMarHintText
{ 
	SDK_UNDEFINED(24,13016) /* FText */                __um(KBMText);                                              // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,13017) /* FText */                __um(GamepadText);                                          // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,13018) /* FText */                __um(TouchText);                                            // 0x0030   (0x0018)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplay_InputState_RL
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDelMarVehicleReplay_InputState_RL
{ 
	float                                              Throttle;                                                   // 0x0000   (0x0004)  
	float                                              Steer;                                                      // 0x0004   (0x0004)  
	float                                              pitch;                                                      // 0x0008   (0x0004)  
	float                                              Yaw;                                                        // 0x000C   (0x0004)  
	float                                              Roll;                                                       // 0x0010   (0x0004)  
	float                                              DodgeForward;                                               // 0x0014   (0x0004)  
	float                                              DodgeRight;                                                 // 0x0018   (0x0004)  
	bool                                               bHandbrake;                                                 // 0x001C   (0x0001)  
	bool                                               bJump;                                                      // 0x001D   (0x0001)  
	bool                                               bBoost;                                                     // 0x001E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001F   (0x0001)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleReplay_InputState_DM
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarVehicleReplay_InputState_DM
{ 
	float                                              AerialPitch;                                                // 0x0000   (0x0004)  
	bool                                               bDrift;                                                     // 0x0004   (0x0001)  
	bool                                               bGroundedFlip;                                              // 0x0005   (0x0001)  
	bool                                               bKickflip;                                                  // 0x0006   (0x0001)  
	bool                                               bShunt;                                                     // 0x0007   (0x0001)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplay_RigidBodyState
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDelMarVehicleReplay_RigidBodyState
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0020   (0x0020)  
	FVector                                            LinearVelocity;                                             // 0x0040   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0058   (0x0018)  
};

/// Struct /Script/DelMarCore.DelMarVehicleReplay_FrameData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FDelMarVehicleReplay_FrameData
{ 
	int32_t                                            FrameCaptureIndex;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	double                                             SecondsSinceCountdownFinished;                              // 0x0008   (0x0008)  
	FDelMarVehicleReplay_InputState_RL                 Input;                                                      // 0x0010   (0x0020)  
	FDelMarVehicleReplay_InputState_DM                 Input_DM;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FDelMarVehicleReplay_RigidBodyState                PreSimRBState;                                              // 0x0040   (0x0070)  
};

/// Struct /Script/DelMarCore.DelMarWorldBonusSpeedStack
/// Size: 0x001C (0x000000 - 0x00001C)
struct FDelMarWorldBonusSpeedStack
{ 
	FGameplayTag                                       Source;                                                     // 0x0000   (0x0004)  
	float                                              BonusSpeed;                                                 // 0x0004   (0x0004)  
	float                                              duration;                                                   // 0x0008   (0x0004)  
	bool                                               bApplyForce;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x000D   (0x000F)  MISSED
};

/// Struct /Script/DelMarCore.DelMarWorldBonusSpeedGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarWorldBonusSpeedGroup
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleLandingData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDelMarVehicleLandingData
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleSkydivingData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarVehicleSkydivingData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarCore.DelMarKickflipSimulationResult
/// Size: 0x0120 (0x000000 - 0x000120)
struct FDelMarKickflipSimulationResult
{ 
	FHitResult                                         Hit;                                                        // 0x0000   (0x00E8)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FQuat                                              VehicleLandingRotation;                                     // 0x00F0   (0x0020)  
	bool                                               bValidLandingRotation;                                      // 0x0110   (0x0001)  
	bool                                               bDriveableSurfaceHit;                                       // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0112   (0x0002)  MISSED
	float                                              SuctionVelocityUsed;                                        // 0x0114   (0x0004)  
	float                                              ElapsedTime;                                                // 0x0118   (0x0004)  
	float                                              DistanceTravelled;                                          // 0x011C   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleInPersistent
/// Size: 0x07B0 (0x0001A0 - 0x000950)
struct FDelMarVehicleInPersistent : FFortVehicleInPersistent
{ 
	unsigned char                                      UnknownData00_1[0x7B0];                                     // 0x01A0   (0x07B0)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleInternalPersistent
/// Size: 0x0A10 (0x0000E0 - 0x000AF0)
struct FDelMarVehicleInternalPersistent : FFortVehicleInternalPersistent
{ 
	unsigned char                                      UnknownData00_1[0xA10];                                     // 0x00E0   (0x0A10)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleOutContinuous
/// Size: 0x0150 (0x000050 - 0x0001A0)
struct FDelMarVehicleOutContinuous : FFortVehicleOutContinuous
{ 
	unsigned char                                      UnknownData00_1[0x150];                                     // 0x0050   (0x0150)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleOutPersistent
/// Size: 0x09E8 (0x000028 - 0x000A10)
struct FDelMarVehicleOutPersistent : FFortVehicleOutPersistent
{ 
	unsigned char                                      UnknownData00_1[0x9E8];                                     // 0x0028   (0x09E8)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVehicleNetworkInput
/// Size: 0x0048 (0x000000 - 0x000048)
struct FDelMarVehicleNetworkInput
{ 
	int32_t                                            FrameNum;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDelMarVehicleInContinuous                         Input;                                                      // 0x0008   (0x0040)  
};

/// Struct /Script/DelMarCore.DelMarVerbMessageBase
/// Size: 0x00C0 (0x000078 - 0x000138)
struct FDelMarVerbMessageBase : FVerbMessage
{ 
	FSubjectTagsPair                                   LevelDescriptionId;                                         // 0x0078   (0x0038)  
	FSubjectTagsPair                                   GameModeId;                                                 // 0x00B0   (0x0038)  
	FSubjectTagsPair                                   VehicleTags;                                                // 0x00E8   (0x0038)  
	EDelMarPlaylistTypeInfo                            RankedPlaylistInfo;                                         // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	TArray<FFortVerb_ObjectWrapper>                    Cosmetics;                                                  // 0x0128   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_BeatPlayers
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_BeatPlayers : FDelMarVerbMessageBase
{ 
	char                                               AmountOfPlayersBeat;                                        // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_BonusTurboActivated
/// Size: 0x0000 (0x000138 - 0x000138)
struct FDelMarVerbMessage_BonusTurboActivated : FDelMarVerbMessageBase
{ 
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_BoostPadBonusSpeedEnded
/// Size: 0x0000 (0x000138 - 0x000138)
struct FDelMarVerbMessage_BoostPadBonusSpeedEnded : FDelMarVerbMessageBase
{ 
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_BoostPadHit
/// Size: 0x0000 (0x000138 - 0x000138)
struct FDelMarVerbMessage_BoostPadHit : FDelMarVerbMessageBase
{ 
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DistanceTraveled
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_DistanceTraveled : FDelMarVerbMessageBase
{ 
	float                                              TotalDistance;                                              // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DraftActivated
/// Size: 0x0000 (0x000138 - 0x000138)
struct FDelMarVerbMessage_DraftActivated : FDelMarVerbMessageBase
{ 
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DriftBoostActivated
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_DriftBoostActivated : FDelMarVerbMessageBase
{ 
	float                                              DriftBoostPercent;                                          // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DriftBoostDeactivated
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_DriftBoostDeactivated : FDelMarVerbMessageBase
{ 
	float                                              TotalDistance;                                              // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DriftComplete
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_DriftComplete : FDelMarVerbMessageBase
{ 
	float                                              DriftDuration;                                              // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_HighestSpeedUpdated
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_HighestSpeedUpdated : FDelMarVerbMessageBase
{ 
	float                                              HighestSpeed;                                               // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_InitialTurboActivated
/// Size: 0x0000 (0x000138 - 0x000138)
struct FDelMarVerbMessage_InitialTurboActivated : FDelMarVerbMessageBase
{ 
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_Kickflipped
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_Kickflipped : FDelMarVerbMessageBase
{ 
	EDelMarKickflipDirection                           Direction;                                                  // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_LapComplete
/// Size: 0x0010 (0x000138 - 0x000148)
struct FDelMarVerbMessage_LapComplete : FDelMarVerbMessageBase
{ 
	double                                             LapCompleteTime;                                            // 0x0138   (0x0008)  
	char                                               LapCount;                                                   // 0x0140   (0x0001)  
	char                                               LapPlacement;                                               // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0142   (0x0006)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_PlacementUpdated
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_PlacementUpdated : FDelMarVerbMessageBase
{ 
	char                                               CurrentPosition;                                            // 0x0138   (0x0001)  
	EDelMarPositionChangeInfo                          PositionChangeInfo;                                         // 0x0139   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x013A   (0x0006)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_PlayedDelMarExperience
/// Size: 0x0000 (0x000138 - 0x000138)
struct FDelMarVerbMessage_PlayedDelMarExperience : FDelMarVerbMessageBase
{ 
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_RaceFinished
/// Size: 0x0018 (0x000138 - 0x000150)
struct FDelMarVerbMessage_RaceFinished : FDelMarVerbMessageBase
{ 
	double                                             FinishTime;                                                 // 0x0138   (0x0008)  
	char                                               FinalPlacement;                                             // 0x0140   (0x0001)  
	char                                               PlayerRank;                                                 // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0142   (0x0002)  MISSED
	EDelMarJellyHazardProcessorInfo                    JellyHazardInfo;                                            // 0x0144   (0x0004)  
	EDelMarDemolishedProcessorInfo                     DemolishedInfo;                                             // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_RankAchieved
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_RankAchieved : FDelMarVerbMessageBase
{ 
	int32_t                                            RankAchieved;                                               // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_RunComplete
/// Size: 0x0018 (0x000138 - 0x000150)
struct FDelMarVerbMessage_RunComplete : FDelMarVerbMessageBase
{ 
	double                                             FinishTime;                                                 // 0x0138   (0x0008)  
	char                                               FinalPlacement;                                             // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	EDelMarJellyHazardProcessorInfo                    JellyHazardInfo;                                            // 0x0144   (0x0004)  
	EDelMarDemolishedProcessorInfo                     DemolishedInfo;                                             // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_RunCompleteTest
/// Size: 0x0018 (0x000138 - 0x000150)
struct FDelMarVerbMessage_RunCompleteTest : FDelMarVerbMessageBase
{ 
	double                                             FinishTime;                                                 // 0x0138   (0x0008)  
	char                                               FinalPlacement;                                             // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	EDelMarJellyHazardProcessorInfo                    JellyHazardInfo;                                            // 0x0144   (0x0004)  
	EDelMarDemolishedProcessorInfo                     DemolishedInfo;                                             // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_StartlineBoostActivated
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_StartlineBoostActivated : FDelMarVerbMessageBase
{ 
	float                                              StartLineBoostPercent;                                      // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_UnderthrustDeactivated
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_UnderthrustDeactivated : FDelMarVerbMessageBase
{ 
	float                                              PercentUsed;                                                // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_UnderthrustPercentUsed
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_UnderthrustPercentUsed : FDelMarVerbMessageBase
{ 
	float                                              PercentUsed;                                                // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_VehicleJumped
/// Size: 0x0000 (0x000138 - 0x000138)
struct FDelMarVerbMessage_VehicleJumped : FDelMarVerbMessageBase
{ 
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_VehicleLanded
/// Size: 0x0008 (0x000138 - 0x000140)
struct FDelMarVerbMessage_VehicleLanded : FDelMarVerbMessageBase
{ 
	float                                              TimeInAir;                                                  // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.AudioMixModifier
/// Size: 0x0098 (0x000000 - 0x000098)
struct FAudioMixModifier
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0004)  
	EMixModifierTarget                                 Target;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              DefaultValue;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)  
};

/// Struct /Script/DelMarCore.AudioMixModifierGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAudioMixModifierGroup
{ 
	FName                                              GroupName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FAudioMixModifier>                          Modifiers;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarRankedInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarRankedInfo
{ 
	SDK_UNDEFINED(16,13019) /* FString */              __um(RankType);                                             // 0x0000   (0x0010)  
	int32_t                                            CurrentRank;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/DelMarCore.DelMarReplicatedLoadout
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarReplicatedLoadout
{ 
	TArray<class UDelMarCosmeticItemDefinition*>       Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/DelMarCore.PhysicalMaterialAttributes_X
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPhysicalMaterialAttributes_X
{ 
	TArray<class UDelMarPhysMatAttribute*>             Attributes;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarNetworkInputPacket
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarNetworkInputPacket
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/DelMarCore.DelMarPositionValue
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarPositionValue
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/DelMarCore.DelMarStateMachineConfig
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarStateMachineConfig
{ 
	TArray<FDelMarStateOverride>                       StateOverrides;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/DelMarCore.DelMarThrottledValue
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarThrottledValue
{ 
	float                                              RiseRate;                                                   // 0x0000   (0x0004)  
	float                                              FallRate;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarCore.DelMarVehicleLandingLevel
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarVehicleLandingLevel
{ 
	float                                              MinForce;                                                   // 0x0000   (0x0004)  
	float                                              SpeedChange;                                                // 0x0004   (0x0004)  
};

