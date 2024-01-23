
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ZoneGraph

/// Class /Script/ZoneGraphDebug.ZoneLaneTest
/// Size: 0x0008 (0x000028 - 0x000030)
class UZoneLaneTest : public UObject
{ 
public:
	class UZoneGraphTestingComponent*                  OwnerComponent;                                             // 0x0028   (0x0008)  
};

/// Class /Script/ZoneGraphDebug.ZoneGraphTestingComponent
/// Size: 0x02E0 (0x000570 - 0x000850)
class UZoneGraphTestingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0570   (0x0010)  MISSED
	class UZoneGraphSubsystem*                         ZoneGraph;                                                  // 0x0580   (0x0008)  
	FZoneGraphLaneLocation                             LaneLocation;                                               // 0x0588   (0x0070)  
	FZoneGraphLaneLocation                             NextLaneLocation;                                           // 0x05F8   (0x0070)  
	FZoneGraphLaneLocation                             NearestLaneLocation;                                        // 0x0668   (0x0070)  
	FVector                                            SearchExtent;                                               // 0x06D8   (0x0018)  
	float                                              AdvanceDistance;                                            // 0x06F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06F4   (0x0004)  MISSED
	FVector                                            NearestTestOffset;                                          // 0x06F8   (0x0018)  
	FZoneGraphTagFilter                                QueryFilter;                                                // 0x0710   (0x000C)  
	bool                                               bDrawLinkedLanes;                                           // 0x071C   (0x0001)  
	bool                                               bDrawLaneTangentVectors;                                    // 0x071D   (0x0001)  
	bool                                               bDrawLaneSmoothing;                                         // 0x071E   (0x0001)  
	bool                                               bDrawBVTreeQuery;                                           // 0x071F   (0x0001)  
	bool                                               bDrawLanePath;                                              // 0x0720   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0721   (0x0007)  MISSED
	class AZoneGraphTestingActor*                      OtherActor;                                                 // 0x0728   (0x0008)  
	unsigned char                                      UnknownData03_5[0x100];                                     // 0x0730   (0x0100)  MISSED
	TArray<class UZoneLaneTest*>                       CustomTests;                                                // 0x0830   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0840   (0x0010)  MISSED


	/// Functions
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingComponent.EnableCustomTests
	// void EnableCustomTests();                                                                                             // [0xa6fd654] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingComponent.DisableCustomTests
	// void DisableCustomTests();                                                                                            // [0xa6fd618] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ZoneGraphDebug.ZoneGraphTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AZoneGraphTestingActor : public AActor
{ 
public:
	class UZoneGraphTestingComponent*                  DebugComp;                                                  // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingActor.EnableCustomTests
	// void EnableCustomTests();                                                                                             // [0xa6fd62c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingActor.DisableCustomTests
	// void DisableCustomTests();                                                                                            // [0xa6fd5f0] Final|Native|Public|BlueprintCallable 
};

