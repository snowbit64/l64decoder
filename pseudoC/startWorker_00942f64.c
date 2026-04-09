// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startWorker
// Entry Point: 00942f64
// Size: 84 bytes
// Signature: undefined startWorker(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DStreamingManager::startWorker() */

void I3DStreamingManager::startWorker(void)

{
  void *in_x0;
  Thread *this;
  
  this = (Thread *)operator_new(0x48);
                    /* try { // try from 00942f80 to 00942f83 has its CatchHandler @ 00942fb8 */
  Thread::Thread(this);
  *(Thread **)((long)in_x0 + 0x78) = this;
  Thread::start(this,streamingThreadFunction,in_x0,0xffffffff,"GIANTS Streaming Manager",2,0x80000);
  return;
}


