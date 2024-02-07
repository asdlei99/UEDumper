
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity
/// dependency: MassSpawner

/// Class /Script/MassNavigation.MassMovingAvoidanceProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassMovingAvoidanceProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/MassNavigation.MassStandingAvoidanceProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassStandingAvoidanceProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/MassNavigation.MassObstacleAvoidanceTrait
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UMassObstacleAvoidanceTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMassMovingAvoidanceParameters)            MovingParameters                                            OFFSET(getStruct<T>, {0x28, 68, 0, 0})
	SMember(FMassStandingAvoidanceParameters)          StandingParameters                                          OFFSET(getStruct<T>, {0x6C, 52, 0, 0})
};

/// Class /Script/MassNavigation.MassNavigationObstacleTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassNavigationObstacleTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassNavigation.MassOffLODNavigationProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassOffLODNavigationProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassNavigation.MassNavigationSmoothHeightProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassNavigationSmoothHeightProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassNavigation.MassMoveTargetFragmentInitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassMoveTargetFragmentInitializer : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassNavigation.MassNavigationObstacleGridProcessor
/// Size: 0x07E0 (0x0000C0 - 0x0008A0)
class UMassNavigationObstacleGridProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2208;

public:
};

/// Class /Script/MassNavigation.MassNavigationObstacleRemoverProcessor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassNavigationObstacleRemoverProcessor : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassNavigation.MassNavigationSubsystem
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class UMassNavigationSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MassNavigation.MassSmoothOrientationProcessor
/// Size: 0x0540 (0x0000C0 - 0x000600)
class UMassSmoothOrientationProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
};

/// Class /Script/MassNavigation.MassSmoothOrientationTrait
/// Size: 0x0018 (0x000028 - 0x000040)
class UMassSmoothOrientationTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMassSmoothOrientationParameters)          orientation                                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/MassNavigation.MassSteerToMoveTargetProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassSteerToMoveTargetProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassNavigation.MassSteeringTrait
/// Size: 0x0028 (0x000028 - 0x000050)
class UMassSteeringTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMassMovingSteeringParameters)             MovingSteering                                              OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FMassStandingSteeringParameters)           StandingSteering                                            OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/MassNavigation.MassMovingAvoidanceParameters
/// Size: 0x0043 (0x000001 - 0x000044)
class FMassMovingAvoidanceParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	DMember(float)                                     ObstacleDetectionDistance                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StartOfPathDuration                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndOfPathDuration                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     StartOfPathAvoidanceScale                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     EndOfPathAvoidanceScale                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     StandingObstacleAvoidanceScale                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     StaticObstacleClearanceScale                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SeparationRadiusScale                                       OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ObstacleSeparationStiffness                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     ObstacleSeparationDistance                                  OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     EnvironmentSeparationStiffness                              OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     EnvironmentSeparationDistance                               OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     PredictiveAvoidanceTime                                     OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     PredictiveAvoidanceRadiusScale                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PredictiveAvoidanceDistance                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ObstaclePredictiveAvoidanceStiffness                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     EnvironmentPredictiveAvoidanceStiffness                     OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/MassNavigation.MassStandingAvoidanceParameters
/// Size: 0x0033 (0x000001 - 0x000034)
class FMassStandingAvoidanceParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(float)                                     GhostObstacleDetectionDistance                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     GhostToTargetMaxDeviation                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GhostSteeringReactionTime                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     GhostStandSlowdownRadius                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     GhostMaxSpeed                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     GhostMaxAcceleration                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     GhostVelocityDampingTime                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     GhostSeparationRadiusScale                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     GhostSeparationDistance                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     GhostSeparationStiffness                                    OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MovingObstacleAvoidanceScale                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MovingObstacleDirectionalScale                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MovingObstaclePersonalSpaceScale                            OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/MassNavigation.MassNavigationEdgesFragment
/// Size: 0x0247 (0x000001 - 0x000248)
class FMassNavigationEdgesFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
};

/// Struct /Script/MassNavigation.MassMoveTargetFragment
/// Size: 0x004F (0x000001 - 0x000050)
class FMassMoveTargetFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/MassNavigation.MassGhostLocationFragment
/// Size: 0x0037 (0x000001 - 0x000038)
class FMassGhostLocationFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/MassNavigation.MassNavigationObstacleGridCellLocationFragment
/// Size: 0x000B (0x000001 - 0x00000C)
class FMassNavigationObstacleGridCellLocationFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/MassNavigation.MassAvoidanceColliderFragment
/// Size: 0x000B (0x000001 - 0x00000C)
class FMassAvoidanceColliderFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/MassNavigation.MassInNavigationObstacleGridTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassInNavigationObstacleGridTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassNavigation.MassSmoothOrientationWeights
/// Size: 0x0007 (0x000001 - 0x000008)
class FMassSmoothOrientationWeights : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MoveTargetWeight                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     VelocityWeight                                              OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MassNavigation.MassSmoothOrientationParameters
/// Size: 0x0017 (0x000001 - 0x000018)
class FMassSmoothOrientationParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     EndOfPathDuration                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OrientationSmoothingTime                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FMassSmoothOrientationWeights)             Moving                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FMassSmoothOrientationWeights)             Standing                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/MassNavigation.MassSteeringFragment
/// Size: 0x0017 (0x000001 - 0x000018)
class FMassSteeringFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MassNavigation.MassStandingSteeringFragment
/// Size: 0x0027 (0x000001 - 0x000028)
class FMassStandingSteeringFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MassNavigation.MassMovingSteeringParameters
/// Size: 0x0007 (0x000001 - 0x000008)
class FMassMovingSteeringParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     ReactionTime                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LookAheadTime                                               OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MassNavigation.MassStandingSteeringParameters
/// Size: 0x001F (0x000001 - 0x000020)
class FMassStandingSteeringParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     ReactionTime                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TargetMoveThreshold                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TargetMoveThresholdVariance                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LowSpeedThreshold                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TargetSpeedHysteresisScale                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TargetSelectionCooldown                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TargetSelectionCooldownVariance                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     DeadZoneRadius                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Enum /Script/MassNavigation.EMassNavigationObstacleFlags
/// Size: 0x03
enum EMassNavigationObstacleFlags : uint8_t
{
	EMassNavigationObstacleFlags__None                                               = 0,
	EMassNavigationObstacleFlags__HasColliderData                                    = 1,
	EMassNavigationObstacleFlags__EMassNavigationObstacleFlags_MAX                   = 2
};

/// Enum /Script/MassNavigation.EMassMovementAction
/// Size: 0x04
enum EMassMovementAction : uint8_t
{
	EMassMovementAction__Stand                                                       = 0,
	EMassMovementAction__Move                                                        = 1,
	EMassMovementAction__Animate                                                     = 2,
	EMassMovementAction__EMassMovementAction_MAX                                     = 3
};

