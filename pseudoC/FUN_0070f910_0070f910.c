// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0070f910
// Entry Point: 0070f910
// Size: 24 bytes
// Signature: undefined FUN_0070f910(void)


void FUN_0070f910(void **param_1)

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


