// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: threadExecuteFunction
// Entry Point: 00ba30ac
// Size: 92 bytes
// Signature: undefined __thiscall threadExecuteFunction(ThreadPool * this, uint param_1, bool * param_2)


/* ThreadPool::threadExecuteFunction(unsigned int, bool volatile&) */

void __thiscall ThreadPool::threadExecuteFunction(ThreadPool *this,uint param_1,bool *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  while ((cVar1 == '\0' && (Semaphore::wait(), *param_2 == false))) {
    executeOneTask(this,param_1);
    cVar1 = *param_2;
  }
  return;
}


