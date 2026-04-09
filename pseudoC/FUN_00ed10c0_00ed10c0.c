// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ed10c0
// Entry Point: 00ed10c0
// Size: 132 bytes
// Signature: undefined FUN_00ed10c0(void)


void FUN_00ed10c0(void **param_1)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar2 = (void **)*param_1;
  if (ppvVar2 == (void **)0x0) {
    return;
  }
  ppvVar3 = (void **)param_1[1];
  if (ppvVar3 == ppvVar2) {
    param_1[1] = ppvVar2;
    operator_delete(ppvVar2);
    return;
  }
  do {
    ppvVar3 = ppvVar3 + -1;
    pvVar1 = *ppvVar3;
    *ppvVar3 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  } while (ppvVar3 != ppvVar2);
  param_1[1] = ppvVar2;
  operator_delete(*param_1);
  return;
}


