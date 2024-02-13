
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_R.AnimNotify_Player_HandSplash_R_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_Player_HandSplash_R_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_R.AnimNotify_Player_HandSplash_R_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
/// Size: 0x0011 (0x000038 - 0x000049)
class UBP_AnimNotify_CameraShake_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 73;

public:
	CMember(class UClass*)                             Shake_BP                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(double)                                    Shake_Scale                                                 OFFSET(get<double>, {0x40, 8, 0, 0})
	CMember(ECameraShakePlaySpace)                     Shake_Space                                                 OFFSET(get<T>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/MainPlayer/Locomotion/Medium/Male/Jog/HeavyWeapon/BP_GCSteps.BP_GCSteps_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_GCSteps_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_HolsterWeapon_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      PlayEquipAnim                                               OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FName)                                     AnimNotifyStateHolster                                      OFFSET(getStruct<T>, {0x34, 4, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.CanApplyHolster
	// bool CanApplyHolster(FName& HolsterId);                                                                                  // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UAnimNotify_PlaySoundWithCondition_C : public UFortAnimNotify_PlaySoundConditional
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C.ShouldTriggerAnimNotify
	// bool ShouldTriggerAnimNotify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);                // [0x130d900] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C
/// Size: 0x0040 (0x000038 - 0x000078)
class UAnimNotify_FootStep_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   FootIndex                                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FFortPlayerFoleyContextSettings)           PreviewSettings                                             OFFSET(getStruct<T>, {0x40, 56, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C.AudioPreview
	// void AudioPreview(class AActor* InActor);                                                                                // [0x130d900] Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UAnimNotify_FootStep_Left_C : public UAnimNotify_FootStep_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UAnimNotify_FootStep_Right_C : public UAnimNotify_FootStep_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_Player_HandSplash_L_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
/// Size: 0x1620 (0x000740 - 0x001D60)
class UGameplay_FaceSystem_StateMachine_AnimBP_C : public UCCP_AnimInstance_Head_GameplayFaceSystemStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7520;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x740, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x748, 20, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x760, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x768, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x770, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x790, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x7B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x7E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x808, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x830, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x858, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x880, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0x8A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0x8D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0x8F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0x920, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0x948, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0x970, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0x998, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0x9C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0x9E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0xA10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0xA38, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0xA60, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0xAA8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0xAC8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xB10, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xB30, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xB78, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xB98, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0xBE0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xC00, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0xC48, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0xC68, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0xCD8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xCF8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0xD40, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0xD60, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0xDD0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0xDF0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0xE38, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0xE58, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0xEA0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0xEC0, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0xF88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0xFB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0xFD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x1000, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x1028, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x1050, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x1078, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x10A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x10C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x10F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x1118, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x1140, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x1168, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x1190, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x11B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x11E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x1208, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x1230, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x1258, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x1280, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x12A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x12D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x12F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x1320, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x1348, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x1370, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x1398, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x13C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x13E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x1410, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1438, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x1480, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x14A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x14E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x1508, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x1550, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x1570, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x15B8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x15D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x1620, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x1640, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x1688, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x16A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x16F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x1710, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x1758, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x1778, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x17C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x17E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x1828, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x1848, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x1890, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x18B0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x18F8, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x1918, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x1988, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x19A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x19F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x1A10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x1A58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x1A78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x1AC0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x1AE0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x1B50, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x1B70, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x1BB8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x1BD8, 200, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   OFFSET(getStruct<T>, {0x1CA0, 192, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x130d900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP
	// void ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32_t EntryPoint);                                       // [0x130d900] Final                
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HightBeam_HandFX_HologramHide.AnimNotifyState_HightBeam_HandFX_HologramHide_C
/// Size: 0x0000 (0x0000A2 - 0x0000A2)
class UAnimNotifyState_HightBeam_HandFX_HologramHide_C : public UFN_TimedNiagaraNotify_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 162;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HightBeam_HandFX_HologramHide.AnimNotifyState_HightBeam_HandFX_HologramHide_C.Received_NotifyTick
	// bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HideWeapon.AnimNotifyState_HideWeapon_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_HideWeapon_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HideWeapon.AnimNotifyState_HideWeapon_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HideWeapon.AnimNotifyState_HideWeapon_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAnimationBPFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Vehicle Dynamics Scaler Function
	// void Vehicle Dynamics Scaler Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, bool Debug, class UObject* __WorldContext, double& InVehicleHeadScaleAlpha, double& InVehicleHeadSimAlpha, double& InVehicleSkirtScaleAlpha, double& InVehicleSkirtSimAlpha); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function Nativization Wrapper
	// void Cloth Controller Function Nativization Wrapper(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString& ClothingAssetName, FClothControllerClothParameterMap& Cloth Paramaters, FClothCoreSettings& Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_Speed_Limit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, float DeltaTime, float GameTimeInSeconds, FClothControllerWindParameterMap& WindGustsParams, FWindGustSettings& WindGustLocalSettings, class UObject* __WorldContext, FName& CharacterStateOut, FClothParameters& Cloth Settings Out, FWindGustSettings& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Convert To Nativized Parameters
	// void Cloth Controller Convert To Nativized Parameters(FClothParamsStruct ClothParametersStruct, FWindGustParamsStruct WindParametersStruct, FClothCoreSettingStruct Cloth Core Settings, FWindGustLocalSettingStruct Wind Gust Settings, FName Character State Name, class UObject* __WorldContext, FClothParameters& Cloth Parameters Nativized, FWindGustParameters& Wind Parameters Nativized, FClothCoreSettings& ClothCoreSettings, FWindGustSettings& Wind Settings Nativized); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ConvertToNativizedWindParameters
	// void ConvertToNativizedWindParameters(FWindGustSettingStruct& WindGustSettingStruct, class UObject* __WorldContext, FWindGustParameters& WindGustParameters); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ConvertToNativizedClothParameters
	// void ConvertToNativizedClothParameters(FClothSettingStruct& ClothSettingStruct, class UObject* __WorldContext, FClothParameters& ClothParameters); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get Joint Location Relative to Bone
	// void Get Joint Location Relative to Bone(FName Target Joint, FName Relative Joint, FVector Offset, class UMeshComponent* SkelMeshComponent, bool Debug Draw, class UObject* __WorldContext, FVector& Joint Location Vector); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cape Spine05 Pelvis Rotation Function
	// void Cape Spine05 Pelvis Rotation Function(class USkinnedMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, FRotator& Rotate Z Output); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Function
	// void Separated Cloth Control Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, class UObject* __WorldContext, FString& CurrentStateOut, FClothCoreSettingStruct& Cloth Core Settings Out, FClothSettingStruct& Cloth Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Write To Instance
	// void Separated Cloth Control Write To Instance(class UCustomCharacterPartAnimInstance* Character Part Anim Instance, FString Clothing Asset Name, FClothCoreSettingStruct Cloth Core Settings, FClothSettingStruct Cloth Settings, FVector Gust Strength - Wind Velocity, FName Joint Name, class UObject* __WorldContext); // [0x130d900] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Calculate Parameters
	// void Separated Cloth Control Calculate Parameters(class UCustomCharacterPartAnimInstance* InCharacterPartAnimInstance, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct InWindGustParams, FWindGustLocalSettingStruct InWindGustLocalSettings, class UObject* __WorldContext, FString& OutCurrentState, FClothCoreSettingStruct& OutClothCoreSettings, FClothSettingStruct& OutClothSettings, FWindGustSettingStruct& OutWindGustSettings, FWindGustLocalSettingStruct& OutWindGustLocalSettings, FVector& OutGustStrength, FVector& LinearVelVector-DELETE LATER); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Wind Gust Function
	// void Separated Cloth Control Wind Gust Function(double DeltaTime, double GameTimeInSeconds, FName JointName, FWindGustSettingStruct WindGustSettings, FWindGustLocalSettingStruct WindGustLocalSettings, class UObject* __WorldContext, FVector& GustStrengthWindVelocity Out, FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set WPO Regional Function
	// void Set WPO Regional Function(class UMaterialInstanceDynamic* Material, class UMaterialInstanceDynamic* Overlay Material, class USkeletalMeshComponent* Skeletal Mesh, FName Velocity Transform, double Velocity Interp Speed, FName Collision Transform, TEnumAsByte<EAxis> Collision Transform Axis, bool Invert Collision Transform Axis, double Delta Time X, FVector& Previous Velocity Transform Location, FVector& Previous Velocity Transform Velocity, int32_t Region, class UObject* __WorldContext); // [0x130d900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get WPO Regional Param Names Function
	// void Get WPO Regional Param Names Function(int32_t& Region, class UObject* __WorldContext, FName& Velocity, FName& Bone Position, FName& Bone Vector); // [0x130d900] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set WPO Globals Function
	// void Set WPO Globals Function(class UMaterialInstanceDynamic* Material, class UMaterialInstanceDynamic* Overlay Material, class USkeletalMeshComponent* Skeletal Mesh, FName Local Noise Reference Transform, double Local Noise Offset Multiplier, FVector& Local Noise Transform  Location, FVector& Local Noise Offset, FName Local Turbulence Vector Transform, TEnumAsByte<EAxis> Local Turbulence Vector Transform Axis, class UObject* __WorldContext); // [0x130d900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get  Motion Vector For Transform Function
	// void Get  Motion Vector For Transform Function(class USceneComponent* Skeletal Mesh, FName Transform Name, FVector& Previous Transform Location, class UObject* __WorldContext, FVector& Transform Motion Vector, FVector& Transform Location, FTransform& Transform); // [0x130d900] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Debug Cloth Teleport Threshold Function
	// void Debug Cloth Teleport Threshold Function(double MinDistance, double MinRotation, class USceneComponent* SkelMeshComponent, bool PrintToScreen, FName BoneName, FVector& InVector, FRotator PawnDeltaRotation, double PrintToScreenDuration, class UObject* __WorldContext, double& Distance, double& Rotation); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Helper Scale For Player Movement
	// void Cloth Controller Helper Scale For Player Movement(FVector LinearVelScale, double PlayerFwdVector, double PlayerFwdVectorJump, double ClothUpX, double ClothUpZ, class UObject* __WorldContext, FVector& LinearVelVectorOut); // [0x130d900] Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Scale Joint Rotation Function
	// void Scale Joint Rotation Function(FRotator Scale, FName TargetBone, FName ReferenceBone, class USkinnedMeshComponent* SkelMeshComponent, class UObject* __WorldContext, FRotator& FinalRotation, FRotator& OriginalRotation); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Adjust Emote Vehicle Wheel Rotation
	// void Adjust Emote Vehicle Wheel Rotation(class AActor* Owning Actor, double CurrentWheelRotation, double DeltaTime, double CurrentActorRotation, class UObject* __WorldContext, double& NewActorRotation, double& NewWheelRotation); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Setter Function
	// void Gravity Override Setter Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class UMeshComponent* SkelMeshComponent, FGravityOverrideSettingStruct GravityOverride Settings, double GameTimeInSeconds, class UObject* __WorldContext, FGravityOverrideSettingStruct& GravityOverride Settings Out, FVector& GravityOverride Out); // [0x130d900] Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override State Function
	// void Gravity Override State Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, FGravityOverrideParamsStruct& GravityOverrideParams, FRBANParamsStruct& RBAN Params, bool DebugDraw, FName DebugJointName, class UObject* __WorldContext, FVector& GravityOverride, FString& CurrentStateOut, FGravityOverrideSettingStruct& GravityOverrideSettingsOut, FRBANSettingStruct& RBAN SettingsOut); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.FN_PSDPoseReaderFNC
	// void FN_PSDPoseReaderFNC(FString startJnt, FString endJnt, FString poseJnt, double Angle, bool Debug, class USkeletalMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, double& pose_output); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Wind Gust Control Function
	// void Wind Gust Control Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double DeltaTime, double GameTimeInSeconds, FName JointName, FWindGustSettingStruct WindGustSettings, FWindGustLocalSettingStruct WindGustLocalSettings, class UObject* __WorldContext, FVector& GustStrengthWindVelocity Out, FWindGustLocalSettingStruct& WindGustLocalSettingsOut); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.WindGustGeneratorFunction
	// void WindGustGeneratorFunction(double DeltaTime, FWindGustSettingStruct GustSettings, FWindGustLocalSettingStruct ClothGustLocalSettings, class UObject* __WorldContext, double& GustStrength - WindVelocity, FWindGustLocalSettingStruct& ClothGustLocalSettingsOut); // [0x130d900] Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Play Transformation Montage
	// void Play Transformation Montage(class AFortPlayerPawn* FortPlayerPawn, class UObject* __WorldContext);                  // [0x130d900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Clear Transformation Montage
	// void Clear Transformation Montage(class AFortPlayerPawn* FortPlayerPawn, class UObject* __WorldContext);                 // [0x130d900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set Transformation Montage
	// void Set Transformation Montage(class AFortPlayerPawn* FortPlayerPawn, class UAnimMontage* Montage, double StartTime, class UObject* __WorldContext); // [0x130d900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Setter Function
	// void Cloth Controller Setter Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FClothSettingStruct Cloth Settings, class UObject* __WorldContext, FClothSettingStruct& Cloth Settings Out); // [0x130d900] Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function
	// void Cloth Controller Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, FString ClothingAssetName, FClothParamsStruct Cloth Paramaters, FClothCoreSettingStruct Cloth Core Settings, FVector ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, FWindGustParamsStruct WindGustsParams, FWindGustLocalSettingStruct WindGustLocalSettings, class UObject* __WorldContext, FString& CurrentStateOut, FClothSettingStruct& Cloth Settings Out, FClothCoreSettingStruct& Cloth Core Settings Out, FWindGustSettingStruct& WindGustSettings Out, FWindGustLocalSettingStruct& WindGustLocalSettings Out, FVector& GustStrength - WindVelocityOut, FVector& LinearVelVector-DELETE LATER); // [0x130d900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.RandomRotatorFunction
	// void RandomRotatorFunction(double GameTimeInSeconds, double PerlinScale, FRotator Frequency, FRotator Amplitude, FRotator Offset, double TimeOffset, class UObject* __WorldContext, FRotator& RandomRotator); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Player Movement Function
	// void Player Movement Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double X Dot Product, double Y Dot Product, double Z Dot Product, bool DrawDebug, double Debug Scalar, class UObject* __WorldContext, double& X Movement, double& Y Movement, double& Z Movement); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Random Vector Function
	// void Random Vector Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class UMeshComponent* SkelMeshComponent, FName JointName, double GameTimeInSeconds, double TimeOffset, double PerlinScale, FVector Frequency, FVector Amplitude, FVector Offset, class UObject* __WorldContext, FVector& VectorOut); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawVectorFromJointFunction
	// void DrawVectorFromJointFunction(class USceneComponent* SkelMeshComponent, FName JointName, FVector LineEnd, FVector JointOffset, FLinearColor LineColor, double Thickness, class UObject* __WorldContext); // [0x130d900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawJointDebugFunction
	// void DrawJointDebugFunction(class USceneComponent* SkelMeshComponent, FVector JointOffset, TArray<FName>& JointName, double Scale, double duration, double Thickness, bool DebugDraw, class UObject* __WorldContext); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ComplexSimSpaceFunction
	// void ComplexSimSpaceFunction(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double InterpSpeedMax, double PawnSpeedMax, double RInterpErrorTolerance, double DeltaTime, bool DebugDraw, FRotator sim_space_rotation_in, bool inComponentSpaceIn, bool inComponentSpaceLastFrameIn, bool lockedOnSimSpaceIn, double InterpSpeedIn, class UObject* __WorldContext, FRotator& sim_space_rotation, bool& inComponentSpaceOut, bool& inComponentSpaceLastFrameOut, bool& lockedOnSimSpaceOut, double& InterpSpeedOut); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Function
	// void Gravity Override Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, FVector WindFreq, FVector WindAmp, FVector WindOffset, FVector GoingUpGravityOverride, FVector ComingDownGravityOverride, FVector DivingDownGravityOverride, FVector ParachuteOpenedGravityOverride, FVector GroundWindFreq, FVector GroundWindAmp, FVector GroundWindOffset, FVector OnGroundGravityOverride, FVector SwimmingGravityOverride, FName JointName, class UObject* __WorldContext, FVector& GravityOverride); // [0x130d900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
/// Size: 0x0068 (0x000030 - 0x000098)
class UAnimNotifyState_AttachAsset_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FAssetAttachment)                          Attachment                                                  OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	CMember(class UAnimSequence*)                      Animation                                                   OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      Looping                                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(double)                                    PlayRate                                                    OFFSET(get<double>, {0x70, 8, 0, 0})
	SMember(FGameplayTagContainer)                     DoNotAttachTagContainer                                     OFFSET(getStruct<T>, {0x78, 32, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C
/// Size: 0x0010 (0x000030 - 0x000040)
class UAnimNotifyState_StopMontageGroup_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     GroupNameToStop                                             OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(double)                                    BlendOutTime                                                OFFSET(get<double>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
/// Size: 0x0028 (0x000038 - 0x000060)
class UAnimNotify_PlayForceFeedback_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UForceFeedbackEffect*)               ForceFeedbackTemplate                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UForceFeedbackEffect*)               ForceFeedbackFarTemplate                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bPlayAtWorldLocation                                        OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(double)                                    InnerRadius                                                 OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    OuterRadius                                                 OFFSET(get<double>, {0x58, 8, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_DisablePawnRotation_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_EliminationBotM2_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_TeleportFinished_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_SyncPettingCreature_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.GetRiderPettingMontage
	// void GetRiderPettingMontage(class AActor* RiderActor, class UAnimMontage*& RiderPettingMontage);                         // [0x130d900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x130d900] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C
/// Size: 0x4EF8 (0x000AF0 - 0x0059E8)
class UBoarRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 23016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAF0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0xAF8, 144, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0xB88, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xB90, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0xB98, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0xBB8, 176, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0xC68, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0xD90, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0xEB8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0xED8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0xEF8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone3                                   OFFSET(getStruct<T>, {0x1020, 296, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1148, 200, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x1210, 248, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK1                                        OFFSET(getStruct<T>, {0x1308, 248, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0x1400, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x1470, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x1490, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x1540, 120, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0x15B8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x15D8, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x15F8, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone4                                   OFFSET(getStruct<T>, {0x1640, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone5                                   OFFSET(getStruct<T>, {0x1768, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone6                                   OFFSET(getStruct<T>, {0x1890, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone7                                   OFFSET(getStruct<T>, {0x19B8, 296, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x1AE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x1B08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x1B30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x1B58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x1B80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x1BA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x1BD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0x1BF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0x1C20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0x1C48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0x1C70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0x1C98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0x1CC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0x1CE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0x1D10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0x1D38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0x1D60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0x1D88, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x1DB0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x1DF8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x1E40, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x1E88, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0x1EA8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0x1EF0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1F38, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x1F80, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0x1FA0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x1FE8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0x2030, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x2078, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x20C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0x2108, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x2128, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0x2170, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x2190, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x2200, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x2248, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x2310, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x2358, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x23A0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x23C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x2408, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0x2428, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x2450, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x2478, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x24A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x24C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x24F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x2518, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x2540, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x2568, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x25B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x25D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x2618, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x2638, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x2680, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x26A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x26E8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x2708, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x2730, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x27F8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x2818, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x2860, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x2880, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x28C8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x28E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x2930, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2950, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x2978, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x2A40, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x2A60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x2A88, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x2AB0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x2AF8, 32, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x2B18, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x2B38, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x2C00, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x2CC8, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x2D38, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x2D80, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x2DC8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x2E10, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x2E58, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x2EC8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x2F90, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x2FB0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x2FF8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x3018, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x30E0, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x31D0, 40, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x31F8, 280, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0x3310, 280, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend1                             OFFSET(getStruct<T>, {0x3428, 240, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x3518, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x3540, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x3568, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x3590, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x35B8, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x35D8, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x3648, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x3668, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3690, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x36B0, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x3778, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x37F0, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose2                               OFFSET(getStruct<T>, {0x3818, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x3890, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose5                                OFFSET(getStruct<T>, {0x38B8, 40, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace1                     OFFSET(getStruct<T>, {0x38E0, 280, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        OFFSET(getStruct<T>, {0x39F8, 208, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace2                     OFFSET(getStruct<T>, {0x3AC8, 280, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x3BE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x3C08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x3C30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x3C58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x3C80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x3CA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x3CD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x3CF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x3D20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x3D48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x3D70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x3D98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x3DC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x3DE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x3E10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x3E38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3E60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3E88, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3EB0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x3EF8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x3F40, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3F88, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3FA8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3FF0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x4038, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x4080, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x40A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x40E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x4108, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x4150, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x4198, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x41E0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x4200, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x4228, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x4250, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x4278, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x42A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x42C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x42F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult58                            OFFSET(getStruct<T>, {0x4318, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x4340, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x4388, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x43A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x43F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x4410, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x4458, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x4478, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x44C0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult59                            OFFSET(getStruct<T>, {0x44E0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x4508, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x45D0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x45F0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x4638, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x4658, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x46A0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x46C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x4708, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult60                            OFFSET(getStruct<T>, {0x4728, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x4750, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult34                                 OFFSET(getStruct<T>, {0x4818, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x4838, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult35                                 OFFSET(getStruct<T>, {0x4880, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x48A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x48E8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x4930, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer39                              OFFSET(getStruct<T>, {0x4978, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x49C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult36                                 OFFSET(getStruct<T>, {0x4A08, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer40                              OFFSET(getStruct<T>, {0x4A28, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult37                                 OFFSET(getStruct<T>, {0x4A70, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer41                              OFFSET(getStruct<T>, {0x4A90, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool13                             OFFSET(getStruct<T>, {0x4AD8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer42                              OFFSET(getStruct<T>, {0x4B20, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x4B68, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool14                             OFFSET(getStruct<T>, {0x4BD8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult38                                 OFFSET(getStruct<T>, {0x4C20, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x4C40, 200, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone8                                   OFFSET(getStruct<T>, {0x4D08, 296, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult61                            OFFSET(getStruct<T>, {0x4E30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult62                            OFFSET(getStruct<T>, {0x4E58, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer43                              OFFSET(getStruct<T>, {0x4E80, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult39                                 OFFSET(getStruct<T>, {0x4EC8, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x4EE8, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult40                                 OFFSET(getStruct<T>, {0x4EF8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine8                                 OFFSET(getStruct<T>, {0x4F18, 200, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive1                       OFFSET(getStruct<T>, {0x4FE0, 208, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x50B0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x5178, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x51E8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x52B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x5320, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool15                             OFFSET(getStruct<T>, {0x5330, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool16                             OFFSET(getStruct<T>, {0x5378, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x53C0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x5430, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool17                             OFFSET(getStruct<T>, {0x54A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult41                                 OFFSET(getStruct<T>, {0x54E8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine9                                 OFFSET(getStruct<T>, {0x5508, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0x55D0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose2                              OFFSET(getStruct<T>, {0x55F0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose3                              OFFSET(getStruct<T>, {0x56A0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0x5750, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose4                              OFFSET(getStruct<T>, {0x5770, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose5                              OFFSET(getStruct<T>, {0x5820, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose6                              OFFSET(getStruct<T>, {0x58D0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root4                                         OFFSET(getStruct<T>, {0x5980, 32, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayer                                                  OFFSET(get<T>, {0x59A0, 8, 0, 0})
	CMember(class AFortPawn*)                          WildlifePawn                                                OFFSET(get<T>, {0x59A8, 8, 0, 0})
	DMember(bool)                                      State_Rule_Moving_Idle                                      OFFSET(get<bool>, {0x59B0, 1, 0, 0})
	DMember(bool)                                      Is_Jumping                                                  OFFSET(get<bool>, {0x59B1, 1, 0, 0})
	DMember(bool)                                      Is_Falling                                                  OFFSET(get<bool>, {0x59B2, 1, 0, 0})
	DMember(bool)                                      Is_Surface_Swimming                                         OFFSET(get<bool>, {0x59B3, 1, 0, 0})
	DMember(double)                                    BodyRoll                                                    OFFSET(get<double>, {0x59B8, 8, 0, 0})
	DMember(double)                                    BoarSpeed2D                                                 OFFSET(get<double>, {0x59C0, 8, 0, 0})
	DMember(bool)                                      Is_Moving_Backwards                                         OFFSET(get<bool>, {0x59C8, 1, 0, 0})
	DMember(bool)                                      Is_Boosting                                                 OFFSET(get<bool>, {0x59C9, 1, 0, 0})
	DMember(bool)                                      Can_Transition_Fall_To_Moving                               OFFSET(get<bool>, {0x59CA, 1, 0, 0})
	DMember(bool)                                      Can_Transition_Fall_To_Idle                                 OFFSET(get<bool>, {0x59CB, 1, 0, 0})
	DMember(bool)                                      Can_Transition_Idle_To_Moving                               OFFSET(get<bool>, {0x59CC, 1, 0, 0})
	DMember(bool)                                      Is_Turning_in_Place                                         OFFSET(get<bool>, {0x59CD, 1, 0, 0})
	DMember(double)                                    Turn_in_Place_Angle_Delta                                   OFFSET(get<double>, {0x59D0, 8, 0, 0})
	DMember(bool)                                      Should_Play_Stop_Backwards                                  OFFSET(get<bool>, {0x59D8, 1, 0, 0})
	DMember(bool)                                      Play_Land_Additive                                          OFFSET(get<bool>, {0x59D9, 1, 0, 0})
	DMember(bool)                                      Was_Turning_Right                                           OFFSET(get<bool>, {0x59DA, 1, 0, 0})
	DMember(double)                                    Backwards_Play_Rate                                         OFFSET(get<double>, {0x59E0, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                               // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                              // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x130d900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Boar
	// void GetMainAnimBPData_Boar(class UObject* AnimInstance);                                                                // [0x130d900] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE(); // [0x130d900] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);                                        // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.ExecuteUbergraph_BoarRidingPlayerLayerAnimBP
	// void ExecuteUbergraph_BoarRidingPlayerLayerAnimBP(int32_t EntryPoint);                                                   // [0x130d900] Final                
};

/// Class /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C
/// Size: 0x4AE0 (0x000AF0 - 0x0055D0)
class UWolfRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 21968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAF0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0xAF8, 168, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0xBA0, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xBA8, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0xBB0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0xBD0, 176, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0xC80, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0xDA8, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0xED0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0xEF0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0xF10, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0xF80, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x1048, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x1068, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x1118, 120, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0x1190, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x11B0, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x11D0, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0x1218, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone3                                   OFFSET(getStruct<T>, {0x1340, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone4                                   OFFSET(getStruct<T>, {0x1468, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone5                                   OFFSET(getStruct<T>, {0x1590, 296, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x16B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x16E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x1708, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x1730, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x1758, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x1780, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x17A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0x17D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0x17F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0x1820, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0x1848, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0x1870, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0x1898, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0x18C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0x18E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0x1910, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0x1938, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0x1960, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x1988, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x19D0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x1A18, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x1A60, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0x1A80, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0x1AC8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1B10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x1B58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0x1B78, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0x1BC0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x1C08, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x1C50, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x1C98, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0x1CE0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x1D00, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0x1D48, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1D68, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1DB0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x1E20, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x1EE8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x1F30, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x1F78, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x1F98, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x1FE0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0x2000, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x2028, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x2050, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x2078, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x20A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x20C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x20F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x2118, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x2140, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x2188, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x21A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x21F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x2210, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x2258, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x2278, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x22C0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x22E0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x2308, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x23D0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x23F0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x2438, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x2458, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x24A0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x24C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x2508, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2528, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x2550, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x2618, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x2638, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x2680, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x26C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x26F0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x2718, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x2760, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x2780, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x2790, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x27B0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x2878, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x2940, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x2988, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x29D0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x2A40, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x2B08, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x2B78, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x2B98, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x2BE0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x2C00, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x2CC8, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x2DB8, 40, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x2DE0, 280, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0x2EF8, 280, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend1                             OFFSET(getStruct<T>, {0x3010, 240, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x3100, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x3128, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x3150, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x3178, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x31A0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x31C0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x3230, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x3250, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3278, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3298, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x3360, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x33D8, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose2                               OFFSET(getStruct<T>, {0x3400, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x3478, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose5                                OFFSET(getStruct<T>, {0x34A0, 40, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        OFFSET(getStruct<T>, {0x34C8, 208, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace1                     OFFSET(getStruct<T>, {0x3598, 280, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x36B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x36D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x3700, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x3728, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x3750, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x3778, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x37A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x37C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x37F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x3818, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x3840, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x3868, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x3890, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x38B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x38E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x3908, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3930, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3958, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3980, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x39C8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x3A10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3A58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3A78, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3AC0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x3B08, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3B50, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x3B70, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x3BB8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x3BD8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x3C20, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x3C68, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3CB0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3CD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x3CF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x3D20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x3D48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x3D70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x3D98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x3DC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult58                            OFFSET(getStruct<T>, {0x3DE8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x3E10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3E58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x3E78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x3EC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x3EE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x3F28, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x3F48, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x3F90, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult59                            OFFSET(getStruct<T>, {0x3FB0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x3FD8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x40A0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x40C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x4108, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x4128, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x4170, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x4190, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x41D8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult60                            OFFSET(getStruct<T>, {0x41F8, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x4220, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult34                                 OFFSET(getStruct<T>, {0x42E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x4308, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult35                                 OFFSET(getStruct<T>, {0x4350, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x4370, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x43B8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer39                              OFFSET(getStruct<T>, {0x4400, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x4448, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x4490, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult36                                 OFFSET(getStruct<T>, {0x44D8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer40                              OFFSET(getStruct<T>, {0x44F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult37                                 OFFSET(getStruct<T>, {0x4540, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer41                              OFFSET(getStruct<T>, {0x4560, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool13                             OFFSET(getStruct<T>, {0x45A8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer42                              OFFSET(getStruct<T>, {0x45F0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool14                             OFFSET(getStruct<T>, {0x4638, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x4680, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult38                                 OFFSET(getStruct<T>, {0x46F0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x4710, 200, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone6                                   OFFSET(getStruct<T>, {0x47D8, 296, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x4900, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x49C8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x4A38, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x4B00, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x4B70, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool15                             OFFSET(getStruct<T>, {0x4B80, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool16                             OFFSET(getStruct<T>, {0x4BC8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x4C10, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x4C80, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool17                             OFFSET(getStruct<T>, {0x4CF0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult39                                 OFFSET(getStruct<T>, {0x4D38, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine8                                 OFFSET(getStruct<T>, {0x4D58, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult61                            OFFSET(getStruct<T>, {0x4E20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult62                            OFFSET(getStruct<T>, {0x4E48, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer43                              OFFSET(getStruct<T>, {0x4E70, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult40                                 OFFSET(getStruct<T>, {0x4EB8, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose2                                 OFFSET(getStruct<T>, {0x4ED8, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult41                                 OFFSET(getStruct<T>, {0x4EE8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine9                                 OFFSET(getStruct<T>, {0x4F08, 200, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive1                       OFFSET(getStruct<T>, {0x4FD0, 208, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace2                     OFFSET(getStruct<T>, {0x50A0, 280, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0x51B8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose2                              OFFSET(getStruct<T>, {0x51D8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose3                              OFFSET(getStruct<T>, {0x5288, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0x5338, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose4                              OFFSET(getStruct<T>, {0x5358, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose5                              OFFSET(getStruct<T>, {0x5408, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose6                              OFFSET(getStruct<T>, {0x54B8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root4                                         OFFSET(getStruct<T>, {0x5568, 32, 0, 0})
	DMember(bool)                                      State_Rule_Moving_Idle                                      OFFSET(get<bool>, {0x5588, 1, 0, 0})
	DMember(bool)                                      State_Rule_Idle_Moving                                      OFFSET(get<bool>, {0x5589, 1, 0, 0})
	DMember(bool)                                      Is_Jumping                                                  OFFSET(get<bool>, {0x558A, 1, 0, 0})
	DMember(bool)                                      State_Rule_Fall_Idle                                        OFFSET(get<bool>, {0x558B, 1, 0, 0})
	DMember(bool)                                      Is_Falling                                                  OFFSET(get<bool>, {0x558C, 1, 0, 0})
	DMember(bool)                                      State_Rule_Fall_Moving                                      OFFSET(get<bool>, {0x558D, 1, 0, 0})
	DMember(bool)                                      State_Rule_Jump_Land_Moving                                 OFFSET(get<bool>, {0x558E, 1, 0, 0})
	DMember(bool)                                      Is_Surface_Swimming                                         OFFSET(get<bool>, {0x558F, 1, 0, 0})
	DMember(bool)                                      State_Rule_Swim_Idle_Swim_Loco                              OFFSET(get<bool>, {0x5590, 1, 0, 0})
	DMember(double)                                    BodyRoll                                                    OFFSET(get<double>, {0x5598, 8, 0, 0})
	DMember(double)                                    WolfSpeed2D                                                 OFFSET(get<double>, {0x55A0, 8, 0, 0})
	DMember(bool)                                      Is_Boosting                                                 OFFSET(get<bool>, {0x55A8, 1, 0, 0})
	DMember(bool)                                      Play_Land_Additive                                          OFFSET(get<bool>, {0x55A9, 1, 0, 0})
	DMember(bool)                                      Is_Moving_Backwards                                         OFFSET(get<bool>, {0x55AA, 1, 0, 0})
	DMember(bool)                                      Should_Play_Stop_Backwards                                  OFFSET(get<bool>, {0x55AB, 1, 0, 0})
	DMember(bool)                                      Is_Turning_in_Place                                         OFFSET(get<bool>, {0x55AC, 1, 0, 0})
	DMember(double)                                    Turn_in_Place_Angle_Delta                                   OFFSET(get<double>, {0x55B0, 8, 0, 0})
	DMember(bool)                                      Was_Turning_Right                                           OFFSET(get<bool>, {0x55B8, 1, 0, 0})
	DMember(double)                                    Turn_in_Place_Rotation_Speed                                OFFSET(get<double>, {0x55C0, 8, 0, 0})
	DMember(double)                                    Backwards_Play_Rate                                         OFFSET(get<double>, {0x55C8, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                               // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                              // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x130d900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Wolf
	// void GetMainAnimBPData_Wolf(class UObject* AnimInstance);                                                                // [0x130d900] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766(); // [0x130d900] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D(); // [0x130d900] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93(); // [0x130d900] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);                                        // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                              // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.PlaceHandIKTargets
	// void PlaceHandIKTargets();                                                                                               // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.ExecuteUbergraph_WolfRidingPlayerLayerAnimBP
	// void ExecuteUbergraph_WolfRidingPlayerLayerAnimBP(int32_t EntryPoint);                                                   // [0x130d900] Final                
};

/// Class /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C
/// Size: 0x18A9 (0x000890 - 0x002139)
class URidingPlayerLayerAnimBP_C : public UFortValetPassengerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8505;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x890, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x898, 28, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x8B8, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x8C0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x8C8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x8E8, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x998, 120, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0xA10, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0xB00, 40, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0xB28, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0xC50, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0xC70, 32, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0xC90, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0xD08, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0xD30, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0xD78, 40, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                OFFSET(getStruct<T>, {0xDA0, 176, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0xE50, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0xE98, 72, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0xEE0, 280, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0xFF8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1068, 200, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0x1130, 296, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x1258, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x1308, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x1328, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x1370, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x13B8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1400, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose2                               OFFSET(getStruct<T>, {0x1448, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x14C0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x14E8, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x1510, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1558, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x15C8, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone1                               OFFSET(getStruct<T>, {0x1610, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0x16C0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x1708, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose5                                OFFSET(getStruct<T>, {0x1750, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x1778, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0x17C0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x1808, 72, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace1                     OFFSET(getStruct<T>, {0x1850, 280, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose6                                OFFSET(getStruct<T>, {0x1968, 40, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0x1990, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone3                                   OFFSET(getStruct<T>, {0x1AB8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone4                                   OFFSET(getStruct<T>, {0x1BE0, 296, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0x1D08, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose2                              OFFSET(getStruct<T>, {0x1D28, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose3                              OFFSET(getStruct<T>, {0x1DD8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0x1E88, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose4                              OFFSET(getStruct<T>, {0x1EA8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose5                              OFFSET(getStruct<T>, {0x1F58, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose6                              OFFSET(getStruct<T>, {0x2008, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root4                                         OFFSET(getStruct<T>, {0x20B8, 32, 0, 0})
	SMember(FRotator)                                  MatchRootYaw                                                OFFSET(getStruct<T>, {0x20D8, 24, 0, 0})
	DMember(bool)                                      Is_Targeting                                                OFFSET(get<bool>, {0x20F0, 1, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayer                                                  OFFSET(get<T>, {0x20F8, 8, 0, 0})
	DMember(double)                                    Timer                                                       OFFSET(get<double>, {0x2100, 8, 0, 0})
	DMember(bool)                                      ShouldTransitionToRiding                                    OFFSET(get<bool>, {0x2108, 1, 0, 0})
	DMember(double)                                    LowerBodyYaw                                                OFFSET(get<double>, {0x2110, 8, 0, 0})
	DMember(bool)                                      IsRideMode                                                  OFFSET(get<bool>, {0x2118, 1, 0, 0})
	DMember(bool)                                      IsSprinting                                                 OFFSET(get<bool>, {0x2119, 1, 0, 0})
	DMember(bool)                                      IsStandingStill                                             OFFSET(get<bool>, {0x211A, 1, 0, 0})
	DMember(bool)                                      IsInCombat                                                  OFFSET(get<bool>, {0x211B, 1, 0, 0})
	CMember(class AFortAIPawn*)                        WildlifePawn                                                OFFSET(get<T>, {0x2120, 8, 0, 0})
	DMember(bool)                                      IsSmackie                                                   OFFSET(get<bool>, {0x2128, 1, 0, 0})
	DMember(double)                                    Velocity                                                    OFFSET(get<double>, {0x2130, 8, 0, 0})
	DMember(bool)                                      IsNug                                                       OFFSET(get<bool>, {0x2138, 1, 0, 0})


	/// Functions
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                               // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                              // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x130d900] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x130d900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976(); // [0x130d900] BlueprintEvent       
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA(); // [0x130d900] BlueprintEvent       
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x130d900] Event|Public|BlueprintEvent 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.ExecuteUbergraph_RidingPlayerLayerAnimBP
	// void ExecuteUbergraph_RidingPlayerLayerAnimBP(int32_t EntryPoint);                                                       // [0x130d900] Final|HasDefaults    
};

/// Struct /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x15EF (0x000001 - 0x0015F0)
class FAnimBlueprintGeneratedConstantDatadup_115 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5616;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty2                                             OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty3                                             OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty4                                             OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty5                                             OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty6                                             OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty7                                             OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty8                                             OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty9                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     __NameProperty10                                            OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty11                                            OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty1                                              OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty12                                            OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty2                                              OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty13                                            OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty3                                              OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty14                                            OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty4                                              OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty15                                            OFFSET(getStruct<T>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty5                                              OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty16                                            OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty6                                              OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty17                                            OFFSET(getStruct<T>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty7                                              OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty18                                            OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty8                                              OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty19                                            OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty9                                              OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty20                                            OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty10                                             OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty21                                            OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty11                                             OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	SMember(FName)                                     __NameProperty22                                            OFFSET(getStruct<T>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty12                                             OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	SMember(FName)                                     __NameProperty23                                            OFFSET(getStruct<T>, {0x94, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty13                                             OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	SMember(FName)                                     __NameProperty24                                            OFFSET(getStruct<T>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty14                                             OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	SMember(FName)                                     __NameProperty25                                            OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty15                                             OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	SMember(FName)                                     __NameProperty26                                            OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty16                                             OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            OFFSET(getStruct<T>, {0xBC, 44, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0xEC, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              OFFSET(get<T>, {0xED, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              OFFSET(get<T>, {0xEE, 1, 0, 0})
	SMember(FName)                                     __NameProperty27                                            OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
	SMember(FName)                                     __NameProperty28                                            OFFSET(getStruct<T>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty17                                             OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty1                                           OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x118, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x198, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult                            OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult1                           OFFSET(getStruct<T>, {0x210, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult2                           OFFSET(getStruct<T>, {0x240, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult3                           OFFSET(getStruct<T>, {0x270, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult4                           OFFSET(getStruct<T>, {0x2A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult5                           OFFSET(getStruct<T>, {0x2D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult6                           OFFSET(getStruct<T>, {0x300, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult7                           OFFSET(getStruct<T>, {0x330, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult8                           OFFSET(getStruct<T>, {0x360, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult9                           OFFSET(getStruct<T>, {0x390, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult10                          OFFSET(getStruct<T>, {0x3C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult11                          OFFSET(getStruct<T>, {0x3F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult12                          OFFSET(getStruct<T>, {0x420, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult13                          OFFSET(getStruct<T>, {0x450, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult14                          OFFSET(getStruct<T>, {0x480, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult15                          OFFSET(getStruct<T>, {0x4B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult16                          OFFSET(getStruct<T>, {0x4E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult17                          OFFSET(getStruct<T>, {0x510, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer                              OFFSET(getStruct<T>, {0x540, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult                                 OFFSET(getStruct<T>, {0x570, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer1                             OFFSET(getStruct<T>, {0x5A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult1                                OFFSET(getStruct<T>, {0x5D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer2                             OFFSET(getStruct<T>, {0x600, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult2                                OFFSET(getStruct<T>, {0x630, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer3                             OFFSET(getStruct<T>, {0x660, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult3                                OFFSET(getStruct<T>, {0x690, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer4                             OFFSET(getStruct<T>, {0x6C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult4                                OFFSET(getStruct<T>, {0x6F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer                            OFFSET(getStruct<T>, {0x720, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult5                                OFFSET(getStruct<T>, {0x750, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer5                             OFFSET(getStruct<T>, {0x780, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult6                                OFFSET(getStruct<T>, {0x7B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer1                           OFFSET(getStruct<T>, {0x7E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult7                                OFFSET(getStruct<T>, {0x810, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer6                             OFFSET(getStruct<T>, {0x840, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult8                                OFFSET(getStruct<T>, {0x870, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer7                             OFFSET(getStruct<T>, {0x8A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult9                                OFFSET(getStruct<T>, {0x8D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine                                OFFSET(getStruct<T>, {0x900, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult18                          OFFSET(getStruct<T>, {0x930, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult19                          OFFSET(getStruct<T>, {0x960, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult20                          OFFSET(getStruct<T>, {0x990, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult21                          OFFSET(getStruct<T>, {0x9C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult22                          OFFSET(getStruct<T>, {0x9F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult23                          OFFSET(getStruct<T>, {0xA20, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult24                          OFFSET(getStruct<T>, {0xA50, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult25                          OFFSET(getStruct<T>, {0xA80, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult26                          OFFSET(getStruct<T>, {0xAB0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult27                          OFFSET(getStruct<T>, {0xAE0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult28                          OFFSET(getStruct<T>, {0xB10, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult29                          OFFSET(getStruct<T>, {0xB40, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult30                          OFFSET(getStruct<T>, {0xB70, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult31                          OFFSET(getStruct<T>, {0xBA0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult32                          OFFSET(getStruct<T>, {0xBD0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult33                          OFFSET(getStruct<T>, {0xC00, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult34                          OFFSET(getStruct<T>, {0xC30, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult35                          OFFSET(getStruct<T>, {0xC60, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult36                          OFFSET(getStruct<T>, {0xC90, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult37                          OFFSET(getStruct<T>, {0xCC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult38                          OFFSET(getStruct<T>, {0xCF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult39                          OFFSET(getStruct<T>, {0xD20, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult40                          OFFSET(getStruct<T>, {0xD50, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult41                          OFFSET(getStruct<T>, {0xD80, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult42                          OFFSET(getStruct<T>, {0xDB0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult43                          OFFSET(getStruct<T>, {0xDE0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult44                          OFFSET(getStruct<T>, {0xE10, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult45                          OFFSET(getStruct<T>, {0xE40, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult46                          OFFSET(getStruct<T>, {0xE70, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult47                          OFFSET(getStruct<T>, {0xEA0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer8                             OFFSET(getStruct<T>, {0xED0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult10                               OFFSET(getStruct<T>, {0xF00, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer9                             OFFSET(getStruct<T>, {0xF30, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult11                               OFFSET(getStruct<T>, {0xF60, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer10                            OFFSET(getStruct<T>, {0xF90, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult12                               OFFSET(getStruct<T>, {0xFC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer11                            OFFSET(getStruct<T>, {0xFF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult13                               OFFSET(getStruct<T>, {0x1020, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer12                            OFFSET(getStruct<T>, {0x1050, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult14                               OFFSET(getStruct<T>, {0x1080, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer13                            OFFSET(getStruct<T>, {0x10B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult15                               OFFSET(getStruct<T>, {0x10E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer14                            OFFSET(getStruct<T>, {0x1110, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult16                               OFFSET(getStruct<T>, {0x1140, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer15                            OFFSET(getStruct<T>, {0x1170, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult17                               OFFSET(getStruct<T>, {0x11A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer16                            OFFSET(getStruct<T>, {0x11D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult18                               OFFSET(getStruct<T>, {0x1200, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer17                            OFFSET(getStruct<T>, {0x1230, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult19                               OFFSET(getStruct<T>, {0x1260, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer18                            OFFSET(getStruct<T>, {0x1290, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult20                               OFFSET(getStruct<T>, {0x12C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer19                            OFFSET(getStruct<T>, {0x12F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult21                               OFFSET(getStruct<T>, {0x1320, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer2                           OFFSET(getStruct<T>, {0x1350, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult22                               OFFSET(getStruct<T>, {0x1380, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer20                            OFFSET(getStruct<T>, {0x13B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult23                               OFFSET(getStruct<T>, {0x13E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer21                            OFFSET(getStruct<T>, {0x1410, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult24                               OFFSET(getStruct<T>, {0x1440, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer22                            OFFSET(getStruct<T>, {0x1470, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult25                               OFFSET(getStruct<T>, {0x14A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer3                           OFFSET(getStruct<T>, {0x14D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult26                               OFFSET(getStruct<T>, {0x1500, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer23                            OFFSET(getStruct<T>, {0x1530, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult27                               OFFSET(getStruct<T>, {0x1560, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine1                               OFFSET(getStruct<T>, {0x1590, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TwoWayBlend                                 OFFSET(getStruct<T>, {0x15C0, 48, 0, 0})
};

/// Struct /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0013 (0x000001 - 0x000014)
class FAnimBlueprintGeneratedMutableDatadup_116 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     __FloatProperty2                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty3                                            OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Game/Animation/Libraries/WindGustParamsStruct.WindGustParamsStruct
/// Size: 0x0960 (0x000000 - 0x000960)
class FWindGustParamsStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	SMember(FWindGustSettingStruct)                    Skydive_GoingUp_28_C026BDA74BFBABA6672DFE8FFDAAFC1B         OFFSET(getStruct<T>, {0x0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Skydive_FloatingDown_29_2CBF3D3F421785F8994502931454A81F    OFFSET(getStruct<T>, {0x78, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Skydive_DivingDown_30_EC7BEC4D406A8A98E60D7B9374C5E457      OFFSET(getStruct<T>, {0xF0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Skydive_Parachuting_31_A88C4A0A407F497561D31287CB20250F     OFFSET(getStruct<T>, {0x168, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    OnGround_Standing_32_267DB1464D0D3A29D99E94ADFCB4AFEC       OFFSET(getStruct<T>, {0x1E0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    OnGround_Moving_33_807A66B64D7B3B2FCF080B833B8A6254         OFFSET(getStruct<T>, {0x258, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    OnGround_Crouch_Moving_34_CE0B8BFB4E3417C0F790F7AE38DD7735  OFFSET(getStruct<T>, {0x2D0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    EmoteOrMelee_35_CFCF66B5492987CBD638EC98EB34D572            OFFSET(getStruct<T>, {0x348, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Swimming_36_33CE87CE4D4F712B1384E29115845962                OFFSET(getStruct<T>, {0x3C0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Front_End_37_C7A4562A48E9BC9B4CD34D963CFC6490               OFFSET(getStruct<T>, {0x438, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    DBNO_41_0C046BF1406AB4B752DB3A99949FE3A3                    OFFSET(getStruct<T>, {0x4B0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    DBNO_Carried_42_3E9FADC247359FEE88C7B4A3453449E6            OFFSET(getStruct<T>, {0x528, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    OnGround_Falling_46_2CC5CD2149D12B7C53D91E8D6AA90C03        OFFSET(getStruct<T>, {0x5A0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Ziplining_47_B8BBEA804F8C515EA80FE7897BB99CF6               OFFSET(getStruct<T>, {0x618, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Skydive_Surfing_50_2B64886E4E6F0E8CFC180E81FDF37F62         OFFSET(getStruct<T>, {0x690, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Riding_Standing_55_206A781845EAC0A66D2BBC8981041DBD         OFFSET(getStruct<T>, {0x708, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Riding_Moving_56_963FD3424B0D070C81120599A5AED02A           OFFSET(getStruct<T>, {0x780, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Riding_Moving_Targeting_59_93868B48485365007E3BD8BD8A527B39 OFFSET(getStruct<T>, {0x7F8, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Tactical_Sprint_58_7E4BD4244308EE1199AA48ACF8871E68         OFFSET(getStruct<T>, {0x870, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Rail_Grinding_62_FF88FD5F4A9AB308E2F095B9F0657D82           OFFSET(getStruct<T>, {0x8E8, 120, 0, 0})
};

/// Struct /Game/Animation/Libraries/ClothParamsStruct.ClothParamsStruct
/// Size: 0x0780 (0x000000 - 0x000780)
class FClothParamsStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	SMember(FClothSettingStruct)                       Skydive_GoingUp_12_C026BDA74BFBABA6672DFE8FFDAAFC1B         OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Skydive_FloatingDown_10_2CBF3D3F421785F8994502931454A81F    OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	SMember(FClothSettingStruct)                       Skydive_DivingDown_11_EC7BEC4D406A8A98E60D7B9374C5E457      OFFSET(getStruct<T>, {0xC0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Skydive_Parachuting_13_A88C4A0A407F497561D31287CB20250F     OFFSET(getStruct<T>, {0x120, 96, 0, 0})
	SMember(FClothSettingStruct)                       OnGround_Standing_15_267DB1464D0D3A29D99E94ADFCB4AFEC       OFFSET(getStruct<T>, {0x180, 96, 0, 0})
	SMember(FClothSettingStruct)                       OnGround_Moving_16_807A66B64D7B3B2FCF080B833B8A6254         OFFSET(getStruct<T>, {0x1E0, 96, 0, 0})
	SMember(FClothSettingStruct)                       OnGround_Crouch_Moving_27_CE0B8BFB4E3417C0F790F7AE38DD7735  OFFSET(getStruct<T>, {0x240, 96, 0, 0})
	SMember(FClothSettingStruct)                       EmoteOrMelee_25_CFCF66B5492987CBD638EC98EB34D572            OFFSET(getStruct<T>, {0x2A0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Swimming_3_33CE87CE4D4F712B1384E29115845962                 OFFSET(getStruct<T>, {0x300, 96, 0, 0})
	SMember(FClothSettingStruct)                       Front_End_20_C7A4562A48E9BC9B4CD34D963CFC6490               OFFSET(getStruct<T>, {0x360, 96, 0, 0})
	SMember(FClothSettingStruct)                       DBNO_30_2D70D4004D0E9B117F6CE9A09C362B74                    OFFSET(getStruct<T>, {0x3C0, 96, 0, 0})
	SMember(FClothSettingStruct)                       DBNO_Carried_32_99829B99495FCFE3488A9A86B549ECE5            OFFSET(getStruct<T>, {0x420, 96, 0, 0})
	SMember(FClothSettingStruct)                       OnGround_Falling_36_CDAA0F4D476157E4137548BDCE8776F2        OFFSET(getStruct<T>, {0x480, 96, 0, 0})
	SMember(FClothSettingStruct)                       Ziplining_39_BCCDB7E1431A4C174F1040ABC81FD8A8               OFFSET(getStruct<T>, {0x4E0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Skydive_Surfing_42_408E65FF484AA54111E1ED8A69D8240D         OFFSET(getStruct<T>, {0x540, 96, 0, 0})
	SMember(FClothSettingStruct)                       Riding_Standing_46_952A2A43408C37C44E4CBFAE3F3001B0         OFFSET(getStruct<T>, {0x5A0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Riding_Moving_47_EE7A01794460B9753E5076A5A3B3080A           OFFSET(getStruct<T>, {0x600, 96, 0, 0})
	SMember(FClothSettingStruct)                       Riding_Moving_Targeting_52_2F57FD9E477C515D70B3DA9D75453357 OFFSET(getStruct<T>, {0x660, 96, 0, 0})
	SMember(FClothSettingStruct)                       Tactical_Sprint_51_5B2273A1499D34BDEC52E6A8E3F274D4         OFFSET(getStruct<T>, {0x6C0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Rail_Grinding_55_DEEB00A04DB992DF5EEB40BD6518EA4E           OFFSET(getStruct<T>, {0x720, 96, 0, 0})
};

/// Struct /Game/Animation/Libraries/ClothSettingStruct.ClothSettingStruct
/// Size: 0x005C (0x000000 - 0x00005C)
class FClothSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 92;

public:
	SMember(FVector)                                   LinearVelocityScale_7_9CBE863E417FC965C07809A2FE55ADFD      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B  OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FVector)                                   GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E         OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector2D)                                 DragCoefficient_23_FE68F666411FF9F29BA84CB4BE726A52         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FVector2D)                                 LiftCoefficient_24_BB285D994A5B3AFF167F4793D7ECA837         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FName)                                     JointName_27_C74F3B2245EA319DE82A629FF3C17CCA               OFFSET(getStruct<T>, {0x58, 4, 0, 0})
};

/// Struct /Game/Animation/Libraries/RBANParamsStruct.RBANParamsStruct
/// Size: 0x0B40 (0x000000 - 0x000B40)
class FRBANParamsStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2880;

public:
	SMember(FRBANSettingStruct)                        Skydive_GoingUp_56_C026BDA74BFBABA6672DFE8FFDAAFC1B         OFFSET(getStruct<T>, {0x0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Skydive_FloatingDown_57_2CBF3D3F421785F8994502931454A81F    OFFSET(getStruct<T>, {0x90, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Skydive_DivingDown_58_EC7BEC4D406A8A98E60D7B9374C5E457      OFFSET(getStruct<T>, {0x120, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Skydive_Parachuting_60_A88C4A0A407F497561D31287CB20250F     OFFSET(getStruct<T>, {0x1B0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        OnGround_Standing_59_267DB1464D0D3A29D99E94ADFCB4AFEC       OFFSET(getStruct<T>, {0x240, 144, 0, 0})
	SMember(FRBANSettingStruct)                        OnGround_Moving_65_807A66B64D7B3B2FCF080B833B8A6254         OFFSET(getStruct<T>, {0x2D0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        OnGround_Crouch_Moving_61_CE0B8BFB4E3417C0F790F7AE38DD7735  OFFSET(getStruct<T>, {0x360, 144, 0, 0})
	SMember(FRBANSettingStruct)                        EmoteOrMelee_62_CFCF66B5492987CBD638EC98EB34D572            OFFSET(getStruct<T>, {0x3F0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Swimming_64_33CE87CE4D4F712B1384E29115845962                OFFSET(getStruct<T>, {0x480, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Front_End_63_C7A4562A48E9BC9B4CD34D963CFC6490               OFFSET(getStruct<T>, {0x510, 144, 0, 0})
	SMember(FRBANSettingStruct)                        DBNO_68_2D70D4004D0E9B117F6CE9A09C362B74                    OFFSET(getStruct<T>, {0x5A0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        DBNO_Carried_67_99829B99495FCFE3488A9A86B549ECE5            OFFSET(getStruct<T>, {0x630, 144, 0, 0})
	SMember(FRBANSettingStruct)                        OnGround_Falling_66_CDAA0F4D476157E4137548BDCE8776F2        OFFSET(getStruct<T>, {0x6C0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Ziplining_75_BCCDB7E1431A4C174F1040ABC81FD8A8               OFFSET(getStruct<T>, {0x750, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Skydive_Surfing_74_408E65FF484AA54111E1ED8A69D8240D         OFFSET(getStruct<T>, {0x7E0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Riding_Standing_69_952A2A43408C37C44E4CBFAE3F3001B0         OFFSET(getStruct<T>, {0x870, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Riding_Moving_72_EE7A01794460B9753E5076A5A3B3080A           OFFSET(getStruct<T>, {0x900, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Riding_Moving_Targeting_73_2F57FD9E477C515D70B3DA9D75453357 OFFSET(getStruct<T>, {0x990, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Tactical_Sprint_70_5B2273A1499D34BDEC52E6A8E3F274D4         OFFSET(getStruct<T>, {0xA20, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Rail_Grinding_71_DEEB00A04DB992DF5EEB40BD6518EA4E           OFFSET(getStruct<T>, {0xAB0, 144, 0, 0})
};

/// Struct /Game/Animation/Libraries/RBANSettingStruct.RBANSettingStruct
/// Size: 0x0090 (0x000000 - 0x000090)
class FRBANSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   ComponentLinearAccScale_28_9CBE863E417FC965C07809A2FE55ADFD OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale_31_6A3DFE4A481AD4D7CB18D79F95CC88E8 OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings_34_FE68F666411FF9F29BA84CB4BE726A52        OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Struct /Game/Animation/Libraries/WindGustLocalSettingStruct.WindGustLocalSettingStruct
/// Size: 0x0014 (0x000000 - 0x000014)
class FWindGustLocalSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618  OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Game/Animation/Libraries/ClothCoreSettingStruct.ClothCoreSettingStruct
/// Size: 0x0080 (0x000000 - 0x000080)
class FClothCoreSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector2D)                                 EdgeStiffness_28_9A24DA0842E21D5736699499F1DE1171           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 BendingStiffness_29_6CD0864B4078D8378C061197E9B1B094        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 AreaStiffness_30_0D981B4E4039D5A0C6A4C78D6F09D510           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector2D)                                 TetherStiffness_24_A5C4B017498D3154D76CECAB9AE7BDF2         OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(float)                                     CollisionThickness_14_DACF320B4C03C6BD248A8E9B7B867FC7      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     FrictionCoefficient_15_E5761CE84E8E52EEBD663B9DC3A0906F     OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     SelfCollisionThickness_16_98974B1C4B5ABE4EA1CFF7A791319392  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DampingCoefficient_17_A343D5A54D704F5B249C8E907DA80101      OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LocalDampingCoefficient_33_993AFAEA430EEBF424A7D0B8BB57CFB5 OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FVector2D)                                 AnimDriveStiffness_27_E54C28B348B4C35A1D0817AFA9FF0423      OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FVector2D)                                 AnimDriveDamping_26_F9EDBF5240E75A4905AFA1A8240922C8        OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   NumberIterations_21_8E04A8E94B2040C7DBF93194733AC36A        OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   NumberSubsteps_23_5108D5FA40140A1AAD38459100B14261          OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Game/Animation/Libraries/GravityOverrideParamsStruct.GravityOverrideParamsStruct
/// Size: 0x07B8 (0x000000 - 0x0007B8)
class FGravityOverrideParamsStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1976;

public:
	SMember(FGravityOverrideSettingStruct)             Skydive_GoingUp_28_C026BDA74BFBABA6672DFE8FFDAAFC1B         OFFSET(getStruct<T>, {0x0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Skydive_FloatingDown_29_2CBF3D3F421785F8994502931454A81F    OFFSET(getStruct<T>, {0x68, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Skydive_DivingDown_30_EC7BEC4D406A8A98E60D7B9374C5E457      OFFSET(getStruct<T>, {0xD0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Skydive_Parachuting_31_A88C4A0A407F497561D31287CB20250F     OFFSET(getStruct<T>, {0x138, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             OnGround_Standing_32_267DB1464D0D3A29D99E94ADFCB4AFEC       OFFSET(getStruct<T>, {0x1A0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             OnGround_Moving_33_807A66B64D7B3B2FCF080B833B8A6254         OFFSET(getStruct<T>, {0x208, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             EmoteOrMelee_34_CFCF66B5492987CBD638EC98EB34D572            OFFSET(getStruct<T>, {0x270, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Swimming_35_33CE87CE4D4F712B1384E29115845962                OFFSET(getStruct<T>, {0x2D8, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Front_End_36_C7A4562A48E9BC9B4CD34D963CFC6490               OFFSET(getStruct<T>, {0x340, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             DBNO_40_83703B55467F014D644D02B56709A2E6                    OFFSET(getStruct<T>, {0x3A8, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             DBNO_Carried_41_2C3D52AF4B7EB85DBA7C108948E58B3A            OFFSET(getStruct<T>, {0x410, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             OnGround_Falling_45_DC16623B41084152717ACBAF5DCE8A91        OFFSET(getStruct<T>, {0x478, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Ziplining_46_0F05199D45821770F22E0B957551FEB7               OFFSET(getStruct<T>, {0x4E0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Skydive_Surfing_49_5869AA5846BEE7C351769C951D56A34F         OFFSET(getStruct<T>, {0x548, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Riding_Standing_54_C62E341C48CF5BA85ACB799EE3C7653E         OFFSET(getStruct<T>, {0x5B0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Riding_Moving_55_86CD46C94E5B465A175A6B939DB193BD           OFFSET(getStruct<T>, {0x618, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Riding_Moving_Targeting_58_38650D3547535FB293E61CBCF1B753BF OFFSET(getStruct<T>, {0x680, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Tactical_Sprint_57_7B4700A94AF4B34179554C8EC4EB52E0         OFFSET(getStruct<T>, {0x6E8, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Rail_Grinding_61_97CB95534C5559BAF29FE49C016359FA           OFFSET(getStruct<T>, {0x750, 104, 0, 0})
};

/// Struct /Game/Animation/Libraries/WindGustSettingStruct.WindGustSettingStruct
/// Size: 0x0078 (0x000000 - 0x000078)
class FWindGustSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     MinTimeBetweenGusts_25_6CD0864B4078D8378C061197E9B1B094     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxTimeBetweenGusts_28_0D981B4E4039D5A0C6A4C78D6F09D510     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinGustStrength_26_A5C4B017498D3154D76CECAB9AE7BDF2         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxGustStrength_29_DACF320B4C03C6BD248A8E9B7B867FC7         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinGustDuration_27_E5761CE84E8E52EEBD663B9DC3A0906F         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxGustDuration_30_98974B1C4B5ABE4EA1CFF7A791319392         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     WindTurbulenceScalarA_48_A343D5A54D704F5B249C8E907DA80101   OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     WindTurbulenceScalarB_47_E54C28B348B4C35A1D0817AFA9FF0423   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinUpInterpSpeed_36_8E04A8E94B2040C7DBF93194733AC36A        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxUpInterpSpeed_37_5108D5FA40140A1AAD38459100B14261        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MinDownInterpSpeed_40_C3AD555846C2AEB9625C4E93B6758BB8      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxDownInterpSpeed_41_394B2B66448D9D21249A288C7DEC98F1      OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector)                                   WindFrequency_51_9F209DFA4F7AB96CE220578516F0B4CF           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   WindAmplitude_54_E174BDEC415CE55F6A1475B799695475           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   WindOffset_55_91DD775940222EE47FDA3BA8695E8FE9              OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Struct /Game/Animation/Libraries/GravityOverrideSettingStruct.GravityOverrideSettingStruct
/// Size: 0x0064 (0x000000 - 0x000064)
class FGravityOverrideSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FVector)                                   WindFrequency_28_9CBE863E417FC965C07809A2FE55ADFD           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   WindAmplitude_31_6A3DFE4A481AD4D7CB18D79F95CC88E8           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   WindOffset_32_C5F4D16F48D0BEDC3F0FA38B2648511B              OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E         OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FName)                                     JointName_27_C74F3B2245EA319DE82A629FF3C17CCA               OFFSET(getStruct<T>, {0x60, 4, 0, 0})
};

/// Struct /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x2EEF (0x000001 - 0x002EF0)
class FAnimBlueprintGeneratedConstantDatadup_117 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12016;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     __NameProperty2                                             OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty3                                             OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty4                                             OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty5                                             OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty6                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     __NameProperty7                                             OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FName)                                     __NameProperty8                                             OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty1                                              OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty9                                             OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty2                                              OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty10                                            OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty3                                              OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty11                                            OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty12                                            OFFSET(getStruct<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty13                                            OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty14                                            OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     __NameProperty15                                            OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty16                                            OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty17                                            OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty18                                            OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty19                                            OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty4                                              OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	SMember(FName)                                     __NameProperty20                                            OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              OFFSET(get<T>, {0x8C, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty1                                            OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty2                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FName)                                     __NameProperty21                                            OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty5                                              OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FName)                                     __NameProperty22                                            OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty6                                              OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty3                                            OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty1                                             OFFSET(get<T>, {0xD0, 1, 0, 0})
	SMember(FName)                                     __NameProperty23                                            OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	SMember(FName)                                     __NameProperty24                                            OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            OFFSET(getStruct<T>, {0xDC, 44, 0, 0})
	SMember(FName)                                     __NameProperty25                                            OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty7                                              OFFSET(get<int32_t>, {0x10C, 4, 0, 0})
	SMember(FName)                                     __NameProperty26                                            OFFSET(getStruct<T>, {0x110, 4, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              OFFSET(get<T>, {0x114, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x115, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x11C, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty2                                             OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty1                                             OFFSET(get<T>, {0x121, 1, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile1                                             OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0x130, 8, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x138, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty3                                             OFFSET(get<T>, {0x139, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty4                                             OFFSET(get<T>, {0x13A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty4                                            OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FName)                                     __NameProperty27                                            OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty8                                              OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	SMember(FName)                                     __NameProperty28                                            OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FName)                                     __NameProperty29                                            OFFSET(getStruct<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     __NameProperty30                                            OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     __NameProperty31                                            OFFSET(getStruct<T>, {0x164, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty1                                           OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	SMember(FName)                                     __NameProperty32                                            OFFSET(getStruct<T>, {0x180, 4, 0, 0})
	SMember(FName)                                     __NameProperty33                                            OFFSET(getStruct<T>, {0x184, 4, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x188, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x208, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0x220, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose                             OFFSET(getStruct<T>, {0x250, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone                                  OFFSET(getStruct<T>, {0x280, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone1                                 OFFSET(getStruct<T>, {0x2B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0x2E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x310, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone2                                 OFFSET(getStruct<T>, {0x340, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone3                                 OFFSET(getStruct<T>, {0x370, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive                               OFFSET(getStruct<T>, {0x3A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LegIK                                       OFFSET(getStruct<T>, {0x3D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LegIK1                                      OFFSET(getStruct<T>, {0x400, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer                            OFFSET(getStruct<T>, {0x430, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root1                                       OFFSET(getStruct<T>, {0x460, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose1                            OFFSET(getStruct<T>, {0x490, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose                              OFFSET(getStruct<T>, {0x4C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace1                      OFFSET(getStruct<T>, {0x4F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace1                      OFFSET(getStruct<T>, {0x520, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool                             OFFSET(getStruct<T>, {0x550, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone4                                 OFFSET(getStruct<T>, {0x580, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone5                                 OFFSET(getStruct<T>, {0x5B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone6                                 OFFSET(getStruct<T>, {0x5E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone7                                 OFFSET(getStruct<T>, {0x610, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult                            OFFSET(getStruct<T>, {0x640, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult1                           OFFSET(getStruct<T>, {0x670, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult2                           OFFSET(getStruct<T>, {0x6A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult3                           OFFSET(getStruct<T>, {0x6D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult4                           OFFSET(getStruct<T>, {0x700, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult5                           OFFSET(getStruct<T>, {0x730, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult6                           OFFSET(getStruct<T>, {0x760, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult7                           OFFSET(getStruct<T>, {0x790, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult8                           OFFSET(getStruct<T>, {0x7C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult9                           OFFSET(getStruct<T>, {0x7F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult10                          OFFSET(getStruct<T>, {0x820, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult11                          OFFSET(getStruct<T>, {0x850, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult12                          OFFSET(getStruct<T>, {0x880, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult13                          OFFSET(getStruct<T>, {0x8B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult14                          OFFSET(getStruct<T>, {0x8E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult15                          OFFSET(getStruct<T>, {0x910, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult16                          OFFSET(getStruct<T>, {0x940, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult17                          OFFSET(getStruct<T>, {0x970, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer                              OFFSET(getStruct<T>, {0x9A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer1                             OFFSET(getStruct<T>, {0x9D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool1                            OFFSET(getStruct<T>, {0xA00, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult                                 OFFSET(getStruct<T>, {0xA30, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer2                             OFFSET(getStruct<T>, {0xA60, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer3                             OFFSET(getStruct<T>, {0xA90, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool2                            OFFSET(getStruct<T>, {0xAC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult1                                OFFSET(getStruct<T>, {0xAF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer4                             OFFSET(getStruct<T>, {0xB20, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool3                            OFFSET(getStruct<T>, {0xB50, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer5                             OFFSET(getStruct<T>, {0xB80, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer6                             OFFSET(getStruct<T>, {0xBB0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool4                            OFFSET(getStruct<T>, {0xBE0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult2                                OFFSET(getStruct<T>, {0xC10, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer7                             OFFSET(getStruct<T>, {0xC40, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult3                                OFFSET(getStruct<T>, {0xC70, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer1                           OFFSET(getStruct<T>, {0xCA0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer8                             OFFSET(getStruct<T>, {0xCD0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive1                              OFFSET(getStruct<T>, {0xD00, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool5                            OFFSET(getStruct<T>, {0xD30, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer9                             OFFSET(getStruct<T>, {0xD60, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult4                                OFFSET(getStruct<T>, {0xD90, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer10                            OFFSET(getStruct<T>, {0xDC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult5                                OFFSET(getStruct<T>, {0xDF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult18                          OFFSET(getStruct<T>, {0xE20, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult19                          OFFSET(getStruct<T>, {0xE50, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult20                          OFFSET(getStruct<T>, {0xE80, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult21                          OFFSET(getStruct<T>, {0xEB0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult22                          OFFSET(getStruct<T>, {0xEE0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult23                          OFFSET(getStruct<T>, {0xF10, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult24                          OFFSET(getStruct<T>, {0xF40, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult25                          OFFSET(getStruct<T>, {0xF70, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer11                            OFFSET(getStruct<T>, {0xFA0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult6                                OFFSET(getStruct<T>, {0xFD0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer12                            OFFSET(getStruct<T>, {0x1000, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult7                                OFFSET(getStruct<T>, {0x1030, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer13                            OFFSET(getStruct<T>, {0x1060, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult8                                OFFSET(getStruct<T>, {0x1090, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer14                            OFFSET(getStruct<T>, {0x10C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult9                                OFFSET(getStruct<T>, {0x10F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult26                          OFFSET(getStruct<T>, {0x1120, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine                                OFFSET(getStruct<T>, {0x1150, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult10                               OFFSET(getStruct<T>, {0x1180, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer15                            OFFSET(getStruct<T>, {0x11B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult11                               OFFSET(getStruct<T>, {0x11E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer16                            OFFSET(getStruct<T>, {0x1210, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult12                               OFFSET(getStruct<T>, {0x1240, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer17                            OFFSET(getStruct<T>, {0x1270, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult13                               OFFSET(getStruct<T>, {0x12A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult27                          OFFSET(getStruct<T>, {0x12D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine1                               OFFSET(getStruct<T>, {0x1300, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult14                               OFFSET(getStruct<T>, {0x1330, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult28                          OFFSET(getStruct<T>, {0x1360, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult29                          OFFSET(getStruct<T>, {0x1390, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer18                            OFFSET(getStruct<T>, {0x13C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult15                               OFFSET(getStruct<T>, {0x13F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult16                               OFFSET(getStruct<T>, {0x1420, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine2                               OFFSET(getStruct<T>, {0x1450, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive2                              OFFSET(getStruct<T>, {0x1480, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer2                           OFFSET(getStruct<T>, {0x14B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer19                            OFFSET(getStruct<T>, {0x14E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer20                            OFFSET(getStruct<T>, {0x1510, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool6                            OFFSET(getStruct<T>, {0x1540, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool7                            OFFSET(getStruct<T>, {0x1570, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer3                           OFFSET(getStruct<T>, {0x15A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive3                              OFFSET(getStruct<T>, {0x15D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult17                               OFFSET(getStruct<T>, {0x1600, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer21                            OFFSET(getStruct<T>, {0x1630, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult18                               OFFSET(getStruct<T>, {0x1660, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine3                               OFFSET(getStruct<T>, {0x1690, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LayeredBoneBlend                            OFFSET(getStruct<T>, {0x16C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose                               OFFSET(getStruct<T>, {0x16F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Inertialization                             OFFSET(getStruct<T>, {0x1720, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotationOffsetBlendSpace                    OFFSET(getStruct<T>, {0x1750, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LayeredBoneBlend1                           OFFSET(getStruct<T>, {0x1780, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult30                          OFFSET(getStruct<T>, {0x17B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult31                          OFFSET(getStruct<T>, {0x17E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult32                          OFFSET(getStruct<T>, {0x1810, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose1                              OFFSET(getStruct<T>, {0x1840, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult19                               OFFSET(getStruct<T>, {0x1870, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer4                           OFFSET(getStruct<T>, {0x18A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult20                               OFFSET(getStruct<T>, {0x18D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose2                              OFFSET(getStruct<T>, {0x1900, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult21                               OFFSET(getStruct<T>, {0x1930, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine4                               OFFSET(getStruct<T>, {0x1960, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose1                             OFFSET(getStruct<T>, {0x1990, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose3                              OFFSET(getStruct<T>, {0x19C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose2                             OFFSET(getStruct<T>, {0x19F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose4                              OFFSET(getStruct<T>, {0x1A20, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose5                              OFFSET(getStruct<T>, {0x1A50, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotationOffsetBlendSpace1                   OFFSET(getStruct<T>, {0x1A80, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyMeshSpaceAdditive                      OFFSET(getStruct<T>, {0x1AB0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotationOffsetBlendSpace2                   OFFSET(getStruct<T>, {0x1AE0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult33                          OFFSET(getStruct<T>, {0x1B10, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult34                          OFFSET(getStruct<T>, {0x1B40, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult35                          OFFSET(getStruct<T>, {0x1B70, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult36                          OFFSET(getStruct<T>, {0x1BA0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult37                          OFFSET(getStruct<T>, {0x1BD0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult38                          OFFSET(getStruct<T>, {0x1C00, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult39                          OFFSET(getStruct<T>, {0x1C30, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult40                          OFFSET(getStruct<T>, {0x1C60, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult41                          OFFSET(getStruct<T>, {0x1C90, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult42                          OFFSET(getStruct<T>, {0x1CC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult43                          OFFSET(getStruct<T>, {0x1CF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult44                          OFFSET(getStruct<T>, {0x1D20, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult45                          OFFSET(getStruct<T>, {0x1D50, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult46                          OFFSET(getStruct<T>, {0x1D80, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult47                          OFFSET(getStruct<T>, {0x1DB0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult48                          OFFSET(getStruct<T>, {0x1DE0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult49                          OFFSET(getStruct<T>, {0x1E10, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult50                          OFFSET(getStruct<T>, {0x1E40, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer22                            OFFSET(getStruct<T>, {0x1E70, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer23                            OFFSET(getStruct<T>, {0x1EA0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool8                            OFFSET(getStruct<T>, {0x1ED0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult22                               OFFSET(getStruct<T>, {0x1F00, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer24                            OFFSET(getStruct<T>, {0x1F30, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer25                            OFFSET(getStruct<T>, {0x1F60, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool9                            OFFSET(getStruct<T>, {0x1F90, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult23                               OFFSET(getStruct<T>, {0x1FC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer26                            OFFSET(getStruct<T>, {0x1FF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult24                               OFFSET(getStruct<T>, {0x2020, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer27                            OFFSET(getStruct<T>, {0x2050, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer28                            OFFSET(getStruct<T>, {0x2080, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool10                           OFFSET(getStruct<T>, {0x20B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult25                               OFFSET(getStruct<T>, {0x20E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult51                          OFFSET(getStruct<T>, {0x2110, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult52                          OFFSET(getStruct<T>, {0x2140, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult53                          OFFSET(getStruct<T>, {0x2170, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult54                          OFFSET(getStruct<T>, {0x21A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult55                          OFFSET(getStruct<T>, {0x21D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult56                          OFFSET(getStruct<T>, {0x2200, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult57                          OFFSET(getStruct<T>, {0x2230, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult58                          OFFSET(getStruct<T>, {0x2260, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer29                            OFFSET(getStruct<T>, {0x2290, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult26                               OFFSET(getStruct<T>, {0x22C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer30                            OFFSET(getStruct<T>, {0x22F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult27                               OFFSET(getStruct<T>, {0x2320, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer31                            OFFSET(getStruct<T>, {0x2350, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult28                               OFFSET(getStruct<T>, {0x2380, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer32                            OFFSET(getStruct<T>, {0x23B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult29                               OFFSET(getStruct<T>, {0x23E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult59                          OFFSET(getStruct<T>, {0x2410, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine5                               OFFSET(getStruct<T>, {0x2440, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult30                               OFFSET(getStruct<T>, {0x2470, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer33                            OFFSET(getStruct<T>, {0x24A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult31                               OFFSET(getStruct<T>, {0x24D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer34                            OFFSET(getStruct<T>, {0x2500, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult32                               OFFSET(getStruct<T>, {0x2530, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer35                            OFFSET(getStruct<T>, {0x2560, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult33                               OFFSET(getStruct<T>, {0x2590, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult60                          OFFSET(getStruct<T>, {0x25C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine6                               OFFSET(getStruct<T>, {0x25F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult34                               OFFSET(getStruct<T>, {0x2620, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer36                            OFFSET(getStruct<T>, {0x2650, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult35                               OFFSET(getStruct<T>, {0x2680, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer37                            OFFSET(getStruct<T>, {0x26B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool11                           OFFSET(getStruct<T>, {0x26E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer38                            OFFSET(getStruct<T>, {0x2710, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer39                            OFFSET(getStruct<T>, {0x2740, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool12                           OFFSET(getStruct<T>, {0x2770, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult36                               OFFSET(getStruct<T>, {0x27A0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer40                            OFFSET(getStruct<T>, {0x27D0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult37                               OFFSET(getStruct<T>, {0x2800, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer41                            OFFSET(getStruct<T>, {0x2830, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool13                           OFFSET(getStruct<T>, {0x2860, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer42                            OFFSET(getStruct<T>, {0x2890, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer5                           OFFSET(getStruct<T>, {0x28C0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool14                           OFFSET(getStruct<T>, {0x28F0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult38                               OFFSET(getStruct<T>, {0x2920, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine7                               OFFSET(getStruct<T>, {0x2950, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone8                                 OFFSET(getStruct<T>, {0x2980, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult61                          OFFSET(getStruct<T>, {0x29B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult62                          OFFSET(getStruct<T>, {0x29E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer43                            OFFSET(getStruct<T>, {0x2A10, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult39                               OFFSET(getStruct<T>, {0x2A40, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose                                OFFSET(getStruct<T>, {0x2A70, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult40                               OFFSET(getStruct<T>, {0x2AA0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine8                               OFFSET(getStruct<T>, {0x2AD0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyMeshSpaceAdditive1                     OFFSET(getStruct<T>, {0x2B00, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive4                              OFFSET(getStruct<T>, {0x2B30, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer6                           OFFSET(getStruct<T>, {0x2B60, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive5                              OFFSET(getStruct<T>, {0x2B90, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer7                           OFFSET(getStruct<T>, {0x2BC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose1                               OFFSET(getStruct<T>, {0x2BF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool15                           OFFSET(getStruct<T>, {0x2C20, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool16                           OFFSET(getStruct<T>, {0x2C50, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer8                           OFFSET(getStruct<T>, {0x2C80, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer9                           OFFSET(getStruct<T>, {0x2CB0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool17                           OFFSET(getStruct<T>, {0x2CE0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult41                               OFFSET(getStruct<T>, {0x2D10, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine9                               OFFSET(getStruct<T>, {0x2D40, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root2                                       OFFSET(getStruct<T>, {0x2D70, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose2                            OFFSET(getStruct<T>, {0x2DA0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose3                            OFFSET(getStruct<T>, {0x2DD0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root3                                       OFFSET(getStruct<T>, {0x2E00, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose4                            OFFSET(getStruct<T>, {0x2E30, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose5                            OFFSET(getStruct<T>, {0x2E60, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose6                            OFFSET(getStruct<T>, {0x2E90, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root4                                       OFFSET(getStruct<T>, {0x2EC0, 48, 0, 0})
};

/// Struct /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x008C (0x000001 - 0x00008D)
class FAnimBlueprintGeneratedMutableDatadup_118 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 141;

public:
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      __BoolProperty2                                             OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      __BoolProperty3                                             OFFSET(get<bool>, {0x23, 1, 0, 0})
	DMember(bool)                                      __BoolProperty4                                             OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     __FloatProperty2                                            OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     __FloatProperty3                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty5                                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     __FloatProperty4                                            OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     __FloatProperty5                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     __FloatProperty6                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     __FloatProperty7                                            OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      __BoolProperty6                                             OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      __BoolProperty7                                             OFFSET(get<bool>, {0x45, 1, 0, 0})
	DMember(float)                                     __FloatProperty8                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     __FloatProperty9                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     __FloatProperty10                                           OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     __FloatProperty11                                           OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     __FloatProperty12                                           OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     __FloatProperty13                                           OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty8                                             OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      __BoolProperty9                                             OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      __BoolProperty10                                            OFFSET(get<bool>, {0x62, 1, 0, 0})
	DMember(bool)                                      __BoolProperty11                                            OFFSET(get<bool>, {0x63, 1, 0, 0})
	DMember(bool)                                      __BoolProperty12                                            OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      __BoolProperty13                                            OFFSET(get<bool>, {0x65, 1, 0, 0})
	DMember(float)                                     __FloatProperty14                                           OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     __FloatProperty15                                           OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     __FloatProperty16                                           OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      __BoolProperty14                                            OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(float)                                     __FloatProperty17                                           OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     __FloatProperty18                                           OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty15                                            OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      __BoolProperty16                                            OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(float)                                     __FloatProperty19                                           OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     __FloatProperty20                                           OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(bool)                                      __BoolProperty17                                            OFFSET(get<bool>, {0x8C, 1, 0, 0})
};

/// Struct /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x2E67 (0x000001 - 0x002E68)
class FAnimBlueprintGeneratedConstantDatadup_119 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 11880;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     __NameProperty2                                             OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty3                                             OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty4                                             OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty5                                             OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty6                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     __NameProperty7                                             OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty8                                             OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty1                                              OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty9                                             OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty2                                              OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty10                                            OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty3                                              OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty11                                            OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty12                                            OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty13                                            OFFSET(getStruct<T>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty14                                            OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty15                                            OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty16                                            OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty17                                            OFFSET(getStruct<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty18                                            OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty19                                            OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty4                                              OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty20                                            OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              OFFSET(get<T>, {0x88, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty1                                            OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FName)                                     __NameProperty21                                            OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty5                                              OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	SMember(FName)                                     __NameProperty22                                            OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty6                                              OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty2                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty3                                            OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty1                                             OFFSET(get<T>, {0xD0, 1, 0, 0})
	SMember(FName)                                     __NameProperty23                                            OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	SMember(FName)                                     __NameProperty24                                            OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile1                                             OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty2                                             OFFSET(get<T>, {0xF0, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty3                                             OFFSET(get<T>, {0xF1, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty4                                            OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FName)                                     __NameProperty25                                            OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            OFFSET(getStruct<T>, {0x10C, 44, 0, 0})
	SMember(FName)                                     __NameProperty26                                            OFFSET(getStruct<T>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty7                                              OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              OFFSET(get<T>, {0x140, 1, 0, 0})
	SMember(FName)                                     __NameProperty27                                            OFFSET(getStruct<T>, {0x144, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty8                                              OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x14C, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x158, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty4                                             OFFSET(get<T>, {0x159, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty1                                             OFFSET(get<T>, {0x15A, 1, 0, 0})
	SMember(FName)                                     __NameProperty28                                            OFFSET(getStruct<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     __NameProperty29                                            OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     __NameProperty30                                            OFFSET(getStruct<T>, {0x164, 4, 0, 0})
	SMember(FName)                                     __NameProperty31                                            OFFSET(getStruct<T>, {0x168, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty1                                           OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	SMember(FName)                                     __NameProperty32                                            OFFSET(getStruct<T>, {0x188, 4, 0, 0})
	SMember(FName)                                     __NameProperty33                                            OFFSET(getStruct<T>, {0x18C, 4, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x190, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0x228, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose                             OFFSET(getStruct<T>, {0x258, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone                                  OFFSET(getStruct<T>, {0x288, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone1                                 OFFSET(getStruct<T>, {0x2B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0x2E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x318, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer                            OFFSET(getStruct<T>, {0x348, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive                               OFFSET(getStruct<T>, {0x378, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root1                                       OFFSET(getStruct<T>, {0x3A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose1                            OFFSET(getStruct<T>, {0x3D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose                              OFFSET(getStruct<T>, {0x408, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace1                      OFFSET(getStruct<T>, {0x438, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace1                      OFFSET(getStruct<T>, {0x468, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool                             OFFSET(getStruct<T>, {0x498, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone2                                 OFFSET(getStruct<T>, {0x4C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone3                                 OFFSET(getStruct<T>, {0x4F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone4                                 OFFSET(getStruct<T>, {0x528, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone5                                 OFFSET(getStruct<T>, {0x558, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult                            OFFSET(getStruct<T>, {0x588, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult1                           OFFSET(getStruct<T>, {0x5B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult2                           OFFSET(getStruct<T>, {0x5E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult3                           OFFSET(getStruct<T>, {0x618, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult4                           OFFSET(getStruct<T>, {0x648, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult5                           OFFSET(getStruct<T>, {0x678, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult6                           OFFSET(getStruct<T>, {0x6A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult7                           OFFSET(getStruct<T>, {0x6D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult8                           OFFSET(getStruct<T>, {0x708, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult9                           OFFSET(getStruct<T>, {0x738, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult10                          OFFSET(getStruct<T>, {0x768, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult11                          OFFSET(getStruct<T>, {0x798, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult12                          OFFSET(getStruct<T>, {0x7C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult13                          OFFSET(getStruct<T>, {0x7F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult14                          OFFSET(getStruct<T>, {0x828, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult15                          OFFSET(getStruct<T>, {0x858, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult16                          OFFSET(getStruct<T>, {0x888, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult17                          OFFSET(getStruct<T>, {0x8B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer                              OFFSET(getStruct<T>, {0x8E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer1                             OFFSET(getStruct<T>, {0x918, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool1                            OFFSET(getStruct<T>, {0x948, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult                                 OFFSET(getStruct<T>, {0x978, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer2                             OFFSET(getStruct<T>, {0x9A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer3                             OFFSET(getStruct<T>, {0x9D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool2                            OFFSET(getStruct<T>, {0xA08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult1                                OFFSET(getStruct<T>, {0xA38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer4                             OFFSET(getStruct<T>, {0xA68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer5                             OFFSET(getStruct<T>, {0xA98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool3                            OFFSET(getStruct<T>, {0xAC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer6                             OFFSET(getStruct<T>, {0xAF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool4                            OFFSET(getStruct<T>, {0xB28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult2                                OFFSET(getStruct<T>, {0xB58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer7                             OFFSET(getStruct<T>, {0xB88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult3                                OFFSET(getStruct<T>, {0xBB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer8                             OFFSET(getStruct<T>, {0xBE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer1                           OFFSET(getStruct<T>, {0xC18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive1                              OFFSET(getStruct<T>, {0xC48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool5                            OFFSET(getStruct<T>, {0xC78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer9                             OFFSET(getStruct<T>, {0xCA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult4                                OFFSET(getStruct<T>, {0xCD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer10                            OFFSET(getStruct<T>, {0xD08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult5                                OFFSET(getStruct<T>, {0xD38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult18                          OFFSET(getStruct<T>, {0xD68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult19                          OFFSET(getStruct<T>, {0xD98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult20                          OFFSET(getStruct<T>, {0xDC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult21                          OFFSET(getStruct<T>, {0xDF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult22                          OFFSET(getStruct<T>, {0xE28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult23                          OFFSET(getStruct<T>, {0xE58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult24                          OFFSET(getStruct<T>, {0xE88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult25                          OFFSET(getStruct<T>, {0xEB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer11                            OFFSET(getStruct<T>, {0xEE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult6                                OFFSET(getStruct<T>, {0xF18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer12                            OFFSET(getStruct<T>, {0xF48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult7                                OFFSET(getStruct<T>, {0xF78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer13                            OFFSET(getStruct<T>, {0xFA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult8                                OFFSET(getStruct<T>, {0xFD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer14                            OFFSET(getStruct<T>, {0x1008, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult9                                OFFSET(getStruct<T>, {0x1038, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult26                          OFFSET(getStruct<T>, {0x1068, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine                                OFFSET(getStruct<T>, {0x1098, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult10                               OFFSET(getStruct<T>, {0x10C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer15                            OFFSET(getStruct<T>, {0x10F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult11                               OFFSET(getStruct<T>, {0x1128, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer16                            OFFSET(getStruct<T>, {0x1158, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult12                               OFFSET(getStruct<T>, {0x1188, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer17                            OFFSET(getStruct<T>, {0x11B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult13                               OFFSET(getStruct<T>, {0x11E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult27                          OFFSET(getStruct<T>, {0x1218, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine1                               OFFSET(getStruct<T>, {0x1248, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult14                               OFFSET(getStruct<T>, {0x1278, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer18                            OFFSET(getStruct<T>, {0x12A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool6                            OFFSET(getStruct<T>, {0x12D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult28                          OFFSET(getStruct<T>, {0x1308, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult29                          OFFSET(getStruct<T>, {0x1338, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer19                            OFFSET(getStruct<T>, {0x1368, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult15                               OFFSET(getStruct<T>, {0x1398, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose                                OFFSET(getStruct<T>, {0x13C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult16                               OFFSET(getStruct<T>, {0x13F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine2                               OFFSET(getStruct<T>, {0x1428, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive2                              OFFSET(getStruct<T>, {0x1458, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer20                            OFFSET(getStruct<T>, {0x1488, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool7                            OFFSET(getStruct<T>, {0x14B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer2                           OFFSET(getStruct<T>, {0x14E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive3                              OFFSET(getStruct<T>, {0x1518, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer3                           OFFSET(getStruct<T>, {0x1548, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult17                               OFFSET(getStruct<T>, {0x1578, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer21                            OFFSET(getStruct<T>, {0x15A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult18                               OFFSET(getStruct<T>, {0x15D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine3                               OFFSET(getStruct<T>, {0x1608, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LayeredBoneBlend                            OFFSET(getStruct<T>, {0x1638, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose                               OFFSET(getStruct<T>, {0x1668, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Inertialization                             OFFSET(getStruct<T>, {0x1698, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotationOffsetBlendSpace                    OFFSET(getStruct<T>, {0x16C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LayeredBoneBlend1                           OFFSET(getStruct<T>, {0x16F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult30                          OFFSET(getStruct<T>, {0x1728, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult31                          OFFSET(getStruct<T>, {0x1758, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult32                          OFFSET(getStruct<T>, {0x1788, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose1                              OFFSET(getStruct<T>, {0x17B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult19                               OFFSET(getStruct<T>, {0x17E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer4                           OFFSET(getStruct<T>, {0x1818, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult20                               OFFSET(getStruct<T>, {0x1848, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose2                              OFFSET(getStruct<T>, {0x1878, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult21                               OFFSET(getStruct<T>, {0x18A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine4                               OFFSET(getStruct<T>, {0x18D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose1                             OFFSET(getStruct<T>, {0x1908, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose3                              OFFSET(getStruct<T>, {0x1938, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose2                             OFFSET(getStruct<T>, {0x1968, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose4                              OFFSET(getStruct<T>, {0x1998, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose5                              OFFSET(getStruct<T>, {0x19C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyMeshSpaceAdditive                      OFFSET(getStruct<T>, {0x19F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotationOffsetBlendSpace1                   OFFSET(getStruct<T>, {0x1A28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult33                          OFFSET(getStruct<T>, {0x1A58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult34                          OFFSET(getStruct<T>, {0x1A88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult35                          OFFSET(getStruct<T>, {0x1AB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult36                          OFFSET(getStruct<T>, {0x1AE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult37                          OFFSET(getStruct<T>, {0x1B18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult38                          OFFSET(getStruct<T>, {0x1B48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult39                          OFFSET(getStruct<T>, {0x1B78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult40                          OFFSET(getStruct<T>, {0x1BA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult41                          OFFSET(getStruct<T>, {0x1BD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult42                          OFFSET(getStruct<T>, {0x1C08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult43                          OFFSET(getStruct<T>, {0x1C38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult44                          OFFSET(getStruct<T>, {0x1C68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult45                          OFFSET(getStruct<T>, {0x1C98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult46                          OFFSET(getStruct<T>, {0x1CC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult47                          OFFSET(getStruct<T>, {0x1CF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult48                          OFFSET(getStruct<T>, {0x1D28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult49                          OFFSET(getStruct<T>, {0x1D58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult50                          OFFSET(getStruct<T>, {0x1D88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer22                            OFFSET(getStruct<T>, {0x1DB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer23                            OFFSET(getStruct<T>, {0x1DE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool8                            OFFSET(getStruct<T>, {0x1E18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult22                               OFFSET(getStruct<T>, {0x1E48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer24                            OFFSET(getStruct<T>, {0x1E78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer25                            OFFSET(getStruct<T>, {0x1EA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool9                            OFFSET(getStruct<T>, {0x1ED8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult23                               OFFSET(getStruct<T>, {0x1F08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer26                            OFFSET(getStruct<T>, {0x1F38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult24                               OFFSET(getStruct<T>, {0x1F68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer27                            OFFSET(getStruct<T>, {0x1F98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool10                           OFFSET(getStruct<T>, {0x1FC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer28                            OFFSET(getStruct<T>, {0x1FF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult25                               OFFSET(getStruct<T>, {0x2028, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult51                          OFFSET(getStruct<T>, {0x2058, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult52                          OFFSET(getStruct<T>, {0x2088, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult53                          OFFSET(getStruct<T>, {0x20B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult54                          OFFSET(getStruct<T>, {0x20E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult55                          OFFSET(getStruct<T>, {0x2118, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult56                          OFFSET(getStruct<T>, {0x2148, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult57                          OFFSET(getStruct<T>, {0x2178, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult58                          OFFSET(getStruct<T>, {0x21A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer29                            OFFSET(getStruct<T>, {0x21D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult26                               OFFSET(getStruct<T>, {0x2208, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer30                            OFFSET(getStruct<T>, {0x2238, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult27                               OFFSET(getStruct<T>, {0x2268, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer31                            OFFSET(getStruct<T>, {0x2298, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult28                               OFFSET(getStruct<T>, {0x22C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer32                            OFFSET(getStruct<T>, {0x22F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult29                               OFFSET(getStruct<T>, {0x2328, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult59                          OFFSET(getStruct<T>, {0x2358, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine5                               OFFSET(getStruct<T>, {0x2388, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult30                               OFFSET(getStruct<T>, {0x23B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer33                            OFFSET(getStruct<T>, {0x23E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult31                               OFFSET(getStruct<T>, {0x2418, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer34                            OFFSET(getStruct<T>, {0x2448, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult32                               OFFSET(getStruct<T>, {0x2478, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer35                            OFFSET(getStruct<T>, {0x24A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult33                               OFFSET(getStruct<T>, {0x24D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult60                          OFFSET(getStruct<T>, {0x2508, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine6                               OFFSET(getStruct<T>, {0x2538, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult34                               OFFSET(getStruct<T>, {0x2568, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer36                            OFFSET(getStruct<T>, {0x2598, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult35                               OFFSET(getStruct<T>, {0x25C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer37                            OFFSET(getStruct<T>, {0x25F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer38                            OFFSET(getStruct<T>, {0x2628, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer39                            OFFSET(getStruct<T>, {0x2658, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool11                           OFFSET(getStruct<T>, {0x2688, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool12                           OFFSET(getStruct<T>, {0x26B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult36                               OFFSET(getStruct<T>, {0x26E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer40                            OFFSET(getStruct<T>, {0x2718, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult37                               OFFSET(getStruct<T>, {0x2748, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer41                            OFFSET(getStruct<T>, {0x2778, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool13                           OFFSET(getStruct<T>, {0x27A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer42                            OFFSET(getStruct<T>, {0x27D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool14                           OFFSET(getStruct<T>, {0x2808, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer5                           OFFSET(getStruct<T>, {0x2838, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult38                               OFFSET(getStruct<T>, {0x2868, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine7                               OFFSET(getStruct<T>, {0x2898, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone6                                 OFFSET(getStruct<T>, {0x28C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive4                              OFFSET(getStruct<T>, {0x28F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer6                           OFFSET(getStruct<T>, {0x2928, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive5                              OFFSET(getStruct<T>, {0x2958, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer7                           OFFSET(getStruct<T>, {0x2988, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose1                               OFFSET(getStruct<T>, {0x29B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool15                           OFFSET(getStruct<T>, {0x29E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool16                           OFFSET(getStruct<T>, {0x2A18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer8                           OFFSET(getStruct<T>, {0x2A48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer9                           OFFSET(getStruct<T>, {0x2A78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool17                           OFFSET(getStruct<T>, {0x2AA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult39                               OFFSET(getStruct<T>, {0x2AD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine8                               OFFSET(getStruct<T>, {0x2B08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult61                          OFFSET(getStruct<T>, {0x2B38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult62                          OFFSET(getStruct<T>, {0x2B68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer43                            OFFSET(getStruct<T>, {0x2B98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult40                               OFFSET(getStruct<T>, {0x2BC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose2                               OFFSET(getStruct<T>, {0x2BF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult41                               OFFSET(getStruct<T>, {0x2C28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine9                               OFFSET(getStruct<T>, {0x2C58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyMeshSpaceAdditive1                     OFFSET(getStruct<T>, {0x2C88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotationOffsetBlendSpace2                   OFFSET(getStruct<T>, {0x2CB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root2                                       OFFSET(getStruct<T>, {0x2CE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose2                            OFFSET(getStruct<T>, {0x2D18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose3                            OFFSET(getStruct<T>, {0x2D48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root3                                       OFFSET(getStruct<T>, {0x2D78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose4                            OFFSET(getStruct<T>, {0x2DA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose5                            OFFSET(getStruct<T>, {0x2DD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose6                            OFFSET(getStruct<T>, {0x2E08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root4                                       OFFSET(getStruct<T>, {0x2E38, 48, 0, 0})
};

/// Struct /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x00A7 (0x000001 - 0x0000A8)
class FAnimBlueprintGeneratedMutableDatadup_120 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(float)                                     __FloatProperty2                                            OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     __FloatProperty3                                            OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      __BoolProperty2                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      __BoolProperty3                                             OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(bool)                                      __BoolProperty4                                             OFFSET(get<bool>, {0x2E, 1, 0, 0})
	DMember(float)                                     __FloatProperty4                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     __FloatProperty5                                            OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      __BoolProperty5                                             OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     __FloatProperty6                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty6                                             OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     __FloatProperty7                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      __BoolProperty7                                             OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     __FloatProperty8                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     __FloatProperty9                                            OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     __FloatProperty10                                           OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     __FloatProperty11                                           OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     __FloatProperty12                                           OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     __FloatProperty13                                           OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     __FloatProperty14                                           OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      __BoolProperty8                                             OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     __FloatProperty15                                           OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     __FloatProperty16                                           OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      __BoolProperty9                                             OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      __BoolProperty10                                            OFFSET(get<bool>, {0x75, 1, 0, 0})
	DMember(bool)                                      __BoolProperty11                                            OFFSET(get<bool>, {0x76, 1, 0, 0})
	DMember(bool)                                      __BoolProperty12                                            OFFSET(get<bool>, {0x77, 1, 0, 0})
	DMember(bool)                                      __BoolProperty13                                            OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(float)                                     __FloatProperty17                                           OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty14                                            OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     __FloatProperty18                                           OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     __FloatProperty19                                           OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     __FloatProperty20                                           OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     __FloatProperty21                                           OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      __BoolProperty15                                            OFFSET(get<bool>, {0x94, 1, 0, 0})
	DMember(bool)                                      __BoolProperty16                                            OFFSET(get<bool>, {0x95, 1, 0, 0})
	DMember(float)                                     __FloatProperty22                                           OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     __FloatProperty23                                           OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty17                                            OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(float)                                     __FloatProperty24                                           OFFSET(get<float>, {0xA4, 4, 0, 0})
};

/// Struct /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0AC7 (0x000001 - 0x000AC8)
class FAnimBlueprintGeneratedConstantDatadup_121 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            OFFSET(getStruct<T>, {0xC, 44, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty1                                             OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x6C, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty2                                             OFFSET(get<T>, {0x6D, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              OFFSET(get<T>, {0x6E, 1, 0, 0})
	SMember(FName)                                     __NameProperty2                                             OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty3                                             OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty4                                             OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty5                                             OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty1                                           OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FName)                                     __NameProperty6                                             OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	SMember(FName)                                     __NameProperty7                                             OFFSET(getStruct<T>, {0x9C, 4, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0xA0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0x138, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose                             OFFSET(getStruct<T>, {0x168, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose                              OFFSET(getStruct<T>, {0x198, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LayeredBoneBlend                            OFFSET(getStruct<T>, {0x1C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose                               OFFSET(getStruct<T>, {0x1F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone                                  OFFSET(getStruct<T>, {0x228, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0x258, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x288, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose1                             OFFSET(getStruct<T>, {0x2B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose1                              OFFSET(getStruct<T>, {0x2E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool                             OFFSET(getStruct<T>, {0x318, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose2                              OFFSET(getStruct<T>, {0x348, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotateRootBone                              OFFSET(getStruct<T>, {0x378, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Slot                                        OFFSET(getStruct<T>, {0x3A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer                              OFFSET(getStruct<T>, {0x3D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotationOffsetBlendSpace                    OFFSET(getStruct<T>, {0x408, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer                            OFFSET(getStruct<T>, {0x438, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive                               OFFSET(getStruct<T>, {0x468, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone1                                 OFFSET(getStruct<T>, {0x498, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose1                            OFFSET(getStruct<T>, {0x4C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root1                                       OFFSET(getStruct<T>, {0x4F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Slot1                                       OFFSET(getStruct<T>, {0x528, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool1                            OFFSET(getStruct<T>, {0x558, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer1                             OFFSET(getStruct<T>, {0x588, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool2                            OFFSET(getStruct<T>, {0x5B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose2                             OFFSET(getStruct<T>, {0x5E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose3                              OFFSET(getStruct<T>, {0x618, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose4                              OFFSET(getStruct<T>, {0x648, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool3                            OFFSET(getStruct<T>, {0x678, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer1                           OFFSET(getStruct<T>, {0x6A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool4                            OFFSET(getStruct<T>, {0x6D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotateRootBone1                             OFFSET(getStruct<T>, {0x708, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer2                             OFFSET(getStruct<T>, {0x738, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool5                            OFFSET(getStruct<T>, {0x768, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose5                              OFFSET(getStruct<T>, {0x798, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool6                            OFFSET(getStruct<T>, {0x7C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer3                             OFFSET(getStruct<T>, {0x7F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool7                            OFFSET(getStruct<T>, {0x828, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RotationOffsetBlendSpace1                   OFFSET(getStruct<T>, {0x858, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose6                              OFFSET(getStruct<T>, {0x888, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone2                                 OFFSET(getStruct<T>, {0x8B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone3                                 OFFSET(getStruct<T>, {0x8E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone4                                 OFFSET(getStruct<T>, {0x918, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root2                                       OFFSET(getStruct<T>, {0x948, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose2                            OFFSET(getStruct<T>, {0x978, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose3                            OFFSET(getStruct<T>, {0x9A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root3                                       OFFSET(getStruct<T>, {0x9D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose4                            OFFSET(getStruct<T>, {0xA08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose5                            OFFSET(getStruct<T>, {0xA38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose6                            OFFSET(getStruct<T>, {0xA68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root4                                       OFFSET(getStruct<T>, {0xA98, 48, 0, 0})
};

/// Struct /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x001B (0x000001 - 0x00001C)
class FAnimBlueprintGeneratedMutableDatadup_122 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      __BoolProperty2                                             OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      __BoolProperty3                                             OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(float)                                     __FloatProperty2                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      __BoolProperty4                                             OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      __BoolProperty5                                             OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(bool)                                      __BoolProperty6                                             OFFSET(get<bool>, {0x16, 1, 0, 0})
	DMember(bool)                                      __BoolProperty7                                             OFFSET(get<bool>, {0x17, 1, 0, 0})
	DMember(float)                                     __FloatProperty3                                            OFFSET(get<float>, {0x18, 4, 0, 0})
};

