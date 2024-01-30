
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: MotionTrajectory
/// dependency: PoseSearch
/// dependency: ProxyTable

/// Enum /Script/LocomotionInitiativeRuntime.EFortMotionMatchingLocomotionState
/// Size: 0x06
enum class EFortMotionMatchingLocomotionState : uint8_t
{
	EFortMotionMatchingLocomotionState__Idle                                         = 0,
	EFortMotionMatchingLocomotionState__Start                                        = 1,
	EFortMotionMatchingLocomotionState__Loop                                         = 2,
	EFortMotionMatchingLocomotionState__Pivot                                        = 3,
	EFortMotionMatchingLocomotionState__Stop                                         = 4,
	EFortMotionMatchingLocomotionState__EFortMotionMatchingLocomotionState_MAX       = 5
};

/// Class /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortLocomotionLayerMaskDataAsset : public UDataAsset
{ 
public:
	float                                              MaskingHeadTorsoAlpha;                                      // 0x0030   (0x0004)  
	float                                              MaskingLeftArmAlpha;                                        // 0x0034   (0x0004)  
	float                                              MaskingRightArmAlpha;                                       // 0x0038   (0x0004)  
	float                                              MaskingWeaponAlpha;                                         // 0x003C   (0x0004)  
	float                                              MutingHeadTorsoAlpha;                                       // 0x0040   (0x0004)  
	float                                              MutingLeftArmAlpha;                                         // 0x0044   (0x0004)  
	float                                              MutingRightArmAlpha;                                        // 0x0048   (0x0004)  
	float                                              MutingWeaponAlpha;                                          // 0x004C   (0x0004)  


	/// Functions
	// Function /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset.ApplyTo
	// void ApplyTo(FFortLocomotionLayerMaskDataSet& DataAsset);                                                             // [0xb23e2bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingAnimInstance
/// Size: 0x0000 (0x001620 - 0x001620)
class UFortPlayerMotionMatchingAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:


	/// Functions
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingAnimInstance.GetProceduralLayeringAnimInstance
	// class UAnimInstance* GetProceduralLayeringAnimInstance();                                                             // [0xb23e350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LocomotionInitiativeRuntime.MotionMatchingLODConfig
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMotionMatchingLODConfig
{ 
	class UProxyTable*                                 MotionDatabaseProxyTable;                                   // 0x0000   (0x0008)  
	class UAnimSequence*                               StandIdleLoop;                                              // 0x0008   (0x0008)  
	class UAnimSequence*                               CrouchIdleLoop;                                             // 0x0010   (0x0008)  
	TArray<class UAnimSequence*>                       StandIdleBreak;                                             // 0x0018   (0x0010)  
	TArray<class UAnimSequence*>                       CrouchIdleBreak;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/LocomotionInitiativeRuntime.MotionMatchingBlendInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMotionMatchingBlendInfo
{ 
	float                                              BlendTime;                                                  // 0x0000   (0x0004)  
	FName                                              BlendProfile;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/LocomotionInitiativeRuntime.FortMotionMatchingAngleSpamTracker
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortMotionMatchingAngleSpamTracker
{ 
	float                                              DirectionChangeAngleThresholdDegrees;                       // 0x0000   (0x0004)  
	uint32_t                                           SpamAngleChangeCounterThreshold;                            // 0x0004   (0x0004)  
	float                                              SpamDetectionWindowLengthSeconds;                           // 0x0008   (0x0004)  
	float                                              SpamDetectionMaxConeAngleDegrees;                           // 0x000C   (0x0004)  
	uint32_t                                           MaxSamplesPerSecond;                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x0014   (0x0034)  MISSED
};

/// Class /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance
/// Size: 0x0450 (0x001620 - 0x001A70)
class UFortPlayerMotionMatchingLocomotionAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:
	FCachedAnimStateArray                              IdleStatesData;                                             // 0x1618   (0x0018)  
	FVector                                            FutureRootMotionVelocity;                                   // 0x1630   (0x0018)  
	FMotionMatchingLODConfig                           HighEndConfig;                                              // 0x1648   (0x0038)  
	FMotionMatchingLODConfig                           LowEndConfig;                                               // 0x1680   (0x0038)  
	FMotionMatchingLODConfig                           CurrentLODConfig;                                           // 0x16B8   (0x0038)  
	class UAnimSequence*                               SelectedIdleBreak;                                          // 0x16F0   (0x0008)  
	class UProxyAsset*                                 MotionMatchingLODProxyAsset;                                // 0x16F8   (0x0008)  
	int32_t                                            MotionMatchingLOD;                                          // 0x1700   (0x0004)  
	FMotionMatchingBlendInfo                           MotionMatchingBlendInfo;                                    // 0x1704   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x170C   (0x0004)  MISSED
	class UClass*                                      StopBranchOutWindowNotifyClass;                             // 0x1710   (0x0008)  
	EFortMotionMatchingLocomotionState                 LocomotionState;                                            // 0x1718   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1719   (0x0003)  MISSED
	float                                              StartToLoopSearchDelaySeconds;                              // 0x171C   (0x0004)  
	float                                              PivotToLoopSearchDelaySeconds;                              // 0x1720   (0x0004)  
	float                                              PivotSpeedThreshold;                                        // 0x1724   (0x0004)  
	float                                              PivotDotProductThresholdRun;                                // 0x1728   (0x0004)  
	float                                              DiagonalDetectionThreshold;                                 // 0x172C   (0x0004)  
	float                                              PivotDotProductThresholdWalk;                               // 0x1730   (0x0004)  
	float                                              LocomotionStateTime;                                        // 0x1734   (0x0004)  
	float                                              VelocityDirection;                                          // 0x1738   (0x0004)  
	float                                              MotionMatchingWeight;                                       // 0x173C   (0x0004)  
	EPoseSearchInterruptMode                           DatabaseSearchInterruptMode;                                // 0x1740   (0x0001)  
	bool                                               bUseOrientationWarping;                                     // 0x1741   (0x0001)  
	bool                                               bUseFutureForOrientationWarping;                            // 0x1742   (0x0001)  
	bool                                               bIsLowEnd;                                                  // 0x1743   (0x0001)  
	bool                                               bUseLocomotionBlendspace;                                   // 0x1744   (0x0001)  
	bool                                               bShouldPlayIdle;                                            // 0x1745   (0x0001)  
	bool                                               bShouldPlayIdleBreak;                                       // 0x1746   (0x0001)  
	bool                                               bShouldExitIdleBreak;                                       // 0x1747   (0x0001)  
	bool                                               bShouldExitIdleBreakSlow;                                   // 0x1748   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x1749   (0x0003)  MISSED
	float                                              IdleTransitionTimer;                                        // 0x174C   (0x0004)  
	float                                              IdleBreakTimer;                                             // 0x1750   (0x0004)  
	bool                                               bBothHandsIKInHandSpace;                                    // 0x1754   (0x0001)  
	bool                                               bIsCrouchedTransition;                                      // 0x1755   (0x0001)  
	bool                                               bWasCrouching;                                              // 0x1756   (0x0001)  
	bool                                               bShouldPlayStandToCrouchTransition;                         // 0x1757   (0x0001)  
	bool                                               bShouldPlayCrouchToStandTransition;                         // 0x1758   (0x0001)  
	bool                                               bShouldExitCrouchTransition;                                // 0x1759   (0x0001)  
	bool                                               bIsLocallyControlled;                                       // 0x175A   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x175B   (0x0001)  MISSED
	float                                              CameraSpamYawThreshold;                                     // 0x175C   (0x0004)  
	float                                              CameraSpamCoolDownSeconds;                                  // 0x1760   (0x0004)  
	float                                              CameraSpamSearchThrottleTime;                               // 0x1764   (0x0004)  
	float                                              DefaultSearchThrottleTime;                                  // 0x1768   (0x0004)  
	float                                              SearchThrottleTime;                                         // 0x176C   (0x0004)  
	float                                              AdditiveLeanAlpha;                                          // 0x1770   (0x0004)  
	bool                                               bEnableAdditiveLeans;                                       // 0x1774   (0x0001)  
	bool                                               bEnableAdditiveRunLeans;                                    // 0x1775   (0x0001)  
	bool                                               bDisableArcs;                                               // 0x1776   (0x0001)  
	bool                                               bDisableDiamonds;                                           // 0x1777   (0x0001)  
	bool                                               bIdleToMotionMatchingNoInertialization;                     // 0x1778   (0x0001)  
	bool                                               bRelaxedStateChanged;                                       // 0x1779   (0x0001)  
	bool                                               bIsMelee;                                                   // 0x177A   (0x0001)  
	bool                                               bUseRelaxedMotionMatchingData;                              // 0x177B   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x177C   (0x0004)  MISSED
	FPoseSearchQueryTrajectory                         Trajectory;                                                 // 0x1780   (0x0010)  
	FTrajectorySamplingData                            TrajectorySamplingData;                                     // 0x1790   (0x0020)  
	FCharacterTrajectoryData                           CharacterTrajectoryData;                                    // 0x17B0   (0x01E0)  
	float                                              TrajectorySpeedMultiplier;                                  // 0x1990   (0x0004)  
	float                                              LowFrictionCustomMaxSpeed;                                  // 0x1994   (0x0004)  
	float                                              LowFrictionCustomBrakingDeceleration;                       // 0x1998   (0x0004)  
	float                                              LowFrictionCustomFriction;                                  // 0x199C   (0x0004)  
	FFortMotionMatchingAngleSpamTracker                AccelerationSpamTracker;                                    // 0x19A0   (0x0048)  
	unsigned char                                      UnknownData05_5[0x80];                                      // 0x19E8   (0x0080)  MISSED
	bool                                               bIsPlayingInterruptibleStop;                                // 0x1A68   (0x0001)  
	bool                                               bIsPlayingIdleDatabase;                                     // 0x1A69   (0x0001)  
	bool                                               bHasReachedIdle;                                            // 0x1A6A   (0x0001)  
	unsigned char                                      UnknownData06_6[0x5];                                       // 0x1A6B   (0x0005)  MISSED


	/// Functions
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.OnUpdateMotionMatchingState
	// void OnUpdateMotionMatchingState(FAnimUpdateContext& Context, FAnimNodeReference& Node);                              // [0x17ce51c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.OnUpdateMotionMatching
	// void OnUpdateMotionMatching(FAnimUpdateContext& Context, FAnimNodeReference& Node);                                   // [0x17d10e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.GetMotionMatchingBlendProfile
	// class UBlendProfile* GetMotionMatchingBlendProfile();                                                                 // [0x28a8f98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LocomotionInitiativeRuntime.LocomotionInitiativeComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class ULocomotionInitiativeComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A0   (0x0008)  MISSED
	class UClass*                                      MotionMatchingLocomotionAnimBlueprintClass;                 // 0x00A8   (0x0008)  
	class UClass*                                      RigidBodyPBA_AnimBlueprintClass;                            // 0x00B0   (0x0008)  
	FScalableFloat                                     IsLocomotionInitiativeEnabled;                              // 0x00B8   (0x0028)  
	class UAnimSequence*                               CrouchShuffleInPlaceAnim;                                   // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00E8   (0x0010)  MISSED
};

/// Class /Script/LocomotionInitiativeRuntime.LocomotionInitiativeGameFeatureData
/// Size: 0x0008 (0x000530 - 0x000538)
class ULocomotionInitiativeGameFeatureData : public UFortGameFeatureData
{ 
public:
	FPerPlatformBool                                   SkydivingEnablePhysicsBasedAnimationByDefault;              // 0x0530   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0531   (0x0007)  MISSED
};

/// Struct /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataSet
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortLocomotionLayerMaskDataSet
{ 
	float                                              MaskingHeadTorsoAlpha;                                      // 0x0000   (0x0004)  
	float                                              MaskingLeftArmAlpha;                                        // 0x0004   (0x0004)  
	float                                              MaskingRightArmAlpha;                                       // 0x0008   (0x0004)  
	float                                              MaskingWeaponAlpha;                                         // 0x000C   (0x0004)  
	float                                              MutingHeadTorsoAlpha;                                       // 0x0010   (0x0004)  
	float                                              MutingLeftArmAlpha;                                         // 0x0014   (0x0004)  
	float                                              MutingRightArmAlpha;                                        // 0x0018   (0x0004)  
	float                                              MutingWeaponAlpha;                                          // 0x001C   (0x0004)  
};

/// Struct /Script/LocomotionInitiativeRuntime.LocomotionInitiativeScriptedPlayerInputEntry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLocomotionInitiativeScriptedPlayerInputEntry
{ 
	float                                              ForwardInput;                                               // 0x0000   (0x0004)  
	float                                              RightInput;                                                 // 0x0004   (0x0004)  
	float                                              DurationInSeconds;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/LocomotionInitiativeRuntime.LocomotionInitiativeRecordedInputEntry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLocomotionInitiativeRecordedInputEntry
{ 
	FVector                                            InputVector;                                                // 0x0000   (0x0018)  
	FRotator                                           ControlRotation;                                            // 0x0018   (0x0018)  
	float                                              Timestamp;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

