// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: post
// Entry Point: 00c65064
// Size: 4 bytes
// Signature: undefined post(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Semaphore::post() */

int Semaphore::post(void)

{
  int iVar1;
  sem_t *in_x0;
  
  iVar1 = sem_post(in_x0);
  return iVar1;
}


