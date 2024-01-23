
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/NaniteDisplacedMesh.NaniteDisplacedMesh
/// Size: 0x0050 (0x000028 - 0x000078)
class UNaniteDisplacedMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/NaniteDisplacedMesh.NaniteDisplacedMeshComponent
/// Size: 0x0010 (0x000630 - 0x000640)
class UNaniteDisplacedMeshComponent : public UStaticMeshComponent
{ 
public:
	class UNaniteDisplacedMesh*                        DisplacedMesh;                                              // 0x0630   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0638   (0x0008)  MISSED
};

/// Struct /Script/NaniteDisplacedMesh.NaniteDisplacedMeshDisplacementMap
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNaniteDisplacedMeshDisplacementMap
{ 
	class UTexture2D*                                  Texture;                                                    // 0x0000   (0x0008)  
	float                                              Magnitude;                                                  // 0x0008   (0x0004)  
	float                                              Center;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/NaniteDisplacedMesh.NaniteDisplacedMeshParams
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNaniteDisplacedMeshParams
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

