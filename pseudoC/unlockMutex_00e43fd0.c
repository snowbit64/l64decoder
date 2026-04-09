// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlockMutex
// Entry Point: 00e43fd0
// Size: 12 bytes
// Signature: undefined __cdecl unlockMutex(void * param_1)


/* SoLoud::Thread::unlockMutex(void*) */

int SoLoud::Thread::unlockMutex(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)param_1);
    return iVar1;
  }
  return 0;
}


