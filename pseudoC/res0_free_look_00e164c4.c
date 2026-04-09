// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res0_free_look
// Entry Point: 00e164c4
// Size: 172 bytes
// Signature: undefined res0_free_look(void)


void res0_free_look(undefined8 *param_1)

{
  void *__ptr;
  int iVar1;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        __ptr = *(void **)(param_1[4] + lVar2 * 8);
        if (__ptr != (void *)0x0) {
          free(__ptr);
          iVar1 = *(int *)(param_1 + 1);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    free((void *)param_1[4]);
    if (0 < *(int *)(param_1 + 5)) {
      lVar2 = 0;
      do {
        free(*(void **)(param_1[6] + lVar2 * 8));
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 5));
    }
    free((void *)param_1[6]);
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    free(param_1);
    return;
  }
  return;
}


