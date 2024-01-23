
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/DeveloperSettings.DeveloperSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDeveloperSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/DeveloperSettings.DeveloperSettingsBackedByCVars
/// Size: 0x0000 (0x000030 - 0x000030)
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{ 
public:
};

/// Class /Script/DeveloperSettings.PlatformSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UPlatformSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/DeveloperSettings.PlatformSettingsManager
/// Size: 0x0058 (0x000028 - 0x000080)
class UPlatformSettingsManager : public UObject
{ 
public:
	SDK_UNDEFINED(80,38) /* TMap<UClass*, FPlatformSettingsInstances> */ __um(SettingsMap);                        // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/DeveloperSettings.PerPlatformSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPerPlatformSettings
{ 
	TArray<class UPlatformSettings*>                   Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/DeveloperSettings.PlatformSettingsInstances
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPlatformSettingsInstances
{ 
	class UPlatformSettings*                           PlatformInstance;                                           // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,39) /* TMap<FName, UPlatformSettings*> */ __um(OtherPlatforms);                               // 0x0008   (0x0050)  
};

