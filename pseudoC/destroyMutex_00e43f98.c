// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyMutex
// Entry Point: 00e43f98
// Size: 44 bytes
// Signature: undefined __cdecl destroyMutex(void * param_1)


/* SoLoud::Thread::destroyMutex(void*) */

void SoLoud::Thread::destroyMutex(void *param_1)

{
  if (param_1 != (void *)0x0) {
    pthread_mutex_destroy((pthread_mutex_t *)param_1);
    operator_delete(param_1);
    return;
  }
  return;
}


