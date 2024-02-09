
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: MassActors
/// dependency: MassEntity
/// dependency: MassMovement
/// dependency: MassSignals
/// dependency: MassSmartObjects
/// dependency: MassSpawner
/// dependency: SmartObjectsModule
/// dependency: StateTreeModule
/// dependency: ZoneGraph

/// Enum /Script/MassAIBehavior.EMassLookAtMode
/// Size: 0x04
enum class EMassLookAtMode : uint8_t
{
	EMassLookAtMode__LookForward                                                     = 0,
	EMassLookAtMode__LookAlongPath                                                   = 1,
	EMassLookAtMode__LookAtEntity                                                    = 2,
	EMassLookAtMode__EMassLookAtMode_MAX                                             = 3
};

/// Enum /Script/MassAIBehavior.EMassLookAtGazeMode
/// Size: 0x04
enum class EMassLookAtGazeMode : uint8_t
{
	EMassLookAtGazeMode__None                                                        = 0,
	EMassLookAtGazeMode__Constant                                                    = 1,
	EMassLookAtGazeMode__Glance                                                      = 2,
	EMassLookAtGazeMode__EMassLookAtGazeMode_MAX                                     = 3
};

/// Class /Script/MassAIBehavior.MassBehaviorSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UMassBehaviorSettings : public UMassModuleSettings
{ 
public:
	int32_t                                            MaxActivationsPerLOD;                                       // 0x0028   (0x0010)  
};

/// Class /Script/MassAIBehavior.MassComponentHitSubsystem
/// Size: 0x0100 (0x000048 - 0x000148)
class UMassComponentHitSubsystem : public UMassTickableSubsystemBase
{ 
public:
	class UMassSignalSubsystem*                        SignalSubsystem;                                            // 0x0048   (0x0008)  
	class UMassAgentSubsystem*                         AgentSubsystem;                                             // 0x0050   (0x0008)  
	SDK_UNDEFINED(80,14650) /* TMap<FMassEntityHandle, FMassHitResult> */ __um(HitResults);                        // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,14651) /* TMap<UActorComponent*, FMassEntityHandle> */ __um(ComponentToEntityMap);            // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,14652) /* TMap<FMassEntityHandle, UActorComponent*> */ __um(EntityToComponentMap);            // 0x00F8   (0x0050)  


	/// Functions
	// Function /Script/MassAIBehavior.MassComponentHitSubsystem.OnHitCallback
	// void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xc0706f4] Final|Native|Protected|HasOutParms|HasDefaults 
};

/// Class /Script/MassAIBehavior.MassLookAtProcessor
/// Size: 0x02C0 (0x0000C0 - 0x000380)
class UMassLookAtProcessor : public UMassProcessor
{ 
public:
	float                                              QueryExtent;                                                // 0x00C0   (0x0004)  
	float                                              duration;                                                   // 0x00C4   (0x0004)  
	float                                              DurationVariation;                                          // 0x00C8   (0x0004)  
	float                                              DebugZOffset;                                               // 0x00CC   (0x0004)  
	float                                              AngleThresholdInDegrees;                                    // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2AC];                                     // 0x00D4   (0x02AC)  MISSED
};

/// Class /Script/MassAIBehavior.MassLookAtTargetTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassLookAtTargetTrait : public UMassEntityTraitBase
{ 
public:
};

/// Class /Script/MassAIBehavior.MassLookAtTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassLookAtTrait : public UMassEntityTraitBase
{ 
public:
};

/// Class /Script/MassAIBehavior.MassStateTreeFragmentDestructor
/// Size: 0x02B8 (0x0000D8 - 0x000390)
class UMassStateTreeFragmentDestructor : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_3[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
	class UMassSignalSubsystem*                        SignalSubsystem;                                            // 0x0380   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0388   (0x0008)  MISSED
};

/// Class /Script/MassAIBehavior.MassStateTreeActivationProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassStateTreeActivationProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/MassAIBehavior.MassStateTreeProcessor
/// Size: 0x0000 (0x000420 - 0x000420)
class UMassStateTreeProcessor : public UMassSignalProcessorBase
{ 
public:
};

/// Class /Script/MassAIBehavior.MassStateTreeSchema
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassStateTreeSchema : public UStateTreeSchema
{ 
public:
};

/// Struct /Script/MassAIBehavior.MassStateTreeInstanceDataItem
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMassStateTreeInstanceDataItem
{ 
	FStateTreeInstanceData                             InstanceData;                                               // 0x0000   (0x0010)  
	int32_t                                            Generation;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/MassAIBehavior.MassStateTreeSubsystem
/// Size: 0x0020 (0x000038 - 0x000058)
class UMassStateTreeSubsystem : public UMassSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0038   (0x0010)  MISSED
	TArray<FMassStateTreeInstanceDataItem>             InstanceDataArray;                                          // 0x0048   (0x0010)  
};

/// Class /Script/MassAIBehavior.MassStateTreeTrait
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassStateTreeTrait : public UMassEntityTraitBase
{ 
public:
	class UStateTree*                                  StateTree;                                                  // 0x0028   (0x0008)  
};

/// Class /Script/MassAIBehavior.MassZoneGraphAnnotationTagsInitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassZoneGraphAnnotationTagsInitializer : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassAIBehavior.MassZoneGraphAnnotationTagUpdateProcessor
/// Size: 0x0010 (0x000420 - 0x000430)
class UMassZoneGraphAnnotationTagUpdateProcessor : public UMassSignalProcessorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0420   (0x0010)  MISSED
};

/// Class /Script/MassAIBehavior.MassZoneGraphAnnotationTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassZoneGraphAnnotationTrait : public UMassEntityTraitBase
{ 
public:
};

/// Struct /Script/MassAIBehavior.MassClaimSmartObjectTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMassClaimSmartObjectTaskInstanceData
{ 
	FStateTreeStructRef                                CandidateSlots;                                             // 0x0000   (0x0010)  
	FSmartObjectClaimHandle                            ClaimedSlot;                                                // 0x0010   (0x0020)  
};

/// Struct /Script/MassAIBehavior.MassStateTreeTaskBase
/// Size: 0x0000 (0x000020 - 0x000020)
struct FMassStateTreeTaskBase : FStateTreeTaskBase
{ 
};

/// Struct /Script/MassAIBehavior.MassClaimSmartObjectTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FMassClaimSmartObjectTask : FMassStateTreeTaskBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0020   (0x0008)  MISSED
	float                                              InteractionCooldown;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/MassAIBehavior.MassComponentHitEvaluatorInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMassComponentHitEvaluatorInstanceData
{ 
	bool                                               bGotHit;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FMassEntityHandle                                  LastHitEntity;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/MassAIBehavior.MassStateTreeEvaluatorBase
/// Size: 0x0000 (0x000018 - 0x000018)
struct FMassStateTreeEvaluatorBase : FStateTreeEvaluatorBase
{ 
};

/// Struct /Script/MassAIBehavior.MassComponentHitEvaluator
/// Size: 0x0008 (0x000018 - 0x000020)
struct FMassComponentHitEvaluator : FMassStateTreeEvaluatorBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/MassAIBehavior.MassHitResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMassHitResult
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MassAIBehavior.MassFindSmartObjectTaskInstanceData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FMassFindSmartObjectTaskInstanceData
{ 
	FMassSmartObjectCandidateSlots                     FoundCandidateSlots;                                        // 0x0000   (0x0088)  
	bool                                               bHasCandidateSlots;                                         // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FMassSmartObjectRequestID                          SearchRequestID;                                            // 0x0090   (0x0008)  
	double                                             NextUpdate;                                                 // 0x0098   (0x0008)  
	FZoneGraphLaneHandle                               LastLane;                                                   // 0x00A0   (0x0008)  
};

/// Struct /Script/MassAIBehavior.MassFindSmartObjectTask
/// Size: 0x0060 (0x000020 - 0x000080)
struct FMassFindSmartObjectTask : FMassStateTreeTaskBase
{ 
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0020   (0x0010)  MISSED
	FGameplayTagQuery                                  ActivityRequirements;                                       // 0x0030   (0x0048)  
	float                                              SearchInterval;                                             // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/MassAIBehavior.MassLookAtFragment
/// Size: 0x0057 (0x000001 - 0x000058)
struct FMassLookAtFragment : FMassFragment
{ 
	FVector                                            Direction;                                                  // 0x0000   (0x0018)  
	FVector                                            GazeDirection;                                              // 0x0018   (0x0018)  
	FMassEntityHandle                                  TrackedEntity;                                              // 0x0030   (0x0008)  
	FMassEntityHandle                                  GazeTrackedEntity;                                          // 0x0038   (0x0008)  
	double                                             GazeStartTime;                                              // 0x0040   (0x0008)  
	float                                              GazeDuration;                                               // 0x0048   (0x0004)  
	uint16_t                                           LastSeenActionID;                                           // 0x004C   (0x0002)  
	EMassLookAtMode                                    LookAtMode;                                                 // 0x004E   (0x0001)  
	EMassLookAtGazeMode                                RandomGazeMode;                                             // 0x004F   (0x0001)  
	char                                               RandomGazeYawVariation;                                     // 0x0050   (0x0001)  
	char                                               RandomGazePitchVariation;                                   // 0x0051   (0x0001)  
	bool                                               bRandomGazeEntities : 1;                                    // 0x0052:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0053   (0x0005)  MISSED
};

/// Struct /Script/MassAIBehavior.MassLookAtTargetTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassLookAtTargetTag : FMassTag
{ 
};

/// Struct /Script/MassAIBehavior.MassLookAtTrajectoryPoint
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMassLookAtTrajectoryPoint
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/MassAIBehavior.MassLookAtTrajectoryFragment
/// Size: 0x006F (0x000001 - 0x000070)
struct FMassLookAtTrajectoryFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/MassAIBehavior.MassLookAtTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMassLookAtTaskInstanceData
{ 
	FMassEntityHandle                                  TargetEntity;                                               // 0x0000   (0x0008)  
	float                                              duration;                                                   // 0x0008   (0x0004)  
	float                                              Time;                                                       // 0x000C   (0x0004)  
};

/// Struct /Script/MassAIBehavior.MassLookAtTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FMassLookAtTask : FMassStateTreeTaskBase
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0020   (0x0004)  MISSED
	EMassLookAtMode                                    LookAtMode;                                                 // 0x0024   (0x0001)  
	EMassLookAtGazeMode                                RandomGazeMode;                                             // 0x0025   (0x0001)  
	char                                               RandomGazeYawVariation;                                     // 0x0026   (0x0001)  
	char                                               RandomGazePitchVariation;                                   // 0x0027   (0x0001)  
	bool                                               bRandomGazeEntities;                                        // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/MassAIBehavior.MassStateTreeInstanceFragment
/// Size: 0x000F (0x000001 - 0x000010)
struct FMassStateTreeInstanceFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MassAIBehavior.MassStateTreeSharedFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassStateTreeSharedFragment : FMassSharedFragment
{ 
	class UStateTree*                                  StateTree;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/MassAIBehavior.MassStateTreeActivatedTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassStateTreeActivatedTag : FMassTag
{ 
};

/// Struct /Script/MassAIBehavior.MassUseSmartObjectTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMassUseSmartObjectTaskInstanceData
{ 
	FSmartObjectClaimHandle                            ClaimedSlot;                                                // 0x0000   (0x0020)  
};

/// Struct /Script/MassAIBehavior.MassUseSmartObjectTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FMassUseSmartObjectTask : FMassStateTreeTaskBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/MassAIBehavior.MassZoneGraphAnnotationEvaluatorInstanceData
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMassZoneGraphAnnotationEvaluatorInstanceData
{ 
	FZoneGraphTagMask                                  AnnotationTags;                                             // 0x0000   (0x0004)  
};

/// Struct /Script/MassAIBehavior.MassZoneGraphAnnotationEvaluator
/// Size: 0x0008 (0x000018 - 0x000020)
struct FMassZoneGraphAnnotationEvaluator : FMassStateTreeEvaluatorBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/MassAIBehavior.MassZoneGraphAnnotationFragment
/// Size: 0x0003 (0x000001 - 0x000004)
struct FMassZoneGraphAnnotationFragment : FMassFragment
{ 
	FZoneGraphTagMask                                  Tags;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/MassAIBehavior.MassZoneGraphAnnotationVariableTickChunkFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassZoneGraphAnnotationVariableTickChunkFragment : FMassChunkFragment
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MassAIBehavior.MassZoneGraphTargetLocation
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMassZoneGraphTargetLocation
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/MassAIBehavior.MassZoneGraphFindEscapeTargetInstanceData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMassZoneGraphFindEscapeTargetInstanceData
{ 
	FMassZoneGraphTargetLocation                       EscapeTargetLocation;                                       // 0x0000   (0x0060)  
};

/// Struct /Script/MassAIBehavior.MassZoneGraphFindEscapeTarget
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMassZoneGraphFindEscapeTarget : FMassStateTreeTaskBase
{ 
	unsigned char                                      UnknownData00_3[0x6];                                       // 0x0020   (0x0006)  MISSED
	FZoneGraphTag                                      DisturbanceAnnotationTag;                                   // 0x0026   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0027   (0x0001)  MISSED
};

/// Struct /Script/MassAIBehavior.MassZoneGraphFindSmartObjectTargetInstanceData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMassZoneGraphFindSmartObjectTargetInstanceData
{ 
	FSmartObjectClaimHandle                            ClaimedSlot;                                                // 0x0000   (0x0020)  
	FMassZoneGraphTargetLocation                       SmartObjectLocation;                                        // 0x0020   (0x0060)  
};

/// Struct /Script/MassAIBehavior.MassZoneGraphFindSmartObjectTarget
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMassZoneGraphFindSmartObjectTarget : FMassStateTreeTaskBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/MassAIBehavior.MassZoneGraphPathFollowTaskInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMassZoneGraphPathFollowTaskInstanceData
{ 
	FStateTreeStructRef                                TargetLocation;                                             // 0x0000   (0x0010)  
	FMassMovementStyleRef                              MovementStyle;                                              // 0x0010   (0x0014)  
	float                                              SpeedScale;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/MassAIBehavior.MassZoneGraphPathFollowTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FMassZoneGraphPathFollowTask : FMassStateTreeTaskBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/MassAIBehavior.MassZoneGraphStandTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMassZoneGraphStandTaskInstanceData
{ 
	float                                              duration;                                                   // 0x0000   (0x0004)  
	float                                              Time;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/MassAIBehavior.MassZoneGraphStandTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FMassZoneGraphStandTask : FMassStateTreeTaskBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagFilterConditionInstanceData
/// Size: 0x0004 (0x000000 - 0x000004)
struct FZoneGraphTagFilterConditionInstanceData
{ 
	FZoneGraphTagMask                                  Tags;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagFilterCondition
/// Size: 0x0010 (0x000020 - 0x000030)
struct FZoneGraphTagFilterCondition : FStateTreeConditionBase
{ 
	FZoneGraphTagFilter                                Filter;                                                     // 0x0020   (0x000C)  
	bool                                               bInvert;                                                    // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagMaskConditionInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FZoneGraphTagMaskConditionInstanceData
{ 
	FZoneGraphTagMask                                  Left;                                                       // 0x0000   (0x0004)  
	FZoneGraphTagMask                                  Right;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagMaskCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FZoneGraphTagMaskCondition : FStateTreeConditionBase
{ 
	EZoneLaneTagMaskComparison                         Operator;                                                   // 0x0020   (0x0001)  
	bool                                               bInvert;                                                    // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagConditionInstanceData
/// Size: 0x0002 (0x000000 - 0x000002)
struct FZoneGraphTagConditionInstanceData
{ 
	FZoneGraphTag                                      Left;                                                       // 0x0000   (0x0001)  
	FZoneGraphTag                                      Right;                                                      // 0x0001   (0x0001)  
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FZoneGraphTagCondition : FStateTreeConditionBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

