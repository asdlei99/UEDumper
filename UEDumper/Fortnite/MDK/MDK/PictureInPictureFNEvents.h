
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PictureInPictureCore
/// dependency: UMG

/// Class /Script/PictureInPictureFNEvents.LiveEventHUDAd
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class ULiveEventHUDAd : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/PictureInPictureFNEvents.LiveEventHUDAd.ShowAdvertisement
	// void ShowAdvertisement(bool& Result);                                                                                    // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureFNEventsCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StopPiPBouncingLlama
	// void StopPiPBouncingLlama();                                                                                             // [0x307d48c] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StartPiPBouncingLlama
	// void StartPiPBouncingLlama();                                                                                            // [0x307d48c] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.SelectPiPEvent
	// void SelectPiPEvent(FString EventName);                                                                                  // [0x8c1108c] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.RemovePiPEvent
	// void RemovePiPEvent(FString EventName);                                                                                  // [0x8c1108c] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListPiPEvents
	// void ListPiPEvents();                                                                                                    // [0x307d48c] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListAllPiPEvents
	// void ListAllPiPEvents();                                                                                                 // [0x307d48c] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.AddPiPEvent
	// void AddPiPEvent(FString EventName, FString VUID);                                                                       // [0x8438a30] Final|Exec|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsClient
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPictureInPictureFNEventsClient : public UPictureInPictureClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController
/// Size: 0x0030 (0x0006E8 - 0x000718)
class UPictureInPictureFNEventsController : public UPictureInPictureMediaController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
	CMember(class UPictureInPictureFNEventsClient*)    FNEventsClient                                              OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(class ULiveEventHUDAd*)                    HUDAdvertWidget                                             OFFSET(get<T>, {0x6F0, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.UpdateClientLoginState
	// void UpdateClientLoginState(TArray<FPiPPartnerSource>& UpdatedSources);                                                  // [0xb56e578] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLogoutSuccess
	// void OnClientLogoutSuccess();                                                                                            // [0xb56e52c] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLoginSuccess
	// void OnClientLoginSuccess();                                                                                             // [0xb56e518] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaRemoveEventsStream
	// void HandleFNMediaRemoveEventsStream(FString InEventName);                                                               // [0xb56de20] Final|Native|Protected 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaEventsStreams
	// void HandleFNMediaEventsStreams(FFortMediaEventsStreamAssets& VideoStreamAssets);                                        // [0xb56d740] Final|Native|Protected|HasOutParms 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.ExitEvent
	// void ExitEvent();                                                                                                        // [0xb56d72c] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.AddPartnerActionAnalytics
	// void AddPartnerActionAnalytics(FString InPartnerName, PictureInPictureAction InActionType);                              // [0xb56cfd0] Final|Native|Private 
};

