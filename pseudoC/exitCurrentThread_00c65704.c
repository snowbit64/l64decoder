// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exitCurrentThread
// Entry Point: 00c65704
// Size: 16 bytes
// Signature: undefined exitCurrentThread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadUtil::exitCurrentThread() */

void ThreadUtil::exitCurrentThread(void)

{
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}


