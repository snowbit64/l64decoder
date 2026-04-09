// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStopPlaying
// Entry Point: 00b0f9dc
// Size: 68 bytes
// Signature: undefined onStopPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::onStopPlaying() */

void SoftAudioSource::onStopPlaying(void)

{
  int iVar1;
  SoftAudioSource *in_x0;
  
  iVar1 = FUN_00f276a0(0,in_x0 + 0x110);
  if (iVar1 == 1) {
    SoftAudioDevice::notifySourceStopsPlaying(*(SoftAudioDevice **)(in_x0 + 0xa8),in_x0);
    return;
  }
  return;
}


