
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures

/// Enum /Script/MetaHumanUEFNRuntime.EMetaHumanBodyType
/// Size: 0x20
enum class EMetaHumanBodyType : uint8_t
{
	EMetaHumanBodyType__f_med_nrw                                                    = 0,
	EMetaHumanBodyType__f_med_ovw                                                    = 1,
	EMetaHumanBodyType__f_med_unw                                                    = 2,
	EMetaHumanBodyType__f_srt_nrw                                                    = 3,
	EMetaHumanBodyType__f_srt_ovw                                                    = 4,
	EMetaHumanBodyType__f_srt_unw                                                    = 5,
	EMetaHumanBodyType__f_tal_nrw                                                    = 6,
	EMetaHumanBodyType__f_tal_ovw                                                    = 7,
	EMetaHumanBodyType__f_tal_unw                                                    = 8,
	EMetaHumanBodyType__m_med_nrw                                                    = 9,
	EMetaHumanBodyType__m_med_ovw                                                    = 10,
	EMetaHumanBodyType__m_med_unw                                                    = 11,
	EMetaHumanBodyType__m_srt_nrw                                                    = 12,
	EMetaHumanBodyType__m_srt_ovw                                                    = 13,
	EMetaHumanBodyType__m_srt_unw                                                    = 14,
	EMetaHumanBodyType__m_tal_nrw                                                    = 15,
	EMetaHumanBodyType__m_tal_ovw                                                    = 16,
	EMetaHumanBodyType__m_tal_unw                                                    = 17,
	EMetaHumanBodyType__Count                                                        = 18,
	EMetaHumanBodyType__EMetaHumanBodyType_MAX                                       = 19
};

/// Class /Script/MetaHumanUEFNRuntime.GameFeatureAction_MetaHuman
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UGameFeatureAction_MetaHuman : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(80,14791) /* TMap<EMetaHumanBodyType, TWeakObjectPtr<UClass*>> */ __um(BodyPostAnimBPs);         // 0x0028   (0x0050)  
	SDK_UNDEFINED(32,14792) /* TWeakObjectPtr<UClass*> */ __um(Face_AnimBP);                                       // 0x0078   (0x0020)  
	SDK_UNDEFINED(32,14793) /* TWeakObjectPtr<UClass*> */ __um(Face_PostAnimBP);                                   // 0x0098   (0x0020)  
	SDK_UNDEFINED(32,14794) /* TWeakObjectPtr<UClass*> */ __um(RigidBodyAnimBP);                                   // 0x00B8   (0x0020)  
};

/// Class /Script/MetaHumanUEFNRuntime.MetaHumanComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UMetaHumanComponent : public UActorComponent
{ 
public:
	class USkeletalMeshComponent*                      Body;                                                       // 0x00A0   (0x0008)  
	class USkeletalMeshComponent*                      Face;                                                       // 0x00A8   (0x0008)  
	class USkeletalMeshComponent*                      Torso;                                                      // 0x00B0   (0x0008)  
	class USkeletalMeshComponent*                      Legs;                                                       // 0x00B8   (0x0008)  
	class USkeletalMeshComponent*                      Feet;                                                       // 0x00C0   (0x0008)  
	EMetaHumanBodyType                                 BodyType;                                                   // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

