// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentThreadHandle
// Entry Point: 00c65728
// Size: 20 bytes
// Signature: undefined getCurrentThreadHandle(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadUtil::getCurrentThreadHandle() */

void ThreadUtil::getCurrentThreadHandle(void)

{
  pthread_self();
  return;
}


