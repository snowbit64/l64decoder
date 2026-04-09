// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0093e278
// Entry Point: 0093e278
// Size: 76 bytes
// Signature: undefined FUN_0093e278(void)


void FUN_0093e278(void **param_1)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)pvVar1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar1 + 0x38));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


