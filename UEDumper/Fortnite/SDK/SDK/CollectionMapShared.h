
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/CollectionMapShared.AthenaCollectionScreenMapBase
/// Size: 0x0088 (0x000660 - 0x0006E8)
class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase
{ 
public:
	class UAthenaFullScreenMapBase*                    MapWidget;                                                  // 0x0660   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0668   (0x0008)  MISSED
	class UClass*                                      CollectionIconType;                                         // 0x0670   (0x0008)  
	SDK_UNDEFINED(80,12178) /* TMap<FGameplayTag, UAthenaMapCollectionIcon*> */ __um(MapCollectionIcons);          // 0x0678   (0x0050)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x06C8   (0x0020)  MISSED
};

/// Class /Script/CollectionMapShared.AthenaMapCollectionIcon
/// Size: 0x0000 (0x000388 - 0x000388)
class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom
{ 
public:


	/// Functions
	// Function /Script/CollectionMapShared.AthenaMapCollectionIcon.SetSecondaryIcon
	// void SetSecondaryIcon(TWeakObjectPtr<UObject*>& SecondaryIcon);                                                       // [0x211c0a0] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CollectionMapShared.AthenaMapCollectionIcon.SetIsKnown
	// void SetIsKnown(bool bIsKnown);                                                                                       // [0x211c0a0] RequiredAPI|Event|Public|BlueprintEvent 
};

