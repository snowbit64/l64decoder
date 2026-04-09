// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticThreadExecuteFunction
// Entry Point: 00ba24a0
// Size: 96 bytes
// Signature: undefined __cdecl staticThreadExecuteFunction(void * param_1, bool * param_2)


/* ThreadPool::staticThreadExecuteFunction(void*, bool volatile&) */

undefined8 ThreadPool::staticThreadExecuteFunction(void *param_1,bool *param_2)

{
  uint uVar1;
  char cVar2;
  ThreadPool *this;
  
                    /* WARNING: Load size is inaccurate */
  this = *param_1;
  uVar1 = *(uint *)((long)param_1 + 8);
  cVar2 = *param_2;
  while ((cVar2 == '\0' && (Semaphore::wait(), *param_2 == false))) {
    executeOneTask(this,uVar1);
    cVar2 = *param_2;
  }
  return 0;
}


