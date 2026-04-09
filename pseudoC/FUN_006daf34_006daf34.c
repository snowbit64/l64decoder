// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006daf34
// Entry Point: 006daf34
// Size: 24 bytes
// Signature: undefined FUN_006daf34(void)


void FUN_006daf34(void **param_1)

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


