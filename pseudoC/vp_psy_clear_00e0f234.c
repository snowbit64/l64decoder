// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_psy_clear
// Entry Point: 00e0f234
// Size: 308 bytes
// Signature: undefined _vp_psy_clear(void)


void _vp_psy_clear(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    if ((void *)param_1[4] != (void *)0x0) {
      free((void *)param_1[4]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      free((void *)param_1[5]);
    }
    if ((void *)param_1[6] != (void *)0x0) {
      free((void *)param_1[6]);
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      lVar2 = 0;
      while( true ) {
        free(**(void ***)(lVar1 + lVar2));
        free(*(void **)(*(long *)(param_1[2] + lVar2) + 8));
        free(*(void **)(*(long *)(param_1[2] + lVar2) + 0x10));
        free(*(void **)(*(long *)(param_1[2] + lVar2) + 0x18));
        free(*(void **)(*(long *)(param_1[2] + lVar2) + 0x20));
        free(*(void **)(*(long *)(param_1[2] + lVar2) + 0x28));
        free(*(void **)(*(long *)(param_1[2] + lVar2) + 0x30));
        free(*(void **)(*(long *)(param_1[2] + lVar2) + 0x38));
        free(*(void **)(param_1[2] + lVar2));
        if (lVar2 == 0x80) break;
        lVar1 = param_1[2];
        lVar2 = lVar2 + 8;
      }
      free((void *)param_1[2]);
    }
    if ((void **)param_1[3] != (void **)0x0) {
      free(*(void **)param_1[3]);
      free(*(void **)(param_1[3] + 8));
      free(*(void **)(param_1[3] + 0x10));
      free((void *)param_1[3]);
    }
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
  }
  return;
}


