// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_block_clear
// Entry Point: 00e04798
// Size: 408 bytes
// Signature: undefined vorbis_block_clear(void)


undefined8 vorbis_block_clear(undefined8 *param_1)

{
  void **ppvVar1;
  void **__ptr;
  void *__ptr_00;
  void *__ptr_01;
  
  __ptr_01 = (void *)param_1[0x17];
  __ptr = (void **)param_1[0x12];
  while (__ptr != (void **)0x0) {
    ppvVar1 = (void **)__ptr[1];
    free(*__ptr);
    *__ptr = (void *)0x0;
    __ptr[1] = (void *)0x0;
    free(__ptr);
    __ptr = ppvVar1;
  }
  __ptr_00 = (void *)param_1[0xe];
  if (param_1[0x11] != 0) {
    __ptr_00 = realloc(__ptr_00,param_1[0x10] + param_1[0x11]);
    param_1[0xe] = __ptr_00;
    param_1[0x10] = param_1[0x10] + param_1[0x11];
    param_1[0x11] = 0;
  }
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr_01 != (void *)0x0) {
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x10));
    free(*(void **)((long)__ptr_01 + 0x10));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x18));
    free(*(void **)((long)__ptr_01 + 0x18));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x20));
    free(*(void **)((long)__ptr_01 + 0x20));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x28));
    free(*(void **)((long)__ptr_01 + 0x28));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x30));
    free(*(void **)((long)__ptr_01 + 0x30));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x38));
    free(*(void **)((long)__ptr_01 + 0x38));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x40));
    free(*(void **)((long)__ptr_01 + 0x40));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x48));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x50));
    free(*(void **)((long)__ptr_01 + 0x50));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x58));
    free(*(void **)((long)__ptr_01 + 0x58));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x60));
    free(*(void **)((long)__ptr_01 + 0x60));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x68));
    free(*(void **)((long)__ptr_01 + 0x68));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x70));
    free(*(void **)((long)__ptr_01 + 0x70));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x78));
    free(*(void **)((long)__ptr_01 + 0x78));
    oggpack_writeclear(*(undefined8 *)((long)__ptr_01 + 0x80));
    free(*(void **)((long)__ptr_01 + 0x80));
    free(__ptr_01);
  }
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return 0;
}


