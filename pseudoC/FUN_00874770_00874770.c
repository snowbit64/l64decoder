// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00874770
// Entry Point: 00874770
// Size: 184 bytes
// Signature: undefined FUN_00874770(void)


void FUN_00874770(void **param_1)

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
      if (*(long **)((long)pvVar2 + -0x40) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + -0x40) + 8))();
      }
      if (*(long **)((long)pvVar2 + -0x48) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + -0x48) + 8))();
      }
      if (*(long **)((long)pvVar2 + -0x50) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + -0x50) + 8))();
      }
      pvVar3 = (void *)((long)pvVar2 + -0x58);
      if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x18));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *param_1;
  }
  param_1[1] = pvVar1;
  operator_delete(pvVar3);
  return;
}


