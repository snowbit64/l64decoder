// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adc3bc
// Entry Point: 00adc3bc
// Size: 124 bytes
// Signature: undefined FUN_00adc3bc(void)


void FUN_00adc3bc(long param_1)

{
  void *__ptr;
  ulong uVar1;
  long lVar2;
  
  if ((param_1 != 0) && (__ptr = *(void **)(param_1 + 0x160), __ptr != (void *)0x0)) {
    if (*(int *)(param_1 + 0x15c) != 0) {
      FUN_00adc3bc();
      if (1 < *(uint *)(param_1 + 0x15c)) {
        uVar1 = 1;
        lVar2 = 0x168;
        do {
          FUN_00adc3bc(*(long *)(param_1 + 0x160) + lVar2);
          uVar1 = uVar1 + 1;
          lVar2 = lVar2 + 0x168;
        } while (uVar1 < *(uint *)(param_1 + 0x15c));
      }
      __ptr = *(void **)(param_1 + 0x160);
    }
    free(__ptr);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}


