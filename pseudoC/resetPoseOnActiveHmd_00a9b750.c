// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetPoseOnActiveHmd
// Entry Point: 00a9b750
// Size: 24 bytes
// Signature: undefined resetPoseOnActiveHmd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadMountedDisplayManager::resetPoseOnActiveHmd() */

void HeadMountedDisplayManager::resetPoseOnActiveHmd(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a9b760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x20) + 0x40))();
    return;
  }
  return;
}


