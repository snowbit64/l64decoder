// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008ce6a0
// Entry Point: 008ce6a0
// Size: 128 bytes
// Signature: undefined FUN_008ce6a0(void)


void FUN_008ce6a0(undefined8 *param_1)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  ppvVar4 = (void **)*param_1;
  if (ppvVar4 == (void **)0x0) {
    return;
  }
  ppvVar3 = (void **)param_1[1];
  ppvVar2 = ppvVar4;
  if (ppvVar3 != ppvVar4) {
    do {
      ppvVar2 = ppvVar3 + -3;
      pvVar1 = *ppvVar2;
      if (pvVar1 != (void *)0x0) {
        ppvVar3[-2] = pvVar1;
        operator_delete(pvVar1);
      }
      ppvVar3 = ppvVar2;
    } while (ppvVar2 != ppvVar4);
    ppvVar2 = (void **)*param_1;
  }
  param_1[1] = ppvVar4;
  operator_delete(ppvVar2);
  return;
}


