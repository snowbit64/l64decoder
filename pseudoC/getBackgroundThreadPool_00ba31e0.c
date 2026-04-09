// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBackgroundThreadPool
// Entry Point: 00ba31e0
// Size: 120 bytes
// Signature: undefined getBackgroundThreadPool(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPool::getBackgroundThreadPool() */

ThreadPool * ThreadPool::getBackgroundThreadPool(void)

{
  ThreadPool *this;
  ulong uVar1;
  uint uVar2;
  
  if (s_pBackgroundThreadPool == (ThreadPool *)0x0) {
    this = (ThreadPool *)operator_new(0x98);
                    /* try { // try from 00ba3208 to 00ba320b has its CatchHandler @ 00ba3258 */
    ThreadPool(this);
    s_pBackgroundThreadPool = this;
    uVar1 = EnvUtil::getNumOfProcessors();
    uVar2 = (uint)(uVar1 >> 1) & 0x7fffffff;
    if ((uint)uVar1 < 2) {
      uVar2 = 1;
    }
    createFixedNumberOfRovingThreads
              (s_pBackgroundThreadPool,uVar2,"Background threadpool",3,0x80000);
    FUN_006c76e4(deleteBackgroundThreadPool);
  }
  return s_pBackgroundThreadPool;
}


