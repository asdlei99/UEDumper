
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine

/// Class /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector
/// Size: 0x0020 (0x0002B0 - 0x0002D0)
class ADynamicAthenaHUDDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UDynamicUIScene*)                    VehicleHUDScene                                             OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    CreativeQuickbarScene                                       OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    TournamentScene                                             OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    ArenaTournamentScene                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleExitingVehicle
	// void HandleExitingVehicle();                                                                                             // [0xb3f7404] Final|Native|Private 
	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleEnteringVehicle
	// void HandleEnteringVehicle();                                                                                            // [0xb3f73f0] Final|Native|Private 
	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleCreativeQuickbarEquippedChanged
	// void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped);                                                    // [0xb3f732c] Final|Native|Private 
};

