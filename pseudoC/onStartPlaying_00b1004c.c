// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStartPlaying
// Entry Point: 00b1004c
// Size: 64 bytes
// Signature: undefined onStartPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::onStartPlaying() */

void SoftAudioSource::onStartPlaying(void)

{
  int iVar1;
  SoftAudioSource *in_x0;
  
  iVar1 = FUN_00f276a0(1,in_x0 + 0x110);
  if (iVar1 != 0) {
    return;
  }
  SoftAudioDevice::notifySourceStartsPlaying(*(SoftAudioDevice **)(in_x0 + 0xa8),in_x0);
  return;
}


