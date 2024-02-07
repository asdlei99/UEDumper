
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MapDevice.CRDMapCustomizationComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UCRDMapCustomizationComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(32,14593) /* TWeakObjectPtr<UTexture2D*> */ __um(TextureToLoad);                                 // 0x00A0   (0x0020)  
	SDK_UNDEFINED(32,14594) /* TWeakObjectPtr<UMaterialInterface*> */ __um(MaterialToLoad);                        // 0x00C0   (0x0020)  
	class UTexture2D*                                  LoadedTexture;                                              // 0x00E0   (0x0008)  
	class UMaterialInterface*                          LoadedMaterial;                                             // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x00F0   (0x00A8)  MISSED


	/// Functions
	// Function /Script/MapDevice.CRDMapCustomizationComponent.SetOverrideSceneCapture
	// void SetOverrideSceneCapture(FVector Location, FRotator Rotation, float Width, float Zoom, bool bUseClippingPlanes, float NearClipLength, float FarClipLength); // [0xb7f1e80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MapDevice.CRDMapCustomizationComponent.SetOverrideMapTexture
	// void SetOverrideMapTexture(TWeakObjectPtr<UTexture2D*> TextureOverride, FVector Location, FRotator Rotation, float Width, float Zoom); // [0xb7f1ad0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MapDevice.CRDMapCustomizationComponent.SetOverrideMapMaterial
	// void SetOverrideMapMaterial(TWeakObjectPtr<UMaterialInterface*> MaterialOverride, FVector Location, FRotator Rotation, float Width, float Zoom); // [0xb7f1720] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MapDevice.CRDMapCustomizationComponent.ClearOverrides
	// void ClearOverrides();                                                                                                // [0xb7f170c] Final|Native|Public|BlueprintCallable 
};

