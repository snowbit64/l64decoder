// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00703158
// Entry Point: 00703158
// Size: 24 bytes
// Signature: undefined FUN_00703158(void)


void FUN_00703158(void **param_1)

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


