
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: VerseNative

/// Class /Script/VerseAssets.VerseAssetPtr
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseAssetPtr : public UVerseAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UObject*>)                  AssetForEditor                                              OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FName)                                     AssetPathName                                               OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x58, 8, 0, 0})


	/// Functions
	// Function /Script/VerseAssets.VerseAssetPtr.OnRep_AssetPathName
	// void OnRep_AssetPathName();                                                                                              // [0xa5d2ed8] Final|Native|Protected 
};

