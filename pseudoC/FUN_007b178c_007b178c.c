// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b178c
// Entry Point: 007b178c
// Size: 20 bytes
// Signature: undefined FUN_007b178c(void)


void FUN_007b178c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007b1798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


