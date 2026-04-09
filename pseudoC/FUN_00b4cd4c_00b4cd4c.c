// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b4cd4c
// Entry Point: 00b4cd4c
// Size: 24 bytes
// Signature: undefined FUN_00b4cd4c(void)


void FUN_00b4cd4c(void **param_1)

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


