// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0070f884
// Entry Point: 0070f884
// Size: 140 bytes
// Signature: undefined FUN_0070f884(void)


void FUN_0070f884(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar2;
  pvVar3 = param_1[1];
  if (param_1[1] != pvVar2) {
    do {
      pvVar1 = *(void **)((long)pvVar3 + -0x38);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x30) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = (void *)((long)pvVar3 + -0x58);
      if ((*(byte *)((long)pvVar3 + -0x50) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -0x40));
      }
      pvVar3 = pvVar1;
    } while (pvVar1 != pvVar2);
    pvVar1 = *param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


