// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ba20ec
// Entry Point: 00ba20ec
// Size: 24 bytes
// Signature: undefined FUN_00ba20ec(void)


void FUN_00ba20ec(void **param_1)

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


