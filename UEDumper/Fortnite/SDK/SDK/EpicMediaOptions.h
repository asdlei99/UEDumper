
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

/// Struct /Script/EpicMediaOptions.EpicMediaOptions
/// Size: 0x0110 (0x000000 - 0x000110)
struct FEpicMediaOptions
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
	int32_t                                            FrameRate;                                                  // 0x0004   (0x0004)  
	int32_t                                            MaxResolutionForMediaStreaming;                             // 0x0008   (0x0004)  
	int32_t                                            MaxElectraVerticalResolutionOf60fpsVideos;                  // 0x000C   (0x0004)  
	int32_t                                            MaxElectraVerticalResolutionOfWindowsSWD;                   // 0x0010   (0x0004)  
	bool                                               bElectraLiveUseConservativePresentationOffset;              // 0x0014   (0x0001)  
	bool                                               bElectraUseDedicatedMediaSegmentDownloadThreads;            // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	double                                             ElectraLivePresentationOffset;                              // 0x0018   (0x0008)  
	double                                             ElectraLiveAudioPresentationOffset;                         // 0x0020   (0x0008)  
	bool                                               bDisableBlastURLStreamSource;                               // 0x0028   (0x0001)  
	bool                                               bIsCN;                                                      // 0x0029   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	SDK_UNDEFINED(16,13325) /* TArray<FString> */      __um(VideoEVMap);                                           // 0x0030   (0x0010)  
	TArray<float>                                      CDNDistribution;                                            // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,13326) /* TArray<FString> */      __um(VODHostNames);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,13327) /* TArray<FString> */      __um(VODHostNamesCN);                                       // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,13328) /* TArray<FString> */      __um(LiveHostNames);                                        // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,13329) /* TArray<FString> */      __um(LiveHostNamesCN);                                      // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,13330) /* TArray<FString> */      __um(VODHostNamesDev);                                      // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,13331) /* TArray<FString> */      __um(LiveHostNamesDev);                                     // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,13332) /* TArray<FString> */      __um(VODHostNamesHF);                                       // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,13333) /* TArray<FString> */      __um(LiveHostNamesHF);                                      // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,13334) /* TArray<FString> */      __um(VODHostNamesCNHF);                                     // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,13335) /* TArray<FString> */      __um(LiveHostNamesCNHF);                                    // 0x00E0   (0x0010)  
	bool                                               bUseQuicksilverEntryPoint;                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x17];                                      // 0x00F1   (0x0017)  MISSED
	bool                                               bUseSegmentCaching;                                         // 0x0108   (0x0001)  
	bool                                               bForceSegmentCaching;                                       // 0x0109   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x010A   (0x0002)  MISSED
	float                                              MetadataRequestTimeout;                                     // 0x010C   (0x0004)  
};

