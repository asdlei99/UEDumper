
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Class /Script/VkPersistence.VkPersistence
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UVkPersistence : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0028   (0x00A8)  MISSED
};

/// Class /Script/VkPersistence.VkPersistenceManager
/// Size: 0x01A0 (0x000028 - 0x0001C8)
class UVkPersistenceManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1A0];                                     // 0x0028   (0x01A0)  MISSED
};

/// Struct /Script/VkPersistence.VkPersistenceVersion
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVkPersistenceVersion
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,2892) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
};

