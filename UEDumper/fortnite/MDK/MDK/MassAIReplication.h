
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: MassCommon
/// dependency: MassNavigation
/// dependency: MassZoneGraphNavigation
/// dependency: ZoneGraph

/// Struct /Script/MassAIReplication.ReplicatedAgentPathData
/// Size: 0x0068 (0x000000 - 0x000068)
class FReplicatedAgentPathData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FZoneGraphShortPathRequest)                PathRequest                                                 OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FZoneGraphLaneHandle)                      LaneHandle                                                  OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	DMember(double)                                    ActionServerStartTime                                       OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(float)                                     DistanceAlongLane                                           OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LaneLength                                                  OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FMassInt16Real)                            DesiredSpeed                                                OFFSET(getStruct<T>, {0x60, 2, 0, 0})
	DMember(uint16_t)                                  ActionId                                                    OFFSET(get<uint16_t>, {0x62, 2, 0, 0})
	CMember(EMassMovementAction)                       Action                                                      OFFSET(get<T>, {0x64, 1, 0, 0})
};

