// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007adf2c
// Entry Point: 007adf2c
// Size: 88 bytes
// Signature: undefined FUN_007adf2c(void)


void FUN_007adf2c(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    pvVar1 = *(void **)((long)param_1 + 0x60);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)param_1 + 0x68) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)param_1 + 0x48);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)param_1 + 0x50) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)param_1 + 0x18) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


