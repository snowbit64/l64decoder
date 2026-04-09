// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAppQuitFlag
// Entry Point: 00a9b5f0
// Size: 24 bytes
// Signature: undefined getAppQuitFlag(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadMountedDisplayManager::getAppQuitFlag() */

void HeadMountedDisplayManager::getAppQuitFlag(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a9b600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x20) + 0x20))();
    return;
  }
  return;
}


