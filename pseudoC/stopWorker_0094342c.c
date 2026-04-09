// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopWorker
// Entry Point: 0094342c
// Size: 80 bytes
// Signature: undefined stopWorker(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DStreamingManager::stopWorker() */

void I3DStreamingManager::stopWorker(void)

{
  long in_x0;
  Thread *this;
  
  Thread::cancel();
  Event::post();
  Thread::join();
  this = *(Thread **)(in_x0 + 0x78);
  if (this != (Thread *)0x0) {
    Thread::~Thread(this);
    operator_delete(this);
  }
  *(undefined8 *)(in_x0 + 0x78) = 0;
  return;
}


