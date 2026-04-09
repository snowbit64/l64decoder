// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRecordingDeviceName
// Entry Point: 00b0c8d0
// Size: 8 bytes
// Signature: undefined __cdecl getRecordingDeviceName(uint param_1, char * param_2)


/* SoftAudioDevice::getRecordingDeviceName(unsigned int, char*) const */

void SoftAudioDevice::getRecordingDeviceName(uint param_1,char *param_2)

{
  SoLoud::Soloud::getRecordingDeviceName((uint)*(undefined8 *)((ulong)param_1 + 8),param_2);
  return;
}


