// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007539b0
// Entry Point: 007539b0
// Size: 116 bytes
// Signature: undefined FUN_007539b0(void)


void FUN_007539b0(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    ppvVar1 = (void **)*(void **)((long)pvVar2 + 0x38);
    while (ppvVar1 != (void **)0x0) {
      pvVar3 = *ppvVar1;
      operator_delete(ppvVar1);
      ppvVar1 = (void **)pvVar3;
    }
    pvVar3 = *(void **)((long)pvVar2 + 0x28);
    *(undefined8 *)((long)pvVar2 + 0x28) = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    if ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar2 + 0x20));
    }
  }
  operator_delete(pvVar2);
  return;
}


