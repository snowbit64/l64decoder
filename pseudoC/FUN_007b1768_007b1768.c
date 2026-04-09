// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b1768
// Entry Point: 007b1768
// Size: 20 bytes
// Signature: undefined FUN_007b1768(void)


void FUN_007b1768(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007b1774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


