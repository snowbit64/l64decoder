// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a0bda8
// Entry Point: 00a0bda8
// Size: 24 bytes
// Signature: undefined FUN_00a0bda8(void)


void FUN_00a0bda8(void **param_1)

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


