
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController
/// Size: 0x0030 (0x0003C0 - 0x0003F0)
class AFortCreativeEditCameraController : public AFortFirstPersonCameraController
{ 
public:
	FCreativeOptionVariableBase                        WantsToImmersiveEdit;                                       // 0x03C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x03C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.ServerSetImmersiveEdit
	// void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled);                             // [0xb845a18] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnWantsToImmersiveEditChanged
	// void OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, char IndexValue);                       // [0xb845954] Final|Native|Private 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnCreativeEditModeChanged
	// void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled);                                                      // [0xb8458d4] Final|Native|Private 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                               // [0xb845810] Final|Native|Private 
};

