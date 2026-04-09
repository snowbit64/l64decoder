// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyAppResumed
// Entry Point: 00c6f908
// Size: 32 bytes
// Signature: undefined notifyAppResumed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::notifyAppResumed() */

void AndroidSysUtil::notifyAppResumed(void)

{
  if (s_pAppRunStateListener != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c6f920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*s_pAppRunStateListener + 8))();
    return;
  }
  return;
}


