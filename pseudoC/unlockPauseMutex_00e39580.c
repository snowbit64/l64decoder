// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlockPauseMutex
// Entry Point: 00e39580
// Size: 16 bytes
// Signature: undefined unlockPauseMutex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::unlockPauseMutex() */

void SoLoud::Soloud::unlockPauseMutex(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0x20) != (void *)0x0) {
    Thread::unlockMutex(*(void **)(in_x0 + 0x20));
    return;
  }
  return;
}


