
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: SocketSubsystemEOS

/// Class /Script/OnlineSubsystemEOS.NetDriverEOS
/// Size: 0x0000 (0x000888 - 0x000888)
class UNetDriverEOS : public UNetDriverEOSBase
{ 
public:
};

/// Class /Script/OnlineSubsystemEOS.EOSArtifactSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UEOSArtifactSettings : public UDataAsset
{ 
public:
};

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FArtifactSettings
{ 
	SDK_UNDEFINED(16,14863) /* FString */              __um(ArtifactName);                                         // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14864) /* FString */              __um(ClientId);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,14865) /* FString */              __um(ClientSecret);                                         // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,14866) /* FString */              __um(ProductId);                                            // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,14867) /* FString */              __um(SandboxId);                                            // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,14868) /* FString */              __um(DeploymentId);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,14869) /* FString */              __um(ClientEncryptionKey);                                  // 0x0060   (0x0010)  
};

/// Class /Script/OnlineSubsystemEOS.EOSSettings
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UEOSSettings : public URuntimeOptionsBase
{ 
public:
	SDK_UNDEFINED(16,14870) /* FString */              __um(CacheDir);                                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,14871) /* FString */              __um(DefaultArtifactName);                                  // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,14872) /* FString */              __um(RTCBackgroundMode);                                    // 0x0058   (0x0010)  
	int32_t                                            TickBudgetInMilliseconds;                                   // 0x0068   (0x0004)  
	bool                                               bEnableOverlay;                                             // 0x006C   (0x0001)  
	bool                                               bEnableSocialOverlay;                                       // 0x006D   (0x0001)  
	bool                                               bEnableEditorOverlay;                                       // 0x006E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x006F   (0x0001)  MISSED
	SDK_UNDEFINED(16,14873) /* TArray<FString> */      __um(TitleStorageTags);                                     // 0x0070   (0x0010)  
	int32_t                                            TitleStorageReadChunkLength;                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FArtifactSettings>                          Artifacts;                                                  // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,14874) /* TArray<FString> */      __um(AuthScopeFlags);                                       // 0x0098   (0x0010)  
	bool                                               bUseEAS;                                                    // 0x00A8   (0x0001)  
	bool                                               bUseEOSConnect;                                             // 0x00A9   (0x0001)  
	bool                                               bMirrorStatsToEOS;                                          // 0x00AA   (0x0001)  
	bool                                               bMirrorAchievementsToEOS;                                   // 0x00AB   (0x0001)  
	bool                                               bUseEOSSessions;                                            // 0x00AC   (0x0001)  
	bool                                               bMirrorPresenceToEAS;                                       // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
};

