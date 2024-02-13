
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassZoneGraphNavigation.MassZoneGraphPathFollowProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassZoneGraphPathFollowProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class UMassSignalSubsystem*)               SignalSubsystem                                             OFFSET(get<T>, {0x360, 8, 0, 0})
};

/// Class /Script/MassZoneGraphNavigation.MassZoneGraphLaneCacheBoundaryProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassZoneGraphLaneCacheBoundaryProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/MassZoneGraphNavigation.MassZoneGraphNavigationTrait
/// Size: 0x0010 (0x000028 - 0x000038)
class UMassZoneGraphNavigationTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMassZoneGraphNavigationParameters)        NavigationParameters                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphNavigationParameters
/// Size: 0x000F (0x000001 - 0x000010)
class FMassZoneGraphNavigationParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FZoneGraphTagFilter)                       LaneFilter                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     QueryRadius                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphPathRequestFragment
/// Size: 0x0047 (0x000001 - 0x000048)
class FMassZoneGraphPathRequestFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FZoneGraphShortPathRequest)                PathRequest                                                 OFFSET(getStruct<T>, {0x0, 72, 0, 0})
};

/// Struct /Script/MassZoneGraphNavigation.ZoneGraphShortPathRequest
/// Size: 0x0048 (0x000000 - 0x000048)
class FZoneGraphShortPathRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   StartPosition                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   EndOfPathPosition                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FZoneGraphLaneHandle)                      NextLaneHandle                                              OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(float)                                     TargetDistance                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FMassSnorm8Vector)                         EndOfPathDirection                                          OFFSET(getStruct<T>, {0x3C, 3, 0, 0})
	SMember(FMassInt16Real)                            AnticipationDistance                                        OFFSET(getStruct<T>, {0x40, 2, 0, 0})
	SMember(FMassInt16Real)                            EndOfPathOffset                                             OFFSET(getStruct<T>, {0x42, 2, 0, 0})
	CMember(EMassMovementAction)                       EndOfPathIntent                                             OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(EZoneLaneLinkType)                         NextExitLinkType                                            OFFSET(get<T>, {0x45, 1, 0, 0})
	DMember(bool)                                      bMoveReverse                                                OFFSET(get<bool>, {0x46, 1, 1, 0})
	DMember(bool)                                      bIsEndOfPathPositionSet                                     OFFSET(get<bool>, {0x46, 1, 1, 1})
	DMember(bool)                                      bIsEndOfPathDirectionSet                                    OFFSET(get<bool>, {0x46, 1, 1, 2})
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphLaneLocationFragment
/// Size: 0x000F (0x000001 - 0x000010)
class FMassZoneGraphLaneLocationFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphCachedLaneFragment
/// Size: 0x00A7 (0x000001 - 0x0000A8)
class FMassZoneGraphCachedLaneFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphPathPoint
/// Size: 0x0020 (0x000000 - 0x000020)
class FMassZoneGraphPathPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MassZoneGraphNavigation.MassZoneGraphShortPathFragment
/// Size: 0x0077 (0x000001 - 0x000078)
class FMassZoneGraphShortPathFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/MassZoneGraphNavigation.MassLaneCacheBoundaryFragment
/// Size: 0x001F (0x000001 - 0x000020)
class FMassLaneCacheBoundaryFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

