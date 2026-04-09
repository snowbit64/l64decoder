// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008a8934
// Entry Point: 008a8934
// Size: 124 bytes
// Signature: undefined FUN_008a8934(void)


void FUN_008a8934(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar3;
  pvVar2 = param_1[1];
  if (param_1[1] != pvVar3) {
    do {
      pvVar1 = *(void **)((long)pvVar2 + -0x30);
      pvVar4 = (void *)((long)pvVar2 + -0x40);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar2 + -0x28) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar2 = pvVar4;
    } while (pvVar4 != pvVar3);
    pvVar1 = *param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


