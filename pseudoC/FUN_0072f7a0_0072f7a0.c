// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0072f7a0
// Entry Point: 0072f7a0
// Size: 164 bytes
// Signature: undefined FUN_0072f7a0(void)


void FUN_0072f7a0(void **param_1)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar3;
  pvVar4 = param_1[1];
  if (param_1[1] != pvVar3) {
    do {
      pvVar1 = *(void **)((long)pvVar4 + -0x18);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x10) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar4 + -0x30);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x28) = pvVar1;
        operator_delete(pvVar1);
      }
      plVar2 = *(long **)((long)pvVar4 + -0x50);
      pvVar1 = (void *)((long)pvVar4 + -0x50);
      *(undefined8 *)((long)pvVar4 + -0x50) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      pvVar4 = pvVar1;
    } while (pvVar1 != pvVar3);
    pvVar1 = *param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


