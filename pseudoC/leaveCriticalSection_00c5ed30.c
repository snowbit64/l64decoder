// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: leaveCriticalSection
// Entry Point: 00c5ed30
// Size: 4 bytes
// Signature: undefined leaveCriticalSection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Mutex::leaveCriticalSection() */

int Mutex::leaveCriticalSection(void)

{
  int iVar1;
  pthread_mutex_t *in_x0;
  
  iVar1 = pthread_mutex_unlock(in_x0);
  return iVar1;
}


