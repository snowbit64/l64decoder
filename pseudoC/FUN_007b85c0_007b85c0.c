// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b85c0
// Entry Point: 007b85c0
// Size: 64 bytes
// Signature: undefined FUN_007b85c0(void)


void FUN_007b85c0(void **param_1)

{
  if (param_1 != (void **)0x0) {
    if (*param_1 != (void *)0x0) {
      operator_delete__(*param_1);
    }
    if (param_1[1] != (void *)0x0) {
      operator_delete__(param_1[1]);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


