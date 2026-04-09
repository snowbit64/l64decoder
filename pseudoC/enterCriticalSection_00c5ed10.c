// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enterCriticalSection
// Entry Point: 00c5ed10
// Size: 4 bytes
// Signature: undefined enterCriticalSection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Mutex::enterCriticalSection() */

int Mutex::enterCriticalSection(void)

{
  int iVar1;
  pthread_mutex_t *in_x0;
  
  iVar1 = pthread_mutex_lock(in_x0);
  return iVar1;
}


