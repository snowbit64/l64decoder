// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteBackgroundThreadPool
// Entry Point: 00ba326c
// Size: 60 bytes
// Signature: undefined deleteBackgroundThreadPool(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPool::deleteBackgroundThreadPool() */

void ThreadPool::deleteBackgroundThreadPool(void)

{
  ThreadPool *pTVar1;
  
  pTVar1 = s_pBackgroundThreadPool;
  if (s_pBackgroundThreadPool != (ThreadPool *)0x0) {
    ~ThreadPool(s_pBackgroundThreadPool);
    operator_delete(pTVar1);
  }
  s_pBackgroundThreadPool = (ThreadPool *)0x0;
  return;
}


