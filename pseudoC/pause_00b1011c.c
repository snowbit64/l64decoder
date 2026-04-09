// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pause
// Entry Point: 00b1011c
// Size: 88 bytes
// Signature: undefined pause(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::pause() */

void SoftAudioSource::pause(void)

{
  int iVar1;
  SoftAudioSource *in_x0;
  
  if (*(uint *)(in_x0 + 200) != 0) {
    SoLoud::Soloud::setPause(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 200),true);
    iVar1 = FUN_00f276a0(0,in_x0 + 0x110);
    if (iVar1 == 1) {
      SoftAudioDevice::notifySourceStopsPlaying(*(SoftAudioDevice **)(in_x0 + 0xa8),in_x0);
      return;
    }
  }
  return;
}


