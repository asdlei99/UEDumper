
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BlendStack.BlendStackAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendStackAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ForceBlendNextUpdate
	// void ForceBlendNextUpdate(FBlendStackAnimNodeReference& BlendStackNode);                                                 // [0x7a3ff60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNodePure
	// void ConvertToBlendStackNodePure(FAnimNodeReference& Node, FBlendStackAnimNodeReference& BlendStackNode, bool& Result);  // [0x7a3fd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNode
	// FBlendStackAnimNodeReference ConvertToBlendStackNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x7a3fc44] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.BlendTo
	// void BlendTo(FAnimUpdateContext& Context, FBlendStackAnimNodeReference& BlendStackNode, class UAnimationAsset* AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, FVector BlendParameters, float WantedPlayRate); // [0x7a3f414] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/BlendStack.BlendStackAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendStackAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/BlendStack.BlendStackAnimPlayer
/// Size: 0x0380 (0x000000 - 0x000380)
class FBlendStackAnimPlayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FAnimNode_SequencePlayer_Standalone)       SequencePlayerNode                                          OFFSET(getStruct<T>, {0x20, 144, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer_Standalone)     BlendSpacePlayerNode                                        OFFSET(getStruct<T>, {0xB0, 144, 0, 0})
	SMember(FAnimNode_Mirror_Standalone)               MirrorNode                                                  OFFSET(getStruct<T>, {0x140, 96, 0, 0})
};

/// Struct /Script/BlendStack.BlendStack_SampleGraphPoseLink
/// Size: 0x0030 (0x000000 - 0x000030)
class FBlendStack_SampleGraphPoseLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   RootNodeIndex                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FPoseLink)                                 Root                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStack_Standalone
/// Size: 0x0068 (0x000038 - 0x0000A0)
class FAnimNode_BlendStack_Standalone : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<FBlendStack_SampleGraphPoseLink>)   SampleGraphPoseLinks                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FBlendStackAnimPlayer>)             AnimPlayers                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bShouldFilterNotifies                                       OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(int32_t)                                   MaxActiveBlends                                             OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bStoreBlendedPose                                           OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     NotifyRecencyTimeOut                                        OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     MaxBlendInTimeToOverrideAnimation                           OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     PlayerDepthBlendInTimeMultiplier                            OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStack
/// Size: 0x0070 (0x0000A0 - 0x000110)
class FAnimNode_BlendStack : public FAnimNode_BlendStack_Standalone
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class UAnimationAsset*)                    AnimationAsset                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     AnimationTime                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bMirrored                                                   OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(float)                                     WantedPlayRate                                              OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     RootBoneBlendTime                                           OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MaxAnimationDeltaTime                                       OFFSET(get<float>, {0xBC, 4, 0, 0})
	CMember(class UBlendProfile*)                      BlendProfile                                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FVector)                                   BlendParameters                                             OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	CMember(class UMirrorDataTable*)                   MirrorDataTable                                             OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      bUseInertialBlend                                           OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(bool)                                      bResetOnBecomingRelevant                                    OFFSET(get<bool>, {0xF1, 1, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStackInput
/// Size: 0x0018 (0x000010 - 0x000028)
class FAnimNode_BlendStackInput : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   SampleIndex                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   BlendStackAllocationIndex                                   OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bOverridePlayRate                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
};

