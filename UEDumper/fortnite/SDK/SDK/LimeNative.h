
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
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/LimeNative.ELimePawnEmotionalState
/// Size: 0x04
enum class ELimePawnEmotionalState : uint8_t
{
	ELimePawnEmotionalState__Default                                                 = 0,
	ELimePawnEmotionalState__Happy                                                   = 1,
	ELimePawnEmotionalState__Sad                                                     = 2,
	ELimePawnEmotionalState__MAX                                                     = 3
};

/// Enum /Script/LimeNative.EFortLimeUefnAnalyticsEvents
/// Size: 0x04
enum class EFortLimeUefnAnalyticsEvents : uint8_t
{
	EFortLimeUefnAnalyticsEvents__None                                               = 0,
	EFortLimeUefnAnalyticsEvents__UEFN_Heartbeat                                     = 1,
	EFortLimeUefnAnalyticsEvents__UEFN_ProjectSessionSummary                         = 2,
	EFortLimeUefnAnalyticsEvents__EFortLimeUefnAnalyticsEvents_MAX                   = 3
};

/// Enum /Script/LimeNative.EFortLimeGameplayAnalyticsEvents
/// Size: 0x04
enum class EFortLimeGameplayAnalyticsEvents : uint8_t
{
	EFortLimeGameplayAnalyticsEvents__None                                           = 0,
	EFortLimeGameplayAnalyticsEvents__Core_StartZone                                 = 1,
	EFortLimeGameplayAnalyticsEvents__PlayerContextLocationPerMinute                 = 2,
	EFortLimeGameplayAnalyticsEvents__EFortLimeGameplayAnalyticsEvents_MAX           = 3
};

/// Enum /Script/LimeNative.ELimePawnEmotionalStateMappingTest
/// Size: 0x03
enum class ELimePawnEmotionalStateMappingTest : uint32_t
{
	ELimePawnEmotionalStateMappingTest__LessOrEqual                                  = 0,
	ELimePawnEmotionalStateMappingTest__GreaterOrEqual                               = 1,
	ELimePawnEmotionalStateMappingTest__ELimePawnEmotionalStateMappingTest_MAX       = 2
};

/// Struct /Script/LimeNative.LimeAnalyticsContext
/// Size: 0x0078 (0x000000 - 0x000078)
struct FLimeAnalyticsContext
{ 
	SDK_UNDEFINED(16,11656) /* FString */              __um(AnalyticsKeyString);                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,11657) /* FString */              __um(AnalyticsValueString);                                 // 0x0010   (0x0010)  
	SDK_UNDEFINED(32,11658) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                        // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,11659) /* TWeakObjectPtr<UClass*> */ __um(ComponentClass);                                    // 0x0040   (0x0020)  
	TArray<FName>                                      VariableNames;                                              // 0x0060   (0x0010)  
	char                                               UefnAnalyticsEvents;                                        // 0x0070   (0x0001)  
	char                                               GameplayAnalyticsEvents;                                    // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Class /Script/LimeNative.LimeAnalytics
/// Size: 0x0030 (0x000028 - 0x000058)
class ULimeAnalytics : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FLimeAnalyticsContext>                      AnalyticsContexts;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Class /Script/LimeNative.LimeBaseLayerAnimInstance
/// Size: 0x0010 (0x000460 - 0x000470)
#pragma pack(push, 0x1)
class alignas(0x10) 
ULimeBaseLayerAnimInstance : public UFortBaseAnimInstance
{ 
public:
	bool                                               bHasIsTargetingTag : 1;                                     // 0x0458:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0459   (0x0003)  MISSED
	SDK_UNDEFINED(8,11660) /* TWeakObjectPtr<UJunoPlayerAnimInstance*> */ __um(MainAnimInstanceWeakPtr);           // 0x045C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0464   (0x0004)  MISSED
};
#pragma pack(pop)

/// Class /Script/LimeNative.LimeDBNOAnimInstance
/// Size: 0x0030 (0x000470 - 0x0004A0)
class ULimeDBNOAnimInstance : public ULimeBaseLayerAnimInstance
{ 
public:
	EFortPlayerAnimBodyType                            AnimBodyType;                                               // 0x0468   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0469   (0x0003)  MISSED
	float                                              LeanAngle;                                                  // 0x046C   (0x0004)  
	float                                              SpeedAdjustedPlayrate;                                      // 0x0470   (0x0004)  
	float                                              LeanAdditiveAlpha;                                          // 0x0474   (0x0004)  
	float                                              Speed2D;                                                    // 0x0478   (0x0004)  
	float                                              MovementBlendSpaceSpeed2D;                                  // 0x047C   (0x0004)  
	float                                              MaxMovementBlendSpaceSpeed;                                 // 0x0480   (0x0004)  
	float                                              LocalVelocityYawAngle;                                      // 0x0484   (0x0004)  
	float                                              DBNOTurnPlayRate;                                           // 0x0488   (0x0004)  
	float                                              YawDeltaCurrentTick;                                        // 0x048C   (0x0004)  
	float                                              YawDeltaLastTick;                                           // 0x0490   (0x0004)  
	float                                              YawDeltaSmoothed;                                           // 0x0494   (0x0004)  
	bool                                               bIsOnGround : 1;                                            // 0x0498:0 (0x0001)  
	bool                                               bTransition_FullBody_DBNOMove : 1;                          // 0x0498:1 (0x0001)  
	bool                                               bTransition_FullBody_DBNOTurn : 1;                          // 0x0498:2 (0x0001)  
	bool                                               bIsLargeBodyType : 1;                                       // 0x0498:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0499   (0x0007)  MISSED
};

/// Class /Script/LimeNative.LimeOverrideManager
/// Size: 0x0068 (0x000028 - 0x000090)
class ULimeOverrideManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0000   (0x0090)  MISSED


	/// Functions
	// Function /Script/LimeNative.LimeOverrideManager.OnEndPlay
	// void OnEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                       // [0x267ade4] Final|Native|Private 
};

/// Struct /Script/LimeNative.LimePawnComponentOverrideProperty
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLimePawnComponentOverrideProperty
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UAnimMontage*                                Montage;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/LimeNative.LimePawnComponentOverride
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLimePawnComponentOverride
{ 
	FName                                              ObjClass;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FLimePawnComponentOverrideProperty>         Properties;                                                 // 0x0008   (0x0010)  
};

/// Class /Script/LimeNative.LimePawnComponentOverrides
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class ULimePawnComponentOverrides : public UFortPawnComponent
{ 
public:
	TArray<FLimePawnComponentOverride>                 ObjectOverrides;                                            // 0x00A8   (0x0010)  
	class UClass*                                      ClamberingMME;                                              // 0x00B8   (0x0008)  
	SDK_UNDEFINED(16,11661) /* FMulticastInlineDelegate */ __um(OnLevelSettingsChanged);                           // 0x00C0   (0x0010)  
	SDK_UNDEFINED(80,11662) /* TMap<FGameplayTag, UClass*> */ __um(VehicleAnimLayerOverlayClass);                  // 0x00D0   (0x0050)  
	class UClass*                                      DBNOAnimLayerClass;                                         // 0x0120   (0x0008)  
	class UClass*                                      DBNOCarriedAnimLayerClass;                                  // 0x0128   (0x0008)  
	class UClass*                                      SkydiveAnimLayerClass;                                      // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0138   (0x0010)  MISSED
	class UClass*                                      CurrentAnimLayerClass;                                      // 0x0148   (0x0008)  


	/// Functions
	// Function /Script/LimeNative.LimePawnComponentOverrides.OnLimeSettingsEndPlay
	// void OnLimeSettingsEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                           // [0xbc8566c] Final|Native|Protected 
	// Function /Script/LimeNative.LimePawnComponentOverrides.OnLevelSettingsChanged__DelegateSignature
	// void OnLevelSettingsChanged__DelegateSignature();                                                                     // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/LimeNative.LimePawnComponentOverrides.IsOrbitCameraEnabled
	// bool IsOrbitCameraEnabled();                                                                                          // [0x8d705b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LimeNative.LimePawnComponentOverrides.HandleEnterVehicle
	// void HandleEnterVehicle();                                                                                            // [0xbc855a0] Final|Native|Protected 
	// Function /Script/LimeNative.LimePawnComponentOverrides.AreJunoControlsEnabled
	// bool AreJunoControlsEnabled();                                                                                        // [0x9373924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LimeNative.LimeSkydivingAnimInstance
/// Size: 0x0090 (0x000470 - 0x000500)
class ULimeSkydivingAnimInstance : public ULimeBaseLayerAnimInstance
{ 
public:
	FFortAnimInput_Skydiving                           Skydiving;                                                  // 0x0468   (0x0080)  
	float                                              FreeFall_AimPitch;                                          // 0x04E8   (0x0004)  
	float                                              AimPitch;                                                   // 0x04EC   (0x0004)  
	bool                                               bIsAccelerating2D : 1;                                      // 0x04F0:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x04F1   (0x000F)  MISSED
};

/// Class /Script/LimeNative.LimeGameFeatureAction_AddLimeAnalytics
/// Size: 0x0028 (0x000028 - 0x000050)
class ULimeGameFeatureAction_AddLimeAnalytics : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,11663) /* TWeakObjectPtr<UClass*> */ __um(LimeAnalyticsClass);                                // 0x0028   (0x0020)  
	class ULimeAnalytics*                              LimeAnalyticsInstance;                                      // 0x0048   (0x0008)  
};

/// Class /Script/LimeNative.LimePlayerAnimInstance
/// Size: 0x0000 (0x001B40 - 0x001B40)
class ULimePlayerAnimInstance : public UFortPlayerAnimInstance
{ 
public:
};

/// Class /Script/LimeNative.LimePlayerAnimInstanceProxy
/// Size: 0x0000 (0x001620 - 0x001620)
class ULimePlayerAnimInstanceProxy : public UFortPlayerAnimInstanceProxy
{ 
public:
};

/// Class /Script/LimeNative.LimeCameraMode_OrbitCam
/// Size: 0x0000 (0x001BA0 - 0x001BA0)
class ULimeCameraMode_OrbitCam : public UFortCameraMode_ThirdPerson
{ 
public:


	/// Functions
	// Function /Script/LimeNative.LimeCameraMode_OrbitCam.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                  // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/LimeNative.LimeCameraMode_OrbitCam.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/LimeNative.LimeCameraModeOverrideComponent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class ULimeCameraModeOverrideComponent : public UFortCameraModeOverrideComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class ULimePawnComponentOverrides*                 LimePawnComponentOverrides;                                 // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/LimeNative.LimeCameraModeOverrideComponent.UpdateIsOrbitCameraEnabled
	// void UpdateIsOrbitCameraEnabled();                                                                                    // [0xbc858c4] Final|Native|Private 
};

/// Class /Script/LimeNative.DebugObserveLimePlugin
/// Size: 0x0008 (0x000028 - 0x000030)
class UDebugObserveLimePlugin : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/LimeNative.GameFeatureAction_LimeDebug
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_LimeDebug : public UGameFeatureAction
{ 
public:
	TArray<class UGameFeatureAction*>                  ForcePawnActions;                                           // 0x0028   (0x0010)  
};

/// Struct /Script/LimeNative.LimeMoodStateData
/// Size: 0x0004 (0x000000 - 0x000004)
struct FLimeMoodStateData
{ 
	FGameplayTag                                       MoodTag;                                                    // 0x0000   (0x0004)  
};

/// Class /Script/LimeNative.LimePawnComponentMood
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class ULimePawnComponentMood : public UFortPawnComponent
{ 
public:
	SDK_UNDEFINED(16,11664) /* FMulticastInlineDelegate */ __um(OnLimeMoodChangedDelegate);                        // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FLimeMoodStateData                                 CurrentMoodState;                                           // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/LimeNative.LimePawnComponentMood.OnRep_CurrentMoodState
	// void OnRep_CurrentMoodState();                                                                                        // [0xbc8572c] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponentMood.GetCurrentMoodState
	// FLimeMoodStateData GetCurrentMoodState();                                                                             // [0x8791ea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LimeNative.LimePawnComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULimePawnComponent : public UFortPawnComponent
{ 
public:
};

/// Struct /Script/LimeNative.LimeEmotionalStateData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLimeEmotionalStateData
{ 
	ELimePawnEmotionalState                            EmotionalState;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              EmotionPercent;                                             // 0x0004   (0x0004)  
	float                                              EmotionSetRate;                                             // 0x0008   (0x0004)  
	int8_t                                             ForceRepCounter;                                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/LimeNative.LimePawnEmotionalStateMappingFromAwesomeLevel
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLimePawnEmotionalStateMappingFromAwesomeLevel
{ 
	ELimePawnEmotionalState                            EmotionalState;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            NumericalTestValue;                                         // 0x0004   (0x0004)  
	ELimePawnEmotionalStateMappingTest                 NumericalTestMode;                                          // 0x0008   (0x0004)  
};

/// Class /Script/LimeNative.LimePawnComponent_EmotionalState
/// Size: 0x0090 (0x0000A8 - 0x000138)
class ULimePawnComponent_EmotionalState : public UFortPawnComponent
{ 
public:
	SDK_UNDEFINED(16,11665) /* FMulticastInlineDelegate */ __um(OnLimeCurrentEmotionalStateChangedDelegate);       // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,11666) /* FMulticastInlineDelegate */ __um(OnLimeCurrentEmotionalStateStartedChange);         // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,11667) /* FMulticastInlineDelegate */ __um(OnLimeCurrentEmotionChangeFinished);               // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,11668) /* FMulticastInlineDelegate */ __um(OnCheatEmotionIndexChanged);                       // 0x00D8   (0x0010)  
	ELimePawnEmotionalState                            CurrentEmotionalState;                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FLimeEmotionalStateData                            TargetEmotionalState;                                       // 0x00EC   (0x0010)  
	char                                               CheatEmotionIndex;                                          // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	TArray<FLimePawnEmotionalStateMappingFromAwesomeLevel> LimePawnEmotionalStateMappingFromAwesomeLevel;          // 0x0100   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0110   (0x0008)  MISSED
	float                                              ResetToDefaultEmotionRate;                                  // 0x0118   (0x0004)  
	float                                              TimeToStayAtEmotionInSeconds;                               // 0x011C   (0x0004)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0120   (0x0008)  MISSED
	FTimerHandle                                       DefaultEmotionHandle;                                       // 0x0128   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.SetEmotionalState
	// void SetEmotionalState(FLimeEmotionalStateData Emotion);                                                              // [0xbc85768] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.SetCurrentEmotionalState
	// void SetCurrentEmotionalState(ELimePawnEmotionalState NewEmotion);                                                    // [0xbc4c838] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.ResetToDefaultEmotionalState
	// void ResetToDefaultEmotionalState();                                                                                  // [0xbc85754] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.OnRep_TargetEmotionalState
	// void OnRep_TargetEmotionalState();                                                                                    // [0xbc85740] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.OnRep_CurrentEmotionalState
	// void OnRep_CurrentEmotionalState();                                                                                   // [0xbc4bc74] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.OnRep_CheatEmotionIndex
	// void OnRep_CheatEmotionIndex();                                                                                       // [0xbc4bc40] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.HandleLimeAwesomeLevelChanged
	// void HandleLimeAwesomeLevelChanged(int32_t NewAwesomeLevel);                                                          // [0xbc855b4] Final|Native|Private 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.GetCurrentEmotionalStateValue
	// float GetCurrentEmotionalStateValue();                                                                                // [0xbc4b008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LimeNative.LimePawnComponent_EmotionalState.GetCurrentEmotionalState
	// ELimePawnEmotionalState GetCurrentEmotionalState();                                                                   // [0xbc4aff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LimeNative.LimeGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class ULimeGlobals : public UObject
{ 
public:
};

/// Struct /Script/LimeNative.LimeEvent_PawnEmotion
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLimeEvent_PawnEmotion
{ 
	class AFortPlayerPawnAthena*                       Pawn;                                                       // 0x0000   (0x0008)  
	ELimePawnEmotionalState                            CurrentEmotionalState;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              EmotionPercent;                                             // 0x000C   (0x0004)  
};

