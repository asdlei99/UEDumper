
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/UniversalObjectLocator.DirectPathObjectLocator
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDirectPathObjectLocator
{ 
	FSoftObjectPath                                    Path;                                                       // 0x0000   (0x0018)  
};

/// Struct /Script/UniversalObjectLocator.SubObjectLocator
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubObjectLocator
{ 
	SDK_UNDEFINED(16,1287) /* FString */               __um(PathWithinContext);                                    // 0x0000   (0x0010)  
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocatorFragment
/// Size: 0x0020 (0x000000 - 0x000020)
struct FUniversalObjectLocatorFragment
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocator
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUniversalObjectLocator
{ 
	TArray<FUniversalObjectLocatorFragment>            Fragments;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocatorEmptyPayload
/// Size: 0x0001 (0x000000 - 0x000001)
struct FUniversalObjectLocatorEmptyPayload
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

