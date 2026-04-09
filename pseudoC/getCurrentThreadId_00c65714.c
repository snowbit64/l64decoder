// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentThreadId
// Entry Point: 00c65714
// Size: 20 bytes
// Signature: undefined getCurrentThreadId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadUtil::getCurrentThreadId() */

void ThreadUtil::getCurrentThreadId(void)

{
  pthread_self();
  return;
}


