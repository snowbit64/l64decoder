// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c08754
// Entry Point: 00c08754
// Size: 124 bytes
// Signature: undefined FUN_00c08754(void)


void FUN_00c08754(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar2;
  pvVar1 = param_1[1];
  if (param_1[1] != pvVar2) {
    do {
      pvVar3 = (void *)((long)pvVar1 + -0x40);
      if ((*(byte *)((long)pvVar1 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + -0x18));
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
    pvVar3 = *param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar3);
  return;
}


