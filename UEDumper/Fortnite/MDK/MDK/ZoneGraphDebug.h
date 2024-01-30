
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ZoneGraph

/// Class /Script/ZoneGraphDebug.ZoneLaneTest
/// Size: 0x0008 (0x000028 - 0x000030)
class UZoneLaneTest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UZoneGraphTestingComponent*)         OwnerComponent                                              OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/ZoneGraphDebug.ZoneGraphTestingComponent
/// Size: 0x02E0 (0x000570 - 0x000850)
class UZoneGraphTestingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2128;

public:
	CMember(class UZoneGraphSubsystem*)                ZoneGraph                                                   OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(FZoneGraphLaneLocation)                    LaneLocation                                                OFFSET(getStruct<T>, {0x588, 112, 0, 0})
	SMember(FZoneGraphLaneLocation)                    NextLaneLocation                                            OFFSET(getStruct<T>, {0x5F8, 112, 0, 0})
	SMember(FZoneGraphLaneLocation)                    NearestLaneLocation                                         OFFSET(getStruct<T>, {0x668, 112, 0, 0})
	SMember(FVector)                                   SearchExtent                                                OFFSET(getStruct<T>, {0x6D8, 24, 0, 0})
	DMember(float)                                     AdvanceDistance                                             OFFSET(get<float>, {0x6F0, 4, 0, 0})
	SMember(FVector)                                   NearestTestOffset                                           OFFSET(getStruct<T>, {0x6F8, 24, 0, 0})
	SMember(FZoneGraphTagFilter)                       QueryFilter                                                 OFFSET(getStruct<T>, {0x710, 12, 0, 0})
	DMember(bool)                                      bDrawLinkedLanes                                            OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(bool)                                      bDrawLaneTangentVectors                                     OFFSET(get<bool>, {0x71D, 1, 0, 0})
	DMember(bool)                                      bDrawLaneSmoothing                                          OFFSET(get<bool>, {0x71E, 1, 0, 0})
	DMember(bool)                                      bDrawBVTreeQuery                                            OFFSET(get<bool>, {0x71F, 1, 0, 0})
	DMember(bool)                                      bDrawLanePath                                               OFFSET(get<bool>, {0x720, 1, 0, 0})
	CMember(class AZoneGraphTestingActor*)             OtherActor                                                  OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(TArray<class UZoneLaneTest*>)              CustomTests                                                 OFFSET(get<T>, {0x830, 16, 0, 0})


	/// Functions
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingComponent.EnableCustomTests
	// void EnableCustomTests();                                                                                                // [0xa6f60c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingComponent.DisableCustomTests
	// void DisableCustomTests();                                                                                               // [0xa6f608c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ZoneGraphDebug.ZoneGraphTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AZoneGraphTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UZoneGraphTestingComponent*)         DebugComp                                                   OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingActor.EnableCustomTests
	// void EnableCustomTests();                                                                                                // [0xa6f60a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingActor.DisableCustomTests
	// void DisableCustomTests();                                                                                               // [0xa6f6064] Final|Native|Public|BlueprintCallable 
};

