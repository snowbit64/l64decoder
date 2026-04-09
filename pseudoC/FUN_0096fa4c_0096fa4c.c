// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0096fa4c
// Entry Point: 0096fa4c
// Size: 112 bytes
// Signature: undefined FUN_0096fa4c(void)


void FUN_0096fa4c(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)param_1[2];
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    if ((*(byte *)(ppvVar1 + 3) & 1) != 0) {
      operator_delete(ppvVar1[5]);
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


