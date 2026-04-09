// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bce3c
// Entry Point: 007bce3c
// Size: 20 bytes
// Signature: undefined FUN_007bce3c(void)


void FUN_007bce3c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007bce48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


