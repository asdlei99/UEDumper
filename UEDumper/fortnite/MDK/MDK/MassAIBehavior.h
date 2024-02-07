
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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

/// Class /Script/MassAIBehavior.MassBehaviorSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UMassBehaviorSettings : public UMassModuleSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   MaxActivationsPerLOD                                        OFFSET(get<int32_t>, {0x28, 16, 0, 0})
};

/// Class /Script/MassAIBehavior.MassComponentHitSubsystem
/// Size: 0x0100 (0x000048 - 0x000148)
class UMassComponentHitSubsystem : public UMassTickableSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UMassSignalSubsystem*)               SignalSubsystem                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UMassAgentSubsystem*)                AgentSubsystem                                              OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TMap<FMassEntityHandle, FMassHitResult>)   HitResults                                                  OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<UActorComponent*, FMassEntityHandle>) ComponentToEntityMap                                        OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<FMassEntityHandle, UActorComponent*>) EntityToComponentMap                                        OFFSET(get<T>, {0xF8, 80, 0, 0})


	/// Functions
	// Function /Script/MassAIBehavior.MassComponentHitSubsystem.OnHitCallback
	// void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xc0706f4] Final|Native|Protected|HasOutParms|HasDefaults 
};

/// Class /Script/MassAIBehavior.MassLookAtProcessor
/// Size: 0x02C0 (0x0000C0 - 0x000380)
class UMassLookAtProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(float)                                     QueryExtent                                                 OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     DurationVariation                                           OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     DebugZOffset                                                OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     AngleThresholdInDegrees                                     OFFSET(get<float>, {0xD0, 4, 0, 0})
};

/// Class /Script/MassAIBehavior.MassLookAtTargetTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassLookAtTargetTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassAIBehavior.MassLookAtTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassLookAtTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassAIBehavior.MassStateTreeFragmentDestructor
/// Size: 0x02B8 (0x0000D8 - 0x000390)
class UMassStateTreeFragmentDestructor : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(class UMassSignalSubsystem*)               SignalSubsystem                                             OFFSET(get<T>, {0x380, 8, 0, 0})
};

/// Class /Script/MassAIBehavior.MassStateTreeActivationProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassStateTreeActivationProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassAIBehavior.MassStateTreeProcessor
/// Size: 0x0000 (0x000420 - 0x000420)
class UMassStateTreeProcessor : public UMassSignalProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
};

/// Class /Script/MassAIBehavior.MassStateTreeSchema
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassStateTreeSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassAIBehavior.MassStateTreeSubsystem
/// Size: 0x0020 (0x000038 - 0x000058)
class UMassStateTreeSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FMassStateTreeInstanceDataItem>)    InstanceDataArray                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/MassAIBehavior.MassStateTreeTrait
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassStateTreeTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UStateTree*)                         StateTree                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/MassAIBehavior.MassZoneGraphAnnotationTagsInitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassZoneGraphAnnotationTagsInitializer : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassAIBehavior.MassZoneGraphAnnotationTagUpdateProcessor
/// Size: 0x0010 (0x000420 - 0x000430)
class UMassZoneGraphAnnotationTagUpdateProcessor : public UMassSignalProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
};

/// Class /Script/MassAIBehavior.MassZoneGraphAnnotationTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassZoneGraphAnnotationTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MassAIBehavior.MassClaimSmartObjectTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FMassClaimSmartObjectTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FStateTreeStructRef)                       CandidateSlots                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSmartObjectClaimHandle)                   ClaimedSlot                                                 OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassStateTreeTaskBase
/// Size: 0x0000 (0x000020 - 0x000020)
class FMassStateTreeTaskBase : public FStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MassAIBehavior.MassClaimSmartObjectTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FMassClaimSmartObjectTask : public FMassStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     InteractionCooldown                                         OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassComponentHitEvaluatorInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMassComponentHitEvaluatorInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bGotHit                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FMassEntityHandle)                         LastHitEntity                                               OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassStateTreeEvaluatorBase
/// Size: 0x0000 (0x000018 - 0x000018)
class FMassStateTreeEvaluatorBase : public FStateTreeEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MassAIBehavior.MassComponentHitEvaluator
/// Size: 0x0008 (0x000018 - 0x000020)
class FMassComponentHitEvaluator : public FMassStateTreeEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MassAIBehavior.MassHitResult
/// Size: 0x0018 (0x000000 - 0x000018)
class FMassHitResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MassAIBehavior.MassFindSmartObjectTaskInstanceData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FMassFindSmartObjectTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMassSmartObjectCandidateSlots)            FoundCandidateSlots                                         OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	DMember(bool)                                      bHasCandidateSlots                                          OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FMassSmartObjectRequestID)                 SearchRequestID                                             OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	DMember(double)                                    NextUpdate                                                  OFFSET(get<double>, {0x98, 8, 0, 0})
	SMember(FZoneGraphLaneHandle)                      LastLane                                                    OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassFindSmartObjectTask
/// Size: 0x0060 (0x000020 - 0x000080)
class FMassFindSmartObjectTask : public FMassStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        OFFSET(getStruct<T>, {0x30, 72, 0, 0})
	DMember(float)                                     SearchInterval                                              OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassLookAtFragment
/// Size: 0x0057 (0x000001 - 0x000058)
class FMassLookAtFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   GazeDirection                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FMassEntityHandle)                         TrackedEntity                                               OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FMassEntityHandle)                         GazeTrackedEntity                                           OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	DMember(double)                                    GazeStartTime                                               OFFSET(get<double>, {0x40, 8, 0, 0})
	DMember(float)                                     GazeDuration                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(uint16_t)                                  LastSeenActionID                                            OFFSET(get<uint16_t>, {0x4C, 2, 0, 0})
	CMember(EMassLookAtMode)                           LookAtMode                                                  OFFSET(get<T>, {0x4E, 1, 0, 0})
	CMember(EMassLookAtGazeMode)                       RandomGazeMode                                              OFFSET(get<T>, {0x4F, 1, 0, 0})
	DMember(char)                                      RandomGazeYawVariation                                      OFFSET(get<char>, {0x50, 1, 0, 0})
	DMember(char)                                      RandomGazePitchVariation                                    OFFSET(get<char>, {0x51, 1, 0, 0})
	DMember(bool)                                      bRandomGazeEntities                                         OFFSET(get<bool>, {0x52, 1, 1, 0})
};

/// Struct /Script/MassAIBehavior.MassLookAtTargetTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassLookAtTargetTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassAIBehavior.MassLookAtTrajectoryPoint
/// Size: 0x0020 (0x000000 - 0x000020)
class FMassLookAtTrajectoryPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MassAIBehavior.MassLookAtTrajectoryFragment
/// Size: 0x006F (0x000001 - 0x000070)
class FMassLookAtTrajectoryFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/MassAIBehavior.MassLookAtTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMassLookAtTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMassEntityHandle)                         TargetEntity                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassLookAtTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FMassLookAtTask : public FMassStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EMassLookAtMode)                           LookAtMode                                                  OFFSET(get<T>, {0x24, 1, 0, 0})
	CMember(EMassLookAtGazeMode)                       RandomGazeMode                                              OFFSET(get<T>, {0x25, 1, 0, 0})
	DMember(char)                                      RandomGazeYawVariation                                      OFFSET(get<char>, {0x26, 1, 0, 0})
	DMember(char)                                      RandomGazePitchVariation                                    OFFSET(get<char>, {0x27, 1, 0, 0})
	DMember(bool)                                      bRandomGazeEntities                                         OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassStateTreeInstanceFragment
/// Size: 0x000F (0x000001 - 0x000010)
class FMassStateTreeInstanceFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MassAIBehavior.MassStateTreeSharedFragment
/// Size: 0x0007 (0x000001 - 0x000008)
class FMassStateTreeSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UStateTree*)                         StateTree                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassStateTreeActivatedTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassStateTreeActivatedTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassAIBehavior.MassStateTreeInstanceDataItem
/// Size: 0x0018 (0x000000 - 0x000018)
class FMassStateTreeInstanceDataItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FStateTreeInstanceData)                    InstanceData                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Generation                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassUseSmartObjectTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMassUseSmartObjectTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectClaimHandle)                   ClaimedSlot                                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassUseSmartObjectTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FMassUseSmartObjectTask : public FMassStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/MassAIBehavior.MassZoneGraphAnnotationEvaluatorInstanceData
/// Size: 0x0004 (0x000000 - 0x000004)
class FMassZoneGraphAnnotationEvaluatorInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FZoneGraphTagMask)                         AnnotationTags                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassZoneGraphAnnotationEvaluator
/// Size: 0x0008 (0x000018 - 0x000020)
class FMassZoneGraphAnnotationEvaluator : public FMassStateTreeEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MassAIBehavior.MassZoneGraphAnnotationFragment
/// Size: 0x0003 (0x000001 - 0x000004)
class FMassZoneGraphAnnotationFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FZoneGraphTagMask)                         Tags                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassZoneGraphAnnotationVariableTickChunkFragment
/// Size: 0x0007 (0x000001 - 0x000008)
class FMassZoneGraphAnnotationVariableTickChunkFragment : public FMassChunkFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassAIBehavior.MassZoneGraphFindEscapeTargetInstanceData
/// Size: 0x0060 (0x000000 - 0x000060)
class FMassZoneGraphFindEscapeTargetInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMassZoneGraphTargetLocation)              EscapeTargetLocation                                        OFFSET(getStruct<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassZoneGraphTargetLocation
/// Size: 0x0060 (0x000000 - 0x000060)
class FMassZoneGraphTargetLocation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/MassAIBehavior.MassZoneGraphFindEscapeTarget
/// Size: 0x0008 (0x000020 - 0x000028)
class FMassZoneGraphFindEscapeTarget : public FMassStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FZoneGraphTag)                             DisturbanceAnnotationTag                                    OFFSET(getStruct<T>, {0x26, 1, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassZoneGraphFindSmartObjectTargetInstanceData
/// Size: 0x0080 (0x000000 - 0x000080)
class FMassZoneGraphFindSmartObjectTargetInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSmartObjectClaimHandle)                   ClaimedSlot                                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FMassZoneGraphTargetLocation)              SmartObjectLocation                                         OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassZoneGraphFindSmartObjectTarget
/// Size: 0x0008 (0x000020 - 0x000028)
class FMassZoneGraphFindSmartObjectTarget : public FMassStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MassAIBehavior.MassZoneGraphPathFollowTaskInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FMassZoneGraphPathFollowTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreeStructRef)                       TargetLocation                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMassMovementStyleRef)                     MovementStyle                                               OFFSET(getStruct<T>, {0x10, 20, 0, 0})
	DMember(float)                                     SpeedScale                                                  OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassZoneGraphPathFollowTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FMassZoneGraphPathFollowTask : public FMassStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/MassAIBehavior.MassZoneGraphStandTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMassZoneGraphStandTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.MassZoneGraphStandTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FMassZoneGraphStandTask : public FMassStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagFilterConditionInstanceData
/// Size: 0x0004 (0x000000 - 0x000004)
class FZoneGraphTagFilterConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FZoneGraphTagMask)                         Tags                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagFilterCondition
/// Size: 0x0010 (0x000020 - 0x000030)
class FZoneGraphTagFilterCondition : public FStateTreeConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FZoneGraphTagFilter)                       Filter                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagMaskConditionInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FZoneGraphTagMaskConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FZoneGraphTagMask)                         Left                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FZoneGraphTagMask)                         Right                                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagMaskCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FZoneGraphTagMaskCondition : public FStateTreeConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EZoneLaneTagMaskComparison)                Operator                                                    OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagConditionInstanceData
/// Size: 0x0002 (0x000000 - 0x000002)
class FZoneGraphTagConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FZoneGraphTag)                             Left                                                        OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FZoneGraphTag)                             Right                                                       OFFSET(getStruct<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/MassAIBehavior.ZoneGraphTagCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FZoneGraphTagCondition : public FStateTreeConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Enum /Script/MassAIBehavior.EMassLookAtMode
/// Size: 0x04
enum EMassLookAtMode : uint8_t
{
	EMassLookAtMode__LookForward                                                     = 0,
	EMassLookAtMode__LookAlongPath                                                   = 1,
	EMassLookAtMode__LookAtEntity                                                    = 2,
	EMassLookAtMode__EMassLookAtMode_MAX                                             = 3
};

/// Enum /Script/MassAIBehavior.EMassLookAtGazeMode
/// Size: 0x04
enum EMassLookAtGazeMode : uint8_t
{
	EMassLookAtGazeMode__None                                                        = 0,
	EMassLookAtGazeMode__Constant                                                    = 1,
	EMassLookAtGazeMode__Glance                                                      = 2,
	EMassLookAtGazeMode__EMassLookAtGazeMode_MAX                                     = 3
};

