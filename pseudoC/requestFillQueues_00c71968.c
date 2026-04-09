// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestFillQueues
// Entry Point: 00c71968
// Size: 56 bytes
// Signature: undefined requestFillQueues(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::requestFillQueues() */

void TheoraVideoDecoder::requestFillQueues(void)

{
  Semaphore::post();
  Semaphore::post();
  Semaphore::post();
  Semaphore::post();
  return;
}


