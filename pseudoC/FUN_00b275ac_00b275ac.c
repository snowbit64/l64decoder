// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b275ac
// Entry Point: 00b275ac
// Size: 112 bytes
// Signature: undefined FUN_00b275ac(void)


void FUN_00b275ac(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)param_1[2];
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    if ((*(byte *)(ppvVar1 + 2) & 1) != 0) {
      operator_delete(ppvVar1[4]);
    }
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


