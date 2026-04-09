// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSystemResume
// Entry Point: 00b0c8c0
// Size: 8 bytes
// Signature: undefined onSystemResume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioDevice::onSystemResume() */

void SoftAudioDevice::onSystemResume(void)

{
  SoLoud::Soloud::unlockPauseMutex();
  return;
}


