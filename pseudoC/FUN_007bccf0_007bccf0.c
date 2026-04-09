// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bccf0
// Entry Point: 007bccf0
// Size: 20 bytes
// Signature: undefined FUN_007bccf0(void)


void FUN_007bccf0(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007bccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


