// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bf2d2c
// Entry Point: 00bf2d2c
// Size: 140 bytes
// Signature: undefined FUN_00bf2d2c(void)


void FUN_00bf2d2c(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = param_1[1];
  if (param_1[1] != pvVar1) {
    do {
      if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x18));
      }
      pvVar3 = (void *)((long)pvVar2 + -0x40);
      if ((*(byte *)((long)pvVar2 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x30));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *param_1;
  }
  param_1[1] = pvVar1;
  operator_delete(pvVar3);
  return;
}


