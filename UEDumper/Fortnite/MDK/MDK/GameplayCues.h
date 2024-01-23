
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: Niagara
/// dependency: VictoryCrownsRuntime

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_LuredInterest.GCN_Irwin_PlayerInteraction_LuredInterest_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Irwin_PlayerInteraction_LuredInterest_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C
/// Size: 0x0018 (0x0009B0 - 0x0009C8)
class AGCNL_Irwin_Slide_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	CMember(class USoundBase*)                         SlideSound                                                  OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(class UAudioComponent*)                    SlidingSoundComponent                                       OFFSET(get<T>, {0x9C0, 8, 0, 0})


	/// Functions
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.ExecuteUbergraph_GCNL_Irwin_Slide
	// void ExecuteUbergraph_GCNL_Irwin_Slide(int32_t EntryPoint);                                                              // [0x2177018] Final|HasDefaults    
};

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Irwin_PlayerInteraction_Tamed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class USkeletalMeshComponent*)             NewVar                                                      OFFSET(get<T>, {0x218, 8, 0, 0})


	/// Functions
	// Function /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C.OnBurstNiagara
	// void OnBurstNiagara(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Irwin_PlayerInteraction_Untamed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class USkeletalMeshComponent*)             NewVar                                                      OFFSET(get<T>, {0x218, 8, 0, 0})


	/// Functions
	// Function /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C.OnBurstNiagara
	// void OnBurstNiagara(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /RidingContent/GameplayCues/GCN_Riding_JumpOnCreature.GCN_Riding_JumpOnCreature_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_JumpOnCreature_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
/// Size: 0x0030 (0x000550 - 0x000580)
class AGCN_BurtCharging_Player_Latent_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	CMember(class APlayerController*)                  GCPlayerController                                          OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayerPawn                                              OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class USoundBase*)                         BoostSound                                                  OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UAudioComponent*)                    BoostAudioComponent                                         OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class USoundBase*)                         BoostEndSound                                               OFFSET(get<T>, {0x578, 8, 0, 0})


	/// Functions
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x2177018] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteBoostLogic
	// void ExecuteBoostLogic();                                                                                                // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.BoostEndEvent
	// void BoostEndEvent();                                                                                                    // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteUbergraph_GCN_BurtCharging_Player_Latent
	// void ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32_t EntryPoint);                                                // [0x2177018] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C
/// Size: 0x0018 (0x0009B0 - 0x0009C8)
class AGCNL_RidingSprint_SpeedLines_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	CMember(class USoundBase*)                         SpeedLinesAudio                                             OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(class UAudioComponent*)                    SpeedlinesAudioComp                                         OFFSET(get<T>, {0x9C0, 8, 0, 0})


	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.OnApplicationGeneric
	// void OnApplicationGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.ExecuteUbergraph_GCNL_RidingSprint_SpeedLines
	// void ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32_t EntryPoint);                                                  // [0x2177018] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Pawn.GCN_Riding_BoarSprintImpact_Pawn_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_Pawn_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C
/// Size: 0x0101 (0x0009B0 - 0x000AB1)
class AGCNL_PlayerIsRiding_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2737;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	CMember(class USoundBase*)                         RidingSoundLoop                                             OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(class UAudioComponent*)                    RidingSoundLoopComp                                         OFFSET(get<T>, {0x9C0, 8, 0, 0})
	SMember(FTimerHandle)                              VelocityTimerHandle                                         OFFSET(getStruct<T>, {0x9C8, 8, 0, 0})
	CMember(class AActor*)                             Player                                                      OFFSET(get<T>, {0x9D0, 8, 0, 0})
	DMember(double)                                    Speed                                                       OFFSET(get<double>, {0x9D8, 8, 0, 0})
	CMember(TEnumAsByte<EFortTeamAffiliation>)         TeamAffiliation                                             OFFSET(get<T>, {0x9E0, 1, 0, 0})
	SMember(FVector)                                   Previous                                                    OFFSET(getStruct<T>, {0x9E8, 24, 0, 0})
	CMember(class USoundBase*)                         Enemy_RidingSoundLoop                                       OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(class AFortPlayerPawnAthena*)              As_Fort_Player_Pawn_Athena                                  OFFSET(get<T>, {0xA08, 8, 0, 0})
	DMember(double)                                    JumpParamTarget                                             OFFSET(get<double>, {0xA10, 8, 0, 0})
	DMember(double)                                    JumpValue                                                   OFFSET(get<double>, {0xA18, 8, 0, 0})
	DMember(bool)                                      bIsFalling                                                  OFFSET(get<bool>, {0xA20, 1, 0, 0})
	DMember(bool)                                      bCanResetJump                                               OFFSET(get<bool>, {0xA21, 1, 0, 0})
	CMember(class UPawnMovementComponent*)             CreatureMovementComponent                                   OFFSET(get<T>, {0xA28, 8, 0, 0})
	SMember(FTimerHandle)                              JumpResetTimerHandle                                        OFFSET(getStruct<T>, {0xA30, 8, 0, 0})
	DMember(double)                                    JumpPitchInterpSpeed                                        OFFSET(get<double>, {0xA38, 8, 0, 0})
	SMember(FCurveTableRowHandle)                      RidingCurveTable                                            OFFSET(getStruct<T>, {0xA40, 16, 0, 0})
	DMember(double)                                    BoarSprintSpeed                                             OFFSET(get<double>, {0xA50, 8, 0, 0})
	DMember(double)                                    CurrentVelocity                                             OFFSET(get<double>, {0xA58, 8, 0, 0})
	DMember(double)                                    MaxNormalRunSpeed                                           OFFSET(get<double>, {0xA60, 8, 0, 0})
	DMember(bool)                                      bSprinting                                                  OFFSET(get<bool>, {0xA68, 1, 0, 0})
	DMember(double)                                    MaxSpeed                                                    OFFSET(get<double>, {0xA70, 8, 0, 0})
	DMember(double)                                    MaxSpeedClamped                                             OFFSET(get<double>, {0xA78, 8, 0, 0})
	CMember(class USoundBase*)                         BurstOnCue                                                  OFFSET(get<T>, {0xA80, 8, 0, 0})
	SMember(FGameplayTagContainer)                     BlockSitAudioTags                                           OFFSET(getStruct<T>, {0xA88, 32, 0, 0})
	CMember(class USoundBase*)                         BurstOffCue                                                 OFFSET(get<T>, {0xAA8, 8, 0, 0})
	DMember(bool)                                      HasAudio                                                    OFFSET(get<bool>, {0xAB0, 1, 0, 0})


	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.CalculateVelocityParam
	// void CalculateVelocityParam();                                                                                           // [0x2177018] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x2177018] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2177018] Event|Public|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingGCNLStarted
	// void PlayerRidingGCNLStarted();                                                                                          // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingDCNLEnded
	// void PlayerRidingDCNLEnded();                                                                                            // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnJumpApex
	// void OnJumpApex();                                                                                                       // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.SetUpRidableAudioEvents
	// void SetUpRidableAudioEvents();                                                                                          // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.StartLoopingAudio
	// void StartLoopingAudio();                                                                                                // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ExecuteUbergraph_GCNL_PlayerIsRiding
	// void ExecuteUbergraph_GCNL_PlayerIsRiding(int32_t EntryPoint);                                                           // [0x2177018] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Default.GCN_Riding_MountLanded_Default_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_MountLanded_Default_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Boar.GCN_Riding_MountLanded_Boar_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_MountLanded_Boar_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Default.GCN_Riding_BoarSprintImpact_Default_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_Default_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C
/// Size: 0x0020 (0x0009B0 - 0x0009D0)
class AGCNL_Riding_Sprint_CameraShake_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2512;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	CMember(class AFortPlayerController*)              FortPlayerController                                        OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(class UCameraShakeBase*)                   FOVFlare                                                    OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(class UCameraShakeBase*)                   ShakeNoise                                                  OFFSET(get<T>, {0x9C8, 8, 0, 0})


	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x2177018] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake
	// void ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake(int32_t EntryPoint);                                                // [0x2177018] Final|HasDefaults    
};

/// Class /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C
/// Size: 0x0018 (0x0009B0 - 0x0009C8)
class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           OFFSET(getStruct<T>, {0x9B8, 4, 0, 0})
	CMember(class UFXSystemComponent*)                 MainNS                                                      OFFSET(get<T>, {0x9C0, 8, 0, 0})


	/// Functions
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Added_7482F31A49360978B87F339D76FC2BB7
	// void Added_7482F31A49360978B87F339D76FC2BB7();                                                                           // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Removed_AD34CCD44592FD2F05DB47BDF9413ACC
	// void Removed_AD34CCD44592FD2F05DB47BDF9413ACC();                                                                         // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.OnApplicationGeneric
	// void OnApplicationGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount
	// void ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32_t EntryPoint);                         // [0x2177018] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_BuildDestroyed.GCN_Riding_BoarSprintImpact_BuildDestroyed_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_BuildDestroyed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Irwin/GameplayCues/GCN_Irwin_SprintImpact.GCN_Irwin_SprintImpact_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Irwin_SprintImpact_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:


	/// Functions
	// Function /Irwin/GameplayCues/GCN_Irwin_SprintImpact.GCN_Irwin_SprintImpact_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C
/// Size: 0x0028 (0x0009B0 - 0x0009D8)
class AGCNL_Ascender_Descent_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2520;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	SMember(FTimerHandle)                              SoundVisualizerHandle                                       OFFSET(getStruct<T>, {0x9B8, 8, 0, 0})
	CMember(class AActor*)                             My_Target                                                   OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(class UTexture*)                           Override_Icon                                               OFFSET(get<T>, {0x9D0, 8, 0, 0})


	/// Functions
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.VisualizeAudio
	// void VisualizeAudio();                                                                                                   // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.ExecuteUbergraph_GCNL_Ascender_Descent
	// void ExecuteUbergraph_GCNL_Ascender_Descent(int32_t EntryPoint);                                                         // [0x2177018] Final|HasDefaults    
};

/// Class /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C
/// Size: 0x0060 (0x0009B0 - 0x000A10)
class AGCNL_Ascender_Ascent_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    PlayerPawn                                                  OFFSET(get<T>, {0x9B8, 8, 0, 0})
	DMember(double)                                    MinCamShakeAmp                                              OFFSET(get<double>, {0x9C0, 8, 0, 0})
	DMember(double)                                    MaxCamShakeAmp                                              OFFSET(get<double>, {0x9C8, 8, 0, 0})
	DMember(double)                                    MinCamShakeFreq                                             OFFSET(get<double>, {0x9D0, 8, 0, 0})
	DMember(double)                                    MaxCamShakeFreq                                             OFFSET(get<double>, {0x9D8, 8, 0, 0})
	CMember(class ULegacyCameraShake*)                 matineeCamShake                                             OFFSET(get<T>, {0x9E0, 8, 0, 0})
	SMember(FScalableFloat)                            MaxAscenderSpeed                                            OFFSET(getStruct<T>, {0x9E8, 40, 0, 0})


	/// Functions
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnApplicationGeneric
	// void OnApplicationGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.CameraShakeTimer
	// void CameraShakeTimer();                                                                                                 // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.ExecuteUbergraph_GCNL_Ascender_Ascent
	// void ExecuteUbergraph_GCNL_Ascender_Ascent(int32_t EntryPoint);                                                          // [0x2177018] Final|HasDefaults    
};

/// Class /Ascender/GameplayCues/GCN_Ascender_SpeedLines.GCN_Ascender_SpeedLines_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Ascender_SpeedLines_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class UMaterialInterface*)                 Decal_Material                                              OFFSET(get<T>, {0x218, 8, 0, 0})


	/// Functions
	// Function /Ascender/GameplayCues/GCN_Ascender_SpeedLines.GCN_Ascender_SpeedLines_C.OnBurst
	// void OnBurst(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UParticleSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Ascender/GameplayCues/GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGC_Ascender_LinkToDestroyed_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:


	/// Functions
	// Function /Ascender/GameplayCues/GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C
/// Size: 0x00A8 (0x0009B0 - 0x000A58)
class AGCNL_VehicleCosmetics_CosmeticSwap_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	DMember(float)                                     Sweep_Car_to_Normal_Car_Sweep_Controller_E45E3F1947E3780C879AA7B0F67B8AA0 OFFSET(get<float>, {0x9B8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Sweep_Car_to_Normal__Direction_E45E3F1947E3780C879AA7B0F67B8AA0 OFFSET(get<T>, {0x9BC, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Sweep_Car_to_Normal                                         OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  LoopingVFX                                                  OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   LocalFortVehicleInterface                                   OFFSET(get<T>, {0x9D0, 16, 0, 0})
	SMember(FTimerHandle)                              KeepCheckingTimer                                           OFFSET(getStruct<T>, {0x9E0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OG_Vehicle_Mats                                             OFFSET(get<T>, {0x9E8, 16, 0, 0})
	CMember(TSet<UMaterialInterface*>)                 OG_Wheel_Mats                                               OFFSET(get<T>, {0x9F8, 80, 0, 0})
	CMember(class UMaterialInterface*)                 Vehicle_DeRez_Material                                      OFFSET(get<T>, {0xA48, 8, 0, 0})
	CMember(class UAudioComponent*)                    LoopingSound                                                OFFSET(get<T>, {0xA50, 8, 0, 0})


	/// Functions
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.Material Switch
	// void Material Switch(bool Restore Original, TScriptInterface<Class> Vehicle);                                            // [0x2177018] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.Sweep Car to Normal__FinishedFunc
	// void Sweep Car to Normal__FinishedFunc();                                                                                // [0x2177018] BlueprintEvent       
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.Sweep Car to Normal__UpdateFunc
	// void Sweep Car to Normal__UpdateFunc();                                                                                  // [0x2177018] BlueprintEvent       
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.KeepCheckingForWheels
	// void KeepCheckingForWheels();                                                                                            // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.ExecuteUbergraph_GCNL_VehicleCosmetics_CosmeticSwap
	// void ExecuteUbergraph_GCNL_VehicleCosmetics_CosmeticSwap(int32_t EntryPoint);                                            // [0x2177018] Final|HasDefaults    
};

/// Class /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C
/// Size: 0x0088 (0x000A68 - 0x000AF0)
class AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C : public AFortGameplayCueNotify_CrownWear
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA68, 8, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Shown_On_Wearer_                           OFFSET(getStruct<T>, {0xA70, 40, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Range                                      OFFSET(getStruct<T>, {0xA98, 40, 0, 0})
	SMember(FScalableFloat)                            Audio_Vizualizer_Ping_Frequency                             OFFSET(getStruct<T>, {0xAC0, 40, 0, 0})
	SMember(FTimerHandle)                              timer_handle                                                OFFSET(getStruct<T>, {0xAE8, 8, 0, 0})


	/// Functions
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.AVIndicatorLoop
	// void AVIndicatorLoop();                                                                                                  // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping
	// void ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping(int32_t EntryPoint);                                  // [0x2177018] Final|HasDefaults    
};

