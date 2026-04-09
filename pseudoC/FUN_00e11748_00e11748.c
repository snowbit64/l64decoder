// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e11748
// Entry Point: 00e11748
// Size: 104 bytes
// Signature: undefined FUN_00e11748(void)


void FUN_00e11748(undefined8 *param_1)

{
  void **__ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    __ptr = (void **)param_1[1];
    if (__ptr != (void **)0x0) {
      if (*__ptr != (void *)0x0) {
        free(*__ptr);
        __ptr = (void **)param_1[1];
      }
      if (__ptr[1] != (void *)0x0) {
        free(__ptr[1]);
        __ptr = (void **)param_1[1];
      }
      free(__ptr);
    }
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


