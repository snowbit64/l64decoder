// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_PLTE
// Entry Point: 00dc2a7c
// Size: 292 bytes
// Signature: undefined png_set_PLTE(void)


void png_set_PLTE(long param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(char *)(param_2 + 0x25) == '\x03') {
      if ((int)param_4 < 0) {
LAB_00dc2acc:
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid palette length");
      }
      if (1 << (ulong)(*(byte *)(param_2 + 0x24) & 0x1f) < (int)param_4) goto LAB_00dc2acc;
    }
    else if (0x100 < param_4) {
      png_warning(param_1,"Invalid palette length");
      return;
    }
    if (((param_3 == (void *)0x0) && (param_4 != 0)) ||
       ((param_4 == 0 && ((*(byte *)(param_1 + 0x418) & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid palette");
    }
    png_free_data(param_1,param_2,0x1000,0);
    __dest = (void *)png_calloc(param_1,0x300);
    *(void **)(param_1 + 0x288) = __dest;
    if (param_4 != 0) {
      memcpy(__dest,param_3,(ulong)param_4 + (ulong)param_4 * 2);
    }
    uVar1 = *(uint *)(param_2 + 300);
    *(void **)(param_2 + 0x18) = __dest;
    uVar2 = *(uint *)(param_2 + 8);
    *(short *)(param_1 + 0x290) = (short)param_4;
    *(short *)(param_2 + 0x20) = (short)param_4;
    *(uint *)(param_2 + 300) = uVar1 | 0x1000;
    *(uint *)(param_2 + 8) = uVar2 | 8;
  }
  return;
}


