
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EntityLevel.CoreEntitySceneComponent
/// Size: 0x0010 (0x000500 - 0x000510)
class UCoreEntitySceneComponent : public UPrimitiveComponent
{ 
public:
	class ACoreEntityLevel*                            EntityLevel;                                                // 0x0500   (0x0008)  
	bool                                               bIgnoreAttachmentUponPaste;                                 // 0x0508   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0509   (0x0007)  MISSED
};

/// Class /Script/EntityLevel.CoreEntity
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ACoreEntity : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UObject*                                     Entity;                                                     // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02A0   (0x0008)  MISSED
	class ACoreEntityLevel*                            EntityLevel;                                                // 0x02A8   (0x0008)  
	class UObject*                                     TransformComponent;                                         // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x02B8   (0x0010)  MISSED
};

/// Class /Script/EntityLevel.CoreEntityActorComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCoreEntityActorComponent : public UActorComponent
{ 
public:
	class UObject*                                     Entity;                                                     // 0x00A0   (0x0008)  
	class UObject*                                     EntityComponent;                                            // 0x00A8   (0x0008)  
};

/// Class /Script/EntityLevel.CoreEntityLevel
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACoreEntityLevel : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	TArray<class UObject*>                             Entities;                                                   // 0x0298   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02A8   (0x0008)  MISSED
	class UClass*                                      SavedEntityClass;                                           // 0x02B0   (0x0008)  
	class UClass*                                      SavedEntityComponentClass;                                  // 0x02B8   (0x0008)  
};

/// Class /Script/EntityLevel.CoreEntityWorldSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreEntityWorldSubsystem : public UWorldSubsystem
{ 
public:
};

