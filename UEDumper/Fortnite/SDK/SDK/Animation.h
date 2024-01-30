
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AI
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Effects
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: NiagaraAnimNotifies
/// dependency: RidingCodeRuntime
/// dependency: ValetRuntime

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HideWeapon.AnimNotifyState_HideWeapon_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_HideWeapon_C : public UAnimNotifyState
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HideWeapon.AnimNotifyState_HideWeapon_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HideWeapon.AnimNotifyState_HideWeapon_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_R.AnimNotify_Player_HandSplash_R_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_Player_HandSplash_R_C : public UAnimNotify
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_R.AnimNotify_Player_HandSplash_R_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
/// Size: 0x0011 (0x000038 - 0x000049)
class UBP_AnimNotify_CameraShake_C : public UAnimNotify
{ 
public:
	class UClass*                                      Shake_BP;                                                   // 0x0038   (0x0008)  
	double                                             Shake_Scale;                                                // 0x0040   (0x0008)  
	ECameraShakePlaySpace                              Shake_Space;                                                // 0x0048   (0x0001)  


	/// Functions
	// Function /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/MainPlayer/Locomotion/Medium/Male/Jog/HeavyWeapon/BP_GCSteps.BP_GCSteps_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_GCSteps_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_HolsterWeapon_C : public UAnimNotifyState
{ 
public:
	bool                                               PlayEquipAnim;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              AnimNotifyStateHolster;                                     // 0x0034   (0x0004)  


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.CanApplyHolster
	// bool CanApplyHolster(FName& HolsterId);                                                                               // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UAnimNotify_PlaySoundWithCondition_C : public UFortAnimNotify_PlaySoundConditional
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C.ShouldTriggerAnimNotify
	// bool ShouldTriggerAnimNotify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);             // [0x211c0a0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C
/// Size: 0x0040 (0x000038 - 0x000078)
class UAnimNotify_FootStep_C : public UAnimNotify
{ 
public:
	int32_t                                            FootIndex;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FFortPlayerFoleyContextSettings                    PreviewSettings;                                            // 0x0040   (0x0038)  


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C.AudioPreview
	// void AudioPreview(class AActor* InActor);                                                                             // [0x211c0a0] Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UAnimNotify_FootStep_Right_C : public UAnimNotify_FootStep_C
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UAnimNotify_FootStep_Left_C : public UAnimNotify_FootStep_C
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_Player_HandSplash_L_C : public UAnimNotify
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
/// Size: 0x1620 (0x000740 - 0x001D60)
class UGameplay_FaceSystem_StateMachine_AnimBP_C : public UCCP_AnimInstance_Head_GameplayFaceSystemStateMachine
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0740   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0748   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x075C   (0x0004)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0760   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0768   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0770   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0790   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x07B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x07E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0808   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x0830   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x0858   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0880   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x08A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x08D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x08F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x0920   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x0948   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x0970   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x0998   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x09C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult14;                           // 0x09E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult15;                           // 0x0A10   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult16;                           // 0x0A38   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0A60   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0AA8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x0AC8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult18;                                // 0x0B10   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer19;                             // 0x0B30   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult20;                                // 0x0B78   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer21;                             // 0x0B98   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult22;                                // 0x0BE0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer23;                             // 0x0C00   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult24;                                // 0x0C48   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0C68   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult25;                                // 0x0CD8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer26;                             // 0x0CF8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult27;                                // 0x0D40   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer28;                           // 0x0D60   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult29;                                // 0x0DD0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer30;                             // 0x0DF0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult31;                                // 0x0E38   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer32;                             // 0x0E58   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult33;                                // 0x0EA0   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0EC0   (0x00C8)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult34;                           // 0x0F88   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult35;                           // 0x0FB0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult36;                           // 0x0FD8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult37;                           // 0x1000   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult38;                           // 0x1028   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult39;                           // 0x1050   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult40;                           // 0x1078   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult41;                           // 0x10A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult42;                           // 0x10C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult43;                           // 0x10F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult44;                           // 0x1118   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult45;                           // 0x1140   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult46;                           // 0x1168   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult47;                           // 0x1190   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult48;                           // 0x11B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult49;                           // 0x11E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult50;                           // 0x1208   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult51;                           // 0x1230   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult52;                           // 0x1258   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult53;                           // 0x1280   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult54;                           // 0x12A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult55;                           // 0x12D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult56;                           // 0x12F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult57;                           // 0x1320   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult58;                           // 0x1348   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult59;                           // 0x1370   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult60;                           // 0x1398   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult61;                           // 0x13C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult62;                           // 0x13E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult63;                           // 0x1410   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer64;                             // 0x1438   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult65;                                // 0x1480   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer66;                             // 0x14A0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult67;                                // 0x14E8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer68;                             // 0x1508   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult69;                                // 0x1550   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer70;                             // 0x1570   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult71;                                // 0x15B8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer72;                             // 0x15D8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult73;                                // 0x1620   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer74;                             // 0x1640   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult75;                                // 0x1688   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer76;                             // 0x16A8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult77;                                // 0x16F0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer78;                             // 0x1710   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult79;                                // 0x1758   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer80;                             // 0x1778   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult81;                                // 0x17C0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer82;                             // 0x17E0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult83;                                // 0x1828   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer84;                             // 0x1848   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult85;                                // 0x1890   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer86;                             // 0x18B0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult87;                                // 0x18F8   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer88;                           // 0x1918   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult89;                                // 0x1988   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer90;                             // 0x19A8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult91;                                // 0x19F0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer92;                             // 0x1A10   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult93;                                // 0x1A58   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer94;                             // 0x1A78   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult95;                                // 0x1AC0   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer96;                           // 0x1AE0   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult97;                                // 0x1B50   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer98;                             // 0x1B70   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult99;                                // 0x1BB8   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine100;                              // 0x1BD8   (0x00C8)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x1CA0   (0x00C0)  


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x211c0a0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP
	// void ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32_t EntryPoint);                                    // [0x211c0a0] Final                
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
/// Size: 0x0068 (0x000030 - 0x000098)
class UAnimNotifyState_AttachAsset_C : public UAnimNotifyState
{ 
public:
	FAssetAttachment                                   Attachment;                                                 // 0x0030   (0x0030)  
	class UAnimSequence*                               Animation;                                                  // 0x0060   (0x0008)  
	bool                                               Looping;                                                    // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	double                                             PlayRate;                                                   // 0x0070   (0x0008)  
	FGameplayTagContainer                              DoNotAttachTagContainer;                                    // 0x0078   (0x0020)  


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C
/// Size: 0x0010 (0x000030 - 0x000040)
class UAnimNotifyState_StopMontageGroup_C : public UAnimNotifyState
{ 
public:
	FName                                              GroupNameToStop;                                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	double                                             BlendOutTime;                                               // 0x0038   (0x0008)  


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
/// Size: 0x0028 (0x000038 - 0x000060)
class UAnimNotify_PlayForceFeedback_C : public UAnimNotify
{ 
public:
	class UForceFeedbackEffect*                        ForceFeedbackTemplate;                                      // 0x0038   (0x0008)  
	class UForceFeedbackEffect*                        ForceFeedbackFarTemplate;                                   // 0x0040   (0x0008)  
	bool                                               bPlayAtWorldLocation;                                       // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	double                                             InnerRadius;                                                // 0x0050   (0x0008)  
	double                                             OuterRadius;                                                // 0x0058   (0x0008)  


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HightBeam_HandFX_HologramHide.AnimNotifyState_HightBeam_HandFX_HologramHide_C
/// Size: 0x0000 (0x0000A1 - 0x0000A1)
class UAnimNotifyState_HightBeam_HandFX_HologramHide_C : public UFN_TimedNiagaraNotify_C
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HightBeam_HandFX_HologramHide.AnimNotifyState_HightBeam_HandFX_HologramHide_C.Received_NotifyTick
	// bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_DisablePawnRotation_C : public UAnimNotifyState
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_EliminationBotM2_C : public UAnimNotify
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_TeleportFinished_C : public UAnimNotifyState
{ 
public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAnimationBPFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Vehicle Dynamics Scaler Function
	// void Vehicle Dynamics Scaler Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, bool Debug, class UObject* __WorldContext, double& InVehicleHeadScaleAlpha, double& InVehicleHeadSimAlpha, double& InVehicleSkirtScaleAlpha, double& InVehicleSkirtSimAlpha); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function Nativization Wrapper
	// void Cloth Controller Function Nativization Wrapper(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString& ClothingAssetName, FClothControllerClothParameterMap& Cloth Paramaters, FClothCoreSettings& Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_Speed_Limit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, float DeltaTime, float GameTimeInSeconds, FClothControllerWindParameterMap& WindGustsParams, FWindGustSettings& WindGustLocalSettings, class UObject* __WorldContext, FName& CharacterStateOut, FClothParameters& Cloth Settings Out, FWindGustSettings& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Convert To Nativized Parameters
	// void Cloth Controller Convert To Nativized Parameters(FClothParamsStruct ClothParametersStruct, FWindGustParamsStruct WindParametersStruct, FClothCoreSettingStruct Cloth Core Settings, FWindGustLocalSettingStruct Wind Gust Settings, FName Character State Name, class UObject* __WorldContext, FClothParameters& Cloth Parameters Nativized, FWindGustParameters& Wind Parameters Nativized, FClothCoreSettings& ClothCoreSettings, FWindGustSettings& Wind Settings Nativized); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ConvertToNativizedWindParameters
	// void ConvertToNativizedWindParameters(FWindGustSettingStruct& WindGustSettingStruct, class UObject* __WorldContext, FWindGustParameters& WindGustParameters); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ConvertToNativizedClothParameters
	// void ConvertToNativizedClothParameters(FClothSettingStruct& ClothSettingStruct, class UObject* __WorldContext, FClothParameters& ClothParameters); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get Joint Location Relative to Bone
	// void Get Joint Location Relative to Bone(FName Target Joint, FName Relative Joint, FVector Offset, class UMeshComponent* SkelMeshComponent, bool Debug Draw, class UObject* __WorldContext, FVector& Joint Location Vector); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cape Spine05 Pelvis Rotation Function
	// void Cape Spine05 Pelvis Rotation Function(class USkinnedMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, FRotator& Rotate Z Output); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Function
	// void Separated Cloth Control Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, class UObject* __WorldContext, FString& CurrentStateOut, FClothCoreSettingStruct& Cloth Core Settings Out, FClothSettingStruct& Cloth Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Write To Instance
	// void Separated Cloth Control Write To Instance(class UCustomCharacterPartAnimInstance* Character Part Anim Instance, FString Clothing Asset Name, FClothCoreSettingStruct Cloth Core Settings, FClothSettingStruct Cloth Settings, FVector Gust Strength - Wind Velocity, FName Joint Name, class UObject* __WorldContext); // [0x211c0a0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Calculate Parameters
	// void Separated Cloth Control Calculate Parameters(class UCustomCharacterPartAnimInstance* InCharacterPartAnimInstance, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct InWindGustParams, FWindGustLocalSettingStruct InWindGustLocalSettings, class UObject* __WorldContext, FString& OutCurrentState, FClothCoreSettingStruct& OutClothCoreSettings, FClothSettingStruct& OutClothSettings, FWindGustSettingStruct& OutWindGustSettings, FWindGustLocalSettingStruct& OutWindGustLocalSettings, FVector& OutGustStrength, FVector& LinearVelVector-DELETE LATER); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Wind Gust Function
	// void Separated Cloth Control Wind Gust Function(double DeltaTime, double GameTimeInSeconds, FName JointName, FWindGustSettingStruct WindGustSettings, FWindGustLocalSettingStruct WindGustLocalSettings, class UObject* __WorldContext, FVector& GustStrengthWindVelocity Out, FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set WPO Regional Function
	// void Set WPO Regional Function(class UMaterialInstanceDynamic* Material, class UMaterialInstanceDynamic* Overlay Material, class USkeletalMeshComponent* Skeletal Mesh, FName Velocity Transform, double Velocity Interp Speed, FName Collision Transform, TEnumAsByte<EAxis> Collision Transform Axis, bool Invert Collision Transform Axis, double Delta Time X, FVector& Previous Velocity Transform Location, FVector& Previous Velocity Transform Velocity, int32_t Region, class UObject* __WorldContext); // [0x211c0a0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get WPO Regional Param Names Function
	// void Get WPO Regional Param Names Function(int32_t& Region, class UObject* __WorldContext, FName& Velocity, FName& Bone Position, FName& Bone Vector); // [0x211c0a0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set WPO Globals Function
	// void Set WPO Globals Function(class UMaterialInstanceDynamic* Material, class UMaterialInstanceDynamic* Overlay Material, class USkeletalMeshComponent* Skeletal Mesh, FName Local Noise Reference Transform, double Local Noise Offset Multiplier, FVector& Local Noise Transform  Location, FVector& Local Noise Offset, FName Local Turbulence Vector Transform, TEnumAsByte<EAxis> Local Turbulence Vector Transform Axis, class UObject* __WorldContext); // [0x211c0a0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get  Motion Vector For Transform Function
	// void Get  Motion Vector For Transform Function(class USceneComponent* Skeletal Mesh, FName Transform Name, FVector& Previous Transform Location, class UObject* __WorldContext, FVector& Transform Motion Vector, FVector& Transform Location, FTransform& Transform); // [0x211c0a0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Debug Cloth Teleport Threshold Function
	// void Debug Cloth Teleport Threshold Function(double MinDistance, double MinRotation, class USceneComponent* SkelMeshComponent, bool PrintToScreen, FName BoneName, FVector& InVector, FRotator PawnDeltaRotation, double PrintToScreenDuration, class UObject* __WorldContext, double& Distance, double& Rotation); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Helper Scale For Player Movement
	// void Cloth Controller Helper Scale For Player Movement(FVector LinearVelScale, double PlayerFwdVector, double PlayerFwdVectorJump, double ClothUpX, double ClothUpZ, class UObject* __WorldContext, FVector& LinearVelVectorOut); // [0x211c0a0] Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Scale Joint Rotation Function
	// void Scale Joint Rotation Function(FRotator Scale, FName TargetBone, FName ReferenceBone, class USkinnedMeshComponent* SkelMeshComponent, class UObject* __WorldContext, FRotator& FinalRotation, FRotator& OriginalRotation); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Adjust Emote Vehicle Wheel Rotation
	// void Adjust Emote Vehicle Wheel Rotation(class AActor* Owning Actor, double CurrentWheelRotation, double DeltaTime, double CurrentActorRotation, class UObject* __WorldContext, double& NewActorRotation, double& NewWheelRotation); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Setter Function
	// void Gravity Override Setter Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class UMeshComponent* SkelMeshComponent, FGravityOverrideSettingStruct GravityOverride Settings, double GameTimeInSeconds, class UObject* __WorldContext, FGravityOverrideSettingStruct& GravityOverride Settings Out, FVector& GravityOverride Out); // [0x211c0a0] Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override State Function
	// void Gravity Override State Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, FGravityOverrideParamsStruct& GravityOverrideParams, FRBANParamsStruct& RBAN Params, bool DebugDraw, FName DebugJointName, class UObject* __WorldContext, FVector& GravityOverride, FString& CurrentStateOut, FGravityOverrideSettingStruct& GravityOverrideSettingsOut, FRBANSettingStruct& RBAN SettingsOut); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.FN_PSDPoseReaderFNC
	// void FN_PSDPoseReaderFNC(FString startJnt, FString endJnt, FString poseJnt, double Angle, bool Debug, class USkeletalMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, double& pose_output); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Wind Gust Control Function
	// void Wind Gust Control Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double DeltaTime, double GameTimeInSeconds, FName JointName, FWindGustSettingStruct WindGustSettings, FWindGustLocalSettingStruct WindGustLocalSettings, class UObject* __WorldContext, FVector& GustStrengthWindVelocity Out, FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.WindGustGeneratorFunction
	// void WindGustGeneratorFunction(double DeltaTime, FWindGustSettingStruct GustSettings, FWindGustLocalSettingStruct ClothGustLocalSettings, class UObject* __WorldContext, double& GustStrength - WindVelocity, FWindGustLocalSettingStruct& ClothGustLocalSettingsOut); // [0x211c0a0] Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Play Transformation Montage
	// void Play Transformation Montage(class AFortPlayerPawn* FortPlayerPawn, class UObject* __WorldContext);               // [0x211c0a0] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Clear Transformation Montage
	// void Clear Transformation Montage(class AFortPlayerPawn* FortPlayerPawn, class UObject* __WorldContext);              // [0x211c0a0] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set Transformation Montage
	// void Set Transformation Montage(class AFortPlayerPawn* FortPlayerPawn, class UAnimMontage* Montage, double StartTime, class UObject* __WorldContext); // [0x211c0a0] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Setter Function
	// void Cloth Controller Setter Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FClothSettingStruct Cloth Settings, class UObject* __WorldContext, FClothSettingStruct& Cloth Settings Out); // [0x211c0a0] Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function
	// void Cloth Controller Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, class UObject* __WorldContext, FString& CurrentStateOut, FClothSettingStruct& Cloth Settings Out, FClothCoreSettingStruct& Cloth Core Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // [0x211c0a0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.RandomRotatorFunction
	// void RandomRotatorFunction(double GameTimeInSeconds, double PerlinScale, FRotator Frequency, FRotator Amplitude, FRotator Offset, double TimeOffset, class UObject* __WorldContext, FRotator& RandomRotator); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Player Movement Function
	// void Player Movement Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double X Dot Product, double Y Dot Product, double Z Dot Product, bool DrawDebug, double Debug Scalar, class UObject* __WorldContext, double& X Movement, double& Y Movement, double& Z Movement); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Random Vector Function
	// void Random Vector Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class UMeshComponent* SkelMeshComponent, FName JointName, double GameTimeInSeconds, double TimeOffset, double PerlinScale, FVector Frequency, FVector Amplitude, FVector Offset, class UObject* __WorldContext, FVector& VectorOut); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawVectorFromJointFunction
	// void DrawVectorFromJointFunction(class USceneComponent* SkelMeshComponent, FName JointName, FVector LineEnd, FVector JointOffset, FLinearColor LineColor, double Thickness, class UObject* __WorldContext); // [0x211c0a0] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawJointDebugFunction
	// void DrawJointDebugFunction(class USceneComponent* SkelMeshComponent, FVector JointOffset, TArray<FName>& JointName, double Scale, double duration, double Thickness, bool DebugDraw, class UObject* __WorldContext); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ComplexSimSpaceFunction
	// void ComplexSimSpaceFunction(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double InterpSpeedMax, double PawnSpeedMax, double RInterpErrorTolerance, double DeltaTime, bool DebugDraw, FRotator sim_space_rotation_in, bool inComponentSpaceIn, bool inComponentSpaceLastFrameIn, bool lockedOnSimSpaceIn, double InterpSpeedIn, class UObject* __WorldContext, FRotator& sim_space_rotation, bool& inComponentSpaceOut, bool& inComponentSpaceLastFrameOut, bool& lockedOnSimSpaceOut, double& InterpSpeedOut); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Function
	// void Gravity Override Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, FVector WindFreq, FVector WindAmp, FVector WindOffset, FVector GoingUpGravityOverride, FVector ComingDownGravityOverride, FVector DivingDownGravityOverride, FVector ParachuteOpenedGravityOverride, FVector GroundWindFreq, FVector GroundWindAmp, FVector GroundWindOffset, FVector OnGroundGravityOverride, FVector SwimmingGravityOverride, FName JointName, class UObject* __WorldContext, FVector& GravityOverride); // [0x211c0a0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_SyncPettingCreature_C : public UAnimNotifyState
{ 
public:


	/// Functions
	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.GetRiderPettingMontage
	// void GetRiderPettingMontage(class AActor* RiderActor, class UAnimMontage*& RiderPettingMontage);                      // [0x211c0a0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x211c0a0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C
/// Size: 0x4EF8 (0x000AF0 - 0x0059E8)
class UBoarRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0AF0   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0AF8   (0x0090)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0B88   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0B90   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0B98   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x0BB8   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0C68   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone0;                                  // 0x0D90   (0x0128)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0EB8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0ED8   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone1;                                  // 0x0EF8   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone2;                                  // 0x1020   (0x0128)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1148   (0x00C8)  
	FAnimNode_LegIK                                    AnimGraphNode_LegIK;                                        // 0x1210   (0x00F8)  
	FAnimNode_LegIK                                    AnimGraphNode_LegIK3;                                       // 0x1308   (0x00F8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1400   (0x0070)  
	FAnimNode_Root                                     AnimGraphNode_Root4;                                        // 0x1470   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose5;                             // 0x1490   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1540   (0x0078)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace6;                       // 0x15B8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace7;                       // 0x15D8   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x15F8   (0x0048)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone8;                                  // 0x1640   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone9;                                  // 0x1768   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone10;                                 // 0x1890   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone11;                                 // 0x19B8   (0x0128)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1AE0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x1B08   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x1B30   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult14;                           // 0x1B58   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult15;                           // 0x1B80   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult16;                           // 0x1BA8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult17;                           // 0x1BD0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult18;                           // 0x1BF8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult19;                           // 0x1C20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult20;                           // 0x1C48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult21;                           // 0x1C70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult22;                           // 0x1C98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult23;                           // 0x1CC0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult24;                           // 0x1CE8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult25;                           // 0x1D10   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult26;                           // 0x1D38   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult27;                           // 0x1D60   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult28;                           // 0x1D88   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1DB0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer29;                             // 0x1DF8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool30;                            // 0x1E40   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1E88   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer31;                             // 0x1EA8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer32;                             // 0x1EF0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool33;                            // 0x1F38   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult34;                                // 0x1F80   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer35;                             // 0x1FA0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool36;                            // 0x1FE8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer37;                             // 0x2030   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer38;                             // 0x2078   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool39;                            // 0x20C0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult40;                                // 0x2108   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer41;                             // 0x2128   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult42;                                // 0x2170   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer43;                           // 0x2190   (0x0070)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer44;                             // 0x2200   (0x0048)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive45;                              // 0x2248   (0x00C8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool46;                            // 0x2310   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer47;                             // 0x2358   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult48;                                // 0x23A0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer49;                             // 0x23C0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult50;                                // 0x2408   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult51;                           // 0x2428   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult52;                           // 0x2450   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult53;                           // 0x2478   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult54;                           // 0x24A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult55;                           // 0x24C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult56;                           // 0x24F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult57;                           // 0x2518   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult58;                           // 0x2540   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer59;                             // 0x2568   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult60;                                // 0x25B0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer61;                             // 0x25D0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult62;                                // 0x2618   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer63;                             // 0x2638   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult64;                                // 0x2680   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer65;                             // 0x26A0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult66;                                // 0x26E8   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult67;                           // 0x2708   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2730   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult68;                                // 0x27F8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer69;                             // 0x2818   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult70;                                // 0x2860   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer71;                             // 0x2880   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult72;                                // 0x28C8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer73;                             // 0x28E8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult74;                                // 0x2930   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult75;                           // 0x2950   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine76;                               // 0x2978   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult77;                                // 0x2A40   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult78;                           // 0x2A60   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult79;                           // 0x2A88   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer80;                             // 0x2AB0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult81;                                // 0x2AF8   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult82;                                // 0x2B18   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine83;                               // 0x2B38   (0x00C8)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive84;                              // 0x2C00   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer85;                           // 0x2CC8   (0x0070)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer86;                             // 0x2D38   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer87;                             // 0x2D80   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool88;                            // 0x2DC8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool89;                            // 0x2E10   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer90;                           // 0x2E58   (0x0070)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive91;                              // 0x2EC8   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult92;                                // 0x2F90   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer93;                             // 0x2FB0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult94;                                // 0x2FF8   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine95;                               // 0x3018   (0x00C8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x30E0   (0x00F0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x31D0   (0x0028)  
	FAnimNode_Inertialization                          AnimGraphNode_Inertialization;                              // 0x31F8   (0x0118)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3310   (0x0118)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend96;                           // 0x3428   (0x00F0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult97;                           // 0x3518   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult98;                           // 0x3540   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult99;                           // 0x3568   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose100;                             // 0x3590   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult101;                               // 0x35B8   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer102;                          // 0x35D8   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult103;                               // 0x3648   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose104;                             // 0x3668   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult105;                               // 0x3690   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine106;                              // 0x36B0   (0x00C8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose107;                            // 0x3778   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose108;                             // 0x37F0   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose109;                            // 0x3818   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose110;                             // 0x3890   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose111;                             // 0x38B8   (0x0028)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace112;                  // 0x38E0   (0x0118)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x39F8   (0x00D0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace113;                  // 0x3AC8   (0x0118)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult114;                          // 0x3BE0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult115;                          // 0x3C08   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult116;                          // 0x3C30   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult117;                          // 0x3C58   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult118;                          // 0x3C80   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult119;                          // 0x3CA8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult120;                          // 0x3CD0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult121;                          // 0x3CF8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult122;                          // 0x3D20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult123;                          // 0x3D48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult124;                          // 0x3D70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult125;                          // 0x3D98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult126;                          // 0x3DC0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult127;                          // 0x3DE8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult128;                          // 0x3E10   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult129;                          // 0x3E38   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult130;                          // 0x3E60   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult131;                          // 0x3E88   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer132;                            // 0x3EB0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer133;                            // 0x3EF8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool134;                           // 0x3F40   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult135;                               // 0x3F88   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer136;                            // 0x3FA8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer137;                            // 0x3FF0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool138;                           // 0x4038   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult139;                               // 0x4080   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer140;                            // 0x40A0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult141;                               // 0x40E8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer142;                            // 0x4108   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer143;                            // 0x4150   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool144;                           // 0x4198   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult145;                               // 0x41E0   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult146;                          // 0x4200   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult147;                          // 0x4228   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult148;                          // 0x4250   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult149;                          // 0x4278   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult150;                          // 0x42A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult151;                          // 0x42C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult152;                          // 0x42F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult153;                          // 0x4318   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer154;                            // 0x4340   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult155;                               // 0x4388   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer156;                            // 0x43A8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult157;                               // 0x43F0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer158;                            // 0x4410   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult159;                               // 0x4458   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer160;                            // 0x4478   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult161;                               // 0x44C0   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult162;                          // 0x44E0   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine163;                              // 0x4508   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult164;                               // 0x45D0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer165;                            // 0x45F0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult166;                               // 0x4638   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer167;                            // 0x4658   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult168;                               // 0x46A0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer169;                            // 0x46C0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult170;                               // 0x4708   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult171;                          // 0x4728   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine172;                              // 0x4750   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult173;                               // 0x4818   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer174;                            // 0x4838   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult175;                               // 0x4880   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer176;                            // 0x48A0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool177;                           // 0x48E8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer178;                            // 0x4930   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer179;                            // 0x4978   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool180;                           // 0x49C0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult181;                               // 0x4A08   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer182;                            // 0x4A28   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult183;                               // 0x4A70   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer184;                            // 0x4A90   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool185;                           // 0x4AD8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer186;                            // 0x4B20   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer187;                          // 0x4B68   (0x0070)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool188;                           // 0x4BD8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult189;                               // 0x4C20   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine190;                              // 0x4C40   (0x00C8)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone191;                                // 0x4D08   (0x0128)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult192;                          // 0x4E30   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult193;                          // 0x4E58   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer194;                            // 0x4E80   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult195;                               // 0x4EC8   (0x0020)  
	FAnimNode_RefPose                                  AnimGraphNode_IdentityPose;                                 // 0x4EE8   (0x0010)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult196;                               // 0x4EF8   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine197;                              // 0x4F18   (0x00C8)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive198;                    // 0x4FE0   (0x00D0)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive199;                             // 0x50B0   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer200;                          // 0x5178   (0x0070)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive201;                             // 0x51E8   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer202;                          // 0x52B0   (0x0070)  
	FAnimNode_RefPose                                  AnimGraphNode_IdentityPose203;                              // 0x5320   (0x0010)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool204;                           // 0x5330   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool205;                           // 0x5378   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer206;                          // 0x53C0   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer207;                          // 0x5430   (0x0070)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool208;                           // 0x54A0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult209;                               // 0x54E8   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine210;                              // 0x5508   (0x00C8)  
	FAnimNode_Root                                     AnimGraphNode_Root211;                                      // 0x55D0   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose212;                           // 0x55F0   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose213;                           // 0x56A0   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root214;                                      // 0x5750   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose215;                           // 0x5770   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose216;                           // 0x5820   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose217;                           // 0x58D0   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root218;                                      // 0x5980   (0x0020)  
	class AFortPlayerPawn*                             FortPlayer;                                                 // 0x59A0   (0x0008)  
	class AFortPawn*                                   WildlifePawn;                                               // 0x59A8   (0x0008)  
	bool                                               State_Rule_Moving_Idle;                                     // 0x59B0   (0x0001)  
	bool                                               Is_Jumping;                                                 // 0x59B1   (0x0001)  
	bool                                               Is_Falling;                                                 // 0x59B2   (0x0001)  
	bool                                               Is_Surface_Swimming;                                        // 0x59B3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x59B4   (0x0004)  MISSED
	double                                             BodyRoll;                                                   // 0x59B8   (0x0008)  
	double                                             BoarSpeed2D;                                                // 0x59C0   (0x0008)  
	bool                                               Is_Moving_Backwards;                                        // 0x59C8   (0x0001)  
	bool                                               Is_Boosting;                                                // 0x59C9   (0x0001)  
	bool                                               Can_Transition_Fall_To_Moving;                              // 0x59CA   (0x0001)  
	bool                                               Can_Transition_Fall_To_Idle;                                // 0x59CB   (0x0001)  
	bool                                               Can_Transition_Idle_To_Moving;                              // 0x59CC   (0x0001)  
	bool                                               Is_Turning_in_Place;                                        // 0x59CD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x59CE   (0x0002)  MISSED
	double                                             Turn_in_Place_Angle_Delta;                                  // 0x59D0   (0x0008)  
	bool                                               Should_Play_Stop_Backwards;                                 // 0x59D8   (0x0001)  
	bool                                               Play_Land_Additive;                                         // 0x59D9   (0x0001)  
	bool                                               Was_Turning_Right;                                          // 0x59DA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x59DB   (0x0005)  MISSED
	double                                             Backwards_Play_Rate;                                        // 0x59E0   (0x0008)  


	/// Functions
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                            // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                           // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x211c0a0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Boar
	// void GetMainAnimBPData_Boar(class UObject* AnimInstance);                                                             // [0x211c0a0] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE(); // [0x211c0a0] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.ExecuteUbergraph_BoarRidingPlayerLayerAnimBP
	// void ExecuteUbergraph_BoarRidingPlayerLayerAnimBP(int32_t EntryPoint);                                                // [0x211c0a0] Final                
};

/// Class /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C
/// Size: 0x4AE0 (0x000AF0 - 0x0055D0)
class UWolfRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0AF0   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0AF8   (0x00A8)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0BA0   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0BA8   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0BB0   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x0BD0   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0C80   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone0;                                  // 0x0DA8   (0x0128)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0ED0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0EF0   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0F10   (0x0070)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x0F80   (0x00C8)  
	FAnimNode_Root                                     AnimGraphNode_Root1;                                        // 0x1048   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose2;                             // 0x1068   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1118   (0x0078)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace3;                       // 0x1190   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace4;                       // 0x11B0   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x11D0   (0x0048)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone5;                                  // 0x1218   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone6;                                  // 0x1340   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone7;                                  // 0x1468   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone8;                                  // 0x1590   (0x0128)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x16B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x16E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x1708   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x1730   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x1758   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x1780   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult14;                           // 0x17A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult15;                           // 0x17D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult16;                           // 0x17F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult17;                           // 0x1820   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult18;                           // 0x1848   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult19;                           // 0x1870   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult20;                           // 0x1898   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult21;                           // 0x18C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult22;                           // 0x18E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult23;                           // 0x1910   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult24;                           // 0x1938   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult25;                           // 0x1960   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1988   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer26;                             // 0x19D0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool27;                            // 0x1A18   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1A60   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer28;                             // 0x1A80   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer29;                             // 0x1AC8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool30;                            // 0x1B10   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult31;                                // 0x1B58   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer32;                             // 0x1B78   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer33;                             // 0x1BC0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool34;                            // 0x1C08   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer35;                             // 0x1C50   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool36;                            // 0x1C98   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult37;                                // 0x1CE0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer38;                             // 0x1D00   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult39;                                // 0x1D48   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer40;                             // 0x1D68   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer41;                           // 0x1DB0   (0x0070)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive42;                              // 0x1E20   (0x00C8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool43;                            // 0x1EE8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer44;                             // 0x1F30   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult45;                                // 0x1F78   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer46;                             // 0x1F98   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult47;                                // 0x1FE0   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult48;                           // 0x2000   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult49;                           // 0x2028   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult50;                           // 0x2050   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult51;                           // 0x2078   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult52;                           // 0x20A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult53;                           // 0x20C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult54;                           // 0x20F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult55;                           // 0x2118   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer56;                             // 0x2140   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult57;                                // 0x2188   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer58;                             // 0x21A8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult59;                                // 0x21F0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer60;                             // 0x2210   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult61;                                // 0x2258   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer62;                             // 0x2278   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult63;                                // 0x22C0   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult64;                           // 0x22E0   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2308   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult65;                                // 0x23D0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer66;                             // 0x23F0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult67;                                // 0x2438   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer68;                             // 0x2458   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult69;                                // 0x24A0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer70;                             // 0x24C0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult71;                                // 0x2508   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult72;                           // 0x2528   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine73;                               // 0x2550   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult74;                                // 0x2618   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer75;                             // 0x2638   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool76;                            // 0x2680   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult77;                           // 0x26C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult78;                           // 0x26F0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer79;                             // 0x2718   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult80;                                // 0x2760   (0x0020)  
	FAnimNode_RefPose                                  AnimGraphNode_IdentityPose;                                 // 0x2780   (0x0010)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult81;                                // 0x2790   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine82;                               // 0x27B0   (0x00C8)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive83;                              // 0x2878   (0x00C8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer84;                             // 0x2940   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool85;                            // 0x2988   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer86;                           // 0x29D0   (0x0070)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive87;                              // 0x2A40   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer88;                           // 0x2B08   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult89;                                // 0x2B78   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer90;                             // 0x2B98   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult91;                                // 0x2BE0   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine92;                               // 0x2C00   (0x00C8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2CC8   (0x00F0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x2DB8   (0x0028)  
	FAnimNode_Inertialization                          AnimGraphNode_Inertialization;                              // 0x2DE0   (0x0118)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x2EF8   (0x0118)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend93;                           // 0x3010   (0x00F0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult94;                           // 0x3100   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult95;                           // 0x3128   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult96;                           // 0x3150   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose97;                              // 0x3178   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult98;                                // 0x31A0   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer99;                           // 0x31C0   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult100;                               // 0x3230   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose101;                             // 0x3250   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult102;                               // 0x3278   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine103;                              // 0x3298   (0x00C8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose104;                            // 0x3360   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose105;                             // 0x33D8   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose106;                            // 0x3400   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose107;                             // 0x3478   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose108;                             // 0x34A0   (0x0028)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive;                       // 0x34C8   (0x00D0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace109;                  // 0x3598   (0x0118)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult110;                          // 0x36B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult111;                          // 0x36D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult112;                          // 0x3700   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult113;                          // 0x3728   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult114;                          // 0x3750   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult115;                          // 0x3778   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult116;                          // 0x37A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult117;                          // 0x37C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult118;                          // 0x37F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult119;                          // 0x3818   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult120;                          // 0x3840   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult121;                          // 0x3868   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult122;                          // 0x3890   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult123;                          // 0x38B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult124;                          // 0x38E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult125;                          // 0x3908   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult126;                          // 0x3930   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult127;                          // 0x3958   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer128;                            // 0x3980   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer129;                            // 0x39C8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool130;                           // 0x3A10   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult131;                               // 0x3A58   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer132;                            // 0x3A78   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer133;                            // 0x3AC0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool134;                           // 0x3B08   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult135;                               // 0x3B50   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer136;                            // 0x3B70   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult137;                               // 0x3BB8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer138;                            // 0x3BD8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool139;                           // 0x3C20   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer140;                            // 0x3C68   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult141;                               // 0x3CB0   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult142;                          // 0x3CD0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult143;                          // 0x3CF8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult144;                          // 0x3D20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult145;                          // 0x3D48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult146;                          // 0x3D70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult147;                          // 0x3D98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult148;                          // 0x3DC0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult149;                          // 0x3DE8   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer150;                            // 0x3E10   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult151;                               // 0x3E58   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer152;                            // 0x3E78   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult153;                               // 0x3EC0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer154;                            // 0x3EE0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult155;                               // 0x3F28   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer156;                            // 0x3F48   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult157;                               // 0x3F90   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult158;                          // 0x3FB0   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine159;                              // 0x3FD8   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult160;                               // 0x40A0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer161;                            // 0x40C0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult162;                               // 0x4108   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer163;                            // 0x4128   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult164;                               // 0x4170   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer165;                            // 0x4190   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult166;                               // 0x41D8   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult167;                          // 0x41F8   (0x0028)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine168;                              // 0x4220   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult169;                               // 0x42E8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer170;                            // 0x4308   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult171;                               // 0x4350   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer172;                            // 0x4370   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer173;                            // 0x43B8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer174;                            // 0x4400   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool175;                           // 0x4448   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool176;                           // 0x4490   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult177;                               // 0x44D8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer178;                            // 0x44F8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult179;                               // 0x4540   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer180;                            // 0x4560   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool181;                           // 0x45A8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer182;                            // 0x45F0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool183;                           // 0x4638   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer184;                          // 0x4680   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult185;                               // 0x46F0   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine186;                              // 0x4710   (0x00C8)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone187;                                // 0x47D8   (0x0128)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive188;                             // 0x4900   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer189;                          // 0x49C8   (0x0070)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive190;                             // 0x4A38   (0x00C8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer191;                          // 0x4B00   (0x0070)  
	FAnimNode_RefPose                                  AnimGraphNode_IdentityPose192;                              // 0x4B70   (0x0010)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool193;                           // 0x4B80   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool194;                           // 0x4BC8   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer195;                          // 0x4C10   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer196;                          // 0x4C80   (0x0070)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool197;                           // 0x4CF0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult198;                               // 0x4D38   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine199;                              // 0x4D58   (0x00C8)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult200;                          // 0x4E20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult201;                          // 0x4E48   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer202;                            // 0x4E70   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult203;                               // 0x4EB8   (0x0020)  
	FAnimNode_RefPose                                  AnimGraphNode_IdentityPose204;                              // 0x4ED8   (0x0010)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult205;                               // 0x4EE8   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine206;                              // 0x4F08   (0x00C8)  
	FAnimNode_ApplyMeshSpaceAdditive                   AnimGraphNode_ApplyMeshSpaceAdditive207;                    // 0x4FD0   (0x00D0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace208;                  // 0x50A0   (0x0118)  
	FAnimNode_Root                                     AnimGraphNode_Root209;                                      // 0x51B8   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose210;                           // 0x51D8   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose211;                           // 0x5288   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root212;                                      // 0x5338   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose213;                           // 0x5358   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose214;                           // 0x5408   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose215;                           // 0x54B8   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root216;                                      // 0x5568   (0x0020)  
	bool                                               State_Rule_Moving_Idle;                                     // 0x5588   (0x0001)  
	bool                                               State_Rule_Idle_Moving;                                     // 0x5589   (0x0001)  
	bool                                               Is_Jumping;                                                 // 0x558A   (0x0001)  
	bool                                               State_Rule_Fall_Idle;                                       // 0x558B   (0x0001)  
	bool                                               Is_Falling;                                                 // 0x558C   (0x0001)  
	bool                                               State_Rule_Fall_Moving;                                     // 0x558D   (0x0001)  
	bool                                               State_Rule_Jump_Land_Moving;                                // 0x558E   (0x0001)  
	bool                                               Is_Surface_Swimming;                                        // 0x558F   (0x0001)  
	bool                                               State_Rule_Swim_Idle_Swim_Loco;                             // 0x5590   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x5591   (0x0007)  MISSED
	double                                             BodyRoll;                                                   // 0x5598   (0x0008)  
	double                                             WolfSpeed2D;                                                // 0x55A0   (0x0008)  
	bool                                               Is_Boosting;                                                // 0x55A8   (0x0001)  
	bool                                               Play_Land_Additive;                                         // 0x55A9   (0x0001)  
	bool                                               Is_Moving_Backwards;                                        // 0x55AA   (0x0001)  
	bool                                               Should_Play_Stop_Backwards;                                 // 0x55AB   (0x0001)  
	bool                                               Is_Turning_in_Place;                                        // 0x55AC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x55AD   (0x0003)  MISSED
	double                                             Turn_in_Place_Angle_Delta;                                  // 0x55B0   (0x0008)  
	bool                                               Was_Turning_Right;                                          // 0x55B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x55B9   (0x0007)  MISSED
	double                                             Turn_in_Place_Rotation_Speed;                               // 0x55C0   (0x0008)  
	double                                             Backwards_Play_Rate;                                        // 0x55C8   (0x0008)  


	/// Functions
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                            // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                           // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x211c0a0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Wolf
	// void GetMainAnimBPData_Wolf(class UObject* AnimInstance);                                                             // [0x211c0a0] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766(); // [0x211c0a0] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D(); // [0x211c0a0] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93(); // [0x211c0a0] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                           // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.PlaceHandIKTargets
	// void PlaceHandIKTargets();                                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.ExecuteUbergraph_WolfRidingPlayerLayerAnimBP
	// void ExecuteUbergraph_WolfRidingPlayerLayerAnimBP(int32_t EntryPoint);                                                // [0x211c0a0] Final                
};

/// Class /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C
/// Size: 0x18A9 (0x000890 - 0x002139)
class URidingPlayerLayerAnimBP_C : public UFortValetPassengerAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0890   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0898   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x08B4   (0x0004)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x08B8   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x08C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x08C8   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x08E8   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0998   (0x0078)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0A10   (0x00F0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0B00   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0B28   (0x0128)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0C50   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0C70   (0x0020)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose0;                              // 0x0C90   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose1;                               // 0x0D08   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0D30   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose2;                               // 0x0D78   (0x0028)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone;                               // 0x0DA0   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0E50   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0E98   (0x0048)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x0EE0   (0x0118)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0FF8   (0x0070)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x1068   (0x00C8)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone3;                                  // 0x1130   (0x0128)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose4;                             // 0x1258   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root5;                                        // 0x1308   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot6;                                        // 0x1328   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool7;                             // 0x1370   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer8;                              // 0x13B8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool9;                             // 0x1400   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose10;                             // 0x1448   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose11;                              // 0x14C0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose12;                              // 0x14E8   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool13;                            // 0x1510   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer14;                           // 0x1558   (0x0070)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool15;                            // 0x15C8   (0x0048)  
	FAnimNode_RotateRootBone                           AnimGraphNode_RotateRootBone16;                             // 0x1610   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x16C0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool18;                            // 0x1708   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose19;                              // 0x1750   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool20;                            // 0x1778   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer21;                             // 0x17C0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool22;                            // 0x1808   (0x0048)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace23;                   // 0x1850   (0x0118)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose24;                              // 0x1968   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone25;                                 // 0x1990   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone26;                                 // 0x1AB8   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone27;                                 // 0x1BE0   (0x0128)  
	FAnimNode_Root                                     AnimGraphNode_Root28;                                       // 0x1D08   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose29;                            // 0x1D28   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose30;                            // 0x1DD8   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root31;                                       // 0x1E88   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose32;                            // 0x1EA8   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose33;                            // 0x1F58   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose34;                            // 0x2008   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root35;                                       // 0x20B8   (0x0020)  
	FRotator                                           MatchRootYaw;                                               // 0x20D8   (0x0018)  
	bool                                               Is_Targeting;                                               // 0x20F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x20F1   (0x0007)  MISSED
	class AFortPlayerPawn*                             FortPlayer;                                                 // 0x20F8   (0x0008)  
	double                                             Timer;                                                      // 0x2100   (0x0008)  
	bool                                               ShouldTransitionToRiding;                                   // 0x2108   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x2109   (0x0007)  MISSED
	double                                             LowerBodyYaw;                                               // 0x2110   (0x0008)  
	bool                                               IsRideMode;                                                 // 0x2118   (0x0001)  
	bool                                               IsSprinting;                                                // 0x2119   (0x0001)  
	bool                                               IsStandingStill;                                            // 0x211A   (0x0001)  
	bool                                               IsInCombat;                                                 // 0x211B   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x211C   (0x0004)  MISSED
	class AFortAIPawn*                                 WildlifePawn;                                               // 0x2120   (0x0008)  
	bool                                               IsSmackie;                                                  // 0x2128   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x2129   (0x0007)  MISSED
	double                                             Velocity;                                                   // 0x2130   (0x0008)  
	bool                                               IsNug;                                                      // 0x2138   (0x0001)  


	/// Functions
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                            // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                           // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x211c0a0] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x211c0a0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976(); // [0x211c0a0] BlueprintEvent       
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA(); // [0x211c0a0] BlueprintEvent       
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.ExecuteUbergraph_RidingPlayerLayerAnimBP
	// void ExecuteUbergraph_RidingPlayerLayerAnimBP(int32_t EntryPoint);                                                    // [0x211c0a0] Final|HasDefaults    
};

/// Struct /Game/Animation/Libraries/RBANSettingStruct.RBANSettingStruct
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRBANSettingStruct
{ 
	FVector                                            ComponentLinearAccScale_28_9CBE863E417FC965C07809A2FE55ADFD; // 0x0000   (0x0018)  
	FVector                                            ComponentLinearVelScale_31_6A3DFE4A481AD4D7CB18D79F95CC88E8; // 0x0018   (0x0018)  
	FSimSpaceSettings                                  SimSpaceSettings_34_FE68F666411FF9F29BA84CB4BE726A52;       // 0x0030   (0x0060)  
};

/// Struct /Game/Animation/Libraries/RBANParamsStruct.RBANParamsStruct
/// Size: 0x0B40 (0x000000 - 0x000B40)
struct FRBANParamsStruct
{ 
	FRBANSettingStruct                                 Skydive_GoingUp_56_C026BDA74BFBABA6672DFE8FFDAAFC1B;        // 0x0000   (0x0090)  
	FRBANSettingStruct                                 Skydive_FloatingDown_57_2CBF3D3F421785F8994502931454A81F;   // 0x0090   (0x0090)  
	FRBANSettingStruct                                 Skydive_DivingDown_58_EC7BEC4D406A8A98E60D7B9374C5E457;     // 0x0120   (0x0090)  
	FRBANSettingStruct                                 Skydive_Parachuting_60_A88C4A0A407F497561D31287CB20250F;    // 0x01B0   (0x0090)  
	FRBANSettingStruct                                 OnGround_Standing_59_267DB1464D0D3A29D99E94ADFCB4AFEC;      // 0x0240   (0x0090)  
	FRBANSettingStruct                                 OnGround_Moving_65_807A66B64D7B3B2FCF080B833B8A6254;        // 0x02D0   (0x0090)  
	FRBANSettingStruct                                 OnGround_Crouch_Moving_61_CE0B8BFB4E3417C0F790F7AE38DD7735; // 0x0360   (0x0090)  
	FRBANSettingStruct                                 EmoteOrMelee_62_CFCF66B5492987CBD638EC98EB34D572;           // 0x03F0   (0x0090)  
	FRBANSettingStruct                                 Swimming_64_33CE87CE4D4F712B1384E29115845962;               // 0x0480   (0x0090)  
	FRBANSettingStruct                                 Front_End_63_C7A4562A48E9BC9B4CD34D963CFC6490;              // 0x0510   (0x0090)  
	FRBANSettingStruct                                 DBNO_68_2D70D4004D0E9B117F6CE9A09C362B74;                   // 0x05A0   (0x0090)  
	FRBANSettingStruct                                 DBNO_Carried_67_99829B99495FCFE3488A9A86B549ECE5;           // 0x0630   (0x0090)  
	FRBANSettingStruct                                 OnGround_Falling_66_CDAA0F4D476157E4137548BDCE8776F2;       // 0x06C0   (0x0090)  
	FRBANSettingStruct                                 Ziplining_75_BCCDB7E1431A4C174F1040ABC81FD8A8;              // 0x0750   (0x0090)  
	FRBANSettingStruct                                 Skydive_Surfing_74_408E65FF484AA54111E1ED8A69D8240D;        // 0x07E0   (0x0090)  
	FRBANSettingStruct                                 Riding_Standing_69_952A2A43408C37C44E4CBFAE3F3001B0;        // 0x0870   (0x0090)  
	FRBANSettingStruct                                 Riding_Moving_72_EE7A01794460B9753E5076A5A3B3080A;          // 0x0900   (0x0090)  
	FRBANSettingStruct                                 Riding_Moving_Targeting_73_2F57FD9E477C515D70B3DA9D75453357; // 0x0990   (0x0090)  
	FRBANSettingStruct                                 Tactical_Sprint_70_5B2273A1499D34BDEC52E6A8E3F274D4;        // 0x0A20   (0x0090)  
	FRBANSettingStruct                                 Rail_Grinding_71_DEEB00A04DB992DF5EEB40BD6518EA4E;          // 0x0AB0   (0x0090)  
};

/// Struct /Game/Animation/Libraries/WindGustSettingStruct.WindGustSettingStruct
/// Size: 0x0078 (0x000000 - 0x000078)
struct FWindGustSettingStruct
{ 
	float                                              MinTimeBetweenGusts_25_6CD0864B4078D8378C061197E9B1B094;    // 0x0000   (0x0004)  
	float                                              MaxTimeBetweenGusts_28_0D981B4E4039D5A0C6A4C78D6F09D510;    // 0x0004   (0x0004)  
	float                                              MinGustStrength_26_A5C4B017498D3154D76CECAB9AE7BDF2;        // 0x0008   (0x0004)  
	float                                              MaxGustStrength_29_DACF320B4C03C6BD248A8E9B7B867FC7;        // 0x000C   (0x0004)  
	float                                              MinGustDuration_27_E5761CE84E8E52EEBD663B9DC3A0906F;        // 0x0010   (0x0004)  
	float                                              MaxGustDuration_30_98974B1C4B5ABE4EA1CFF7A791319392;        // 0x0014   (0x0004)  
	float                                              WindTurbulenceScalarA_48_A343D5A54D704F5B249C8E907DA80101;  // 0x0018   (0x0004)  
	float                                              WindTurbulenceScalarB_47_E54C28B348B4C35A1D0817AFA9FF0423;  // 0x001C   (0x0004)  
	float                                              MinUpInterpSpeed_36_8E04A8E94B2040C7DBF93194733AC36A;       // 0x0020   (0x0004)  
	float                                              MaxUpInterpSpeed_37_5108D5FA40140A1AAD38459100B14261;       // 0x0024   (0x0004)  
	float                                              MinDownInterpSpeed_40_C3AD555846C2AEB9625C4E93B6758BB8;     // 0x0028   (0x0004)  
	float                                              MaxDownInterpSpeed_41_394B2B66448D9D21249A288C7DEC98F1;     // 0x002C   (0x0004)  
	FVector                                            WindFrequency_51_9F209DFA4F7AB96CE220578516F0B4CF;          // 0x0030   (0x0018)  
	FVector                                            WindAmplitude_54_E174BDEC415CE55F6A1475B799695475;          // 0x0048   (0x0018)  
	FVector                                            WindOffset_55_91DD775940222EE47FDA3BA8695E8FE9;             // 0x0060   (0x0018)  
};

/// Struct /Game/Animation/Libraries/WindGustParamsStruct.WindGustParamsStruct
/// Size: 0x0960 (0x000000 - 0x000960)
struct FWindGustParamsStruct
{ 
	FWindGustSettingStruct                             Skydive_GoingUp_28_C026BDA74BFBABA6672DFE8FFDAAFC1B;        // 0x0000   (0x0078)  
	FWindGustSettingStruct                             Skydive_FloatingDown_29_2CBF3D3F421785F8994502931454A81F;   // 0x0078   (0x0078)  
	FWindGustSettingStruct                             Skydive_DivingDown_30_EC7BEC4D406A8A98E60D7B9374C5E457;     // 0x00F0   (0x0078)  
	FWindGustSettingStruct                             Skydive_Parachuting_31_A88C4A0A407F497561D31287CB20250F;    // 0x0168   (0x0078)  
	FWindGustSettingStruct                             OnGround_Standing_32_267DB1464D0D3A29D99E94ADFCB4AFEC;      // 0x01E0   (0x0078)  
	FWindGustSettingStruct                             OnGround_Moving_33_807A66B64D7B3B2FCF080B833B8A6254;        // 0x0258   (0x0078)  
	FWindGustSettingStruct                             OnGround_Crouch_Moving_34_CE0B8BFB4E3417C0F790F7AE38DD7735; // 0x02D0   (0x0078)  
	FWindGustSettingStruct                             EmoteOrMelee_35_CFCF66B5492987CBD638EC98EB34D572;           // 0x0348   (0x0078)  
	FWindGustSettingStruct                             Swimming_36_33CE87CE4D4F712B1384E29115845962;               // 0x03C0   (0x0078)  
	FWindGustSettingStruct                             Front_End_37_C7A4562A48E9BC9B4CD34D963CFC6490;              // 0x0438   (0x0078)  
	FWindGustSettingStruct                             DBNO_41_0C046BF1406AB4B752DB3A99949FE3A3;                   // 0x04B0   (0x0078)  
	FWindGustSettingStruct                             DBNO_Carried_42_3E9FADC247359FEE88C7B4A3453449E6;           // 0x0528   (0x0078)  
	FWindGustSettingStruct                             OnGround_Falling_46_2CC5CD2149D12B7C53D91E8D6AA90C03;       // 0x05A0   (0x0078)  
	FWindGustSettingStruct                             Ziplining_47_B8BBEA804F8C515EA80FE7897BB99CF6;              // 0x0618   (0x0078)  
	FWindGustSettingStruct                             Skydive_Surfing_50_2B64886E4E6F0E8CFC180E81FDF37F62;        // 0x0690   (0x0078)  
	FWindGustSettingStruct                             Riding_Standing_55_206A781845EAC0A66D2BBC8981041DBD;        // 0x0708   (0x0078)  
	FWindGustSettingStruct                             Riding_Moving_56_963FD3424B0D070C81120599A5AED02A;          // 0x0780   (0x0078)  
	FWindGustSettingStruct                             Riding_Moving_Targeting_59_93868B48485365007E3BD8BD8A527B39; // 0x07F8   (0x0078)  
	FWindGustSettingStruct                             Tactical_Sprint_58_7E4BD4244308EE1199AA48ACF8871E68;        // 0x0870   (0x0078)  
	FWindGustSettingStruct                             Rail_Grinding_62_FF88FD5F4A9AB308E2F095B9F0657D82;          // 0x08E8   (0x0078)  
};

/// Struct /Game/Animation/Libraries/ClothSettingStruct.ClothSettingStruct
/// Size: 0x005C (0x000000 - 0x00005C)
struct FClothSettingStruct
{ 
	FVector                                            LinearVelocityScale_7_9CBE863E417FC965C07809A2FE55ADFD;     // 0x0000   (0x0018)  
	float                                              AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8;    // 0x0018   (0x0004)  
	float                                              FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B; // 0x001C   (0x0004)  
	FVector                                            GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E;        // 0x0020   (0x0018)  
	FVector2D                                          DragCoefficient_23_FE68F666411FF9F29BA84CB4BE726A52;        // 0x0038   (0x0010)  
	FVector2D                                          LiftCoefficient_24_BB285D994A5B3AFF167F4793D7ECA837;        // 0x0048   (0x0010)  
	FName                                              JointName_27_C74F3B2245EA319DE82A629FF3C17CCA;              // 0x0058   (0x0004)  
};

/// Struct /Game/Animation/Libraries/ClothParamsStruct.ClothParamsStruct
/// Size: 0x0780 (0x000000 - 0x000780)
struct FClothParamsStruct
{ 
	FClothSettingStruct                                Skydive_GoingUp_12_C026BDA74BFBABA6672DFE8FFDAAFC1B;        // 0x0000   (0x0060)  
	FClothSettingStruct                                Skydive_FloatingDown_10_2CBF3D3F421785F8994502931454A81F;   // 0x0060   (0x0060)  
	FClothSettingStruct                                Skydive_DivingDown_11_EC7BEC4D406A8A98E60D7B9374C5E457;     // 0x00C0   (0x0060)  
	FClothSettingStruct                                Skydive_Parachuting_13_A88C4A0A407F497561D31287CB20250F;    // 0x0120   (0x0060)  
	FClothSettingStruct                                OnGround_Standing_15_267DB1464D0D3A29D99E94ADFCB4AFEC;      // 0x0180   (0x0060)  
	FClothSettingStruct                                OnGround_Moving_16_807A66B64D7B3B2FCF080B833B8A6254;        // 0x01E0   (0x0060)  
	FClothSettingStruct                                OnGround_Crouch_Moving_27_CE0B8BFB4E3417C0F790F7AE38DD7735; // 0x0240   (0x0060)  
	FClothSettingStruct                                EmoteOrMelee_25_CFCF66B5492987CBD638EC98EB34D572;           // 0x02A0   (0x0060)  
	FClothSettingStruct                                Swimming_3_33CE87CE4D4F712B1384E29115845962;                // 0x0300   (0x0060)  
	FClothSettingStruct                                Front_End_20_C7A4562A48E9BC9B4CD34D963CFC6490;              // 0x0360   (0x0060)  
	FClothSettingStruct                                DBNO_30_2D70D4004D0E9B117F6CE9A09C362B74;                   // 0x03C0   (0x0060)  
	FClothSettingStruct                                DBNO_Carried_32_99829B99495FCFE3488A9A86B549ECE5;           // 0x0420   (0x0060)  
	FClothSettingStruct                                OnGround_Falling_36_CDAA0F4D476157E4137548BDCE8776F2;       // 0x0480   (0x0060)  
	FClothSettingStruct                                Ziplining_39_BCCDB7E1431A4C174F1040ABC81FD8A8;              // 0x04E0   (0x0060)  
	FClothSettingStruct                                Skydive_Surfing_42_408E65FF484AA54111E1ED8A69D8240D;        // 0x0540   (0x0060)  
	FClothSettingStruct                                Riding_Standing_46_952A2A43408C37C44E4CBFAE3F3001B0;        // 0x05A0   (0x0060)  
	FClothSettingStruct                                Riding_Moving_47_EE7A01794460B9753E5076A5A3B3080A;          // 0x0600   (0x0060)  
	FClothSettingStruct                                Riding_Moving_Targeting_52_2F57FD9E477C515D70B3DA9D75453357; // 0x0660   (0x0060)  
	FClothSettingStruct                                Tactical_Sprint_51_5B2273A1499D34BDEC52E6A8E3F274D4;        // 0x06C0   (0x0060)  
	FClothSettingStruct                                Rail_Grinding_55_DEEB00A04DB992DF5EEB40BD6518EA4E;          // 0x0720   (0x0060)  
};

/// Struct /Game/Animation/Libraries/ClothCoreSettingStruct.ClothCoreSettingStruct
/// Size: 0x0080 (0x000000 - 0x000080)
struct FClothCoreSettingStruct
{ 
	FVector2D                                          EdgeStiffness_28_9A24DA0842E21D5736699499F1DE1171;          // 0x0000   (0x0010)  
	FVector2D                                          BendingStiffness_29_6CD0864B4078D8378C061197E9B1B094;       // 0x0010   (0x0010)  
	FVector2D                                          AreaStiffness_30_0D981B4E4039D5A0C6A4C78D6F09D510;          // 0x0020   (0x0010)  
	FVector2D                                          TetherStiffness_24_A5C4B017498D3154D76CECAB9AE7BDF2;        // 0x0030   (0x0010)  
	float                                              CollisionThickness_14_DACF320B4C03C6BD248A8E9B7B867FC7;     // 0x0040   (0x0004)  
	float                                              FrictionCoefficient_15_E5761CE84E8E52EEBD663B9DC3A0906F;    // 0x0044   (0x0004)  
	float                                              SelfCollisionThickness_16_98974B1C4B5ABE4EA1CFF7A791319392; // 0x0048   (0x0004)  
	float                                              DampingCoefficient_17_A343D5A54D704F5B249C8E907DA80101;     // 0x004C   (0x0004)  
	float                                              LocalDampingCoefficient_33_993AFAEA430EEBF424A7D0B8BB57CFB5; // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector2D                                          AnimDriveStiffness_27_E54C28B348B4C35A1D0817AFA9FF0423;     // 0x0058   (0x0010)  
	FVector2D                                          AnimDriveDamping_26_F9EDBF5240E75A4905AFA1A8240922C8;       // 0x0068   (0x0010)  
	int32_t                                            NumberIterations_21_8E04A8E94B2040C7DBF93194733AC36A;       // 0x0078   (0x0004)  
	int32_t                                            NumberSubsteps_23_5108D5FA40140A1AAD38459100B14261;         // 0x007C   (0x0004)  
};

/// Struct /Game/Animation/Libraries/WindGustLocalSettingStruct.WindGustLocalSettingStruct
/// Size: 0x0014 (0x000000 - 0x000014)
struct FWindGustLocalSettingStruct
{ 
	float                                              ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171;            // 0x0000   (0x0004)  
	float                                              TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D;       // 0x0004   (0x0004)  
	float                                              GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A;           // 0x0008   (0x0004)  
	float                                              GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406;           // 0x000C   (0x0004)  
	float                                              FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618; // 0x0010   (0x0004)  
};

/// Struct /Game/Animation/Libraries/GravityOverrideSettingStruct.GravityOverrideSettingStruct
/// Size: 0x0064 (0x000000 - 0x000064)
struct FGravityOverrideSettingStruct
{ 
	FVector                                            WindFrequency_28_9CBE863E417FC965C07809A2FE55ADFD;          // 0x0000   (0x0018)  
	FVector                                            WindAmplitude_31_6A3DFE4A481AD4D7CB18D79F95CC88E8;          // 0x0018   (0x0018)  
	FVector                                            WindOffset_32_C5F4D16F48D0BEDC3F0FA38B2648511B;             // 0x0030   (0x0018)  
	FVector                                            GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E;        // 0x0048   (0x0018)  
	FName                                              JointName_27_C74F3B2245EA319DE82A629FF3C17CCA;              // 0x0060   (0x0004)  
};

/// Struct /Game/Animation/Libraries/GravityOverrideParamsStruct.GravityOverrideParamsStruct
/// Size: 0x07B8 (0x000000 - 0x0007B8)
struct FGravityOverrideParamsStruct
{ 
	FGravityOverrideSettingStruct                      Skydive_GoingUp_28_C026BDA74BFBABA6672DFE8FFDAAFC1B;        // 0x0000   (0x0068)  
	FGravityOverrideSettingStruct                      Skydive_FloatingDown_29_2CBF3D3F421785F8994502931454A81F;   // 0x0068   (0x0068)  
	FGravityOverrideSettingStruct                      Skydive_DivingDown_30_EC7BEC4D406A8A98E60D7B9374C5E457;     // 0x00D0   (0x0068)  
	FGravityOverrideSettingStruct                      Skydive_Parachuting_31_A88C4A0A407F497561D31287CB20250F;    // 0x0138   (0x0068)  
	FGravityOverrideSettingStruct                      OnGround_Standing_32_267DB1464D0D3A29D99E94ADFCB4AFEC;      // 0x01A0   (0x0068)  
	FGravityOverrideSettingStruct                      OnGround_Moving_33_807A66B64D7B3B2FCF080B833B8A6254;        // 0x0208   (0x0068)  
	FGravityOverrideSettingStruct                      EmoteOrMelee_34_CFCF66B5492987CBD638EC98EB34D572;           // 0x0270   (0x0068)  
	FGravityOverrideSettingStruct                      Swimming_35_33CE87CE4D4F712B1384E29115845962;               // 0x02D8   (0x0068)  
	FGravityOverrideSettingStruct                      Front_End_36_C7A4562A48E9BC9B4CD34D963CFC6490;              // 0x0340   (0x0068)  
	FGravityOverrideSettingStruct                      DBNO_40_83703B55467F014D644D02B56709A2E6;                   // 0x03A8   (0x0068)  
	FGravityOverrideSettingStruct                      DBNO_Carried_41_2C3D52AF4B7EB85DBA7C108948E58B3A;           // 0x0410   (0x0068)  
	FGravityOverrideSettingStruct                      OnGround_Falling_45_DC16623B41084152717ACBAF5DCE8A91;       // 0x0478   (0x0068)  
	FGravityOverrideSettingStruct                      Ziplining_46_0F05199D45821770F22E0B957551FEB7;              // 0x04E0   (0x0068)  
	FGravityOverrideSettingStruct                      Skydive_Surfing_49_5869AA5846BEE7C351769C951D56A34F;        // 0x0548   (0x0068)  
	FGravityOverrideSettingStruct                      Riding_Standing_54_C62E341C48CF5BA85ACB799EE3C7653E;        // 0x05B0   (0x0068)  
	FGravityOverrideSettingStruct                      Riding_Moving_55_86CD46C94E5B465A175A6B939DB193BD;          // 0x0618   (0x0068)  
	FGravityOverrideSettingStruct                      Riding_Moving_Targeting_58_38650D3547535FB293E61CBCF1B753BF; // 0x0680   (0x0068)  
	FGravityOverrideSettingStruct                      Tactical_Sprint_57_7B4700A94AF4B34179554C8EC4EB52E0;        // 0x06E8   (0x0068)  
	FGravityOverrideSettingStruct                      Rail_Grinding_61_97CB95534C5559BAF29FE49C016359FA;          // 0x0750   (0x0068)  
};

