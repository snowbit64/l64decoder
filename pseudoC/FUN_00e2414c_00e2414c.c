// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e2414c
// Entry Point: 00e2414c
// Size: 264 bytes
// Signature: undefined FUN_00e2414c(void)


undefined8 FUN_00e2414c(void **param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = param_1[6];
  if ((long)param_1[7] < (long)pvVar2 - param_2) {
    return 0;
  }
  if ((long)pvVar2 <= 0x7fffffffffffffff - param_2) {
    pvVar2 = (void *)((long)pvVar2 + param_2);
    pvVar1 = (void *)((long)pvVar2 + 0x20);
    if (0x7fffffffffffffde < (long)pvVar2) {
      pvVar1 = pvVar2;
    }
    pvVar2 = realloc(param_1[4],(long)pvVar1 << 2);
    if (pvVar2 != (void *)0x0) {
      param_1[4] = pvVar2;
      pvVar2 = realloc(param_1[5],(long)pvVar1 << 3);
      if (pvVar2 != (void *)0x0) {
        param_1[5] = pvVar2;
        param_1[6] = pvVar1;
        return 0;
      }
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


