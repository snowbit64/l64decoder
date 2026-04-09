// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lockPauseMutex
// Entry Point: 00e39570
// Size: 16 bytes
// Signature: undefined lockPauseMutex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::lockPauseMutex() */

void SoLoud::Soloud::lockPauseMutex(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0x20) != (void *)0x0) {
    Thread::lockMutex(*(void **)(in_x0 + 0x20));
    return;
  }
  return;
}


