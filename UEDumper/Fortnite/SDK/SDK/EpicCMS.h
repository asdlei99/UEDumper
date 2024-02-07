
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Struct /Script/EpicCMS.DownloadCacheEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDownloadCacheEntry
{ 
	SDK_UNDEFINED(16,13320) /* FString */              __um(FilePath);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,13321) /* FString */              __um(SourceUrl);                                            // 0x0010   (0x0010)  
	FDateTime                                          LastAccessTime;                                             // 0x0020   (0x0008)  
	int32_t                                            LifetimeInDays;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/EpicCMS.DownloadCache
/// Size: 0x0058 (0x000000 - 0x000058)
struct FDownloadCache
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
	int32_t                                            Version;                                                    // 0x0004   (0x0004)  
	SDK_UNDEFINED(80,13322) /* TMap<FString, FDownloadCacheEntry> */ __um(Cache);                                  // 0x0008   (0x0050)  
};

