// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_comment_clear
// Entry Point: 00df4d8c
// Size: 108 bytes
// Signature: undefined th_comment_clear(void)


void th_comment_clear(void **param_1)

{
  long lVar1;
  
  if (param_1 != (void **)0x0) {
    if (0 < *(int *)(param_1 + 2)) {
      lVar1 = 0;
      do {
        free(*(void **)((long)*param_1 + lVar1 * 8));
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 2));
    }
    free(*param_1);
    free(param_1[1]);
    free(param_1[3]);
    param_1[1] = (void *)0x0;
    *param_1 = (void *)0x0;
    param_1[3] = (void *)0x0;
    param_1[2] = (void *)0x0;
  }
  return;
}


