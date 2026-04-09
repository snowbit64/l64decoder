// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00942fcc
// Entry Point: 00942fcc
// Size: 24 bytes
// Signature: undefined FUN_00942fcc(void)


void FUN_00942fcc(void **param_1)

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


