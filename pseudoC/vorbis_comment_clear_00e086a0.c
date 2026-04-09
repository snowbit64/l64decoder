// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_comment_clear
// Entry Point: 00e086a0
// Size: 140 bytes
// Signature: undefined vorbis_comment_clear(void)


void vorbis_comment_clear(long *param_1)

{
  void **__ptr;
  void *__ptr_00;
  int iVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    __ptr = (void **)*param_1;
    if (__ptr != (void **)0x0) {
      iVar1 = *(int *)(param_1 + 2);
      if (0 < iVar1) {
        lVar2 = 0;
        __ptr_00 = *__ptr;
        while( true ) {
          if (__ptr_00 != (void *)0x0) {
            free(__ptr_00);
            iVar1 = *(int *)(param_1 + 2);
          }
          lVar2 = lVar2 + 1;
          if (iVar1 <= lVar2) break;
          __ptr_00 = *(void **)(*param_1 + lVar2 * 8);
        }
        __ptr = (void **)*param_1;
      }
      free(__ptr);
    }
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}


