
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HarmonixMidi

/// Class /Script/SparksMidiParser.AsyncAction_ListenForMidiEventBase
/// Size: 0x0030 (0x000030 - 0x000060)
class UAsyncAction_ListenForMidiEventBase : public UCancellableAsyncAction
{ 
public:
	SDK_UNDEFINED(16,13638) /* FMulticastInlineDelegate */ __um(OnFinished);                                       // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiEventBase.OnFinished__DelegateSignature
	// void OnFinished__DelegateSignature(bool bCanceled);                                                                   // [0x211c0a0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UAsyncAction_ListenForMidiNoteEvent : public UAsyncAction_ListenForMidiEventBase
{ 
public:
	SDK_UNDEFINED(16,13639) /* FMulticastInlineDelegate */ __um(OnMidiEventStart);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,13640) /* FMulticastInlineDelegate */ __um(OnMidiEventEnd);                                   // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0080   (0x0020)  MISSED


	/// Functions
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent.OnMidiNoteEventDelegate__DelegateSignature
	// void OnMidiNoteEventDelegate__DelegateSignature(char MidiEventNote, FParsedMidiNoteEvent& MidiEventData);             // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent.ListenForMidiNoteEvents_WithParams
	// class UAsyncAction_ListenForMidiNoteEvent* ListenForMidiNoteEvents_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiNoteEventListenerParams& Params); // [0xab6a2ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent.ListenForMidiNoteEvents
	// class UAsyncAction_ListenForMidiNoteEvent* ListenForMidiNoteEvents(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<char> EventNotes, float SecondsBeforeEventStart, float SecondsBeforeEventEnd); // [0xab698a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent.ListenForMidiNoteEvent
	// class UAsyncAction_ListenForMidiNoteEvent* ListenForMidiNoteEvent(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, char EventNote, float SecondsBeforeEventStart, float SecondsBeforeEventEnd); // [0xab69044] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent
/// Size: 0x0030 (0x000060 - 0x000090)
class UAsyncAction_ListenForMidiTextEvent : public UAsyncAction_ListenForMidiEventBase
{ 
public:
	SDK_UNDEFINED(16,13641) /* FMulticastInlineDelegate */ __um(OnMidiEventStart);                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0070   (0x0020)  MISSED


	/// Functions
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent.OnMidiTextEventDelegate__DelegateSignature
	// void OnMidiTextEventDelegate__DelegateSignature(FString MidiEventText, FParsedMidiTextEvent& MidiEventData);          // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent.ListenForMidiTextEvents_WithParams
	// class UAsyncAction_ListenForMidiTextEvent* ListenForMidiTextEvents_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiTextEventListenerParams& Params); // [0xab6ab9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent.ListenForMidiTextEvents
	// class UAsyncAction_ListenForMidiTextEvent* ListenForMidiTextEvents(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<FString>& EventStrings, float SecondsBeforeEventStart); // [0xab6a850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent.ListenForMidiTextEvent
	// class UAsyncAction_ListenForMidiTextEvent* ListenForMidiTextEvent(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, FString EventString, float SecondsBeforeEventStart); // [0xab6a464] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools
/// Size: 0x0048 (0x000060 - 0x0000A8)
class UAsyncAction_ListenForMidiNoteEventPools : public UAsyncAction_ListenForMidiEventBase
{ 
public:
	SDK_UNDEFINED(16,13642) /* FMulticastInlineDelegate */ __um(OnMidiNoteStart);                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0070   (0x0038)  MISSED


	/// Functions
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools.OnMidiNotePoolEventDelegate__DelegateSignature
	// void OnMidiNotePoolEventDelegate__DelegateSignature(char MidiNote, FParsedMidiNoteEvent& MidiNoteData, FName WaitPoolID, float ActualDelay, float MaxDelayShortenedBy); // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools.ListenForMidiNoteEventsPools_WithParams
	// class UAsyncAction_ListenForMidiNoteEventPools* ListenForMidiNoteEventsPools_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiNotePoolEventListenerParams& Params); // [0xab6a0f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools.ListenForMidiNoteEventsPools
	// class UAsyncAction_ListenForMidiNoteEventPools* ListenForMidiNoteEventsPools(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<char>& EventNotes, TArray<char>& WatchNotes, TArray<FMidiNoteEvent_DelayPool>& DelayPools); // [0xab69dac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools.ListenForMidiNoteEventPools
	// class UAsyncAction_ListenForMidiNoteEventPools* ListenForMidiNoteEventPools(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, char EventNote, TArray<char>& WatchNotes, TArray<FMidiNoteEvent_DelayPool>& DelayPools); // [0xab694fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksMidiParser.MidiEventDriverInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidiEventDriverInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.TickToSeconds
	// float TickToSeconds(int32_t Tick);                                                                                    // [0xab6addc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.SecondsToTick
	// int32_t SecondsToTick(float Seconds);                                                                                 // [0xab6ad48] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.IsPlaybackEnded
	// bool IsPlaybackEnded();                                                                                               // [0x67281f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetSparksInstrumentFromMidiTrackName
	// ESparksInstrumentType GetSparksInstrumentFromMidiTrackName(FName TrackName);                                          // [0xab68f18] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetParsedMidiEventData
	// class UParsedMidiEventData* GetParsedMidiEventData();                                                                 // [0x646d4cc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetMidiTrackNameFromSparksInstrument
	// FName GetMidiTrackNameFromSparksInstrument(ESparksInstrumentType InstrumentType);                                     // [0xab68a98] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetMidiPlaybackState
	// FMidiPlaybackState GetMidiPlaybackState();                                                                            // [0xab68894] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetCurrentMidiTick
	// int32_t GetCurrentMidiTick();                                                                                         // [0xab67aa4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetCurrentMidiSeconds
	// float GetCurrentMidiSeconds();                                                                                        // [0x8ee54c4] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksMidiParser.MidiEventListenerSubsystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMidiEventListenerSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/SparksMidiParser.MidiEventListenerSubsystem.IsListenerActive
	// bool IsListenerActive(FMidiEventListenerHandle& Handle);                                                              // [0xab68fa8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksMidiParser.MidiEventListenerSubsystem.CancelListener
	// void CancelListener(FMidiEventListenerHandle& Handle);                                                                // [0xab678f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.MidiEventListenerSubsystem.CancelAllListenersForDriver
	// void CancelAllListenersForDriver(TScriptInterface<Class>& Driver);                                                    // [0xab67864] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksMidiParser.ParsedMidiEventData
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UParsedMidiEventData : public UObject
{ 
public:
	SDK_UNDEFINED(80,13643) /* TMap<FName, FMidiNoteEventList> */ __um(MidiNoteEvents);                            // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,13644) /* TMap<FName, FMidiTextEventList> */ __um(MidiTextEvents);                            // 0x0078   (0x0050)  
	class UMidiFile*                                   MidiFilePtr;                                                // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetPreviousMidiTextEventsWithStrings
	// void GetPreviousMidiTextEventsWithStrings(FName TrackName, TArray<FString>& MidiEventStrings, int32_t UpToMidiTick, TArray<FMidiTextEventList>& OutResults); // [0xab68d24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetPreviousMidiNoteEventsWithInts
	// void GetPreviousMidiNoteEventsWithInts(FName TrackName, TArray<char>& MidiEventInts, int32_t UpToMidiTick, TArray<FMidiNoteEventList>& OutResults); // [0xab68b24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiTextEventsWithStrings
	// void GetMidiTextEventsWithStrings(FName TrackName, TArray<FString>& MidiEventStrings, TArray<FParsedMidiTextEvent>& OutArray); // [0xab68960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiTextEvents
	// TArray<FParsedMidiTextEvent> GetMidiTextEvents(FName TrackName);                                                      // [0xab688cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiNoteEventsWithInts
	// void GetMidiNoteEventsWithInts(FName TrackName, TArray<char>& MidiEventInts, TArray<FParsedMidiNoteEvent>& OutArray); // [0xab67b80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiNoteEvents
	// TArray<FParsedMidiNoteEvent> GetMidiNoteEvents(FName TrackName);                                                      // [0xab67aec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiFile
	// class UMidiFile* GetMidiFile();                                                                                       // [0xab67ac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetAllMidiTextEvents
	// TMap<FName, FMidiTextEventList> GetAllMidiTextEvents();                                                               // [0xab67a14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetAllMidiNoteEvents
	// TMap<FName, FMidiNoteEventList> GetAllMidiNoteEvents();                                                               // [0xab67984] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SparksMidiParser.MidiEventListenerParams
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMidiEventListenerParams
{ 
	FName                                              TrackName;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/SparksMidiParser.MidiNoteEventListenerParams
/// Size: 0x001C (0x000004 - 0x000020)
struct FMidiNoteEventListenerParams : FMidiEventListenerParams
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       EventNotes;                                                 // 0x0008   (0x0010)  
	float                                              SecondsBeforeStartTick;                                     // 0x0018   (0x0004)  
	float                                              SecondsBeforeEndTick;                                       // 0x001C   (0x0004)  
};

/// Struct /Script/SparksMidiParser.ParsedMidiEventBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FParsedMidiEventBase
{ 
	int32_t                                            AtMidiTick;                                                 // 0x0000   (0x0004)  
	int32_t                                            EndsAtMidiTick;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/SparksMidiParser.ParsedMidiNoteEvent
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FParsedMidiNoteEvent : FParsedMidiEventBase
{ 
	char                                               EventNote;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/SparksMidiParser.MidiNoteEvent_DelayPool
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMidiNoteEvent_DelayPool
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	float                                              MaxSecondsBefore;                                           // 0x0004   (0x0004)  
	float                                              MinSecondsBefore;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/SparksMidiParser.MidiNotePoolEventListenerParams
/// Size: 0x0034 (0x000004 - 0x000038)
struct FMidiNotePoolEventListenerParams : FMidiEventListenerParams
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       EventNotes;                                                 // 0x0008   (0x0010)  
	TArray<char>                                       WatchNotes;                                                 // 0x0018   (0x0010)  
	TArray<FMidiNoteEvent_DelayPool>                   DelayPools;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/SparksMidiParser.MidiTextEventListenerParams
/// Size: 0x001C (0x000004 - 0x000020)
struct FMidiTextEventListenerParams : FMidiEventListenerParams
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,13645) /* TArray<FString> */      __um(EventStrings);                                         // 0x0008   (0x0010)  
	float                                              SecondsBeforeStartTick;                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/SparksMidiParser.ParsedMidiTextEvent
/// Size: 0x0020 (0x000008 - 0x000028)
struct FParsedMidiTextEvent : FParsedMidiEventBase
{ 
	SDK_UNDEFINED(16,13646) /* FString */              __um(EventString);                                          // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,13647) /* TArray<FString> */      __um(EventPayload);                                         // 0x0018   (0x0010)  
};

/// Struct /Script/SparksMidiParser.MidiEventListenerHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMidiEventListenerHandle
{ 
	uint64_t                                           ID;                                                         // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,13648) /* TWeakObjectPtr<UObject*> */ __um(WeakDriver);                                        // 0x0008   (0x0008)  
};

/// Struct /Script/SparksMidiParser.MidiPlaybackState
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMidiPlaybackState
{ 
	int32_t                                            CurrentTimeTick;                                            // 0x0000   (0x0004)  
	float                                              CurrentTimeSeconds;                                         // 0x0004   (0x0004)  
	bool                                               bIsPlaybackEnded;                                           // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/SparksMidiParser.MidiNoteEventList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMidiNoteEventList
{ 
	TArray<FParsedMidiNoteEvent>                       Events;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/SparksMidiParser.MidiTextEventList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMidiTextEventList
{ 
	TArray<FParsedMidiTextEvent>                       Events;                                                     // 0x0000   (0x0010)  
};

