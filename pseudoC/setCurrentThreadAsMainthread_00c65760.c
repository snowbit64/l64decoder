// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCurrentThreadAsMainthread
// Entry Point: 00c65760
// Size: 32 bytes
// Signature: undefined setCurrentThreadAsMainthread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadUtil::setCurrentThreadAsMainthread() */

void ThreadUtil::setCurrentThreadAsMainthread(void)

{
  s_mainThreadId = pthread_self();
  return;
}


