// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyCurrentAudioDevice
// Entry Point: 00b07904
// Size: 52 bytes
// Signature: undefined destroyCurrentAudioDevice(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioDeviceManager::destroyCurrentAudioDevice() */

void AudioDeviceManager::destroyCurrentAudioDevice(void)

{
  long **in_x0;
  
  if (*in_x0 != (long *)0x0) {
    (**(code **)(**in_x0 + 8))();
  }
  *in_x0 = (long *)0x0;
  return;
}


