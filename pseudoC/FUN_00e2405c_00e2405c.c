// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e2405c
// Entry Point: 00e2405c
// Size: 240 bytes
// Signature: undefined FUN_00e2405c(void)


undefined8 FUN_00e2405c(void **param_1,long param_2)

{
  void *__size;
  void *pvVar1;
  
  pvVar1 = param_1[1];
  if ((long)param_1[2] < (long)pvVar1 - param_2) {
    return 0;
  }
  if ((long)pvVar1 <= 0x7fffffffffffffff - param_2) {
    pvVar1 = (void *)((long)pvVar1 + param_2);
    __size = (void *)((long)pvVar1 + 0x400);
    if (0x7ffffffffffffbfe < (long)pvVar1) {
      __size = pvVar1;
    }
    pvVar1 = realloc(*param_1,(size_t)__size);
    if (pvVar1 != (void *)0x0) {
      *param_1 = pvVar1;
      param_1[1] = __size;
      return 0;
    }
  }
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  if (param_1[4] != (void *)0x0) {
    free(param_1[4]);
  }
  if (param_1[5] != (void *)0x0) {
    free(param_1[5]);
  }
  param_1[0x32] = (void *)0x0;
  param_1[0x2f] = (void *)0x0;
  param_1[0x2e] = (void *)0x0;
  param_1[0x31] = (void *)0x0;
  param_1[0x30] = (void *)0x0;
  param_1[0x2b] = (void *)0x0;
  param_1[0x2a] = (void *)0x0;
  param_1[0x2d] = (void *)0x0;
  param_1[0x2c] = (void *)0x0;
  param_1[0x27] = (void *)0x0;
  param_1[0x26] = (void *)0x0;
  param_1[0x29] = (void *)0x0;
  param_1[0x28] = (void *)0x0;
  param_1[0x23] = (void *)0x0;
  param_1[0x22] = (void *)0x0;
  param_1[0x25] = (void *)0x0;
  param_1[0x24] = (void *)0x0;
  param_1[0x1f] = (void *)0x0;
  param_1[0x1e] = (void *)0x0;
  param_1[0x21] = (void *)0x0;
  param_1[0x20] = (void *)0x0;
  param_1[0x1b] = (void *)0x0;
  param_1[0x1a] = (void *)0x0;
  param_1[0x1d] = (void *)0x0;
  param_1[0x1c] = (void *)0x0;
  param_1[0x17] = (void *)0x0;
  param_1[0x16] = (void *)0x0;
  param_1[0x19] = (void *)0x0;
  param_1[0x18] = (void *)0x0;
  param_1[0x13] = (void *)0x0;
  param_1[0x12] = (void *)0x0;
  param_1[0x15] = (void *)0x0;
  param_1[0x14] = (void *)0x0;
  param_1[0xf] = (void *)0x0;
  param_1[0xe] = (void *)0x0;
  param_1[0x11] = (void *)0x0;
  param_1[0x10] = (void *)0x0;
  param_1[0xb] = (void *)0x0;
  param_1[10] = (void *)0x0;
  param_1[0xd] = (void *)0x0;
  param_1[0xc] = (void *)0x0;
  param_1[7] = (void *)0x0;
  param_1[6] = (void *)0x0;
  param_1[9] = (void *)0x0;
  param_1[8] = (void *)0x0;
  param_1[3] = (void *)0x0;
  param_1[2] = (void *)0x0;
  param_1[5] = (void *)0x0;
  param_1[4] = (void *)0x0;
  param_1[1] = (void *)0x0;
  *param_1 = (void *)0x0;
  return 0xffffffff;
}


