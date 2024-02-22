
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AndroidPermission.AndroidPermissionCallbackProxy
/// Size: 0x0028 (0x000028 - 0x000050)
class UAndroidPermissionCallbackProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,11671) /* FMulticastInlineDelegate */ __um(OnPermissionsGrantedDynamicDelegate);              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	// bool CheckPermission(FString Permission);                                                                             // [0xc1aae7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<FString>& Permissions);                              // [0xc1aad94] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

