
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: ModularGameplay

/// Enum /Script/FMCoreRuntime.EMusicKeyMode
/// Size: 0x04
enum class EMusicKeyMode : uint8_t
{
	EMusicKeyMode__Major                                                             = 0,
	EMusicKeyMode__Minor                                                             = 1,
	EMusicKeyMode__Num                                                               = 2,
	EMusicKeyMode__EMusicKeyMode_MAX                                                 = 3
};

/// Enum /Script/FMCoreRuntime.EMusicKey
/// Size: 0x14
enum class EMusicKey : uint8_t
{
	EMusicKey__C                                                                     = 0,
	EMusicKey__Db                                                                    = 1,
	EMusicKey__D                                                                     = 2,
	EMusicKey__Eb                                                                    = 3,
	EMusicKey__E                                                                     = 4,
	EMusicKey__F                                                                     = 5,
	EMusicKey__Gb                                                                    = 6,
	EMusicKey__G                                                                     = 7,
	EMusicKey__Ab                                                                    = 8,
	EMusicKey__A                                                                     = 9,
	EMusicKey__Bb                                                                    = 10,
	EMusicKey__B                                                                     = 11,
	EMusicKey__Num                                                                   = 12,
	EMusicKey__EMusicKey_MAX                                                         = 13
};

/// Enum /Script/FMCoreRuntime.ESystemGetResult
/// Size: 0x03
enum class ESystemGetResult : uint8_t
{
	ESystemGetResult__Valid                                                          = 0,
	ESystemGetResult__Invalid                                                        = 1,
	ESystemGetResult__ESystemGetResult_MAX                                           = 2
};

/// Enum /Script/FMCoreRuntime.EMusicInterval
/// Size: 0x14
enum class EMusicInterval : uint8_t
{
	EMusicInterval__P1                                                               = 0,
	EMusicInterval__Min2                                                             = 1,
	EMusicInterval__Maj2                                                             = 2,
	EMusicInterval__Min3                                                             = 3,
	EMusicInterval__Maj3                                                             = 4,
	EMusicInterval__P4                                                               = 5,
	EMusicInterval__TT                                                               = 6,
	EMusicInterval__P5                                                               = 7,
	EMusicInterval__Min6                                                             = 8,
	EMusicInterval__Maj6                                                             = 9,
	EMusicInterval__Min7                                                             = 10,
	EMusicInterval__Maj7                                                             = 11,
	EMusicInterval__Num                                                              = 12,
	EMusicInterval__EMusicInterval_MAX                                               = 13
};

/// Enum /Script/FMCoreRuntime.EHarmonicProgression
/// Size: 0x17
enum class EHarmonicProgression : uint8_t
{
	EHarmonicProgression__NegI                                                       = 0,
	EHarmonicProgression__NegII                                                      = 1,
	EHarmonicProgression__NegIII                                                     = 2,
	EHarmonicProgression__NegIV                                                      = 3,
	EHarmonicProgression__NegV                                                       = 4,
	EHarmonicProgression__NegVI                                                      = 5,
	EHarmonicProgression__NegVII                                                     = 6,
	EHarmonicProgression__I                                                          = 7,
	EHarmonicProgression__II                                                         = 8,
	EHarmonicProgression__III                                                        = 9,
	EHarmonicProgression__IV                                                         = 10,
	EHarmonicProgression__V                                                          = 11,
	EHarmonicProgression__VI                                                         = 12,
	EHarmonicProgression__VII                                                        = 13,
	EHarmonicProgression__PlusI                                                      = 14,
	EHarmonicProgression__Num                                                        = 15,
	EHarmonicProgression__EHarmonicProgression_MAX                                   = 16
};

/// Class /Script/FMCoreRuntime.FMCoreDeveloperSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UFMCoreDeveloperSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMCoreMusicFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.SnapToScale
	// FMidiNote SnapToScale(FMidiNote Note, EMusicKey Key, EMusicKeyMode KeyMode);                                          // [0xaa316d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetMidiNoteFromScale
	// FMidiNote GetMidiNoteFromScale(EMusicKey Key, int32_t Octave, EMusicInterval Interval);                               // [0xaa2ef90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetIntervalStepInScale
	// int32_t GetIntervalStepInScale(EMusicInterval Interval, EMusicKeyMode KeyMode);                                       // [0xaa2eed0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetIntervalForNote
	// EMusicInterval GetIntervalForNote(FMidiNote Note, EMusicKey Key);                                                     // [0xaa2ecac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetIntervalAtStepInScale
	// EMusicInterval GetIntervalAtStepInScale(int32_t ScaleStep, EMusicKeyMode KeyMode);                                    // [0xaa2ebec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary.GetDegreeShiftFromProgression
	// int32_t GetDegreeShiftFromProgression(EHarmonicProgression Progression);                                              // [0xaa2eb6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/FMCoreRuntime.FMCoreTimeSignature
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFMCoreTimeSignature
{ 
	int32_t                                            Numerator;                                                  // 0x0000   (0x0004)  
	int32_t                                            Denominator;                                                // 0x0004   (0x0004)  
};

/// Class /Script/FMCoreRuntime.FMCoreMusicManagerComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UFMCoreMusicManagerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,13363) /* FMulticastInlineDelegate */ __um(OnTempoChangedDelegate);                           // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,13364) /* FMulticastInlineDelegate */ __um(OnSpeedChangedDelegate);                           // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,13365) /* FMulticastInlineDelegate */ __um(OnKeyChangedDelegate);                             // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,13366) /* FMulticastInlineDelegate */ __um(OnModeChangedDelegate);                            // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,13367) /* FMulticastInlineDelegate */ __um(OnTimeSignatureChanged);                           // 0x00E0   (0x0010)  
	EMusicKey                                          StartingKey;                                                // 0x00F0   (0x0001)  
	EMusicKeyMode                                      StartingMode;                                               // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00F2   (0x0002)  MISSED
	int32_t                                            StartingTempo;                                              // 0x00F4   (0x0004)  
	float                                              StartingSpeed;                                              // 0x00F8   (0x0004)  
	int32_t                                            StartingTimeSignatureNumerator;                             // 0x00FC   (0x0004)  
	int32_t                                            StartingTimeSignatureDenominator;                           // 0x0100   (0x0004)  
	EMusicKey                                          CurrentKey;                                                 // 0x0104   (0x0001)  
	EMusicKeyMode                                      CurrentMode;                                                // 0x0105   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0106   (0x0002)  MISSED
	int32_t                                            CurrentTempo;                                               // 0x0108   (0x0004)  
	float                                              CurrentSpeed;                                               // 0x010C   (0x0004)  
	FFMCoreTimeSignature                               CurrentTimeSignature;                                       // 0x0110   (0x0008)  
	EMusicKey                                          ServerKey;                                                  // 0x0118   (0x0001)  
	EMusicKeyMode                                      ServerMode;                                                 // 0x0119   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x011A   (0x0002)  MISSED
	int32_t                                            ServerTempo;                                                // 0x011C   (0x0004)  
	float                                              ServerSpeed;                                                // 0x0120   (0x0004)  
	FFMCoreTimeSignature                               ServerTimeSignature;                                        // 0x0124   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x012C   (0x0004)  MISSED


	/// Functions
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerTimeSignatureChange
	// void TriggerTimeSignatureChange(int32_t Numerator, int32_t Denominator);                                              // [0xaa31c48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerTempoChange
	// void TriggerTempoChange(int32_t BPM, bool bLocalChangeOnly);                                                          // [0xaa31b84] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerSpeedChange
	// void TriggerSpeedChange(float Speed, bool bLocalChangeOnly);                                                          // [0xaa31abc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerModeChange
	// void TriggerModeChange(EMusicKeyMode InMode);                                                                         // [0xaa31a3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.TriggerKeyChange
	// void TriggerKeyChange(EMusicKey InKey);                                                                               // [0xaa319bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnTimeSignatureChanged__DelegateSignature
	// void OnTimeSignatureChanged__DelegateSignature(FFMCoreTimeSignature TimeSignature);                                   // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnTempoChanged__DelegateSignature
	// void OnTempoChanged__DelegateSignature(int32_t CurrentTempo);                                                         // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnSpeedChanged__DelegateSignature
	// void OnSpeedChanged__DelegateSignature(float CurrentSpeed);                                                           // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerTimeSignatureChanged
	// void OnRep_ServerTimeSignatureChanged();                                                                              // [0xaa30fe0] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerTempoChanged
	// void OnRep_ServerTempoChanged();                                                                                      // [0xaa30fac] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerSpeedChanged
	// void OnRep_ServerSpeedChanged();                                                                                      // [0xaa30f74] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerModeChanged
	// void OnRep_ServerModeChanged();                                                                                       // [0xaa30f40] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnRep_ServerKeyChanged
	// void OnRep_ServerKeyChanged();                                                                                        // [0xaa30f0c] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnModeChanged__DelegateSignature
	// void OnModeChanged__DelegateSignature(EMusicKeyMode CurrentMode);                                                     // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.OnKeyChanged__DelegateSignature
	// void OnKeyChanged__DelegateSignature(EMusicKey CurrentKey);                                                           // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentTimeSignature
	// FFMCoreTimeSignature GetCurrentTimeSignature();                                                                       // [0xaa2eb54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                            // [0x7061cf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentSpeed
	// float GetCurrentSpeed();                                                                                              // [0x7061868] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentKeyMode
	// EMusicKeyMode GetCurrentKeyMode();                                                                                    // [0xaa2eb3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                            // [0xaa2eb24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCoreRuntime.FMCoreMusicManagerComponent.GetCurrentAudioState
	// void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo);                           // [0xaa2e9ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMCoreRuntime.FMPlayspaceScopedSystemComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFMPlayspaceScopedSystemComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,13368) /* FMulticastInlineDelegate */ __um(OnAddedToPlayspaceSystemManager);                  // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemComponent.OnAddedToPlayspaceSystemManager__DelegateSignature
	// void OnAddedToPlayspaceSystemManager__DelegateSignature(bool Success);                                                // [0x2177018] MulticastDelegate|Public|Delegate 
};

/// Class /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UFMPlayspaceScopedSystemManager : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,13369) /* TMap<UClass*, UClass*> */ __um(VKClassRedirects);                                   // 0x00A0   (0x0050)  
	SDK_UNDEFINED(16,13370) /* TArray<TWeakObjectPtr<UClass*>> */ __um(UEFNNotableActors);                         // 0x00F0   (0x0010)  
	SDK_UNDEFINED(80,13371) /* TMap<AActor*, FFMPlayspaceSystemInfo> */ __um(PlayspacesSystemInfo);                // 0x0100   (0x0050)  


	/// Functions
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager.MulticastNewSystemCreated
	// void MulticastNewSystemCreated(class AActor* PlayspaceActor, class UClass* SystemClass, class AActor* CreatedActor);  // [0xaa30de8] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager.GetSystemForActorIfExistsBP
	// void GetSystemForActorIfExistsBP(class UClass* SystemClass, class AActor* Requester, class AActor*& OutActor, ESystemGetResult& OutWasValid); // [0xaa2f23c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager.GetOrCreateSystemForActorBP
	// void GetOrCreateSystemForActorBP(class UClass* SystemClass, class AActor* Requester, class AActor*& OutActor, ESystemGetResult& OutWasValid); // [0xaa2f088] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FMCoreRuntime.FMUEFNConsumerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMUEFNConsumerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FMCoreRuntime.FMUEFNConsumerInterface.OnTerminatingLinkCode
	// void OnTerminatingLinkCode(FString LinkCode);                                                                         // [0xaa31018] Native|Event|Public|BlueprintEvent 
	// Function /Script/FMCoreRuntime.FMUEFNConsumerInterface.IsLinkCodeInUse
	// bool IsLinkCodeInUse(FString LinkCode);                                                                               // [0xaa30730] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/FMCoreRuntime.FMUEFNResolver
/// Size: 0x0148 (0x0000A0 - 0x0001E8)
class UFMUEFNResolver : public UGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00A0   (0x0030)  MISSED
	SDK_UNDEFINED(80,13372) /* TSet<FString> */        __um(DownloadingLinkCodes);                                 // 0x00D0   (0x0050)  
	SDK_UNDEFINED(80,13373) /* TMap<FString, FString> */ __um(DownloadedLinkCodes);                                // 0x0120   (0x0050)  
	SDK_UNDEFINED(16,13374) /* TArray<FString> */      __um(DownloadedLinkCodesInOrder);                           // 0x0170   (0x0010)  
	SDK_UNDEFINED(80,13375) /* TSet<FString> */        __um(PersistentResolves);                                   // 0x0180   (0x0050)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x01D0   (0x0010)  MISSED
	int32_t                                            MaxActiveGFPs;                                              // 0x01E0   (0x0004)  
	int32_t                                            ReduceToGFPs;                                               // 0x01E4   (0x0004)  


	/// Functions
	// Function /Script/FMCoreRuntime.FMUEFNResolver.ReduceLoadedGFPs
	// void ReduceLoadedGFPs();                                                                                              // [0xaa316c4] Final|Native|Private 
	// Function /Script/FMCoreRuntime.FMUEFNResolver.HandleResolveComplete
	// void HandleResolveComplete(bool bSuccess, FString LinkCode, TArray<FString>& PluginURLs, bool bIsPersistent);         // [0xaa2ff00] Final|Native|Private|HasOutParms 
	// Function /Script/FMCoreRuntime.FMUEFNResolver.HandleGameFeatureLoadComplete
	// void HandleGameFeatureLoadComplete(bool bSuccess, FString LinkCode, FString PluginURL, bool bIsPersistent);           // [0xaa2f784] Final|Native|Private 
};

/// Struct /Script/FMCoreRuntime.FMPlayspaceSystemInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFMPlayspaceSystemInfo
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

