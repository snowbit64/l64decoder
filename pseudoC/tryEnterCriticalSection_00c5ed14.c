// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryEnterCriticalSection
// Entry Point: 00c5ed14
// Size: 28 bytes
// Signature: undefined tryEnterCriticalSection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Mutex::tryEnterCriticalSection() */

bool Mutex::tryEnterCriticalSection(void)

{
  int iVar1;
  pthread_mutex_t *in_x0;
  
  iVar1 = pthread_mutex_trylock(in_x0);
  return iVar1 == 0;
}


