// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0074ae90
// Entry Point: 0074ae90
// Size: 112 bytes
// Signature: undefined FUN_0074ae90(void)


void FUN_0074ae90(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  
  ppvVar1 = (void **)param_1[2];
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = ppvVar1[4];
    pvVar3 = *ppvVar1;
    if (pvVar2 != (void *)0x0) {
      ppvVar1[5] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar3;
  }
  pvVar2 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


