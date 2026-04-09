// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd214
// Entry Point: 007bd214
// Size: 188 bytes
// Signature: undefined FUN_007bd214(void)


void FUN_007bd214(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1 == (void **)0x0) {
    return;
  }
  pvVar3 = *param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar5 = pvVar3;
    pvVar4 = param_1[1];
    if (param_1[1] != pvVar3) {
      do {
        pvVar6 = *(void **)((long)pvVar4 + -0x18);
        pvVar5 = (void *)((long)pvVar4 + -0x20);
        if (pvVar6 != (void *)0x0) {
          pvVar1 = pvVar6;
          pvVar2 = *(void **)((long)pvVar4 + -0x10);
          if (*(void **)((long)pvVar4 + -0x10) != pvVar6) {
            do {
              pvVar1 = *(void **)((long)pvVar2 + -0x40);
              pvVar7 = (void *)((long)pvVar2 + -0xb0);
              if (pvVar1 != (void *)0x0) {
                *(void **)((long)pvVar2 + -0x38) = pvVar1;
                operator_delete(pvVar1);
              }
              pvVar2 = pvVar7;
            } while (pvVar7 != pvVar6);
            pvVar1 = *(void **)((long)pvVar4 + -0x18);
          }
          *(void **)((long)pvVar4 + -0x10) = pvVar6;
          operator_delete(pvVar1);
        }
        pvVar4 = pvVar5;
      } while (pvVar5 != pvVar3);
      pvVar5 = *param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar5);
  }
  operator_delete(param_1);
  return;
}


