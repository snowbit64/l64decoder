// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryExecuteTaskOnLocalThread
// Entry Point: 00ba31d8
// Size: 8 bytes
// Signature: undefined tryExecuteTaskOnLocalThread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPool::tryExecuteTaskOnLocalThread() */

void ThreadPool::tryExecuteTaskOnLocalThread(void)

{
  ThreadPool *in_x0;
  
  executeOneTask(in_x0,0xffffffff);
  return;
}


