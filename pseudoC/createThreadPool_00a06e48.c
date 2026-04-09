// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createThreadPool
// Entry Point: 00a06e48
// Size: 72 bytes
// Signature: undefined createThreadPool(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderController::createThreadPool() */

void RenderController::createThreadPool(void)

{
  long in_x0;
  ThreadPool *this;
  
  this = (ThreadPool *)operator_new(0x98);
                    /* try { // try from 00a06e64 to 00a06e67 has its CatchHandler @ 00a06e90 */
  ThreadPool::ThreadPool(this);
  *(ThreadPool **)(in_x0 + 0x10) = this;
  ThreadPool::createFixedNumberOfRovingThreads(this,1,"Render threadpool",1,0x80000);
  return;
}


