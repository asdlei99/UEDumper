
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: MassCommon
/// dependency: MassEntity
/// dependency: MassNavigation
/// dependency: MassSignals
/// dependency: MassSpawner
/// dependency: ZoneGraph

/// Class /Script/MassZoneGraphNavigation.MassZoneGraphLocationInitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassZoneGraphLocationInitializer : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassZoneGraphNavigation.MassZoneGraphPathFollowProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassZoneGraphPathFollowProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_3[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
	class UMassSignalSubsystem*                        SignalSubsystem;                                            // 0x0360   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0368   (0x0008)  MISSED
};

/// Class /Script/MassZoneGraphNavigation.MassZoneGraphLaneCacheBoundaryProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassZoneGraphLaneCacheBoundaryProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2B0];                                     // 0x00C0   (0x02B0)  MISSED
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphNavigationParameters
/// Size: 0x000F (0x000001 - 0x000010)
struct FMassZoneGraphNavigationParameters : FMassSharedFragment
{ 
	FZoneGraphTagFilter                                LaneFilter;                                                 // 0x0000   (0x000C)  
	float                                              QueryRadius;                                                // 0x000C   (0x0004)  
};

/// Class /Script/MassZoneGraphNavigation.MassZoneGraphNavigationTrait
/// Size: 0x0010 (0x000028 - 0x000038)
class UMassZoneGraphNavigationTrait : public UMassEntityTraitBase
{ 
public:
	FMassZoneGraphNavigationParameters                 NavigationParameters;                                       // 0x0028   (0x0010)  
};

/// Struct /Script/MassZoneGraphNavigation.ZoneGraphShortPathRequest
/// Size: 0x0048 (0x000000 - 0x000048)
struct FZoneGraphShortPathRequest
{ 
	FVector                                            StartPosition;                                              // 0x0000   (0x0018)  
	FVector                                            EndOfPathPosition;                                          // 0x0018   (0x0018)  
	FZoneGraphLaneHandle                               NextLaneHandle;                                             // 0x0030   (0x0008)  
	float                                              TargetDistance;                                             // 0x0038   (0x0004)  
	FMassSnorm8Vector                                  EndOfPathDirection;                                         // 0x003C   (0x0003)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x003F   (0x0001)  MISSED
	FMassInt16Real                                     AnticipationDistance;                                       // 0x0040   (0x0002)  
	FMassInt16Real                                     EndOfPathOffset;                                            // 0x0042   (0x0002)  
	EMassMovementAction                                EndOfPathIntent;                                            // 0x0044   (0x0001)  
	EZoneLaneLinkType                                  NextExitLinkType;                                           // 0x0045   (0x0001)  
	bool                                               bMoveReverse : 1;                                           // 0x0046:0 (0x0001)  
	bool                                               bIsEndOfPathPositionSet : 1;                                // 0x0046:1 (0x0001)  
	bool                                               bIsEndOfPathDirectionSet : 1;                               // 0x0046:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0047   (0x0001)  MISSED
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphPathRequestFragment
/// Size: 0x0047 (0x000001 - 0x000048)
struct FMassZoneGraphPathRequestFragment : FMassFragment
{ 
	FZoneGraphShortPathRequest                         PathRequest;                                                // 0x0000   (0x0048)  
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphLaneLocationFragment
/// Size: 0x000F (0x000001 - 0x000010)
struct FMassZoneGraphLaneLocationFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphCachedLaneFragment
/// Size: 0x00A7 (0x000001 - 0x0000A8)
struct FMassZoneGraphCachedLaneFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphPathPoint
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMassZoneGraphPathPoint
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphShortPathFragment
/// Size: 0x0077 (0x000001 - 0x000078)
struct FMassZoneGraphShortPathFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Struct /Script/MassZoneGraphNavigation.MassLaneCacheBoundaryFragment
/// Size: 0x001F (0x000001 - 0x000020)
struct FMassLaneCacheBoundaryFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

