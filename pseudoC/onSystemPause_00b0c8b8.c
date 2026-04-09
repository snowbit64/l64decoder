// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSystemPause
// Entry Point: 00b0c8b8
// Size: 8 bytes
// Signature: undefined onSystemPause(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioDevice::onSystemPause() */

void SoftAudioDevice::onSystemPause(void)

{
  SoLoud::Soloud::lockPauseMutex();
  return;
}


