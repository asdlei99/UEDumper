
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EntityLevel.CoreEntitySceneComponent
/// Size: 0x0010 (0x000570 - 0x000580)
class UCoreEntitySceneComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(class ACoreEntityLevel*)                   EntityLevel                                                 OFFSET(get<T>, {0x570, 8, 0, 0})
	DMember(bool)                                      bIgnoreAttachmentUponPaste                                  OFFSET(get<bool>, {0x578, 1, 0, 0})
};

/// Class /Script/EntityLevel.CoreEntity
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ACoreEntity : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UObject*)                            Entity                                                      OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class ACoreEntityLevel*)                   EntityLevel                                                 OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UObject*)                            TransformComponent                                          OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/EntityLevel.CoreEntityActorComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCoreEntityActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UObject*)                            Entity                                                      OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UObject*)                            EntityComponent                                             OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/EntityLevel.CoreEntityLevel
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACoreEntityLevel : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(TArray<class UObject*>)                    Entities                                                    OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(class UClass*)                             SavedEntityClass                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UClass*)                             SavedEntityComponentClass                                   OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/EntityLevel.CoreEntityWorldSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreEntityWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

