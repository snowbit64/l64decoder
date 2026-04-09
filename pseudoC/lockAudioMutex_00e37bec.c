// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lockAudioMutex
// Entry Point: 00e37bec
// Size: 48 bytes
// Signature: undefined lockAudioMutex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::lockAudioMutex() */

void SoLoud::Soloud::lockAudioMutex(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 8) != (void *)0x0) {
    Thread::lockMutex(*(void **)(in_x0 + 8));
  }
  *(undefined *)(in_x0 + 0x10) = 1;
  return;
}


