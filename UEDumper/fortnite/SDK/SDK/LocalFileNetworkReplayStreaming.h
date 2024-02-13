
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/LocalFileNetworkReplayStreaming.ELocalFileReplayResult
/// Size: 0x13
enum class ELocalFileReplayResult : uint8_t
{
	ELocalFileReplayResult__Success                                                  = 0,
	ELocalFileReplayResult__InvalidReplayInfo                                        = 1,
	ELocalFileReplayResult__StreamChunkIndexMismatch                                 = 2,
	ELocalFileReplayResult__DecompressBuffer                                         = 3,
	ELocalFileReplayResult__CompressionNotSupported                                  = 4,
	ELocalFileReplayResult__DecryptBuffer                                            = 5,
	ELocalFileReplayResult__EncryptionNotSupported                                   = 6,
	ELocalFileReplayResult__EncryptBuffer                                            = 7,
	ELocalFileReplayResult__CompressBuffer                                           = 8,
	ELocalFileReplayResult__InvalidName                                              = 9,
	ELocalFileReplayResult__FileWriter                                               = 10,
	ELocalFileReplayResult__Unknown                                                  = 11,
	ELocalFileReplayResult__ELocalFileReplayResult_MAX                               = 12
};

