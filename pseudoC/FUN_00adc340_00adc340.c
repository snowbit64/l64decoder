// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adc340
// Entry Point: 00adc340
// Size: 124 bytes
// Signature: undefined FUN_00adc340(void)


void FUN_00adc340(long param_1)

{
  void *__ptr;
  ulong uVar1;
  long lVar2;
  
  if ((param_1 != 0) && (__ptr = *(void **)(param_1 + 0x150), __ptr != (void *)0x0)) {
    if (*(int *)(param_1 + 0x148) != 0) {
      FUN_00adc340();
      if (1 < *(uint *)(param_1 + 0x148)) {
        uVar1 = 1;
        lVar2 = 0x170;
        do {
          FUN_00adc340(*(long *)(param_1 + 0x150) + lVar2);
          uVar1 = uVar1 + 1;
          lVar2 = lVar2 + 0x170;
        } while (uVar1 < *(uint *)(param_1 + 0x148));
      }
      __ptr = *(void **)(param_1 + 0x150);
    }
    free(__ptr);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}


