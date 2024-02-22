
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/TimeManagement.EFrameNumberDisplayFormats
/// Size: 0x06
enum class EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode                                 = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode                                    = 1,
	EFrameNumberDisplayFormats__Seconds                                              = 2,
	EFrameNumberDisplayFormats__Frames                                               = 3,
	EFrameNumberDisplayFormats__MAX_Count                                            = 4,
	EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX                       = 5
};

/// Enum /Script/TimeManagement.ETimedDataInputEvaluationType
/// Size: 0x04
enum class ETimedDataInputEvaluationType : uint8_t
{
	ETimedDataInputEvaluationType__None                                              = 0,
	ETimedDataInputEvaluationType__Timecode                                          = 1,
	ETimedDataInputEvaluationType__PlatformTime                                      = 2,
	ETimedDataInputEvaluationType__ETimedDataInputEvaluationType_MAX                 = 3
};

/// Enum /Script/TimeManagement.ETimedDataInputState
/// Size: 0x04
enum class ETimedDataInputState : uint8_t
{
	ETimedDataInputState__Connected                                                  = 0,
	ETimedDataInputState__Unresponsive                                               = 1,
	ETimedDataInputState__Disconnected                                               = 2,
	ETimedDataInputState__ETimedDataInputState_MAX                                   = 3
};

/// Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
/// Size: 0x0000 (0x000028 - 0x000028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{ 
public:
};

/// Class /Script/TimeManagement.GenlockedCustomTimeStep
/// Size: 0x0008 (0x000028 - 0x000030)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{ 
public:
	bool                                               bAutoDetectFormat;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/TimeManagement.GenlockedFixedRateCustomTimeStep
/// Size: 0x0020 (0x000030 - 0x000050)
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{ 
public:
	FFrameRate                                         FrameRate;                                                  // 0x0030   (0x0008)  
	bool                                               bShouldBlock;                                               // 0x0038   (0x0001)  
	bool                                               bForceSingleFrameDeltaTime;                                 // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x003A   (0x0016)  MISSED
};

/// Class /Script/TimeManagement.GenlockedTimecodeProvider
/// Size: 0x0028 (0x000030 - 0x000058)
class UGenlockedTimecodeProvider : public UTimecodeProvider
{ 
public:
	bool                                               bUseGenlockToCount;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x0031   (0x0027)  MISSED
};

/// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	// FFrameTime TransformTime(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& DestinationRate);                // [0x5e03b10] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	// FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32_t B);                                                  // [0x5e038ec] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	// FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);                                         // [0x5e036c8] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	// FFrameTime SnapFrameTimeToRate(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& SnapToRate);               // [0x5e0357c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	// FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate& FrameRate);                                     // [0x5e034a0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	// FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32_t B);                                                  // [0x5e0327c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	// bool IsValid_MultipleOf(FFrameRate& InFrameRate, FFrameRate& OtherFramerate);                                         // [0x5e03188] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	// bool IsValid_Framerate(FFrameRate& InFrameRate);                                                                      // [0x5e030f8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	// FFrameRate GetTimecodeFrameRate();                                                                                    // [0x5e030d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	// FTimecode GetTimecode();                                                                                              // [0x5e03098] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	// FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32_t B);                                                    // [0x5e02e74] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	// FString Conv_TimecodeToString(FTimecode& InTimecode, bool bForceSignDisplay);                                         // [0x5e02cb0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	// float Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime& InFrameTime);                                             // [0x5e02bcc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	// float Conv_FrameRateToSeconds(FFrameRate& InFrameRate);                                                               // [0x5e02b20] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToInterval
	// float Conv_FrameRateToInterval(FFrameRate InFrameRate);                                                               // [0x5e029b8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	// int32_t Conv_FrameNumberToInteger(FFrameNumber& InFrameNumber);                                                       // [0x5e02930] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	// FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32_t B);                                                       // [0x5e0270c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	// FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);                                              // [0x5e024e8] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TimeManagement.TimeSynchronizationSource
/// Size: 0x0008 (0x000028 - 0x000030)
class UTimeSynchronizationSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bUseForSynchronization;                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            FrameOffset;                                                // 0x002C   (0x0004)  
};

/// Struct /Script/TimeManagement.TimedDataChannelSampleTime
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTimedDataChannelSampleTime
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TimeManagement.TimedDataInputEvaluationData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTimedDataInputEvaluationData
{ 
	float                                              DistanceToNewestSampleSeconds;                              // 0x0000   (0x0004)  
	float                                              DistanceToOldestSampleSeconds;                              // 0x0004   (0x0004)  
};

