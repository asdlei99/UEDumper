
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/AESGCMHandlerComponent.EAESGCMNetResult
/// Size: 0x08
enum class EAESGCMNetResult : uint8_t
{
	EAESGCMNetResult__Unknown                                                        = 0,
	EAESGCMNetResult__Success                                                        = 1,
	EAESGCMNetResult__AESMissingIV                                                   = 2,
	EAESGCMNetResult__AESMissingAuthTag                                              = 3,
	EAESGCMNetResult__AESMissingPayload                                              = 4,
	EAESGCMNetResult__AESDecryptionFailed                                            = 5,
	EAESGCMNetResult__AESZeroLastByte                                                = 6,
	EAESGCMNetResult__EAESGCMNetResult_MAX                                           = 7
};

