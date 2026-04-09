// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: wait
// Entry Point: 00e44084
// Size: 12 bytes
// Signature: undefined __cdecl wait(ThreadHandleData * param_1)


/* SoLoud::Thread::wait(SoLoud::Thread::ThreadHandleData*) */

int SoLoud::Thread::wait(ThreadHandleData *param_1)

{
  int iVar1;
  
  iVar1 = pthread_join(*(pthread_t *)param_1,(void **)0x0);
  return iVar1;
}


