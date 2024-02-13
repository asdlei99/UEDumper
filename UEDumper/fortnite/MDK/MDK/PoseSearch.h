
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BlendStack
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StructUtils

/// Class /Script/PoseSearch.MotionMatchingAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionMatchingAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetInterruptMode
	// void SetInterruptMode(FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode);     // [0x7c6110c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabaseToSearch
	// void SetDatabaseToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, class UPoseSearchDatabase* Database, EPoseSearchInterruptMode InterruptMode); // [0x7c60ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabasesToSearch
	// void SetDatabasesToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, TArray<UPoseSearchDatabase*>& Databases, EPoseSearchInterruptMode InterruptMode); // [0x7c60f1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ResetDatabasesToSearch
	// void ResetDatabasesToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode); // [0x7c60b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.GetMotionMatchingSearchResult
	// void GetMotionMatchingSearchResult(FMotionMatchingAnimNodeReference& MotionMatchingNode, FPoseSearchBlueprintResult& Result, bool& bIsResultValid); // [0x7c60940] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNodePure
	// void ConvertToMotionMatchingNodePure(FAnimNodeReference& Node, FMotionMatchingAnimNodeReference& MotionMatchingNode, bool& Result); // [0x7c60750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNode
	// FMotionMatchingAnimNodeReference ConvertToMotionMatchingNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x7c60624] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PoseSearch.PoseSearchDatabase
/// Size: 0x0148 (0x000030 - 0x000178)
class UPoseSearchDatabase : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(class UPoseSearchSchema*)                  Schema                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     ContinuingPoseCostBias                                      OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BaseCostBias                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     LoopingCostBias                                             OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(TArray<FInstancedStruct>)                  AnimationAssets                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(EPoseSearchMode)                           PoseSearchMode                                              OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   KDTreeQueryNumNeighbors                                     OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   KDTreeQueryNumNeighborsWithDuplicates                       OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(bool)                                      bPCAValuesPruningFromBlockTransitionPoses                   OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel
/// Size: 0x0018 (0x000028 - 0x000040)
class UPoseSearchFeatureChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   ChannelDataOffset                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ChannelCardinality                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
/// Size: 0x0040 (0x000040 - 0x000080)
class UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FBoneReference)                            LeftThigh                                                   OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FBoneReference)                            RightThigh                                                  OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FBoneReference)                            LeftFoot                                                    OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FBoneReference)                            RightFoot                                                   OFFSET(getStruct<T>, {0x64, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int8_t)                                    LeftThighIdx                                                OFFSET(get<int8_t>, {0x74, 1, 0, 0})
	DMember(int8_t)                                    RightThighIdx                                               OFFSET(get<int8_t>, {0x75, 1, 0, 0})
	DMember(int8_t)                                    LeftFootIdx                                                 OFFSET(get<int8_t>, {0x76, 1, 0, 0})
	DMember(int8_t)                                    RightFootIdx                                                OFFSET(get<int8_t>, {0x77, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(float)                                     AllowedTolerance                                            OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_GroupBase
/// Size: 0x0000 (0x000040 - 0x000040)
class UPoseSearchFeatureChannel_GroupBase : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Group
/// Size: 0x0010 (0x000040 - 0x000050)
class UPoseSearchFeatureChannel_Group : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UPoseSearchFeatureChannel*>)  SubChannels                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Heading
/// Size: 0x0030 (0x000040 - 0x000070)
class UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FBoneReference)                            OriginBone                                                  OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	DMember(int32_t)                                   SamplingAttributeId                                         OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     OriginTimeOffset                                            OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(EHeadingAxis)                              HeadingAxis                                                 OFFSET(get<T>, {0x64, 1, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x65, 1, 0, 0})
	DMember(int8_t)                                    SchemaOriginBoneIdx                                         OFFSET(get<int8_t>, {0x66, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x67, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x68, 1, 0, 0})
	CMember(EPermutationTimeType)                      PermutationTimeType                                         OFFSET(get<T>, {0x69, 1, 0, 0})


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Heading.BP_GetWorldRotation
	// FQuat BP_GetWorldRotation(class UAnimInstance* AnimInstance);                                                            // [0x130d900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Padding
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_Padding : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   PaddingSize                                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_PermutationTime
/// Size: 0x0000 (0x000040 - 0x000040)
class UPoseSearchFeatureChannel_PermutationTime : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Phase
/// Size: 0x0010 (0x000040 - 0x000050)
class UPoseSearchFeatureChannel_Phase : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x4C, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x4D, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Pose
/// Size: 0x0038 (0x000040 - 0x000078)
class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FPoseSearchBone>)                   SampledBones                                                OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<int8_t>)                            SchemaBoneIdx                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(bool)                                      bUseCharacterSpaceVelocities                                OFFSET(get<bool>, {0x61, 1, 0, 0})
	CMember(TArray<class UPoseSearchFeatureChannel*>)  SubChannels                                                 OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Position
/// Size: 0x0030 (0x000040 - 0x000070)
class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FBoneReference)                            OriginBone                                                  OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	DMember(int32_t)                                   SamplingAttributeId                                         OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     OriginTimeOffset                                            OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x64, 1, 0, 0})
	DMember(int8_t)                                    SchemaOriginBoneIdx                                         OFFSET(get<int8_t>, {0x65, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x66, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x67, 1, 0, 0})
	CMember(EPermutationTimeType)                      PermutationTimeType                                         OFFSET(get<T>, {0x68, 1, 0, 0})


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Position.BP_GetWorldPosition
	// FVector BP_GetWorldPosition(class UAnimInstance* AnimInstance);                                                          // [0x130d900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_SamplingTime
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_SamplingTime : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     TimeToMatch                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Trajectory
/// Size: 0x0020 (0x000040 - 0x000060)
class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FPoseSearchTrajectorySample>)       Samples                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UPoseSearchFeatureChannel*>)  SubChannels                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Velocity
/// Size: 0x0030 (0x000040 - 0x000070)
class UPoseSearchFeatureChannel_Velocity : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FBoneReference)                            OriginBone                                                  OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	DMember(int32_t)                                   SamplingAttributeId                                         OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     OriginTimeOffset                                            OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x64, 1, 0, 0})
	DMember(int8_t)                                    SchemaOriginBoneIdx                                         OFFSET(get<int8_t>, {0x65, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x66, 1, 0, 0})
	DMember(bool)                                      bUseCharacterSpaceVelocities                                OFFSET(get<bool>, {0x67, 1, 0, 0})
	DMember(bool)                                      bNormalize                                                  OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x69, 1, 0, 0})
	CMember(EPermutationTimeType)                      PermutationTimeType                                         OFFSET(get<T>, {0x6A, 1, 0, 0})


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Velocity.BP_GetWorldVelocity
	// FVector BP_GetWorldVelocity(class UAnimInstance* AnimInstance);                                                          // [0x130d900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchNormalizationSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UPoseSearchNormalizationSet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UPoseSearchDatabase*>)        Databases                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchSchema
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UPoseSearchSchema : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<class UPoseSearchFeatureChannel*>)  Channels                                                    OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UPoseSearchFeatureChannel*>)  FinalizedChannels                                           OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(class UMirrorDataTable*)                   MirrorDataTable                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(int32_t)                                   SchemaCardinality                                           OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    BoneReferences                                              OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<uint16_t>)                          BoneIndicesWithParents                                      OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bAddDataPadding                                             OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bInjectAdditionalDebugChannels                              OFFSET(get<bool>, {0x99, 1, 0, 0})
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBlockTransition
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchModifyCost
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     CostAddend                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     CostAddend                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchSamplingAttribute
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchSamplingAttribute : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBranchIn
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchBranchIn : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UPoseSearchDatabase*)                Database                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPoseSearchLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PoseSearch.PoseSearchLibrary.MotionMatch
	// void MotionMatch(class UAnimInstance* AnimInstance, class UPoseSearchDatabase* Database, FName PoseHistoryName, FPoseSearchBlueprintResult& Result, class UAnimationAsset* FutureAnimation, float FutureAnimationStartTime, float TimeToFutureAnimationStart, int32_t DebugSessionUniqueIdentifier); // [0x7c68938] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PoseSearch.MotionMatchingAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FMotionMatchingAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PoseSearch.PoseSearchCost
/// Size: 0x0004 (0x000000 - 0x000004)
class FPoseSearchCost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     TotalCost                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimationAssetBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FPoseSearchDatabaseAnimationAssetBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseSequence
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimSequence*)                      Sequence                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseBlendSpace
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseBlendSpace : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UBlendSpace*)                        BlendSpace                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimComposite
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseAnimComposite : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimComposite*)                     AnimComposite                                               OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimMontage
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseAnimMontage : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimMontage*)                       AnimMontage                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchBone
/// Size: 0x0010 (0x000000 - 0x000010)
class FPoseSearchBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FBoneReference)                            Reference                                                   OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   Flags                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchTrajectorySample
/// Size: 0x0008 (0x000000 - 0x000008)
class FPoseSearchTrajectorySample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Flags                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchBlueprintResult
/// Size: 0x0040 (0x000000 - 0x000040)
class FPoseSearchBlueprintResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UAnimationAsset*)                    SelectedAnimation                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     SelectedTime                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WantedPlayRate                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bIsMirrored                                                 OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FVector)                                   BlendParameters                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(TWeakObjectPtr<UPoseSearchDatabase*>)      SelectedDatabase                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     SearchCost                                                  OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchTrajectoryData
/// Size: 0x0128 (0x000000 - 0x000128)
class FPoseSearchTrajectoryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(float)                                     RotateTowardsMovementSpeed                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxControllerYawRate                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BendVelocityTowardsAcceleration                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseSpeedRemappingCurve                                     OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        SpeedRemappingCurve                                         OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	DMember(bool)                                      bUseAccelerationRemappingCurve                              OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        AccelerationRemappingCurve                                  OFFSET(getStruct<T>, {0xA0, 136, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchQueryTrajectorySample
/// Size: 0x0040 (0x000000 - 0x000040)
class FPoseSearchQueryTrajectorySample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Facing                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     AccumulatedSeconds                                          OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchQueryTrajectory
/// Size: 0x0010 (0x000000 - 0x000010)
class FPoseSearchQueryTrajectory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPoseSearchQueryTrajectorySample>)  Samples                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_MotionMatching
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class FAnimNode_MotionMatching : public FAnimNode_BlendStack_Standalone
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(class UPoseSearchDatabase*)                Database                                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(class UBlendProfile*)                      BlendProfile                                                OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0xB8, 1, 0, 0})
	SMember(FFloatInterval)                            PoseJumpThresholdTime                                       OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	DMember(float)                                     PoseReselectHistory                                         OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     SearchThrottleTime                                          OFFSET(get<float>, {0xC8, 4, 0, 0})
	SMember(FFloatInterval)                            PlayRate                                                    OFFSET(getStruct<T>, {0xCC, 8, 0, 0})
	DMember(bool)                                      bUseInertialBlend                                           OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bResetOnBecomingRelevant                                    OFFSET(get<bool>, {0xD5, 1, 0, 0})
	DMember(bool)                                      bShouldSearch                                               OFFSET(get<bool>, {0xD6, 1, 0, 0})
	DMember(bool)                                      bShouldUseCachedChannelData                                 OFFSET(get<bool>, {0xD7, 1, 0, 0})
	DMember(float)                                     YawFromAnimationTrajectoryBlendTime                         OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     YawFromAnimationBlendRate                                   OFFSET(get<float>, {0xDC, 4, 0, 0})
	CMember(TArray<class UPoseSearchDatabase*>)        DatabasesToSearch                                           OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
/// Size: 0x0218 (0x000010 - 0x000228)
class FAnimNode_PoseSearchHistoryCollector_Base : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	DMember(int32_t)                                   PoseCount                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     SamplingInterval                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    CollectedBones                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bInitializeWithRefPose                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bResetOnBecomingRelevant                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bStoreScales                                                OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bGenerateTrajectory                                         OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(float)                                     TrajectorySpeedMultiplier                                   OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   TrajectoryHistoryCount                                      OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   TrajectoryPredictionCount                                   OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     PredictionSamplingInterval                                  OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FPoseSearchTrajectoryData)                 TrajectoryData                                              OFFSET(getStruct<T>, {0x68, 296, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector
/// Size: 0x0010 (0x000228 - 0x000238)
class FAnimNode_PoseSearchHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x228, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
/// Size: 0x0010 (0x000228 - 0x000238)
class FAnimNode_PoseSearchComponentSpaceHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FComponentSpacePoseLink)                   Source                                                      OFFSET(getStruct<T>, {0x228, 16, 0, 0})
};

/// Enum /Script/PoseSearch.EPoseSearchMode
/// Size: 0x04
enum EPoseSearchMode : uint32_t
{
	EPoseSearchMode__BruteForce                                                      = 0,
	EPoseSearchMode__PCAKDTree                                                       = 1,
	EPoseSearchMode__VPTree                                                          = 2,
	EPoseSearchMode__EPoseSearchMode_MAX                                             = 3
};

/// Enum /Script/PoseSearch.EPoseSearchMirrorOption
/// Size: 0x04
enum EPoseSearchMirrorOption : uint8_t
{
	EPoseSearchMirrorOption__UnmirroredOnly                                          = 0,
	EPoseSearchMirrorOption__MirroredOnly                                            = 1,
	EPoseSearchMirrorOption__UnmirroredAndMirrored                                   = 2,
	EPoseSearchMirrorOption__EPoseSearchMirrorOption_MAX                             = 3
};

/// Enum /Script/PoseSearch.EComponentStrippingVector
/// Size: 0x04
enum EComponentStrippingVector : uint8_t
{
	EComponentStrippingVector__None                                                  = 0,
	EComponentStrippingVector__StripXY                                               = 1,
	EComponentStrippingVector__StripZ                                                = 2,
	EComponentStrippingVector__EComponentStrippingVector_MAX                         = 3
};

/// Enum /Script/PoseSearch.EInputQueryPose
/// Size: 0x03
enum EInputQueryPose : uint8_t
{
	EInputQueryPose__UseCharacterPose                                                = 0,
	EInputQueryPose__UseContinuingPose                                               = 1,
	EInputQueryPose__EInputQueryPose_MAX                                             = 2
};

/// Enum /Script/PoseSearch.EPermutationTimeType
/// Size: 0x04
enum EPermutationTimeType : uint8_t
{
	EPermutationTimeType__UseSampleTime                                              = 0,
	EPermutationTimeType__UsePermutationTime                                         = 1,
	EPermutationTimeType__UseSampleToPermutationTime                                 = 2,
	EPermutationTimeType__EPermutationTimeType_MAX                                   = 3
};

/// Enum /Script/PoseSearch.EHeadingAxis
/// Size: 0x05
enum EHeadingAxis : uint8_t
{
	EHeadingAxis__X                                                                  = 0,
	EHeadingAxis__Y                                                                  = 1,
	EHeadingAxis__Z                                                                  = 2,
	EHeadingAxis__Num                                                                = 3,
	EHeadingAxis__EHeadingAxis_MAX                                                   = 4
};

/// Enum /Script/PoseSearch.EPoseSearchBoneFlags
/// Size: 0x05
enum EPoseSearchBoneFlags : uint8_t
{
	EPoseSearchBoneFlags__Velocity                                                   = 1,
	EPoseSearchBoneFlags__Position                                                   = 2,
	EPoseSearchBoneFlags__Rotation                                                   = 4,
	EPoseSearchBoneFlags__Phase                                                      = 8,
	EPoseSearchBoneFlags__EPoseSearchBoneFlags_MAX                                   = 9
};

/// Enum /Script/PoseSearch.EPoseSearchTrajectoryFlags
/// Size: 0x09
enum EPoseSearchTrajectoryFlags : uint8_t
{
	EPoseSearchTrajectoryFlags__Velocity                                             = 1,
	EPoseSearchTrajectoryFlags__Position                                             = 2,
	EPoseSearchTrajectoryFlags__VelocityDirection                                    = 4,
	EPoseSearchTrajectoryFlags__FacingDirection                                      = 8,
	EPoseSearchTrajectoryFlags__VelocityXY                                           = 16,
	EPoseSearchTrajectoryFlags__PositionXY                                           = 32,
	EPoseSearchTrajectoryFlags__VelocityDirectionXY                                  = 64,
	EPoseSearchTrajectoryFlags__FacingDirectionXY                                    = 128,
	EPoseSearchTrajectoryFlags__EPoseSearchTrajectoryFlags_MAX                       = 129
};

/// Enum /Script/PoseSearch.EPoseSearchDataPreprocessor
/// Size: 0x04
enum EPoseSearchDataPreprocessor : uint8_t
{
	EPoseSearchDataPreprocessor__None                                                = 0,
	EPoseSearchDataPreprocessor__Normalize                                           = 1,
	EPoseSearchDataPreprocessor__NormalizeOnlyByDeviation                            = 2,
	EPoseSearchDataPreprocessor__EPoseSearchDataPreprocessor_MAX                     = 3
};

/// Enum /Script/PoseSearch.EPoseSearchInterruptMode
/// Size: 0x06
enum EPoseSearchInterruptMode : uint8_t
{
	EPoseSearchInterruptMode__DoNotInterrupt                                         = 0,
	EPoseSearchInterruptMode__InterruptOnDatabaseChange                              = 1,
	EPoseSearchInterruptMode__InterruptOnDatabaseChangeAndInvalidateContinuingPose   = 2,
	EPoseSearchInterruptMode__ForceInterrupt                                         = 3,
	EPoseSearchInterruptMode__ForceInterruptAndInvalidateContinuingPose              = 4,
	EPoseSearchInterruptMode__EPoseSearchInterruptMode_MAX                           = 5
};

