// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: wakeWorker
// Entry Point: 00b24d54
// Size: 8 bytes
// Signature: undefined wakeWorker(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AsyncFileLogSink::wakeWorker() */

void AsyncFileLogSink::wakeWorker(void)

{
  Semaphore::post();
  return;
}


