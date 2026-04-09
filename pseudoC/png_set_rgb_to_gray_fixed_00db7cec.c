// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_rgb_to_gray_fixed
// Entry Point: 00db7cec
// Size: 360 bytes
// Signature: undefined png_set_rgb_to_gray_fixed(void)


void png_set_rgb_to_gray_fixed(long param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x168) >> 6 & 1) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    if ((*(byte *)(param_1 + 0x164) & 1) == 0) {
      png_app_error(param_1,"invalid before the PNG header has been read");
      return;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x4000;
    if (param_2 == 3) {
      uVar2 = *(uint *)(param_1 + 0x16c) | 0x200000;
      cVar1 = *(char *)(param_1 + 0x29f);
      *(uint *)(param_1 + 0x16c) = uVar2;
    }
    else if (param_2 == 2) {
      uVar2 = *(uint *)(param_1 + 0x16c) | 0x400000;
      cVar1 = *(char *)(param_1 + 0x29f);
      *(uint *)(param_1 + 0x16c) = uVar2;
    }
    else {
      if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"invalid error action to rgb_to_gray");
      }
      uVar2 = *(uint *)(param_1 + 0x16c) | 0x600000;
      cVar1 = *(char *)(param_1 + 0x29f);
      *(uint *)(param_1 + 0x16c) = uVar2;
    }
    if (cVar1 == '\x03') {
      *(uint *)(param_1 + 0x16c) = uVar2 | 0x1000;
    }
    if (((int)(param_4 | param_3) < 0) || (100000 < (int)(param_4 + param_3))) {
      if (-1 < (int)(param_4 | param_3)) {
        png_app_warning(param_1,"ignoring out of range rgb_to_gray coefficients");
      }
      if ((*(short *)(param_1 + 0x40a) == 0) && (*(short *)(param_1 + 0x40c) == 0)) {
        *(undefined4 *)(param_1 + 0x40a) = 0x5b8a1b38;
        return;
      }
    }
    else {
      *(short *)(param_1 + 0x40a) = (short)((param_3 << 0xf) / 100000);
      *(undefined *)(param_1 + 0x409) = 1;
      *(short *)(param_1 + 0x40c) = (short)((param_4 << 0xf) / 100000);
    }
  }
  return;
}


