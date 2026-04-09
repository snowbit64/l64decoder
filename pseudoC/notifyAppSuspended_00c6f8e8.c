// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyAppSuspended
// Entry Point: 00c6f8e8
// Size: 32 bytes
// Signature: undefined notifyAppSuspended(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::notifyAppSuspended() */

void AndroidSysUtil::notifyAppSuspended(void)

{
  if (s_pAppRunStateListener != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c6f900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*s_pAppRunStateListener)();
    return;
  }
  return;
}


