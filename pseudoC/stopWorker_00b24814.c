// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopWorker
// Entry Point: 00b24814
// Size: 52 bytes
// Signature: undefined stopWorker(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AsyncFileLogSink::stopWorker() */

void AsyncFileLogSink::stopWorker(void)

{
  Thread::cancel();
  Semaphore::post();
  Thread::join();
  return;
}


