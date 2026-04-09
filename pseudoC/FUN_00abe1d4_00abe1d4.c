// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00abe1d4
// Entry Point: 00abe1d4
// Size: 140 bytes
// Signature: undefined FUN_00abe1d4(void)


void FUN_00abe1d4(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar2;
  pvVar3 = param_1[1];
  if (param_1[1] != pvVar2) {
    do {
      pvVar1 = *(void **)((long)pvVar3 + -0x18);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x10) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar3 + -0x30);
      pvVar4 = (void *)((long)pvVar3 + -0x38);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x28) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar3 = pvVar4;
    } while (pvVar4 != pvVar2);
    pvVar1 = *param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


