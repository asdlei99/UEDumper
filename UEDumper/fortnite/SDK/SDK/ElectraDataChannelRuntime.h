
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AElectraDataChannelPlayer : public AActor
{ 
public:
	SDK_UNDEFINED(16,12484) /* FMulticastInlineDelegate */ __um(OnTerminalError);                                  // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x02A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer
	// void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                       // [0xb76ef88] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer
	// void PlayFromStateStreamServer(FString InStatePlaylistURL);                                                           // [0xb76da8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer
	// void PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                          // [0xb76d9cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile
	// void PlayFromFile(FString InFilename);                                                                                // [0xb76d2d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
	// void EndPlayback();                                                                                                   // [0xb76d290] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AElectraDataChannelRecorder : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0290   (0x0038)  MISSED


	/// Functions
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer
	// void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                       // [0xb76f048] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
	// void StartRecording();                                                                                                // [0xb76ef74] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
	// void RecordToFile(FString InFilename);                                                                                // [0xb76e184] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
	// void EndRecording();                                                                                                  // [0xb76d2a4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget
/// Size: 0x0078 (0x000290 - 0x000308)
class AElectraDataChannelTarget : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0290   (0x0078)  MISSED


	/// Functions
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias
	// void SetTargetAlias(FString InAlias);                                                                                 // [0xb76e87c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias
	// FString GetTargetAlias();                                                                                             // [0xb76d2b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

