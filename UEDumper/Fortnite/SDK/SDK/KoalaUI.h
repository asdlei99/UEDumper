
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Enum /Script/KoalaUI.EKoalaClipEventType
/// Size: 0x06
enum class EKoalaClipEventType : uint8_t
{
	EKoalaClipEventType__Manual                                                      = 0,
	EKoalaClipEventType__Elimination                                                 = 1,
	EKoalaClipEventType__VictoryRoyale                                               = 2,
	EKoalaClipEventType__Emote                                                       = 3,
	EKoalaClipEventType__COUNT                                                       = 4,
	EKoalaClipEventType__EKoalaClipEventType_MAX                                     = 5
};

/// Enum /Script/KoalaUI.EKoalaAvailability
/// Size: 0x05
enum class EKoalaAvailability : uint8_t
{
	EKoalaAvailability__Pending                                                      = 0,
	EKoalaAvailability__NotAvailable                                                 = 1,
	EKoalaAvailability__Available                                                    = 2,
	EKoalaAvailability__COUNT                                                        = 3,
	EKoalaAvailability__EKoalaAvailability_MAX                                       = 4
};

/// Enum /Script/KoalaUI.EKoalaRecording
/// Size: 0x05
enum class EKoalaRecording : uint8_t
{
	EKoalaRecording__Pending                                                         = 0,
	EKoalaRecording__NotRecording                                                    = 1,
	EKoalaRecording__Recording                                                       = 2,
	EKoalaRecording__COUNT                                                           = 3,
	EKoalaRecording__EKoalaRecording_MAX                                             = 4
};

/// Enum /Script/KoalaUI.EKoalaConnectionStatus
/// Size: 0x05
enum class EKoalaConnectionStatus : uint8_t
{
	EKoalaConnectionStatus__Pending                                                  = 0,
	EKoalaConnectionStatus__NotConnected                                             = 1,
	EKoalaConnectionStatus__Connected                                                = 2,
	EKoalaConnectionStatus__COUNT                                                    = 3,
	EKoalaConnectionStatus__EKoalaConnectionStatus_MAX                               = 4
};

/// Enum /Script/KoalaUI.EKoalaClipStatus
/// Size: 0x07
enum class EKoalaClipStatus : uint8_t
{
	EKoalaClipStatus__None                                                           = 0,
	EKoalaClipStatus__Creating                                                       = 1,
	EKoalaClipStatus__Uploading                                                      = 2,
	EKoalaClipStatus__Completed                                                      = 3,
	EKoalaClipStatus__Failed                                                         = 4,
	EKoalaClipStatus__COUNT                                                          = 5,
	EKoalaClipStatus__EKoalaClipStatus_MAX                                           = 6
};

/// Enum /Script/KoalaUI.EKoalaMockClipMode
/// Size: 0x07
enum class EKoalaMockClipMode : uint8_t
{
	EKoalaMockClipMode__None                                                         = 0,
	EKoalaMockClipMode__ShortSuccess                                                 = 1,
	EKoalaMockClipMode__ShortFailure                                                 = 2,
	EKoalaMockClipMode__LongSuccess                                                  = 3,
	EKoalaMockClipMode__LongFailure                                                  = 4,
	EKoalaMockClipMode__COUNT                                                        = 5,
	EKoalaMockClipMode__EKoalaMockClipMode_MAX                                       = 6
};

/// Class /Script/KoalaUI.FortGameSettingRegistryExtension_Koala
/// Size: 0x0040 (0x000028 - 0x000068)
class UFortGameSettingRegistryExtension_Koala : public UFortGameSettingRegistryExtension
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FFortSettingNameExtensions                         SettingExtensions;                                          // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/KoalaUI.FortSidebarPanelKoala
/// Size: 0x0038 (0x000400 - 0x000438)
class UFortSidebarPanelKoala : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0400   (0x0018)  MISSED
	class UCommonButtonBase*                           Button_KoalaDummy;                                          // 0x0418   (0x0008)  
	class UFortLazyImage*                              QrCodeImage;                                                // 0x0420   (0x0008)  
	SDK_UNDEFINED(16,14427) /* FString */              __um(QRCodeURL);                                            // 0x0428   (0x0010)  


	/// Functions
	// Function /Script/KoalaUI.FortSidebarPanelKoala.OnConnectionChanged
	// void OnConnectionChanged(bool bConnected);                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
/// Size: 0x0038 (0x000030 - 0x000068)
class UFortUIGameFeatureAction_AttemptKoalaModal : public UFortUIGameFeatureAction_PostFrontendFlowActions
{ 
public:
	SDK_UNDEFINED(32,14428) /* TWeakObjectPtr<UClass*> */ __um(KoalaGraphicsModalClass);                           // 0x0030   (0x0020)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/KoalaUI.KoalaGraphicsModal
/// Size: 0x0028 (0x000400 - 0x000428)
class UKoalaGraphicsModal : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0400   (0x0018)  MISSED
	class UCommonButtonBase*                           Button_KeepEnabled;                                         // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_Disable;                                             // 0x0420   (0x0008)  
};

/// Class /Script/KoalaUI.KoalaHUDWidget
/// Size: 0x0158 (0x000400 - 0x000558)
class UKoalaHUDWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	float                                              ClipDebounceTime;                                           // 0x0408   (0x0004)  
	float                                              PlayerKilledPlayerReminderTime;                             // 0x040C   (0x0004)  
	float                                              MatchEndedReminderTime;                                     // 0x0410   (0x0004)  
	float                                              ClipReminderCooldownTime;                                   // 0x0414   (0x0004)  
	float                                              EliminationClipReminderDelayTime;                           // 0x0418   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x041C   (0x0004)  MISSED
	class USoundSubmix*                                ClipAudioSubmix;                                            // 0x0420   (0x0008)  
	class UCommonActionWidget*                         ClipActionWidget;                                           // 0x0428   (0x0008)  
	FDataTableRowHandle                                ClipObjectInputAction;                                      // 0x0430   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0440   (0x0008)  MISSED
	SDK_UNDEFINED(80,14429) /* TMap<int32_t, FKoalaClipInfo> */ __um(ClipTracker);                                 // 0x0448   (0x0050)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0498   (0x0008)  MISSED
	int32_t                                            LastClipID;                                                 // 0x04A0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x16];                                      // 0x04A4   (0x0016)  MISSED
	EKoalaMockClipMode                                 MockClipMode;                                               // 0x04BA   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x04BB   (0x0001)  MISSED
	int32_t                                            MockClipUploadShortTime;                                    // 0x04BC   (0x0004)  
	int32_t                                            MockClipUploadLongTime;                                     // 0x04C0   (0x0004)  
	int32_t                                            MockClipCreateShortTime;                                    // 0x04C4   (0x0004)  
	int32_t                                            MockClipCreateLongTime;                                     // 0x04C8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x8C];                                      // 0x04CC   (0x008C)  MISSED


	/// Functions
	// Function /Script/KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput
	// void UnregisterClipButtonInput();                                                                                     // [0xb225c60] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.RegisterClipButtonInput
	// void RegisterClipButtonInput();                                                                                       // [0xb225c4c] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown
	// void OnTouchAreaMouseDown();                                                                                          // [0xb225c38] Final|Native|Protected|BlueprintCallable 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnReminderTimerStarted
	// void OnReminderTimerStarted(float Time);                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnReminderEnded
	// void OnReminderEnded();                                                                                               // [0xb225c20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged
	// void OnRecordingStatusChanged(EKoalaRecording InRecordingStatus);                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnInputProgress
	// void OnInputProgress(float Progress);                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnInputComplete
	// void OnInputComplete();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnConnectionChanged
	// void OnConnectionChanged(EKoalaConnectionStatus InStatus);                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnClipStatusChanged
	// void OnClipStatusChanged(int32_t InClipID, EKoalaClipStatus InClipStatus, float InUploadProgress);                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnAvailabilityChanged
	// void OnAvailabilityChanged(EKoalaAvailability Availability);                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.HandlePlayerPawnEmoteStopped
	// void HandlePlayerPawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);           // [0xb225ab4] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon
	// void HandlePlayerMatchWon();                                                                                          // [0xb225aa0] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer
	// void HandleLocalPlayerKilledPlayer(class AFortPlayerStateAthena* Player);                                             // [0xb225a20] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.GetUploadingClipCount
	// int32_t GetUploadingClipCount();                                                                                      // [0xb2259fc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KoalaUI.KoalaHUDWidget.GetTrackedClipCount
	// int32_t GetTrackedClipCount();                                                                                        // [0xa0fdbc4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/KoalaUI.KoalaMainMenuButton
/// Size: 0x0010 (0x001610 - 0x001620)
class UKoalaMainMenuButton : public UFortMainMenuButtonExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1610   (0x0010)  MISSED
};

/// Class /Script/KoalaUI.KoalaSettingDetailExtension
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UKoalaSettingDetailExtension : public UFortSettingDetailExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/KoalaUI.KoalaSettingDetailExtension.OnConnectionChanged
	// void OnConnectionChanged(bool bConnected);                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaSettingDetailExtension.OnAvailabilityChanged
	// void OnAvailabilityChanged(bool bAvailable);                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Struct /Script/KoalaUI.KoalaClipInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FKoalaClipInfo
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

