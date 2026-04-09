// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentThreadIsMainthread
// Entry Point: 00c65780
// Size: 48 bytes
// Signature: undefined getCurrentThreadIsMainthread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadUtil::getCurrentThreadIsMainthread() */

bool ThreadUtil::getCurrentThreadIsMainthread(void)

{
  pthread_t pVar1;
  pthread_t pVar2;
  
  pVar1 = s_mainThreadId;
  pVar2 = pthread_self();
  return pVar1 == pVar2;
}


