
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NavigationSystem

/// Struct /Script/NavCorridor.NavCorridorParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavCorridorParams
{ 
	float                                              Width;                                                      // 0x0000   (0x0004)  
	float                                              ObstacleTaperAngle;                                         // 0x0004   (0x0004)  
	float                                              SmallSectorThreshold;                                       // 0x0008   (0x0004)  
	float                                              LargeSectorThreshold;                                       // 0x000C   (0x0004)  
	float                                              SimplifyEdgeThreshold;                                      // 0x0010   (0x0004)  
	bool                                               bSimplifyFlipPortals;                                       // 0x0014   (0x0001)  
	bool                                               bSimplifyConvexPortals;                                     // 0x0015   (0x0001)  
	bool                                               bSimplifyConcavePortals;                                    // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0017   (0x0001)  MISSED
};

/// Class /Script/NavCorridor.NavCorridorTestingComponent
/// Size: 0x0120 (0x0005C0 - 0x0006E0)
class UNavCorridorTestingComponent : public UDebugDrawComponent
{ 
public:
	FNavAgentProperties                                NavAgentProps;                                              // 0x05C0   (0x0030)  
	class UClass*                                      FilterClass;                                                // 0x05F0   (0x0008)  
	bool                                               bFindCorridorToGoal;                                        // 0x05F8   (0x0001)  
	bool                                               bFollowPathOnGoalCorridor;                                  // 0x05F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x05FA   (0x0002)  MISSED
	float                                              FollowLookAheadDistance;                                    // 0x05FC   (0x0004)  
	class AActor*                                      GoalActor;                                                  // 0x0600   (0x0008)  
	class ANavigationData*                             NavData;                                                    // 0x0608   (0x0008)  
	FNavCorridorParams                                 CorridorParams;                                             // 0x0610   (0x0018)  
	bool                                               bUpdateParametersFromWidth;                                 // 0x0628   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0629   (0x0003)  MISSED
	float                                              PathOffset;                                                 // 0x062C   (0x0004)  
	float                                              PathfindingTimeUs;                                          // 0x0630   (0x0004)  
	float                                              CorridorTimeUs;                                             // 0x0634   (0x0004)  
	unsigned char                                      UnknownData02_6[0xA8];                                      // 0x0638   (0x00A8)  MISSED
};

/// Class /Script/NavCorridor.NavCorridorTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ANavCorridorTestingActor : public AActor
{ 
public:
	class UNavCorridorTestingComponent*                DebugComp;                                                  // 0x0290   (0x0008)  
};

