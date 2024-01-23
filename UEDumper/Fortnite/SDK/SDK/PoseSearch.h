
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: BlendStack
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StructUtils

/// Enum /Script/PoseSearch.EPoseSearchMode
/// Size: 0x04
enum class EPoseSearchMode : uint32_t
{
	EPoseSearchMode__BruteForce                                                      = 0,
	EPoseSearchMode__PCAKDTree                                                       = 1,
	EPoseSearchMode__VPTree                                                          = 2,
	EPoseSearchMode__EPoseSearchMode_MAX                                             = 3
};

/// Enum /Script/PoseSearch.EPoseSearchMirrorOption
/// Size: 0x04
enum class EPoseSearchMirrorOption : uint8_t
{
	EPoseSearchMirrorOption__UnmirroredOnly                                          = 0,
	EPoseSearchMirrorOption__MirroredOnly                                            = 1,
	EPoseSearchMirrorOption__UnmirroredAndMirrored                                   = 2,
	EPoseSearchMirrorOption__EPoseSearchMirrorOption_MAX                             = 3
};

/// Enum /Script/PoseSearch.EComponentStrippingVector
/// Size: 0x04
enum class EComponentStrippingVector : uint8_t
{
	EComponentStrippingVector__None                                                  = 0,
	EComponentStrippingVector__StripXY                                               = 1,
	EComponentStrippingVector__StripZ                                                = 2,
	EComponentStrippingVector__EComponentStrippingVector_MAX                         = 3
};

/// Enum /Script/PoseSearch.EInputQueryPose
/// Size: 0x03
enum class EInputQueryPose : uint8_t
{
	EInputQueryPose__UseCharacterPose                                                = 0,
	EInputQueryPose__UseContinuingPose                                               = 1,
	EInputQueryPose__EInputQueryPose_MAX                                             = 2
};

/// Enum /Script/PoseSearch.EPermutationTimeType
/// Size: 0x04
enum class EPermutationTimeType : uint8_t
{
	EPermutationTimeType__UseSampleTime                                              = 0,
	EPermutationTimeType__UsePermutationTime                                         = 1,
	EPermutationTimeType__UseSampleToPermutationTime                                 = 2,
	EPermutationTimeType__EPermutationTimeType_MAX                                   = 3
};

/// Enum /Script/PoseSearch.EHeadingAxis
/// Size: 0x05
enum class EHeadingAxis : uint8_t
{
	EHeadingAxis__X                                                                  = 0,
	EHeadingAxis__Y                                                                  = 1,
	EHeadingAxis__Z                                                                  = 2,
	EHeadingAxis__Num                                                                = 3,
	EHeadingAxis__EHeadingAxis_MAX                                                   = 4
};

/// Enum /Script/PoseSearch.EPoseSearchBoneFlags
/// Size: 0x05
enum class EPoseSearchBoneFlags : uint8_t
{
	EPoseSearchBoneFlags__Velocity                                                   = 1,
	EPoseSearchBoneFlags__Position                                                   = 2,
	EPoseSearchBoneFlags__Rotation                                                   = 4,
	EPoseSearchBoneFlags__Phase                                                      = 8,
	EPoseSearchBoneFlags__EPoseSearchBoneFlags_MAX                                   = 9
};

/// Enum /Script/PoseSearch.EPoseSearchTrajectoryFlags
/// Size: 0x09
enum class EPoseSearchTrajectoryFlags : uint8_t
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
enum class EPoseSearchDataPreprocessor : uint8_t
{
	EPoseSearchDataPreprocessor__None                                                = 0,
	EPoseSearchDataPreprocessor__Normalize                                           = 1,
	EPoseSearchDataPreprocessor__NormalizeOnlyByDeviation                            = 2,
	EPoseSearchDataPreprocessor__EPoseSearchDataPreprocessor_MAX                     = 3
};

/// Enum /Script/PoseSearch.EPoseSearchInterruptMode
/// Size: 0x06
enum class EPoseSearchInterruptMode : uint8_t
{
	EPoseSearchInterruptMode__DoNotInterrupt                                         = 0,
	EPoseSearchInterruptMode__InterruptOnDatabaseChange                              = 1,
	EPoseSearchInterruptMode__InterruptOnDatabaseChangeAndInvalidateContinuingPose   = 2,
	EPoseSearchInterruptMode__ForceInterrupt                                         = 3,
	EPoseSearchInterruptMode__ForceInterruptAndInvalidateContinuingPose              = 4,
	EPoseSearchInterruptMode__EPoseSearchInterruptMode_MAX                           = 5
};

/// Class /Script/PoseSearch.MotionMatchingAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionMatchingAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetInterruptMode
	// void SetInterruptMode(FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode);  // [0x7c2ca2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabaseToSearch
	// void SetDatabaseToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, class UPoseSearchDatabase* Database, EPoseSearchInterruptMode InterruptMode); // [0x7c2c600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabasesToSearch
	// void SetDatabasesToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, TArray<UPoseSearchDatabase*>& Databases, EPoseSearchInterruptMode InterruptMode); // [0x7c2c850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ResetDatabasesToSearch
	// void ResetDatabasesToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode); // [0x7c2c484] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.GetMotionMatchingSearchResult
	// void GetMotionMatchingSearchResult(FMotionMatchingAnimNodeReference& MotionMatchingNode, FPoseSearchBlueprintResult& Result, bool& bIsResultValid); // [0x7c2c328] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNodePure
	// void ConvertToMotionMatchingNodePure(FAnimNodeReference& Node, FMotionMatchingAnimNodeReference& MotionMatchingNode, bool& Result); // [0x7c2c1b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNode
	// FMotionMatchingAnimNodeReference ConvertToMotionMatchingNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x7c2c084] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PoseSearch.PoseSearchDatabase
/// Size: 0x0148 (0x000030 - 0x000178)
class UPoseSearchDatabase : public UDataAsset
{ 
public:
	class UPoseSearchSchema*                           Schema;                                                     // 0x0030   (0x0008)  
	float                                              ContinuingPoseCostBias;                                     // 0x0038   (0x0004)  
	float                                              BaseCostBias;                                               // 0x003C   (0x0004)  
	float                                              LoopingCostBias;                                            // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FInstancedStruct>                           AnimationAssets;                                            // 0x0048   (0x0010)  
	TArray<FName>                                      Tags;                                                       // 0x0058   (0x0010)  
	EPoseSearchMode                                    PoseSearchMode;                                             // 0x0068   (0x0004)  
	int32_t                                            KDTreeQueryNumNeighbors;                                    // 0x006C   (0x0004)  
	int32_t                                            KDTreeQueryNumNeighborsWithDuplicates;                      // 0x0070   (0x0004)  
	bool                                               bPCAValuesPruningFromBlockTransitionPoses;                  // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_6[0x103];                                     // 0x0075   (0x0103)  MISSED
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel
/// Size: 0x0018 (0x000028 - 0x000040)
class UPoseSearchFeatureChannel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	int32_t                                            ChannelDataOffset;                                          // 0x0038   (0x0004)  
	int32_t                                            ChannelCardinality;                                         // 0x003C   (0x0004)  
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
/// Size: 0x0040 (0x000040 - 0x000080)
class UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel
{ 
public:
	FBoneReference                                     LeftThigh;                                                  // 0x0040   (0x000C)  
	FBoneReference                                     RightThigh;                                                 // 0x004C   (0x000C)  
	FBoneReference                                     LeftFoot;                                                   // 0x0058   (0x000C)  
	FBoneReference                                     RightFoot;                                                  // 0x0064   (0x000C)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	int8_t                                             LeftThighIdx;                                               // 0x0074   (0x0001)  
	int8_t                                             RightThighIdx;                                              // 0x0075   (0x0001)  
	int8_t                                             LeftFootIdx;                                                // 0x0076   (0x0001)  
	int8_t                                             RightFootIdx;                                               // 0x0077   (0x0001)  
	EInputQueryPose                                    InputQueryPose;                                             // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              AllowedTolerance;                                           // 0x007C   (0x0004)  
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_GroupBase
/// Size: 0x0000 (0x000040 - 0x000040)
class UPoseSearchFeatureChannel_GroupBase : public UPoseSearchFeatureChannel
{ 
public:
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Group
/// Size: 0x0010 (0x000040 - 0x000050)
class UPoseSearchFeatureChannel_Group : public UPoseSearchFeatureChannel_GroupBase
{ 
public:
	TArray<class UPoseSearchFeatureChannel*>           SubChannels;                                                // 0x0040   (0x0010)  
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Heading
/// Size: 0x0030 (0x000040 - 0x000070)
class UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel
{ 
public:
	FBoneReference                                     bone;                                                       // 0x0040   (0x000C)  
	FBoneReference                                     OriginBone;                                                 // 0x004C   (0x000C)  
	int32_t                                            SamplingAttributeId;                                        // 0x0058   (0x0004)  
	float                                              SampleTimeOffset;                                           // 0x005C   (0x0004)  
	float                                              OriginTimeOffset;                                           // 0x0060   (0x0004)  
	EHeadingAxis                                       HeadingAxis;                                                // 0x0064   (0x0001)  
	int8_t                                             SchemaBoneIdx;                                              // 0x0065   (0x0001)  
	int8_t                                             SchemaOriginBoneIdx;                                        // 0x0066   (0x0001)  
	EInputQueryPose                                    InputQueryPose;                                             // 0x0067   (0x0001)  
	EComponentStrippingVector                          ComponentStripping;                                         // 0x0068   (0x0001)  
	EPermutationTimeType                               PermutationTimeType;                                        // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x006A   (0x0006)  MISSED


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Heading.BP_GetWorldRotation
	// FQuat BP_GetWorldRotation(class UAnimInstance* AnimInstance);                                                         // [0x2177018] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Padding
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_Padding : public UPoseSearchFeatureChannel
{ 
public:
	int32_t                                            PaddingSize;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_PermutationTime
/// Size: 0x0000 (0x000040 - 0x000040)
class UPoseSearchFeatureChannel_PermutationTime : public UPoseSearchFeatureChannel
{ 
public:
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Phase
/// Size: 0x0010 (0x000040 - 0x000050)
class UPoseSearchFeatureChannel_Phase : public UPoseSearchFeatureChannel
{ 
public:
	FBoneReference                                     bone;                                                       // 0x0040   (0x000C)  
	int8_t                                             SchemaBoneIdx;                                              // 0x004C   (0x0001)  
	EInputQueryPose                                    InputQueryPose;                                             // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
};

/// Struct /Script/PoseSearch.PoseSearchBone
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPoseSearchBone
{ 
	FBoneReference                                     Reference;                                                  // 0x0000   (0x000C)  
	int32_t                                            Flags;                                                      // 0x000C   (0x0004)  
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Pose
/// Size: 0x0038 (0x000040 - 0x000078)
class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel_GroupBase
{ 
public:
	TArray<FPoseSearchBone>                            SampledBones;                                               // 0x0040   (0x0010)  
	TArray<int8_t>                                     SchemaBoneIdx;                                              // 0x0050   (0x0010)  
	EInputQueryPose                                    InputQueryPose;                                             // 0x0060   (0x0001)  
	bool                                               bUseCharacterSpaceVelocities;                               // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	TArray<class UPoseSearchFeatureChannel*>           SubChannels;                                                // 0x0068   (0x0010)  
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Position
/// Size: 0x0030 (0x000040 - 0x000070)
class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel
{ 
public:
	FBoneReference                                     bone;                                                       // 0x0040   (0x000C)  
	FBoneReference                                     OriginBone;                                                 // 0x004C   (0x000C)  
	int32_t                                            SamplingAttributeId;                                        // 0x0058   (0x0004)  
	float                                              SampleTimeOffset;                                           // 0x005C   (0x0004)  
	float                                              OriginTimeOffset;                                           // 0x0060   (0x0004)  
	int8_t                                             SchemaBoneIdx;                                              // 0x0064   (0x0001)  
	int8_t                                             SchemaOriginBoneIdx;                                        // 0x0065   (0x0001)  
	EInputQueryPose                                    InputQueryPose;                                             // 0x0066   (0x0001)  
	EComponentStrippingVector                          ComponentStripping;                                         // 0x0067   (0x0001)  
	EPermutationTimeType                               PermutationTimeType;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Position.BP_GetWorldPosition
	// FVector BP_GetWorldPosition(class UAnimInstance* AnimInstance);                                                       // [0x2177018] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_SamplingTime
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_SamplingTime : public UPoseSearchFeatureChannel
{ 
public:
	float                                              Weight;                                                     // 0x0040   (0x0004)  
	float                                              TimeToMatch;                                                // 0x0044   (0x0004)  
};

/// Struct /Script/PoseSearch.PoseSearchTrajectorySample
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPoseSearchTrajectorySample
{ 
	float                                              Offset;                                                     // 0x0000   (0x0004)  
	int32_t                                            Flags;                                                      // 0x0004   (0x0004)  
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Trajectory
/// Size: 0x0020 (0x000040 - 0x000060)
class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel_GroupBase
{ 
public:
	TArray<FPoseSearchTrajectorySample>                Samples;                                                    // 0x0040   (0x0010)  
	TArray<class UPoseSearchFeatureChannel*>           SubChannels;                                                // 0x0050   (0x0010)  
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Velocity
/// Size: 0x0030 (0x000040 - 0x000070)
class UPoseSearchFeatureChannel_Velocity : public UPoseSearchFeatureChannel
{ 
public:
	FBoneReference                                     bone;                                                       // 0x0040   (0x000C)  
	FBoneReference                                     OriginBone;                                                 // 0x004C   (0x000C)  
	int32_t                                            SamplingAttributeId;                                        // 0x0058   (0x0004)  
	float                                              SampleTimeOffset;                                           // 0x005C   (0x0004)  
	float                                              OriginTimeOffset;                                           // 0x0060   (0x0004)  
	int8_t                                             SchemaBoneIdx;                                              // 0x0064   (0x0001)  
	int8_t                                             SchemaOriginBoneIdx;                                        // 0x0065   (0x0001)  
	EInputQueryPose                                    InputQueryPose;                                             // 0x0066   (0x0001)  
	bool                                               bUseCharacterSpaceVelocities;                               // 0x0067   (0x0001)  
	bool                                               bNormalize;                                                 // 0x0068   (0x0001)  
	EComponentStrippingVector                          ComponentStripping;                                         // 0x0069   (0x0001)  
	EPermutationTimeType                               PermutationTimeType;                                        // 0x006A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x006B   (0x0005)  MISSED


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Velocity.BP_GetWorldVelocity
	// FVector BP_GetWorldVelocity(class UAnimInstance* AnimInstance);                                                       // [0x2177018] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchNormalizationSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UPoseSearchNormalizationSet : public UDataAsset
{ 
public:
	TArray<class UPoseSearchDatabase*>                 Databases;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/PoseSearch.PoseSearchSchema
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UPoseSearchSchema : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class USkeleton*                                   Skeleton;                                                   // 0x0038   (0x0008)  
	int32_t                                            SampleRate;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<class UPoseSearchFeatureChannel*>           Channels;                                                   // 0x0048   (0x0010)  
	TArray<class UPoseSearchFeatureChannel*>           FinalizedChannels;                                          // 0x0058   (0x0010)  
	class UMirrorDataTable*                            MirrorDataTable;                                            // 0x0068   (0x0008)  
	int32_t                                            SchemaCardinality;                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FBoneReference>                             BoneReferences;                                             // 0x0078   (0x0010)  
	TArray<uint16_t>                                   BoneIndicesWithParents;                                     // 0x0088   (0x0010)  
	bool                                               bAddDataPadding;                                            // 0x0098   (0x0001)  
	bool                                               bInjectAdditionalDebugChannels;                             // 0x0099   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x009A   (0x0006)  MISSED
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState
{ 
public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase
{ 
public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBlockTransition
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase
{ 
public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchModifyCost
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase
{ 
public:
	float                                              CostAddend;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase
{ 
public:
	float                                              CostAddend;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchSamplingAttribute
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchSamplingAttribute : public UAnimNotifyState_PoseSearchBase
{ 
public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBranchIn
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchBranchIn : public UAnimNotifyState_PoseSearchBase
{ 
public:
	class UPoseSearchDatabase*                         Database;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/PoseSearch.PoseSearchLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPoseSearchLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PoseSearch.PoseSearchLibrary.MotionMatch
	// void MotionMatch(class UAnimInstance* AnimInstance, class UPoseSearchDatabase* Database, FName PoseHistoryName, FPoseSearchBlueprintResult& Result, class UAnimationAsset* FutureAnimation, float FutureAnimationStartTime, float TimeToFutureAnimationStart, int32_t DebugSessionUniqueIdentifier); // [0x7c349d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PoseSearch.MotionMatchingAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FMotionMatchingAnimNodeReference : FAnimNodeReference
{ 
};

/// Struct /Script/PoseSearch.PoseSearchCost
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPoseSearchCost
{ 
	float                                              TotalCost;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimationAssetBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPoseSearchDatabaseAnimationAssetBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseSequence
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPoseSearchDatabaseSequence : FPoseSearchDatabaseAnimationAssetBase
{ 
	class UAnimSequence*                               Sequence;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseBlendSpace
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPoseSearchDatabaseBlendSpace : FPoseSearchDatabaseAnimationAssetBase
{ 
	class UBlendSpace*                                 BlendSpace;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimComposite
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPoseSearchDatabaseAnimComposite : FPoseSearchDatabaseAnimationAssetBase
{ 
	class UAnimComposite*                              AnimComposite;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimMontage
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPoseSearchDatabaseAnimMontage : FPoseSearchDatabaseAnimationAssetBase
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/PoseSearch.PoseSearchBlueprintResult
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPoseSearchBlueprintResult
{ 
	class UAnimationAsset*                             SelectedAnimation;                                          // 0x0000   (0x0008)  
	float                                              SelectedTime;                                               // 0x0008   (0x0004)  
	float                                              WantedPlayRate;                                             // 0x000C   (0x0004)  
	bool                                               bLoop;                                                      // 0x0010   (0x0001)  
	bool                                               bIsMirrored;                                                // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	FVector                                            BlendParameters;                                            // 0x0018   (0x0018)  
	SDK_UNDEFINED(8,11185) /* TWeakObjectPtr<UPoseSearchDatabase*> */ __um(SelectedDatabase);                      // 0x0030   (0x0008)  
	float                                              SearchCost;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/PoseSearch.PoseSearchTrajectoryData
/// Size: 0x0128 (0x000000 - 0x000128)
struct FPoseSearchTrajectoryData
{ 
	float                                              RotateTowardsMovementSpeed;                                 // 0x0000   (0x0004)  
	float                                              MaxControllerYawRate;                                       // 0x0004   (0x0004)  
	float                                              BendVelocityTowardsAcceleration;                            // 0x0008   (0x0004)  
	bool                                               bUseSpeedRemappingCurve;                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRuntimeFloatCurve                                 SpeedRemappingCurve;                                        // 0x0010   (0x0088)  
	bool                                               bUseAccelerationRemappingCurve;                             // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FRuntimeFloatCurve                                 AccelerationRemappingCurve;                                 // 0x00A0   (0x0088)  
};

/// Struct /Script/PoseSearch.PoseSearchQueryTrajectorySample
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPoseSearchQueryTrajectorySample
{ 
	FQuat                                              Facing;                                                     // 0x0000   (0x0020)  
	FVector                                            Position;                                                   // 0x0020   (0x0018)  
	float                                              AccumulatedSeconds;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/PoseSearch.PoseSearchQueryTrajectory
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPoseSearchQueryTrajectory
{ 
	TArray<FPoseSearchQueryTrajectorySample>           Samples;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/PoseSearch.AnimNode_MotionMatching
/// Size: 0x00E8 (0x0000A0 - 0x000188)
struct FAnimNode_MotionMatching : FAnimNode_BlendStack_Standalone
{ 
	class UPoseSearchDatabase*                         Database;                                                   // 0x00A0   (0x0008)  
	float                                              BlendTime;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UBlendProfile*                               BlendProfile;                                               // 0x00B0   (0x0008)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	FFloatInterval                                     PoseJumpThresholdTime;                                      // 0x00BC   (0x0008)  
	float                                              PoseReselectHistory;                                        // 0x00C4   (0x0004)  
	float                                              SearchThrottleTime;                                         // 0x00C8   (0x0004)  
	FFloatInterval                                     PlayRate;                                                   // 0x00CC   (0x0008)  
	bool                                               bUseInertialBlend;                                          // 0x00D4   (0x0001)  
	bool                                               bResetOnBecomingRelevant;                                   // 0x00D5   (0x0001)  
	bool                                               bShouldSearch;                                              // 0x00D6   (0x0001)  
	bool                                               bShouldUseCachedChannelData;                                // 0x00D7   (0x0001)  
	float                                              YawFromAnimationTrajectoryBlendTime;                        // 0x00D8   (0x0004)  
	float                                              YawFromAnimationBlendRate;                                  // 0x00DC   (0x0004)  
	unsigned char                                      UnknownData02_5[0x90];                                      // 0x00E0   (0x0090)  MISSED
	TArray<class UPoseSearchDatabase*>                 DatabasesToSearch;                                          // 0x0170   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0180   (0x0008)  MISSED
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
/// Size: 0x0218 (0x000010 - 0x000228)
struct FAnimNode_PoseSearchHistoryCollector_Base : FAnimNode_Base
{ 
	int32_t                                            PoseCount;                                                  // 0x0010   (0x0004)  
	float                                              SamplingInterval;                                           // 0x0014   (0x0004)  
	TArray<FBoneReference>                             CollectedBones;                                             // 0x0018   (0x0010)  
	bool                                               bInitializeWithRefPose;                                     // 0x0028   (0x0001)  
	bool                                               bResetOnBecomingRelevant;                                   // 0x0029   (0x0001)  
	bool                                               bStoreScales;                                               // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x15];                                      // 0x002B   (0x0015)  MISSED
	bool                                               bGenerateTrajectory;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FPoseSearchQueryTrajectory                         Trajectory;                                                 // 0x0048   (0x0010)  
	float                                              TrajectorySpeedMultiplier;                                  // 0x0058   (0x0004)  
	int32_t                                            TrajectoryHistoryCount;                                     // 0x005C   (0x0004)  
	int32_t                                            TrajectoryPredictionCount;                                  // 0x0060   (0x0004)  
	float                                              PredictionSamplingInterval;                                 // 0x0064   (0x0004)  
	FPoseSearchTrajectoryData                          TrajectoryData;                                             // 0x0068   (0x0128)  
	unsigned char                                      UnknownData02_6[0x98];                                      // 0x0190   (0x0098)  MISSED
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector
/// Size: 0x0010 (0x000228 - 0x000238)
struct FAnimNode_PoseSearchHistoryCollector : FAnimNode_PoseSearchHistoryCollector_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0228   (0x0010)  
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
/// Size: 0x0010 (0x000228 - 0x000238)
struct FAnimNode_PoseSearchComponentSpaceHistoryCollector : FAnimNode_PoseSearchHistoryCollector_Base
{ 
	FComponentSpacePoseLink                            Source;                                                     // 0x0228   (0x0010)  
};

