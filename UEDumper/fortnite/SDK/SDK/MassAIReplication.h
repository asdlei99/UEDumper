
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: MassCommon
/// dependency: MassNavigation
/// dependency: MassZoneGraphNavigation
/// dependency: ZoneGraph

/// Struct /Script/MassAIReplication.ReplicatedAgentPathData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FReplicatedAgentPathData
{ 
	FZoneGraphShortPathRequest                         PathRequest;                                                // 0x0000   (0x0048)  
	FZoneGraphLaneHandle                               LaneHandle;                                                 // 0x0048   (0x0008)  
	double                                             ActionServerStartTime;                                      // 0x0050   (0x0008)  
	float                                              DistanceAlongLane;                                          // 0x0058   (0x0004)  
	float                                              LaneLength;                                                 // 0x005C   (0x0004)  
	FMassInt16Real                                     DesiredSpeed;                                               // 0x0060   (0x0002)  
	uint16_t                                           ActionId;                                                   // 0x0062   (0x0002)  
	EMassMovementAction                                Action;                                                     // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

