// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008ba5b8
// Entry Point: 008ba5b8
// Size: 24 bytes
// Signature: undefined FUN_008ba5b8(void)


void FUN_008ba5b8(void **param_1)

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


