
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/LimeNative.LimeAnalytics
/// Size: 0x0030 (0x000028 - 0x000058)
class ULimeAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FLimeAnalyticsContext>)             AnalyticsContexts                                           OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LimeNative.LimeBaseLayerAnimInstance
/// Size: 0x0010 (0x000460 - 0x000470)
class ULimeBaseLayerAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	DMember(bool)                                      bHasIsTargetingTag                                          OFFSET(get<bool>, {0x458, 1, 1, 0})
	CMember(TWeakObjectPtr<UJunoPlayerAnimInstance*>)  MainAnimInstanceWeakPtr                                     OFFSET(get<T>, {0x45C, 8, 0, 0})
};

/// Class /Script/LimeNative.LimeDBNOAnimInstance
/// Size: 0x0030 (0x000470 - 0x0004A0)
class ULimeDBNOAnimInstance : public ULimeBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(EFortPlayerAnimBodyType)                   AnimBodyType                                                OFFSET(get<T>, {0x468, 1, 0, 0})
	DMember(float)                                     LeanAngle                                                   OFFSET(get<float>, {0x46C, 4, 0, 0})
	DMember(float)                                     SpeedAdjustedPlayrate                                       OFFSET(get<float>, {0x470, 4, 0, 0})
	DMember(float)                                     LeanAdditiveAlpha                                           OFFSET(get<float>, {0x474, 4, 0, 0})
	DMember(float)                                     Speed2D                                                     OFFSET(get<float>, {0x478, 4, 0, 0})
	DMember(float)                                     MovementBlendSpaceSpeed2D                                   OFFSET(get<float>, {0x47C, 4, 0, 0})
	DMember(float)                                     MaxMovementBlendSpaceSpeed                                  OFFSET(get<float>, {0x480, 4, 0, 0})
	DMember(float)                                     LocalVelocityYawAngle                                       OFFSET(get<float>, {0x484, 4, 0, 0})
	DMember(float)                                     DBNOTurnPlayRate                                            OFFSET(get<float>, {0x488, 4, 0, 0})
	DMember(float)                                     YawDeltaCurrentTick                                         OFFSET(get<float>, {0x48C, 4, 0, 0})
	DMember(float)                                     YawDeltaLastTick                                            OFFSET(get<float>, {0x490, 4, 0, 0})
	DMember(float)                                     YawDeltaSmoothed                                            OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(bool)                                      bIsOnGround                                                 OFFSET(get<bool>, {0x498, 1, 1, 0})
	DMember(bool)                                      bTransition_FullBody_DBNOMove                               OFFSET(get<bool>, {0x498, 1, 1, 1})
	DMember(bool)                                      bTransition_FullBody_DBNOTurn                               OFFSET(get<bool>, {0x498, 1, 1, 2})
	DMember(bool)                                      bIsLargeBodyType                                            OFFSET(get<bool>, {0x498, 1, 1, 3})
};

/// Class /Script/LimeNative.LimeOverrideManager
/// Size: 0x0068 (0x000028 - 0x000090)
class ULimeOverrideManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:


	/// Functions
	// Function /Script/LimeNative.LimeOverrideManager.OnEndPlay
	// void OnEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                          // [0x267ade4] Final|Native|Private 
};

/// Class /Script/LimeNative.LimePawnComponentOverrides
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class ULimePawnComponentOverrides : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TArray<FLimePawnComponentOverride>)        ObjectOverrides                                             OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(class UClass*)                             ClamberingMME                                               OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelSettingsChanged                                      OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TMap<FGameplayTag, UClass*>)               VehicleAnimLayerOverlayClass                                OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(class UClass*)                             DBNOAnimLayerClass                                          OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UClass*)                             DBNOCarriedAnimLayerClass                                   OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UClass*)                             SkydiveAnimLayerClass                                       OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UClass*)                             CurrentAnimLayerClass                                       OFFSET(get<T>, {0x148, 8, 0, 0})


	/// Functions
	// Function /Script/LimeNative.LimePawnComponentOverrides.OnLimeSettingsEndPlay
	// void OnLimeSettingsEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                              // [0xbc8566c] Final|Native|Protected 
	// Function /Script/LimeNative.LimePawnComponentOverrides.OnLevelSettingsChanged__DelegateSignature
	// void OnLevelSettingsChanged__DelegateSignature();                                                                        // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/LimeNative.LimePawnComponentOverrides.IsOrbitCameraEnabled
	// bool IsOrbitCameraEnabled();                                                                                             // [0x8d705b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LimeNative.LimePawnComponentOverrides.HandleEnterVehicle
	// void HandleEnterVehicle();                                                                                               // [0xbc855a0] Final|Native|Protected 
	// Function /Script/LimeNative.LimePawnComponentOverrides.AreJunoControlsEnabled
	// bool AreJunoControlsEnabled();                                                                                           // [0x9373924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LimeNative.LimeSkydivingAnimInstance
/// Size: 0x0090 (0x000470 - 0x000500)
class ULimeSkydivingAnimInstance : public ULimeBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	SMember(FFortAnimInput_Skydiving)                  Skydiving                                                   OFFSET(getStruct<T>, {0x468, 128, 0, 0})
	DMember(float)                                     FreeFall_AimPitch                                           OFFSET(get<float>, {0x4E8, 4, 0, 0})
	DMember(float)                                     AimPitch                                                    OFFSET(get<float>, {0x4EC, 4, 0, 0})
	DMember(bool)                                      bIsAccelerating2D                                           OFFSET(get<bool>, {0x4F0, 1, 1, 0})
};

/// Class /Script/LimeNative.LimeGameFeatureAction_AddLimeAnalytics
/// Size: 0x0028 (0x000028 - 0x000050)
class ULimeGameFeatureAction_AddLimeAnalytics : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UClass*>)                   LimeAnalyticsClass                                          OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(class ULimeAnalytics*)                     LimeAnalyticsInstance                                       OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/LimeNative.LimePlayerAnimInstance
/// Size: 0x0000 (0x001B40 - 0x001B40)
class ULimePlayerAnimInstance : public UFortPlayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6976;

public:
};

/// Class /Script/LimeNative.LimePlayerAnimInstanceProxy
/// Size: 0x0000 (0x001620 - 0x001620)
class ULimePlayerAnimInstanceProxy : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5664;

public:
};

/// Class /Script/LimeNative.LimeCameraMode_OrbitCam
/// Size: 0x0000 (0x001BA0 - 0x001BA0)
class ULimeCameraMode_OrbitCam : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7072;

public:


	/// Functions
	// Function /Script/LimeNative.LimeCameraMode_OrbitCam.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                     // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/LimeNative.LimeCameraMode_OrbitCam.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/LimeNative.LimeCameraModeOverrideComponent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class ULimeCameraModeOverrideComponent : public UFortCameraModeOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class ULimePawnComponentOverrides*)        LimePawnComponentOverrides                                  OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/LimeNative.LimeCameraModeOverrideComponent.UpdateIsOrbitCameraEnabled
	// void UpdateIsOrbitCameraEnabled();                                                                                       // [0xbc858c4] Final|Native|Private 
};

/// Class /Script/LimeNative.DebugObserveLimePlugin
/// Size: 0x0008 (0x000028 - 0x000030)
class UDebugObserveLimePlugin : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LimeNative.GameFeatureAction_LimeDebug
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_LimeDebug : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UGameFeatureAction*>)         ForcePawnActions                                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LimeNative.LimePawnComponentMood
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class ULimePawnComponentMood : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnLimeMoodChangedDelegate                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FLimeMoodStateData)                        CurrentMoodState                                            OFFSET(getStruct<T>, {0xD0, 4, 0, 0})


	/// Functions
	// Function /Script/LimeNative.LimePawnComponentMood.OnRep_CurrentMoodState
	// void OnRep_CurrentMoodState();                                                                                           // [0xbc8572c] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponentMood.GetCurrentMoodState
	// FLimeMoodStateData GetCurrentMoodState();                                                                                // [0x8791ea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LimeNative.LimePawnComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULimePawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/LimeNative.LimePawnComponent_EmotionalState
/// Size: 0x0090 (0x0000A8 - 0x000138)
class ULimePawnComponent_EmotionalState : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnLimeCurrentEmotionalStateChangedDelegate                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLimeCurrentEmotionalStateStartedChange                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLimeCurrentEmotionChangeFinished                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCheatEmotionIndexChanged                                  OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(ELimePawnEmotionalState)                   CurrentEmotionalState                                       OFFSET(get<T>, {0xE8, 1, 0, 0})
	SMember(FLimeEmotionalStateData)                   TargetEmotionalState                                        OFFSET(getStruct<T>, {0xEC, 16, 0, 0})
	DMember(char)                                      CheatEmotionIndex                                           OFFSET(get<char>, {0xFC, 1, 0, 0})
	CMember(TArray<FLimePawnEmotionalStateMappingFromAwesomeLevel>) LimePawnEmotionalStateMappingFromAwesomeLevel  OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     ResetToDefaultEmotionRate                                   OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     TimeToStayAtEmotionInSeconds                                OFFSET(get<float>, {0x11C, 4, 0, 0})
	SMember(FTimerHandle)                              DefaultEmotionHandle                                        OFFSET(getStruct<T>, {0x128, 8, 0, 0})


	/// Functions
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.SetEmotionalState
	// void SetEmotionalState(FLimeEmotionalStateData Emotion);                                                                 // [0xbc85768] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.SetCurrentEmotionalState
	// void SetCurrentEmotionalState(ELimePawnEmotionalState NewEmotion);                                                       // [0xbc4c838] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.ResetToDefaultEmotionalState
	// void ResetToDefaultEmotionalState();                                                                                     // [0xbc85754] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.OnRep_TargetEmotionalState
	// void OnRep_TargetEmotionalState();                                                                                       // [0xbc85740] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.OnRep_CurrentEmotionalState
	// void OnRep_CurrentEmotionalState();                                                                                      // [0xbc4bc74] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.OnRep_CheatEmotionIndex
	// void OnRep_CheatEmotionIndex();                                                                                          // [0xbc4bc40] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.HandleLimeAwesomeLevelChanged
	// void HandleLimeAwesomeLevelChanged(int32_t NewAwesomeLevel);                                                             // [0xbc855b4] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.GetCurrentEmotionalStateValue
	// float GetCurrentEmotionalStateValue();                                                                                   // [0xbc4b008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.GetCurrentEmotionalState
	// ELimePawnEmotionalState GetCurrentEmotionalState();                                                                      // [0xbc4aff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LimeNative.LimeGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class ULimeGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/LimeNative.LimeMoodStateData
/// Size: 0x0004 (0x000000 - 0x000004)
class FLimeMoodStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              MoodTag                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/LimeNative.LimePawnComponentOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FLimePawnComponentOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ObjClass                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FLimePawnComponentOverrideProperty>) Properties                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/LimeNative.LimePawnComponentOverrideProperty
/// Size: 0x0010 (0x000000 - 0x000010)
class FLimePawnComponentOverrideProperty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LimeNative.LimeAnalyticsContext
/// Size: 0x0078 (0x000000 - 0x000078)
class FLimeAnalyticsContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FString)                                   AnalyticsKeyString                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   AnalyticsValueString                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ComponentClass                                              OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TArray<FName>)                             VariableNames                                               OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(char)                                      UefnAnalyticsEvents                                         OFFSET(get<char>, {0x70, 1, 0, 0})
	DMember(char)                                      GameplayAnalyticsEvents                                     OFFSET(get<char>, {0x71, 1, 0, 0})
};

/// Struct /Script/LimeNative.LimeEmotionalStateData
/// Size: 0x0010 (0x000000 - 0x000010)
class FLimeEmotionalStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ELimePawnEmotionalState)                   EmotionalState                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     EmotionPercent                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EmotionSetRate                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int8_t)                                    ForceRepCounter                                             OFFSET(get<int8_t>, {0xC, 1, 0, 0})
};

/// Struct /Script/LimeNative.LimeEvent_PawnEmotion
/// Size: 0x0010 (0x000000 - 0x000010)
class FLimeEvent_PawnEmotion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawnAthena*)              Pawn                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(ELimePawnEmotionalState)                   CurrentEmotionalState                                       OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     EmotionPercent                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/LimeNative.LimePawnEmotionalStateMappingFromAwesomeLevel
/// Size: 0x000C (0x000000 - 0x00000C)
class FLimePawnEmotionalStateMappingFromAwesomeLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ELimePawnEmotionalState)                   EmotionalState                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   NumericalTestValue                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ELimePawnEmotionalStateMappingTest)        NumericalTestMode                                           OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Enum /Script/LimeNative.ELimePawnEmotionalState
/// Size: 0x04
enum ELimePawnEmotionalState : uint8_t
{
	ELimePawnEmotionalState__Default                                                 = 0,
	ELimePawnEmotionalState__Happy                                                   = 1,
	ELimePawnEmotionalState__Sad                                                     = 2,
	ELimePawnEmotionalState__MAX                                                     = 3
};

/// Enum /Script/LimeNative.EFortLimeUefnAnalyticsEvents
/// Size: 0x04
enum EFortLimeUefnAnalyticsEvents : uint8_t
{
	EFortLimeUefnAnalyticsEvents__None                                               = 0,
	EFortLimeUefnAnalyticsEvents__UEFN_Heartbeat                                     = 1,
	EFortLimeUefnAnalyticsEvents__UEFN_ProjectSessionSummary                         = 2,
	EFortLimeUefnAnalyticsEvents__EFortLimeUefnAnalyticsEvents_MAX                   = 3
};

/// Enum /Script/LimeNative.EFortLimeGameplayAnalyticsEvents
/// Size: 0x04
enum EFortLimeGameplayAnalyticsEvents : uint8_t
{
	EFortLimeGameplayAnalyticsEvents__None                                           = 0,
	EFortLimeGameplayAnalyticsEvents__Core_StartZone                                 = 1,
	EFortLimeGameplayAnalyticsEvents__PlayerContextLocationPerMinute                 = 2,
	EFortLimeGameplayAnalyticsEvents__EFortLimeGameplayAnalyticsEvents_MAX           = 3
};

/// Enum /Script/LimeNative.ELimePawnEmotionalStateMappingTest
/// Size: 0x03
enum ELimePawnEmotionalStateMappingTest : uint32_t
{
	ELimePawnEmotionalStateMappingTest__LessOrEqual                                  = 0,
	ELimePawnEmotionalStateMappingTest__GreaterOrEqual                               = 1,
	ELimePawnEmotionalStateMappingTest__ELimePawnEmotionalStateMappingTest_MAX       = 2
};

