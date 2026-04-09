// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_clear
// Entry Point: 00e1d7f4
// Size: 284 bytes
// Signature: undefined ov_clear(void)


undefined8 ov_clear(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    vorbis_block_clear(param_1 + 0x5a);
    vorbis_dsp_clear(param_1 + 0x48);
    ogg_stream_clear(param_1 + 0x15);
    __ptr = (void *)param_1[0xd];
    if (__ptr != (void *)0x0) {
      if (*(int *)(param_1 + 8) != 0) {
        if (0 < *(int *)(param_1 + 8)) {
          vorbis_info_clear();
          vorbis_comment_clear(param_1[0xe]);
          if (1 < *(int *)(param_1 + 8)) {
            lVar1 = 1;
            lVar2 = 0x38;
            lVar3 = 0x20;
            do {
              vorbis_info_clear(param_1[0xd] + lVar2);
              vorbis_comment_clear(param_1[0xe] + lVar3);
              lVar1 = lVar1 + 1;
              lVar2 = lVar2 + 0x38;
              lVar3 = lVar3 + 0x20;
            } while (lVar1 < *(int *)(param_1 + 8));
          }
          __ptr = (void *)param_1[0xd];
        }
        free(__ptr);
        free((void *)param_1[0xe]);
      }
    }
    if ((void *)param_1[10] != (void *)0x0) {
      free((void *)param_1[10]);
    }
    if ((void *)param_1[0xc] != (void *)0x0) {
      free((void *)param_1[0xc]);
    }
    if ((void *)param_1[0xb] != (void *)0x0) {
      free((void *)param_1[0xb]);
    }
    if ((void *)param_1[9] != (void *)0x0) {
      free((void *)param_1[9]);
    }
    ogg_sync_clear(param_1 + 4);
    if ((*param_1 != 0) && ((code *)param_1[0x74] != (code *)0x0)) {
      (*(code *)param_1[0x74])();
    }
    memset(param_1,0,0x3b0);
  }
  return 0;
}


