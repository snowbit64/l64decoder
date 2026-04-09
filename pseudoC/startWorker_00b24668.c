// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startWorker
// Entry Point: 00b24668
// Size: 44 bytes
// Signature: undefined startWorker(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AsyncFileLogSink::startWorker() */

void AsyncFileLogSink::startWorker(void)

{
  void *in_x0;
  
  Thread::start((Thread *)((long)in_x0 + 0x68),staticThreadEntry_async,in_x0,0xffffffff,
                "GIANTS Async File Log Sink",2,0x100000);
  return;
}


