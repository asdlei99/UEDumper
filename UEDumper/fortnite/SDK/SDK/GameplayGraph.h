
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/GameplayGraph.EGraphElementType
/// Size: 0x05
enum class EGraphElementType : uint32_t
{
	EGraphElementType__Node                                                          = 0,
	EGraphElementType__Edge                                                          = 1,
	EGraphElementType__Island                                                        = 2,
	EGraphElementType__Unknown                                                       = 3,
	EGraphElementType__EGraphElementType_MAX                                         = 4
};

/// Enum /Script/GameplayGraph.EGraphIslandOperations
/// Size: 0x07
enum class EGraphIslandOperations : uint32_t
{
	EGraphIslandOperations__None                                                     = 0,
	EGraphIslandOperations__Add                                                      = 1,
	EGraphIslandOperations__Split                                                    = 2,
	EGraphIslandOperations__Merge                                                    = 4,
	EGraphIslandOperations__Destroy                                                  = 8,
	EGraphIslandOperations__All                                                      = 15,
	EGraphIslandOperations__EGraphIslandOperations_MAX                               = 16
};

/// Struct /Script/GameplayGraph.GraphUniqueIndex
/// Size: 0x0014 (0x000000 - 0x000014)
struct FGraphUniqueIndex
{ 
	FGuid                                              UniqueIndex;                                                // 0x0000   (0x0010)  
	bool                                               bIsTemporary;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/GameplayGraph.GraphElement
/// Size: 0x0020 (0x000028 - 0x000048)
class UGraphElement : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EGraphElementType                                  ElementType;                                                // 0x0028   (0x0004)  
	FGraphUniqueIndex                                  UniqueIndex;                                                // 0x002C   (0x0014)  
	SDK_UNDEFINED(8,11843) /* TWeakObjectPtr<UGraph*> */ __um(ParentGraph);                                        // 0x0040   (0x0008)  
};

/// Class /Script/GameplayGraph.Graph
/// Size: 0x0190 (0x000028 - 0x0001B8)
class UGraph : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0000   (0x0070)  MISSED
	SDK_UNDEFINED(80,11844) /* TMap<FGraphVertexHandle, UGraphVertex*> */ __um(Vertices);                          // 0x0070   (0x0050)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x00C0   (0x0050)  MISSED
	SDK_UNDEFINED(80,11845) /* TMap<FGraphEdgeHandle, UGraphEdge*> */ __um(Edges);                                 // 0x0110   (0x0050)  
	SDK_UNDEFINED(80,11846) /* TMap<FGraphIslandHandle, UGraphIsland*> */ __um(Islands);                           // 0x0160   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x01B0   (0x0008)  MISSED
};

/// Struct /Script/GameplayGraph.GraphHandle
/// Size: 0x001C (0x000000 - 0x00001C)
struct FGraphHandle
{ 
	FGraphUniqueIndex                                  UniqueIndex;                                                // 0x0000   (0x0014)  
	SDK_UNDEFINED(8,11847) /* TWeakObjectPtr<UGraphElement*> */ __um(Element);                                     // 0x0014   (0x0008)  
};

/// Struct /Script/GameplayGraph.GraphVertexHandle
/// Size: 0x0000 (0x00001C - 0x00001C)
struct FGraphVertexHandle : FGraphHandle
{ 
};

/// Class /Script/GameplayGraph.GraphEdge
/// Size: 0x0038 (0x000048 - 0x000080)
class UGraphEdge : public UGraphElement
{ 
public:
	FGraphVertexHandle                                 A;                                                          // 0x0048   (0x001C)  
	FGraphVertexHandle                                 B;                                                          // 0x0064   (0x001C)  
};

/// Class /Script/GameplayGraph.GraphIsland
/// Size: 0x00B8 (0x000048 - 0x000100)
class UGraphIsland : public UGraphElement
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x0048   (0x0060)  MISSED
	SDK_UNDEFINED(80,11848) /* TSet<FGraphVertexHandle> */ __um(Vertices);                                         // 0x00A8   (0x0050)  
	bool                                               bPendingDestroy;                                            // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	EGraphIslandOperations                             AllowedOperations;                                          // 0x00FC   (0x0004)  
};

/// Struct /Script/GameplayGraph.GraphIslandHandle
/// Size: 0x0000 (0x00001C - 0x00001C)
struct FGraphIslandHandle : FGraphHandle
{ 
};

/// Class /Script/GameplayGraph.GraphVertex
/// Size: 0x00A0 (0x000048 - 0x0000E8)
class UGraphVertex : public UGraphElement
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0048   (0x0030)  MISSED
	SDK_UNDEFINED(80,11849) /* TMap<FGraphVertexHandle, FGraphEdgeHandle> */ __um(Edges);                          // 0x0078   (0x0050)  
	FGraphIslandHandle                                 ParentIsland;                                               // 0x00C8   (0x001C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Struct /Script/GameplayGraph.GraphProperties
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGraphProperties
{ 
	bool                                               bGenerateIslands;                                           // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayGraph.SerializableGraph
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FSerializableGraph
{ 
	FGraphProperties                                   Properties;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FGraphVertexHandle>                         Vertices;                                                   // 0x0008   (0x0010)  
	SDK_UNDEFINED(80,11850) /* TMap<FGraphEdgeHandle, FSerializedEdgeData> */ __um(Edges);                         // 0x0018   (0x0050)  
	SDK_UNDEFINED(80,11851) /* TMap<FGraphIslandHandle, FSerializedIslandData> */ __um(Islands);                   // 0x0068   (0x0050)  
};

/// Struct /Script/GameplayGraph.SerializedIslandData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSerializedIslandData
{ 
	TArray<FGraphVertexHandle>                         Vertices;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayGraph.GraphEdgeHandle
/// Size: 0x0000 (0x00001C - 0x00001C)
struct FGraphEdgeHandle : FGraphHandle
{ 
};

/// Struct /Script/GameplayGraph.SerializedEdgeData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSerializedEdgeData
{ 
	FGraphVertexHandle                                 Node1;                                                      // 0x0000   (0x001C)  
	FGraphVertexHandle                                 Node2;                                                      // 0x001C   (0x001C)  
};

