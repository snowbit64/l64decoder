// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: join
// Entry Point: 00c6558c
// Size: 52 bytes
// Signature: undefined join(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Thread::join() */

void Thread::join(void)

{
  long *in_x0;
  
  if (*in_x0 != 0) {
    pthread_join(in_x0[7],(void **)0x0);
    *in_x0 = 0;
  }
  return;
}


