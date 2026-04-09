// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af2cc
// Entry Point: 007af2cc
// Size: 20 bytes
// Signature: undefined FUN_007af2cc(void)


void FUN_007af2cc(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007af2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


