
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BlendStack.BlendStackAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendStackAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ForceBlendNextUpdate
	// void ForceBlendNextUpdate(FBlendStackAnimNodeReference& BlendStackNode);                                              // [0x7c2b5d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNodePure
	// void ConvertToBlendStackNodePure(FAnimNodeReference& Node, FBlendStackAnimNodeReference& BlendStackNode, bool& Result); // [0x7c2b458] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNode
	// FBlendStackAnimNodeReference ConvertToBlendStackNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x7c2b32c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.BlendTo
	// void BlendTo(FAnimUpdateContext& Context, FBlendStackAnimNodeReference& BlendStackNode, class UAnimationAsset* AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, FVector BlendParameters, float WantedPlayRate); // [0x7c2ab8c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/BlendStack.BlendStackAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FBlendStackAnimNodeReference : FAnimNodeReference
{ 
};

/// Struct /Script/BlendStack.BlendStackAnimPlayer
/// Size: 0x0380 (0x000000 - 0x000380)
struct FBlendStackAnimPlayer
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	FAnimNode_SequencePlayer_Standalone                SequencePlayerNode;                                         // 0x0020   (0x0090)  
	FAnimNode_BlendSpacePlayer_Standalone              BlendSpacePlayerNode;                                       // 0x00B0   (0x0090)  
	FAnimNode_Mirror_Standalone                        MirrorNode;                                                 // 0x0140   (0x0060)  
	unsigned char                                      UnknownData01_6[0x1E0];                                     // 0x01A0   (0x01E0)  MISSED
};

/// Struct /Script/BlendStack.BlendStack_SampleGraphPoseLink
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBlendStack_SampleGraphPoseLink
{ 
	int32_t                                            RootNodeIndex;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPoseLink                                          Root;                                                       // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/BlendStack.AnimNode_BlendStack_Standalone
/// Size: 0x0068 (0x000038 - 0x0000A0)
struct FAnimNode_BlendStack_Standalone : FAnimNode_AssetPlayerBase
{ 
	TArray<FBlendStack_SampleGraphPoseLink>            SampleGraphPoseLinks;                                       // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	TArray<FBlendStackAnimPlayer>                      AnimPlayers;                                                // 0x0050   (0x0010)  
	bool                                               bShouldFilterNotifies;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            MaxActiveBlends;                                            // 0x0064   (0x0004)  
	bool                                               bStoreBlendedPose;                                          // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_5[0x27];                                      // 0x0069   (0x0027)  MISSED
	float                                              NotifyRecencyTimeOut;                                       // 0x0090   (0x0004)  
	float                                              MaxBlendInTimeToOverrideAnimation;                          // 0x0094   (0x0004)  
	float                                              PlayerDepthBlendInTimeMultiplier;                           // 0x0098   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/BlendStack.AnimNode_BlendStack
/// Size: 0x0070 (0x0000A0 - 0x000110)
struct FAnimNode_BlendStack : FAnimNode_BlendStack_Standalone
{ 
	class UAnimationAsset*                             AnimationAsset;                                             // 0x00A0   (0x0008)  
	float                                              AnimationTime;                                              // 0x00A8   (0x0004)  
	bool                                               bLoop;                                                      // 0x00AC   (0x0001)  
	bool                                               bMirrored;                                                  // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AE   (0x0002)  MISSED
	float                                              WantedPlayRate;                                             // 0x00B0   (0x0004)  
	float                                              BlendTime;                                                  // 0x00B4   (0x0004)  
	float                                              RootBoneBlendTime;                                          // 0x00B8   (0x0004)  
	float                                              MaxAnimationDeltaTime;                                      // 0x00BC   (0x0004)  
	class UBlendProfile*                               BlendProfile;                                               // 0x00C0   (0x0008)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FVector                                            BlendParameters;                                            // 0x00D0   (0x0018)  
	class UMirrorDataTable*                            MirrorDataTable;                                            // 0x00E8   (0x0008)  
	bool                                               bUseInertialBlend;                                          // 0x00F0   (0x0001)  
	bool                                               bResetOnBecomingRelevant;                                   // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1E];                                      // 0x00F2   (0x001E)  MISSED
};

/// Struct /Script/BlendStack.AnimNode_BlendStackInput
/// Size: 0x0018 (0x000010 - 0x000028)
struct FAnimNode_BlendStackInput : FAnimNode_Base
{ 
	int32_t                                            SampleIndex;                                                // 0x0010   (0x0004)  
	int32_t                                            BlendStackAllocationIndex;                                  // 0x0014   (0x0004)  
	bool                                               bOverridePlayRate;                                          // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              PlayRate;                                                   // 0x001C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

