// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a5db9c
// Entry Point: 00a5db9c
// Size: 76 bytes
// Signature: undefined FUN_00a5db9c(void)


void FUN_00a5db9c(void **param_1)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)pvVar1 + 0x20) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar1 + 0x30));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


