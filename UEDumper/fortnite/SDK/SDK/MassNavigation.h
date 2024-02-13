
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity
/// dependency: MassSpawner

/// Enum /Script/MassNavigation.EMassNavigationObstacleFlags
/// Size: 0x03
enum class EMassNavigationObstacleFlags : uint8_t
{
	EMassNavigationObstacleFlags__None                                               = 0,
	EMassNavigationObstacleFlags__HasColliderData                                    = 1,
	EMassNavigationObstacleFlags__EMassNavigationObstacleFlags_MAX                   = 2
};

/// Enum /Script/MassNavigation.EMassMovementAction
/// Size: 0x04
enum class EMassMovementAction : uint8_t
{
	EMassMovementAction__Stand                                                       = 0,
	EMassMovementAction__Move                                                        = 1,
	EMassMovementAction__Animate                                                     = 2,
	EMassMovementAction__EMassMovementAction_MAX                                     = 3
};

/// Class /Script/MassNavigation.MassMovingAvoidanceProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassMovingAvoidanceProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2B0];                                     // 0x00C0   (0x02B0)  MISSED
};

/// Class /Script/MassNavigation.MassStandingAvoidanceProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassStandingAvoidanceProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2B0];                                     // 0x00C0   (0x02B0)  MISSED
};

/// Struct /Script/MassNavigation.MassMovingAvoidanceParameters
/// Size: 0x0043 (0x000001 - 0x000044)
struct FMassMovingAvoidanceParameters : FMassSharedFragment
{ 
	float                                              ObstacleDetectionDistance;                                  // 0x0000   (0x0004)  
	float                                              StartOfPathDuration;                                        // 0x0004   (0x0004)  
	float                                              EndOfPathDuration;                                          // 0x0008   (0x0004)  
	float                                              StartOfPathAvoidanceScale;                                  // 0x000C   (0x0004)  
	float                                              EndOfPathAvoidanceScale;                                    // 0x0010   (0x0004)  
	float                                              StandingObstacleAvoidanceScale;                             // 0x0014   (0x0004)  
	float                                              StaticObstacleClearanceScale;                               // 0x0018   (0x0004)  
	float                                              SeparationRadiusScale;                                      // 0x001C   (0x0004)  
	float                                              ObstacleSeparationStiffness;                                // 0x0020   (0x0004)  
	float                                              ObstacleSeparationDistance;                                 // 0x0024   (0x0004)  
	float                                              EnvironmentSeparationStiffness;                             // 0x0028   (0x0004)  
	float                                              EnvironmentSeparationDistance;                              // 0x002C   (0x0004)  
	float                                              PredictiveAvoidanceTime;                                    // 0x0030   (0x0004)  
	float                                              PredictiveAvoidanceRadiusScale;                             // 0x0034   (0x0004)  
	float                                              PredictiveAvoidanceDistance;                                // 0x0038   (0x0004)  
	float                                              ObstaclePredictiveAvoidanceStiffness;                       // 0x003C   (0x0004)  
	float                                              EnvironmentPredictiveAvoidanceStiffness;                    // 0x0040   (0x0004)  
};

/// Struct /Script/MassNavigation.MassStandingAvoidanceParameters
/// Size: 0x0033 (0x000001 - 0x000034)
struct FMassStandingAvoidanceParameters : FMassSharedFragment
{ 
	float                                              GhostObstacleDetectionDistance;                             // 0x0000   (0x0004)  
	float                                              GhostToTargetMaxDeviation;                                  // 0x0004   (0x0004)  
	float                                              GhostSteeringReactionTime;                                  // 0x0008   (0x0004)  
	float                                              GhostStandSlowdownRadius;                                   // 0x000C   (0x0004)  
	float                                              GhostMaxSpeed;                                              // 0x0010   (0x0004)  
	float                                              GhostMaxAcceleration;                                       // 0x0014   (0x0004)  
	float                                              GhostVelocityDampingTime;                                   // 0x0018   (0x0004)  
	float                                              GhostSeparationRadiusScale;                                 // 0x001C   (0x0004)  
	float                                              GhostSeparationDistance;                                    // 0x0020   (0x0004)  
	float                                              GhostSeparationStiffness;                                   // 0x0024   (0x0004)  
	float                                              MovingObstacleAvoidanceScale;                               // 0x0028   (0x0004)  
	float                                              MovingObstacleDirectionalScale;                             // 0x002C   (0x0004)  
	float                                              MovingObstaclePersonalSpaceScale;                           // 0x0030   (0x0004)  
};

/// Class /Script/MassNavigation.MassObstacleAvoidanceTrait
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UMassObstacleAvoidanceTrait : public UMassEntityTraitBase
{ 
public:
	FMassMovingAvoidanceParameters                     MovingParameters;                                           // 0x0028   (0x0044)  
	FMassStandingAvoidanceParameters                   StandingParameters;                                         // 0x006C   (0x0034)  
};

/// Class /Script/MassNavigation.MassNavigationObstacleTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassNavigationObstacleTrait : public UMassEntityTraitBase
{ 
public:
};

/// Class /Script/MassNavigation.MassOffLODNavigationProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassOffLODNavigationProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/MassNavigation.MassNavigationSmoothHeightProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassNavigationSmoothHeightProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/MassNavigation.MassMoveTargetFragmentInitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassMoveTargetFragmentInitializer : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassNavigation.MassNavigationObstacleGridProcessor
/// Size: 0x07E0 (0x0000C0 - 0x0008A0)
class UMassNavigationObstacleGridProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x7E0];                                     // 0x00C0   (0x07E0)  MISSED
};

/// Class /Script/MassNavigation.MassNavigationObstacleRemoverProcessor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassNavigationObstacleRemoverProcessor : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassNavigation.MassNavigationSubsystem
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class UMassNavigationSubsystem : public UMassSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0038   (0x00A8)  MISSED
};

/// Class /Script/MassNavigation.MassSmoothOrientationProcessor
/// Size: 0x0540 (0x0000C0 - 0x000600)
class UMassSmoothOrientationProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x540];                                     // 0x00C0   (0x0540)  MISSED
};

/// Struct /Script/MassNavigation.MassSmoothOrientationWeights
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassSmoothOrientationWeights : FMassSharedFragment
{ 
	float                                              MoveTargetWeight;                                           // 0x0000   (0x0004)  
	float                                              VelocityWeight;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/MassNavigation.MassSmoothOrientationParameters
/// Size: 0x0017 (0x000001 - 0x000018)
struct FMassSmoothOrientationParameters : FMassSharedFragment
{ 
	float                                              EndOfPathDuration;                                          // 0x0000   (0x0004)  
	float                                              OrientationSmoothingTime;                                   // 0x0004   (0x0004)  
	FMassSmoothOrientationWeights                      Moving;                                                     // 0x0008   (0x0008)  
	FMassSmoothOrientationWeights                      Standing;                                                   // 0x0010   (0x0008)  
};

/// Class /Script/MassNavigation.MassSmoothOrientationTrait
/// Size: 0x0018 (0x000028 - 0x000040)
class UMassSmoothOrientationTrait : public UMassEntityTraitBase
{ 
public:
	FMassSmoothOrientationParameters                   orientation;                                                // 0x0028   (0x0018)  
};

/// Class /Script/MassNavigation.MassSteerToMoveTargetProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassSteerToMoveTargetProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Struct /Script/MassNavigation.MassMovingSteeringParameters
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassMovingSteeringParameters : FMassSharedFragment
{ 
	float                                              ReactionTime;                                               // 0x0000   (0x0004)  
	float                                              LookAheadTime;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/MassNavigation.MassStandingSteeringParameters
/// Size: 0x001F (0x000001 - 0x000020)
struct FMassStandingSteeringParameters : FMassSharedFragment
{ 
	float                                              ReactionTime;                                               // 0x0000   (0x0004)  
	float                                              TargetMoveThreshold;                                        // 0x0004   (0x0004)  
	float                                              TargetMoveThresholdVariance;                                // 0x0008   (0x0004)  
	float                                              LowSpeedThreshold;                                          // 0x000C   (0x0004)  
	float                                              TargetSpeedHysteresisScale;                                 // 0x0010   (0x0004)  
	float                                              TargetSelectionCooldown;                                    // 0x0014   (0x0004)  
	float                                              TargetSelectionCooldownVariance;                            // 0x0018   (0x0004)  
	float                                              DeadZoneRadius;                                             // 0x001C   (0x0004)  
};

/// Class /Script/MassNavigation.MassSteeringTrait
/// Size: 0x0028 (0x000028 - 0x000050)
class UMassSteeringTrait : public UMassEntityTraitBase
{ 
public:
	FMassMovingSteeringParameters                      MovingSteering;                                             // 0x0028   (0x0008)  
	FMassStandingSteeringParameters                    StandingSteering;                                           // 0x0030   (0x0020)  
};

/// Struct /Script/MassNavigation.MassNavigationEdgesFragment
/// Size: 0x0247 (0x000001 - 0x000248)
struct FMassNavigationEdgesFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x248];                                     // 0x0000   (0x0248)  MISSED
};

/// Struct /Script/MassNavigation.MassMoveTargetFragment
/// Size: 0x004F (0x000001 - 0x000050)
struct FMassMoveTargetFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/MassNavigation.MassGhostLocationFragment
/// Size: 0x0037 (0x000001 - 0x000038)
struct FMassGhostLocationFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/MassNavigation.MassNavigationObstacleGridCellLocationFragment
/// Size: 0x000B (0x000001 - 0x00000C)
struct FMassNavigationObstacleGridCellLocationFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/MassNavigation.MassAvoidanceColliderFragment
/// Size: 0x000B (0x000001 - 0x00000C)
struct FMassAvoidanceColliderFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/MassNavigation.MassInNavigationObstacleGridTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassInNavigationObstacleGridTag : FMassTag
{ 
};

/// Struct /Script/MassNavigation.MassSteeringFragment
/// Size: 0x0017 (0x000001 - 0x000018)
struct FMassSteeringFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MassNavigation.MassStandingSteeringFragment
/// Size: 0x0027 (0x000001 - 0x000028)
struct FMassStandingSteeringFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

