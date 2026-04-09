// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0074cc78
// Entry Point: 0074cc78
// Size: 76 bytes
// Signature: undefined FUN_0074cc78(void)


void FUN_0074cc78(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') &&
       (pvVar1 = *(void **)((long)pvVar2 + 0x20), pvVar1 != (void *)0x0)) {
      *(void **)((long)pvVar2 + 0x28) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}


