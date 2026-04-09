// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRecordingDevice
// Entry Point: 00b0a418
// Size: 8 bytes
// Signature: undefined __cdecl createRecordingDevice(uint param_1, RecordingFormat param_2, uint param_3)


/* NullAudioDevice::createRecordingDevice(unsigned int, IAudioRecordingDevice::RecordingFormat,
   unsigned int) */

undefined  [16]
NullAudioDevice::createRecordingDevice(uint param_1,RecordingFormat param_2,uint param_3)

{
  return ZEXT416(param_2) << 0x40;
}


