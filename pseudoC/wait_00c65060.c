// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: wait
// Entry Point: 00c65060
// Size: 4 bytes
// Signature: undefined wait(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Semaphore::wait() */

int Semaphore::wait(void)

{
  int iVar1;
  sem_t *in_x0;
  
  iVar1 = sem_wait(in_x0);
  return iVar1;
}


