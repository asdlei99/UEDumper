
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PictureInPictureCore
/// dependency: UMG

/// Class /Script/PictureInPictureFNEvents.LiveEventHUDAd
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class ULiveEventHUDAd : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/PictureInPictureFNEvents.LiveEventHUDAd.ShowAdvertisement
	// void ShowAdvertisement(bool& Result);                                                                                 // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureFNEventsCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StopPiPBouncingLlama
	// void StopPiPBouncingLlama();                                                                                          // [0x32e4b44] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StartPiPBouncingLlama
	// void StartPiPBouncingLlama();                                                                                         // [0x32e4b44] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.SelectPiPEvent
	// void SelectPiPEvent(FString EventName);                                                                               // [0x8c0e6d0] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.RemovePiPEvent
	// void RemovePiPEvent(FString EventName);                                                                               // [0x8c0e6d0] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListPiPEvents
	// void ListPiPEvents();                                                                                                 // [0x32e4b44] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListAllPiPEvents
	// void ListAllPiPEvents();                                                                                              // [0x32e4b44] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.AddPiPEvent
	// void AddPiPEvent(FString EventName, FString VUID);                                                                    // [0x849d9a4] Final|Exec|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsClient
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPictureInPictureFNEventsClient : public UPictureInPictureClient
{ 
public:
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController
/// Size: 0x0030 (0x0006E8 - 0x000718)
class UPictureInPictureFNEventsController : public UPictureInPictureMediaController
{ 
public:
	class UPictureInPictureFNEventsClient*             FNEventsClient;                                             // 0x06E8   (0x0008)  
	class ULiveEventHUDAd*                             HUDAdvertWidget;                                            // 0x06F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x06F8   (0x0020)  MISSED


	/// Functions
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.UpdateClientLoginState
	// void UpdateClientLoginState(TArray<FPiPPartnerSource>& UpdatedSources);                                               // [0x262ced4] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLogoutSuccess
	// void OnClientLogoutSuccess();                                                                                         // [0xb3398b4] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLoginSuccess
	// void OnClientLoginSuccess();                                                                                          // [0xb3398a0] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaRemoveEventsStream
	// void HandleFNMediaRemoveEventsStream(FString InEventName);                                                            // [0xb3391ec] Final|Native|Protected 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaEventsStreams
	// void HandleFNMediaEventsStreams(FFortMediaEventsStreamAssets& VideoStreamAssets);                                     // [0xb338b0c] Final|Native|Protected|HasOutParms 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.ExitEvent
	// void ExitEvent();                                                                                                     // [0xb338af8] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.AddPartnerActionAnalytics
	// void AddPartnerActionAnalytics(FString InPartnerName, PictureInPictureAction InActionType);                           // [0xb338418] Final|Native|Private 
};

