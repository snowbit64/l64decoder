// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopAll
// Entry Point: 00e3c8f8
// Size: 80 bytes
// Signature: undefined stopAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::stopAll() */

void SoLoud::Soloud::stopAll(void)

{
  Soloud *in_x0;
  uint uVar1;
  
  lockAudioMutex();
  if (0 < *(int *)(in_x0 + 0x54)) {
    uVar1 = 0;
    do {
      stopVoice(in_x0,uVar1);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < *(int *)(in_x0 + 0x54));
  }
  unlockAudioMutex();
  return;
}


