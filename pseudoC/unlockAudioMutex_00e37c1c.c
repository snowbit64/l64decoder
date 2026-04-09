// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlockAudioMutex
// Entry Point: 00e37c1c
// Size: 24 bytes
// Signature: undefined unlockAudioMutex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::unlockAudioMutex() */

void SoLoud::Soloud::unlockAudioMutex(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x10) = 0;
  if (*(void **)(in_x0 + 8) != (void *)0x0) {
    Thread::unlockMutex(*(void **)(in_x0 + 8));
    return;
  }
  return;
}


