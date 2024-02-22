
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/FMJamContentResolver.JamContentResolver
/// Size: 0x0148 (0x0000A0 - 0x0001E8)
class UJamContentResolver : public UGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x00A0   (0x0048)  MISSED
	SDK_UNDEFINED(80,13815) /* TSet<FString> */        __um(DownloadingLinkCodes);                                 // 0x00E8   (0x0050)  
	SDK_UNDEFINED(80,13816) /* TMap<FString, FString> */ __um(DownloadedLinkCodes);                                // 0x0138   (0x0050)  
	SDK_UNDEFINED(16,13817) /* TArray<FString> */      __um(DownloadedLinkCodesInOrder);                           // 0x0188   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0198   (0x0050)  MISSED


	/// Functions
	// Function /Script/FMJamContentResolver.JamContentResolver.HandleResolveComplete
	// void HandleResolveComplete(bool bSuccess, FString LinkCode, TArray<FString>& PluginURLs);                             // [0xb07fbdc] Final|Native|Private|HasOutParms 
	// Function /Script/FMJamContentResolver.JamContentResolver.HandleGameFeatureLoadComplete
	// void HandleGameFeatureLoadComplete(bool bSuccess, FString LinkCode, FString PluginURL);                               // [0xb07f4a0] Final|Native|Private 
};

