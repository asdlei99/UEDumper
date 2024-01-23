
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: GameplayGraph

/// Class /Script/FortGameplayGraph.FortConnectivityGraph
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UFortConnectivityGraph : public UGraph
{ 
public:
};

/// Class /Script/FortGameplayGraph.FortConnectivityGraphIsland
/// Size: 0x0050 (0x000100 - 0x000150)
class UFortConnectivityGraphIsland : public UGraphIsland
{ 
public:
	SDK_UNDEFINED(80,11762) /* TSet<FGraphVertexHandle> */ __um(SupportNodes);                                     // 0x0100   (0x0050)  
};

/// Class /Script/FortGameplayGraph.FortConnectivityGraphVertex
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UFortConnectivityGraphVertex : public UGraphVertex
{ 
public:
	bool                                               bIsIndependentlySupported;                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/FortGameplayGraph.SerializableConnectivityGraph
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FSerializableConnectivityGraph : FSerializableGraph
{ 
	SDK_UNDEFINED(80,11763) /* TMap<FGraphVertexHandle, FSerializableConnectivityGraphVertex> */ __um(ConnectivityVertexData); // 0x00B8   (0x0050)  
};

/// Struct /Script/FortGameplayGraph.SerializableConnectivityGraphVertex
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSerializableConnectivityGraphVertex
{ 
	bool                                               bIsIndependentlySupported;                                  // 0x0000   (0x0001)  
};

