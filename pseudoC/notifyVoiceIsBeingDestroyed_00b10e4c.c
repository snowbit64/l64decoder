// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyVoiceIsBeingDestroyed
// Entry Point: 00b10e4c
// Size: 64 bytes
// Signature: undefined notifyVoiceIsBeingDestroyed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::notifyVoiceIsBeingDestroyed() */

void SoftAudioSource::notifyVoiceIsBeingDestroyed(void)

{
  int iVar1;
  SoftAudioSource *in_x0;
  
  iVar1 = FUN_00f276a0(0,in_x0 + 0x110);
  if (iVar1 == 1) {
    SoftAudioDevice::notifySourceStopsPlaying(*(SoftAudioDevice **)(in_x0 + 0xa8),in_x0);
  }
  *(undefined4 *)(in_x0 + 200) = 0;
  return;
}


