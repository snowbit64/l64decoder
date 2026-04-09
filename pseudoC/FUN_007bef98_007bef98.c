// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bef98
// Entry Point: 007bef98
// Size: 24 bytes
// Signature: undefined FUN_007bef98(void)


void FUN_007bef98(void **param_1)

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


