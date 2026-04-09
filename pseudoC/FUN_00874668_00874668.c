// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00874668
// Entry Point: 00874668
// Size: 156 bytes
// Signature: undefined FUN_00874668(void)


void FUN_00874668(void **param_1)

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
      pvVar1 = *(void **)((long)pvVar3 + -0x28);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x20) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar3 + -0x40);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x38) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar3 + -0x58);
      pvVar4 = (void *)((long)pvVar3 + -0x58);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x50) = pvVar1;
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


