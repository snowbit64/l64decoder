// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lockMutex
// Entry Point: 00e43fc4
// Size: 12 bytes
// Signature: undefined __cdecl lockMutex(void * param_1)


/* SoLoud::Thread::lockMutex(void*) */

int SoLoud::Thread::lockMutex(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)param_1);
    return iVar1;
  }
  return 0;
}


