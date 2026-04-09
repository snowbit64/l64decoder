// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_init
// Entry Point: 00e23a18
// Size: 340 bytes
// Signature: undefined ogg_stream_init(void)


undefined8 ogg_stream_init(void **param_1,int param_2)

{
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  
  if (param_1 == (void **)0x0) {
    return 0xffffffff;
  }
  param_1[0x32] = (void *)0x0;
  param_1[1] = (void *)0x0;
  *param_1 = (void *)0x0;
  param_1[3] = (void *)0x0;
  param_1[2] = (void *)0x0;
  param_1[1] = (void *)0x4000;
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
  param_1[5] = (void *)0x0;
  param_1[4] = (void *)0x0;
  param_1[6] = (void *)0x400;
  __ptr = malloc(0x4000);
  *param_1 = __ptr;
  __ptr_00 = malloc(0x1000);
  param_1[4] = __ptr_00;
  __ptr_01 = malloc(0x2000);
  param_1[5] = __ptr_01;
  if (__ptr != (void *)0x0) {
    if ((__ptr_01 != (void *)0x0) && (__ptr_00 != (void *)0x0)) {
      param_1[0x2f] = (void *)(long)param_2;
      return 0;
    }
    free(__ptr);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr_01 != (void *)0x0) {
    free(__ptr_01);
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


