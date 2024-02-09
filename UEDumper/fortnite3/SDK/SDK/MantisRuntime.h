
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
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: IrisCore
/// dependency: ModularGameplay

/// Enum /Script/MantisRuntime.EFortMantisTechniqueActivationInputType
/// Size: 0x05
enum class EFortMantisTechniqueActivationInputType : uint8_t
{
	EFortMantisTechniqueActivationInputType__None                                    = 0,
	EFortMantisTechniqueActivationInputType__Primary                                 = 1,
	EFortMantisTechniqueActivationInputType__Secondary                               = 2,
	EFortMantisTechniqueActivationInputType__Max_Invalid                             = 3,
	EFortMantisTechniqueActivationInputType__EFortMantisTechniqueActivationInputType_MAX = 4
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueActivationTimingType
/// Size: 0x04
enum class EFortMantisTechniqueActivationTimingType : uint8_t
{
	EFortMantisTechniqueActivationTimingType__None                                   = 0,
	EFortMantisTechniqueActivationTimingType__Pressed                                = 1,
	EFortMantisTechniqueActivationTimingType__Released                               = 2,
	EFortMantisTechniqueActivationTimingType__EFortMantisTechniqueActivationTimingType_MAX = 3
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueAnimationType
/// Size: 0x04
enum class EFortMantisTechniqueAnimationType : uint8_t
{
	EFortMantisTechniqueAnimationType__SingleMontage                                 = 0,
	EFortMantisTechniqueAnimationType__DynamicMontage                                = 1,
	EFortMantisTechniqueAnimationType__AnimInstance                                  = 2,
	EFortMantisTechniqueAnimationType__EFortMantisTechniqueAnimationType_MAX         = 3
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueRootMotionType
/// Size: 0x04
enum class EFortMantisTechniqueRootMotionType : uint8_t
{
	EFortMantisTechniqueRootMotionType__None                                         = 0,
	EFortMantisTechniqueRootMotionType__ExtractFromMontageAndWarp                    = 1,
	EFortMantisTechniqueRootMotionType__HoldPosition                                 = 2,
	EFortMantisTechniqueRootMotionType__EFortMantisTechniqueRootMotionType_MAX       = 3
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyEvent
/// Size: 0x04
enum class EFortMantisNotifyEvent : uint8_t
{
	EFortMantisNotifyEvent__Invalid                                                  = 0,
	EFortMantisNotifyEvent__Branch                                                   = 1,
	EFortMantisNotifyEvent__EndTechnique                                             = 2,
	EFortMantisNotifyEvent__EFortMantisNotifyEvent_MAX                               = 3
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyWindow
/// Size: 0x06
enum class EFortMantisNotifyWindow : uint8_t
{
	EFortMantisNotifyWindow__Invalid                                                 = 0,
	EFortMantisNotifyWindow__Input                                                   = 1,
	EFortMantisNotifyWindow__Execution                                               = 2,
	EFortMantisNotifyWindow__Damage                                                  = 3,
	EFortMantisNotifyWindow__RootMotionWarp                                          = 4,
	EFortMantisNotifyWindow__EFortMantisNotifyWindow_MAX                             = 5
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyTranslationWarpLimitRule
/// Size: 0x05
enum class EFortMantisNotifyTranslationWarpLimitRule : uint8_t
{
	EFortMantisNotifyTranslationWarpLimitRule__None                                  = 0,
	EFortMantisNotifyTranslationWarpLimitRule__Window                                = 1,
	EFortMantisNotifyTranslationWarpLimitRule__Animation                             = 2,
	EFortMantisNotifyTranslationWarpLimitRule__Custom                                = 3,
	EFortMantisNotifyTranslationWarpLimitRule__EFortMantisNotifyTranslationWarpLimitRule_MAX = 4
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyRotationWarpRateRule
/// Size: 0x03
enum class EFortMantisNotifyRotationWarpRateRule : uint8_t
{
	EFortMantisNotifyRotationWarpRateRule__Snap                                      = 0,
	EFortMantisNotifyRotationWarpRateRule__WindowDurationLerp                        = 1,
	EFortMantisNotifyRotationWarpRateRule__EFortMantisNotifyRotationWarpRateRule_MAX = 2
};

/// Enum /Script/MantisRuntime.EFortMantisBranchRule
/// Size: 0x04
enum class EFortMantisBranchRule : uint8_t
{
	EFortMantisBranchRule__Off                                                       = 0,
	EFortMantisBranchRule__Any                                                       = 1,
	EFortMantisBranchRule__Starter                                                   = 2,
	EFortMantisBranchRule__EFortMantisBranchRule_MAX                                 = 3
};

/// Enum /Script/MantisRuntime.EFortMantisBranchPath
/// Size: 0x08
enum class EFortMantisBranchPath : uint8_t
{
	EFortMantisBranchPath__Default                                                   = 0,
	EFortMantisBranchPath__Path                                                      = 1,
	EFortMantisBranchPath__Path3                                                     = 2,
	EFortMantisBranchPath__Path4                                                     = 3,
	EFortMantisBranchPath__Path5                                                     = 4,
	EFortMantisBranchPath__Path6                                                     = 5,
	EFortMantisBranchPath__Blocked                                                   = 6,
	EFortMantisBranchPath__EFortMantisBranchPath_MAX                                 = 7
};

/// Enum /Script/MantisRuntime.EFortMantisWarpTranslationMethod
/// Size: 0x07
enum class EFortMantisWarpTranslationMethod : uint8_t
{
	EFortMantisWarpTranslationMethod__None                                           = 0,
	EFortMantisWarpTranslationMethod__OffsetFromTargetActor                          = 1,
	EFortMantisWarpTranslationMethod__StaticLocation                                 = 2,
	EFortMantisWarpTranslationMethod__Reorient                                       = 3,
	EFortMantisWarpTranslationMethod__ScaledBasedOnInput                             = 4,
	EFortMantisWarpTranslationMethod__ReorientAndScaledBasedOnInput                  = 5,
	EFortMantisWarpTranslationMethod__EFortMantisWarpTranslationMethod_MAX           = 6
};

/// Enum /Script/MantisRuntime.EFortMantisWarpRotationMethod
/// Size: 0x04
enum class EFortMantisWarpRotationMethod : uint8_t
{
	EFortMantisWarpRotationMethod__None                                              = 0,
	EFortMantisWarpRotationMethod__FaceTargetActor                                   = 1,
	EFortMantisWarpRotationMethod__StaticRotation                                    = 2,
	EFortMantisWarpRotationMethod__EFortMantisWarpRotationMethod_MAX                 = 3
};

/// Struct /Script/MantisRuntime.FortMantisReplicatedAnimInstanceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortMantisReplicatedAnimInstanceInfo
{ 
	bool                                               bIsTechniqueActive;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              ActiveTechniqueName;                                        // 0x0004   (0x0004)  
	int32_t                                            ActiveTechniqueIndex;                                       // 0x0008   (0x0004)  
	int32_t                                            ActiveTechniqueConsecutiveBranchesToSelf;                   // 0x000C   (0x0004)  
};

/// Class /Script/MantisRuntime.FortMantisAnimInstance
/// Size: 0x0010 (0x000460 - 0x000470)
#pragma pack(push, 0x1)
class alignas(0x10) 
UFortMantisAnimInstance : public UFortBaseAnimInstance
{ 
public:
	FFortMantisReplicatedAnimInstanceInfo              MantisAnimInstanceInfo;                                     // 0x0458   (0x0010)  


	/// Functions
	// Function /Script/MantisRuntime.FortMantisAnimInstance.OnMantisTechniqueStarted
	// void OnMantisTechniqueStarted(int32_t TechniqueIndex, FName TechniqueName);                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortMantisAnimInstance.OnMantisTechniqueEnded
	// void OnMantisTechniqueEnded(int32_t TechniqueIndex, FName TechniqueName);                                             // [0x2047e54] Event|Protected|BlueprintEvent 
};
#pragma pack(pop)

/// Class /Script/MantisRuntime.FortMantisLayerAnimInstance
/// Size: 0x0010 (0x001620 - 0x001630)
class UFortMantisLayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:
	FFortMantisReplicatedAnimInstanceInfo              MantisAnimInstanceInfo;                                     // 0x1620   (0x0010)  


	/// Functions
	// Function /Script/MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueStarted
	// void OnMantisTechniqueStarted(int32_t TechniqueIndex, FName TechniqueName);                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueEnded
	// void OnMantisTechniqueEnded(int32_t TechniqueIndex, FName TechniqueName);                                             // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
/// Size: 0x0090 (0x0006F0 - 0x000780)
class UFortItemLayerAnimInstance_UncleBrolly : public UFortItemLayerAnimInstance
{ 
public:
	FCachedAnimStateArray                              UmbrellaGliderOpenStateDataArray;                           // 0x06F0   (0x0018)  
	FVector                                            WrapTranslation;                                            // 0x0708   (0x0018)  
	FRotator                                           WrapRotation;                                               // 0x0720   (0x0018)  
	FRotator                                           RootRotationOffset;                                         // 0x0738   (0x0018)  
	float                                              LandingPredictedTimer;                                      // 0x0750   (0x0004)  
	bool                                               bShouldUpdateYawCorrection;                                 // 0x0754   (0x0001)  
	bool                                               bWasAcceleratingBeforeDodge;                                // 0x0755   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0756   (0x0002)  MISSED
	float                                              UncleBrollyDeployCurveValue;                                // 0x0758   (0x0004)  
	float                                              DashChargeTier;                                             // 0x075C   (0x0004)  
	float                                              DashChargeAdditivePlayrate;                                 // 0x0760   (0x0004)  
	bool                                               bIsUmbrellaFailing;                                         // 0x0764   (0x0001)  
	bool                                               bIsMeleeGuarding;                                           // 0x0765   (0x0001)  
	bool                                               bIsSprinting;                                               // 0x0766   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x0767   (0x0001)  
	bool                                               bIsLandingPredicted;                                        // 0x0768   (0x0001)  
	bool                                               bIsJumping;                                                 // 0x0769   (0x0001)  
	bool                                               bIsDodging;                                                 // 0x076A   (0x0001)  
	bool                                               bIsDodgingEast;                                             // 0x076B   (0x0001)  
	bool                                               bIsDodgingSouth;                                            // 0x076C   (0x0001)  
	bool                                               bIsDodgingWest;                                             // 0x076D   (0x0001)  
	bool                                               bIsDashing;                                                 // 0x076E   (0x0001)  
	bool                                               bIsDashCharging;                                            // 0x076F   (0x0001)  
	bool                                               bIsDashPredictingEnd;                                       // 0x0770   (0x0001)  
	bool                                               bIsChargeTier1;                                             // 0x0771   (0x0001)  
	bool                                               bIsChargeTier2;                                             // 0x0772   (0x0001)  
	bool                                               bIsChargeTier3;                                             // 0x0773   (0x0001)  
	bool                                               bMeleeGuardingOrUmbrellaFailing;                            // 0x0774   (0x0001)  
	bool                                               bTransition_Default_to_GuardLoop;                           // 0x0775   (0x0001)  
	bool                                               bTransition_Default_to_GuardIntro;                          // 0x0776   (0x0001)  
	bool                                               bTransition_GuardIntro_to_Default;                          // 0x0777   (0x0001)  
	bool                                               bUpperBodyShouldPassThrough;                                // 0x0778   (0x0001)  
	bool                                               bUmbrellaGliderIsOpen;                                      // 0x0779   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x077A   (0x0006)  MISSED
};

/// Class /Script/MantisRuntime.UncleBrollyWeaponAnimInstance
/// Size: 0x0040 (0x000370 - 0x0003B0)
class UUncleBrollyWeaponAnimInstance : public UAnimInstance
{ 
public:
	class UClass*                                      UncleBrollyItemLayer;                                       // 0x0368   (0x0008)  
	FRotator                                           UmbrellaRotation;                                           // 0x0370   (0x0018)  
	float                                              UmbrellaSpinSpeed;                                          // 0x0388   (0x0004)  
	float                                              BlockDeployEndPlayrate;                                     // 0x038C   (0x0004)  
	float                                              BlockDeployEndStartPosition;                                // 0x0390   (0x0004)  
	bool                                               bIsDodging;                                                 // 0x0394   (0x0001)  
	bool                                               bIsPlayingMeleeAnim;                                        // 0x0395   (0x0001)  
	bool                                               bIsUmbrellaFailing;                                         // 0x0396   (0x0001)  
	bool                                               bIsMeleeGuarding;                                           // 0x0397   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x0398   (0x0001)  
	bool                                               bIsDashing;                                                 // 0x0399   (0x0001)  
	bool                                               bIsSprinting;                                               // 0x039A   (0x0001)  
	bool                                               bIsPredictingEnd;                                           // 0x039B   (0x0001)  
	bool                                               bIsDashCharging;                                            // 0x039C   (0x0001)  
	bool                                               bIsDashPredictingEnd;                                       // 0x039D   (0x0001)  
	bool                                               bInAirAndMeleeGuarding;                                     // 0x039E   (0x0001)  
	bool                                               bTransition_Default_to_DeployStart;                         // 0x039F   (0x0001)  
	bool                                               bTransition_DeployStart_to_Default;                         // 0x03A0   (0x0001)  
	bool                                               bTransition_Fail_to_FailToDeploy;                           // 0x03A1   (0x0001)  
	bool                                               bTransition_FailLoop_to_DeployEnd;                          // 0x03A2   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x03A3   (0x000D)  MISSED
};

/// Struct /Script/MantisRuntime.FortMantisRootMotionWarpInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortMantisRootMotionWarpInfo
{ 
	SDK_UNDEFINED(8,13927) /* TWeakObjectPtr<AActor*> */ __um(WarpTarget);                                         // 0x0000   (0x0008)  
	FVector_NetQuantize                                LastValidWarpTargetLocation;                                // 0x0008   (0x0018)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0020:0 (0x0001)  MISSED
	bool                                               bAllowTranslationWarp : 1;                                  // 0x0020:1 (0x0001)  
	bool                                               bAllowRotationWarp : 1;                                     // 0x0020:2 (0x0001)  
	bool                                               bSnapshotTargetLocation : 1;                                // 0x0020:3 (0x0001)  
	bool                                               bUseAlternativeWarpingBehavior;                             // 0x0021   (0x0001)  
	EFortMantisWarpTranslationMethod                   WarpTranslationMethod;                                      // 0x0022   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	FVector_NetQuantize                                WarpTranslationVector;                                      // 0x0028   (0x0018)  
	EFortMantisWarpRotationMethod                      WarpRotationMethod;                                         // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              WarpRotationYaw;                                            // 0x0044   (0x0004)  
};

/// Class /Script/MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UFortAbilityTask_ApplyRootMotionMantisForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,13928) /* FMulticastInlineDelegate */ __um(OnFinish);                                         // 0x00B8   (0x0010)  
	float                                              duration;                                                   // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class UAnimMontage*                                TechniqueMontage;                                           // 0x00D0   (0x0008)  
	FFortMantisRootMotionWarpInfo                      WarpInfo;                                                   // 0x00D8   (0x0048)  
};

/// Class /Script/MantisRuntime.FortAnimNotify_Mantis
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAnimNotify_Mantis : public UAnimNotify
{ 
public:
	EFortMantisNotifyEvent                             MantisNotifyEvent;                                          // 0x0038   (0x0001)  
	EFortMantisBranchRule                              MantisBranchRule;                                           // 0x0039   (0x0001)  
	EFortMantisBranchPath                              MantisBranchPath;                                           // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x003B   (0x0005)  MISSED
};

/// Class /Script/MantisRuntime.FortAnimNotifyState_Mantis
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAnimNotifyState_Mantis : public UAnimNotifyState
{ 
public:
	EFortMantisNotifyWindow                            MantisNotifyWindow;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FGameplayTag                                       MantisNotifyTag;                                            // 0x0034   (0x0004)  
	EFortMantisNotifyTranslationWarpLimitRule          TranslationWarpLimitRule;                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              TranslationWarpLimit;                                       // 0x003C   (0x0004)  
	EFortMantisNotifyRotationWarpRateRule              RotationRateWarpRule;                                       // 0x0040   (0x0001)  
	bool                                               bWarpRotation : 1;                                          // 0x0041:0 (0x0001)  
	bool                                               bWarpTranslation : 1;                                       // 0x0041:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/MantisRuntime.FortGameplayAbility_Mantis
/// Size: 0x0048 (0x000B60 - 0x000BA8)
class UFortGameplayAbility_Mantis : public UFortGameplayAbility
{ 
public:
	bool                                               bAllowRootMotionWarping;                                    // 0x0B60   (0x0001)  
	bool                                               bUseAlternativeWarpingBehavior;                             // 0x0B61   (0x0001)  
	bool                                               bApplyEffectContainerOnTechniqueDamage;                     // 0x0B62   (0x0001)  
	bool                                               bApplyEffectContainerOnTechniqueStart;                      // 0x0B63   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0B64   (0x0004)  MISSED
	class UFortMantisPawnComponent*                    MantisPawnComponent;                                        // 0x0B68   (0x0008)  
	class UAbilityTask_PlayMontageAndWait*             MontageTask;                                                // 0x0B70   (0x0008)  
	class UAbilityTask_ApplyRootMotion_Base*           RootMotionTask;                                             // 0x0B78   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0B80   (0x0028)  MISSED


	/// Functions
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished
	// void OnMontageFinished();                                                                                             // [0xab07f88] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled
	// void OnMontageCancelled();                                                                                            // [0xab07f74] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.GetLevelForGameplayEffectContainer
	// int32_t GetLevelForGameplayEffectContainer(FGameplayTag ApplicationTag);                                              // [0xab07acc] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.GetDynamicMontageNameForTechnique
	// FName GetDynamicMontageNameForTechnique(FName TechniqueName);                                                         // [0xab07a00] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.FillMetadataForTechnique
	// void FillMetadataForTechnique(FName TechniqueName, FFortMantisTechniqueMetadata& OutTechniqueMetadata);               // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarpingAlternativeBehavior
	// void ConfigureRootMotionWarpingAlternativeBehavior(FName TechniqueName, class AActor*& OutTargetActor, bool& bOutSnapshotTargetActorLocation, EFortMantisWarpTranslationMethod& OutWarpTranslationMethod, FVector& OutWarpTranslationVector, EFortMantisWarpRotationMethod& OutWarpRotationMethod, FRotator& OutStaticRotation); // [0x2047e54] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping
	// void ConfigureRootMotionWarping(FName TechniqueName, bool& bOutAllowTranslationWarp, bool& bOutAllowRotationWarp, class AActor*& OutTargetActor, bool& bOutSnapshotTargetActorLocation, bool& bOutWarpTranslationToLocation, FVector& outTargetLocation); // [0xab076fc] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowStarted
	// void BP_OnTechniqueNotifyWindowStarted(EFortMantisNotifyWindow NotifyWindow, class UFortAnimNotifyState_Mantis* Notify); // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowEnded
	// void BP_OnTechniqueNotifyWindowEnded(EFortMantisNotifyWindow NotifyWindow, class UFortAnimNotifyState_Mantis* Notify); // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyEvent
	// void BP_OnTechniqueNotifyEvent(EFortMantisNotifyEvent NotifyEvent, class UFortAnimNotify_Mantis* Notify);             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
	// void BP_OnMantisTechniqueHit(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTag ApplicationTag);        // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisPreTechniqueSelection
	// void BP_OnMantisPreTechniqueSelection();                                                                              // [0x2047e54] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisInputEvent
	// void BP_OnMantisInputEvent(EFortMantisTechniqueActivationInputType InputType, EFortMantisTechniqueActivationTimingType InputTiming, bool bDidInputStartTechnique, bool bDidInputQueueTechnique, float InputHeldDuration); // [0x2047e54] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_MantisAbilityTechniqueStarted
	// void BP_MantisAbilityTechniqueStarted(FGameplayTagContainer OwningTags, FName SequenceName, bool StartsSequence, bool EndsSequence); // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueCharacterSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FFortMantisTechniqueCharacterSettings
{ 
	bool                                               bDetachCharacterRotationFromCamera;                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ReattachCharacterRotationBlendTime;                         // 0x0004   (0x0004)  
	float                                              ReattachCharacterRotationBlendExponent;                     // 0x0008   (0x0004)  
	bool                                               bReattachCharacterRotationIfNoMovementInput;                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              WindupCharacterRotationRate;                                // 0x0010   (0x0004)  
	float                                              ExecutionCharacterRotationRate;                             // 0x0014   (0x0004)  
	float                                              RecoveryCharacterRotationRate;                              // 0x0018   (0x0004)  
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueData
/// Size: 0x0158 (0x000000 - 0x000158)
struct FFortMantisTechniqueData
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	bool                                               bStartsSequence;                                            // 0x0004   (0x0001)  
	bool                                               bEndsSequence;                                              // 0x0005   (0x0001)  
	bool                                               bBranchesToBlockedOnZeroDamage;                             // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0007   (0x0001)  MISSED
	int32_t                                            MaxConsecutiveBranchesToSelf;                               // 0x0008   (0x0004)  
	EFortMantisTechniqueAnimationType                  AnimationType;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	class UAnimMontage*                                Montage;                                                    // 0x0010   (0x0008)  
	SDK_UNDEFINED(80,13929) /* TMap<FName, UAnimMontage*> */ __um(DynamicMontages);                                // 0x0018   (0x0050)  
	FName                                              DefaultDynamicMontageName;                                  // 0x0068   (0x0004)  
	EFortMantisTechniqueRootMotionType                 RootMotionType;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              InputWindowDelay;                                           // 0x0070   (0x0004)  
	EFortMantisTechniqueActivationInputType            ActivationInputType;                                        // 0x0074   (0x0001)  
	EFortMantisTechniqueActivationTimingType           ActivationTimingType;                                       // 0x0075   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0076   (0x0002)  MISSED
	float                                              MinInputHoldDuration;                                       // 0x0078   (0x0004)  
	float                                              MaxInputHoldDuration;                                       // 0x007C   (0x0004)  
	FGameplayTagContainer                              ActivationGameplayCues;                                     // 0x0080   (0x0020)  
	FGameplayTagQuery                                  ActivationTagQuery;                                         // 0x00A0   (0x0048)  
	FGameplayTagQuery                                  OngoingTagQuery;                                            // 0x00E8   (0x0048)  
	FGameplayTag                                       ActivationApplicationTag;                                   // 0x0130   (0x0004)  
	FGameplayTag                                       DamageApplicationTag;                                       // 0x0134   (0x0004)  
	FFortMantisTechniqueCharacterSettings              CharacterSettings;                                          // 0x0138   (0x001C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueBranch
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFortMantisTechniqueBranch
{ 
	FName                                              FromTechnique;                                              // 0x0000   (0x0004)  
	FName                                              ToTechnique;                                                // 0x0004   (0x0004)  
	EFortMantisBranchPath                              BranchPath;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/MantisRuntime.FortMantisData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortMantisData : public UDataAsset
{ 
public:
	bool                                               bShowTargetHealthBar;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UClass*                                      TechniqueAbility;                                           // 0x0038   (0x0008)  
	TArray<FFortGameplayEffectContainer>               TechniqueAdditionEffectContainers;                          // 0x0040   (0x0010)  
	TArray<FFortMantisTechniqueData>                   Techniques;                                                 // 0x0050   (0x0010)  
	TArray<FFortMantisTechniqueBranch>                 Branches;                                                   // 0x0060   (0x0010)  
};

/// Class /Script/MantisRuntime.FortMantisPawnComponent
/// Size: 0x03C0 (0x0000A0 - 0x000460)
class UFortMantisPawnComponent : public UPawnComponent
{ 
public:
	SDK_UNDEFINED(16,13930) /* FMulticastInlineDelegate */ __um(OnTechniqueMetadataReady);                         // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_5[0xE0];                                      // 0x00B0   (0x00E0)  MISSED
	SDK_UNDEFINED(80,13931) /* TMap<UAnimMontage*, FFortMantisMontageData> */ __um(MontageDataMap);                // 0x0190   (0x0050)  
	class UFortMantisData*                             MantisData;                                                 // 0x01E0   (0x0008)  
	class AFortWeapon*                                 Weapon;                                                     // 0x01E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x270];                                     // 0x01F0   (0x0270)  MISSED


	/// Functions
	// Function /Script/MantisRuntime.FortMantisPawnComponent.TryManuallyStartTechnique
	// bool TryManuallyStartTechnique(int32_t TechniqueDataIndex);                                                           // [0xab08b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.TryManuallyEndCurrentTechnique
	// bool TryManuallyEndCurrentTechnique();                                                                                // [0xab08aec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.SimulateInputEvent
	// void SimulateInputEvent(EFortMantisTechniqueActivationInputType InputType, EFortMantisTechniqueActivationTimingType InputTiming, bool bForceProcessEvent); // [0xab08930] Final|Native|Public|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.SetLockOnState
	// void SetLockOnState(bool bEnabled, class AActor* TargetActor);                                                        // [0xab08740] Final|Native|Public|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.SetBranchRule
	// void SetBranchRule(EFortMantisBranchRule InBranchRule, EFortMantisBranchPath InBranchPath);                           // [0xab08604] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
	// void OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);                      // [0xab07fb0] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnOwnerWeaponHolstered
	// void OnOwnerWeaponHolstered();                                                                                        // [0xab07f9c] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
	// void OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);               // [0xab07d74] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.IsSpecificInputPressed
	// bool IsSpecificInputPressed(EFortMantisTechniqueActivationInputType InputType);                                       // [0xab07c84] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.IsPerformingLockOn
	// bool IsPerformingLockOn();                                                                                            // [0xab07c68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.HasLockOnTarget
	// bool HasLockOnTarget();                                                                                               // [0xab07c28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.HasCurrentTechniqueMetadataBeenSet
	// bool HasCurrentTechniqueMetadataBeenSet();                                                                            // [0xab07c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.GetMontageForCurrentTechnique
	// class UAnimMontage* GetMontageForCurrentTechnique();                                                                  // [0xab07bc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.GetLockOnTarget
	// class AActor* GetLockOnTarget();                                                                                      // [0xab07ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.GetCurrentTechniqueMetadata
	// FFortMantisTechniqueMetadata GetCurrentTechniqueMetadata();                                                           // [0xab079e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MantisRuntime.FortMantisWeaponComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UFortMantisWeaponComponent : public UFortWeaponComponent
{ 
public:
	class UFortMantisData*                             MantisData;                                                 // 0x00A0   (0x0008)  
	bool                                               bAllowPrimaryFireInputsWhileHolstered;                      // 0x00A8   (0x0001)  
	bool                                               bAllowSecondaryFireInputsWhileHolstered;                    // 0x00A9   (0x0001)  
	bool                                               bForceAllowFireWithSinglePressOnVehicle;                    // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00AB   (0x0001)  MISSED
	SDK_UNDEFINED(8,13932) /* TWeakObjectPtr<UFortMantisPawnComponent*> */ __um(MantisPawnComponent);              // 0x00AC   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00B4   (0x000C)  MISSED
	FFortMantisReplicatedAnimInstanceInfo              AnimInstanceInfo;                                           // 0x00C0   (0x0010)  
	FFortMantisReplicatedAnimInstanceInfo              ReplayAnimInstanceInfo;                                     // 0x00D0   (0x0010)  


	/// Functions
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnWeaponAbilitiesRemoved
	// void OnWeaponAbilitiesRemoved(class AFortWeapon* Weapon, EFortWeaponAbilityRemovalReason RemovalReason);              // [0xab084c4] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnUnEquip
	// void OnUnEquip(class AFortWeapon* Weapon);                                                                            // [0xab08404] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnRep_ReplayAnimInstanceInfo
	// void OnRep_ReplayAnimInstanceInfo();                                                                                  // [0xab083f0] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnReleaseTrigger
	// void OnReleaseTrigger(class AFortWeapon* Weapon);                                                                     // [0xab08330] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnReleaseSecondaryFire
	// void OnReleaseSecondaryFire(class AFortWeapon* Weapon);                                                               // [0xab08270] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnPressTrigger
	// void OnPressTrigger(class AFortWeapon* Weapon);                                                                       // [0xab081b0] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnPressSecondaryFire
	// void OnPressSecondaryFire(class AFortWeapon* Weapon);                                                                 // [0xab080f0] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnEquip
	// void OnEquip(class AFortWeapon* Weapon);                                                                              // [0xab07eb4] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.GetAnimInstanceInfo
	// FFortMantisReplicatedAnimInstanceInfo GetAnimInstanceInfo();                                                          // [0xab079c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueMetadata
/// Size: 0x0140 (0x000000 - 0x000140)
struct FFortMantisTechniqueMetadata
{ 
	SDK_UNDEFINED(80,13933) /* TMap<FGameplayTag, int32_t> */ __um(IntValues);                                     // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,13934) /* TMap<FGameplayTag, float> */ __um(FloatValues);                                     // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,13935) /* TMap<FGameplayTag, FVector> */ __um(VectorValues);                                  // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,13936) /* TMap<FGameplayTag, FString> */ __um(StringValues);                                  // 0x00F0   (0x0050)  
};

/// Struct /Script/MantisRuntime.FortRootMotionSource_Mantis
/// Size: 0x00A0 (0x0000E0 - 0x000180)
struct FFortRootMotionSource_Mantis : FRootMotionSource
{ 
	float                                              CurrentTechniqueTime;                                       // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	class UAnimMontage*                                TechniqueMontage;                                           // 0x00E0   (0x0008)  
	FFortMantisRootMotionWarpInfo                      WarpInfo;                                                   // 0x00E8   (0x0048)  
	FVector                                            LatestRepMovementLocation;                                  // 0x0130   (0x0018)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0148   (0x0038)  MISSED
};

/// Struct /Script/MantisRuntime.FortMantisTargetData
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FFortMantisTargetData : FGameplayAbilityTargetData
{ 
	FFortMantisRootMotionWarpInfo                      TechniqueWarpInfo;                                          // 0x0008   (0x0048)  
	int32_t                                            TechniqueDataIndex;                                         // 0x0050   (0x0004)  
	bool                                               bIsLockedOn;                                                // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FName                                              DynamicMontageName;                                         // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FFortMantisTechniqueMetadata                       TechniqueMetadata;                                          // 0x0060   (0x0140)  
};

/// Struct /Script/MantisRuntime.FortMantisMontageData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortMantisMontageData
{ 
	class UAnimMontage*                                Montage;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/MantisRuntime.FortMantisRootMotionWarpInfoNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FFortMantisRootMotionWarpInfoNetSerializerConfig : FNetSerializerConfig
{ 
};

