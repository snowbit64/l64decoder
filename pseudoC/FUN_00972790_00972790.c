// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00972790
// Entry Point: 00972790
// Size: 76 bytes
// Signature: undefined FUN_00972790(void)


void FUN_00972790(void **param_1)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)pvVar1 + 0x18) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar1 + 0x28));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


