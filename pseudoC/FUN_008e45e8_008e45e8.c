// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008e45e8
// Entry Point: 008e45e8
// Size: 116 bytes
// Signature: undefined FUN_008e45e8(void)


void FUN_008e45e8(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = param_1[1];
  pvVar1 = pvVar3;
  if (pvVar2 != pvVar3) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x98);
      FUN_008ecd9c(param_1 + 2,pvVar2);
    } while (pvVar2 != pvVar3);
    pvVar1 = *param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


