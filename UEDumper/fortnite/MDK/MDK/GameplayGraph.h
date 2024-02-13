
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/GameplayGraph.GraphElement
/// Size: 0x0020 (0x000028 - 0x000048)
class UGraphElement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EGraphElementType)                         ElementType                                                 OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FGraphUniqueIndex)                         UniqueIndex                                                 OFFSET(getStruct<T>, {0x2C, 20, 0, 0})
	CMember(TWeakObjectPtr<UGraph*>)                   ParentGraph                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameplayGraph.Graph
/// Size: 0x0190 (0x000028 - 0x0001B8)
class UGraph : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(TMap<FGraphVertexHandle, UGraphVertex*>)   Vertices                                                    OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(TMap<FGraphEdgeHandle, UGraphEdge*>)       Edges                                                       OFFSET(get<T>, {0x110, 80, 0, 0})
	CMember(TMap<FGraphIslandHandle, UGraphIsland*>)   Islands                                                     OFFSET(get<T>, {0x160, 80, 0, 0})
};

/// Class /Script/GameplayGraph.GraphEdge
/// Size: 0x0038 (0x000048 - 0x000080)
class UGraphEdge : public UGraphElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGraphVertexHandle)                        A                                                           OFFSET(getStruct<T>, {0x48, 28, 0, 0})
	SMember(FGraphVertexHandle)                        B                                                           OFFSET(getStruct<T>, {0x64, 28, 0, 0})
};

/// Class /Script/GameplayGraph.GraphIsland
/// Size: 0x00B8 (0x000048 - 0x000100)
class UGraphIsland : public UGraphElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TSet<FGraphVertexHandle>)                  Vertices                                                    OFFSET(get<T>, {0xA8, 80, 0, 0})
	DMember(bool)                                      bPendingDestroy                                             OFFSET(get<bool>, {0xF8, 1, 0, 0})
	CMember(EGraphIslandOperations)                    AllowedOperations                                           OFFSET(get<T>, {0xFC, 4, 0, 0})
};

/// Class /Script/GameplayGraph.GraphVertex
/// Size: 0x00A0 (0x000048 - 0x0000E8)
class UGraphVertex : public UGraphElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TMap<FGraphVertexHandle, FGraphEdgeHandle>) Edges                                                      OFFSET(get<T>, {0x78, 80, 0, 0})
	SMember(FGraphIslandHandle)                        ParentIsland                                                OFFSET(getStruct<T>, {0xC8, 28, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphProperties
/// Size: 0x0001 (0x000000 - 0x000001)
class FGraphProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bGenerateIslands                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/GameplayGraph.SerializableGraph
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FSerializableGraph : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FGraphProperties)                          Properties                                                  OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	CMember(TArray<FGraphVertexHandle>)                Vertices                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FGraphEdgeHandle, FSerializedEdgeData>) Edges                                                     OFFSET(get<T>, {0x18, 80, 0, 0})
	CMember(TMap<FGraphIslandHandle, FSerializedIslandData>) Islands                                               OFFSET(get<T>, {0x68, 80, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphHandle
/// Size: 0x001C (0x000000 - 0x00001C)
class FGraphHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FGraphUniqueIndex)                         UniqueIndex                                                 OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	CMember(TWeakObjectPtr<UGraphElement*>)            Element                                                     OFFSET(get<T>, {0x14, 8, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphUniqueIndex
/// Size: 0x0014 (0x000000 - 0x000014)
class FGraphUniqueIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     UniqueIndex                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsTemporary                                                OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphIslandHandle
/// Size: 0x0000 (0x00001C - 0x00001C)
class FGraphIslandHandle : public FGraphHandle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
};

/// Struct /Script/GameplayGraph.SerializedIslandData
/// Size: 0x0010 (0x000000 - 0x000010)
class FSerializedIslandData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGraphVertexHandle>)                Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphVertexHandle
/// Size: 0x0000 (0x00001C - 0x00001C)
class FGraphVertexHandle : public FGraphHandle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
};

/// Struct /Script/GameplayGraph.GraphEdgeHandle
/// Size: 0x0000 (0x00001C - 0x00001C)
class FGraphEdgeHandle : public FGraphHandle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
};

/// Struct /Script/GameplayGraph.SerializedEdgeData
/// Size: 0x0038 (0x000000 - 0x000038)
class FSerializedEdgeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGraphVertexHandle)                        Node1                                                       OFFSET(getStruct<T>, {0x0, 28, 0, 0})
	SMember(FGraphVertexHandle)                        Node2                                                       OFFSET(getStruct<T>, {0x1C, 28, 0, 0})
};

/// Enum /Script/GameplayGraph.EGraphElementType
/// Size: 0x05
enum EGraphElementType : uint32_t
{
	EGraphElementType__Node                                                          = 0,
	EGraphElementType__Edge                                                          = 1,
	EGraphElementType__Island                                                        = 2,
	EGraphElementType__Unknown                                                       = 3,
	EGraphElementType__EGraphElementType_MAX                                         = 4
};

/// Enum /Script/GameplayGraph.EGraphIslandOperations
/// Size: 0x07
enum EGraphIslandOperations : uint32_t
{
	EGraphIslandOperations__None                                                     = 0,
	EGraphIslandOperations__Add                                                      = 1,
	EGraphIslandOperations__Split                                                    = 2,
	EGraphIslandOperations__Merge                                                    = 4,
	EGraphIslandOperations__Destroy                                                  = 8,
	EGraphIslandOperations__All                                                      = 15,
	EGraphIslandOperations__EGraphIslandOperations_MAX                               = 16
};

