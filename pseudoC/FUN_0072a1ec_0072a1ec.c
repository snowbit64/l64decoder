// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0072a1ec
// Entry Point: 0072a1ec
// Size: 24 bytes
// Signature: undefined FUN_0072a1ec(void)


void FUN_0072a1ec(void **param_1)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


