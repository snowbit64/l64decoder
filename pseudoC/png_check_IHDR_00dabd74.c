// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_check_IHDR
// Entry Point: 00dabd74
// Size: 632 bytes
// Signature: undefined png_check_IHDR(void)


void png_check_IHDR(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                   int param_7,int param_8)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    pcVar3 = "Image width is zero in IHDR";
LAB_00dabde0:
    png_warning(param_1,pcVar3);
    bVar2 = true;
    uVar1 = *(uint *)(param_1 + 0x45c);
  }
  else {
    if ((int)param_2 < 0) {
      pcVar3 = "Invalid image width in IHDR";
      goto LAB_00dabde0;
    }
    bVar2 = false;
    uVar1 = *(uint *)(param_1 + 0x45c);
  }
  if (uVar1 < param_2) {
    png_warning(param_1,"Image width exceeds user limit in IHDR");
    bVar2 = true;
  }
  if (param_3 == 0) {
    pcVar3 = "Image height is zero in IHDR";
LAB_00dabe40:
    png_warning(param_1,pcVar3);
    bVar2 = true;
    if (param_3 <= *(uint *)(param_1 + 0x460)) goto LAB_00dabe20;
LAB_00dabe58:
    png_warning(param_1,"Image height exceeds user limit in IHDR");
    bVar2 = true;
    if (param_4 < 0x11) goto LAB_00dabe74;
LAB_00dabf90:
    png_warning(param_1,"Invalid bit depth in IHDR");
    bVar2 = true;
    if (6 < param_5) goto LAB_00dabea0;
LAB_00dabe98:
    if ((param_5 & 0xfffffffb) == 1) goto LAB_00dabea0;
  }
  else {
    if ((int)param_3 < 0) {
      pcVar3 = "Invalid image height in IHDR";
      goto LAB_00dabe40;
    }
    if (*(uint *)(param_1 + 0x460) < param_3) goto LAB_00dabe58;
LAB_00dabe20:
    if (0x10 < param_4) goto LAB_00dabf90;
LAB_00dabe74:
    if ((1 << (ulong)(param_4 & 0x1f) & 0x10116U) == 0) goto LAB_00dabf90;
    if (param_5 < 7) goto LAB_00dabe98;
LAB_00dabea0:
    png_warning(param_1,"Invalid color type in IHDR");
    bVar2 = true;
  }
  if (((int)param_4 < 9) || (param_5 != 3)) {
    if ((7 < (int)param_4) || (param_5 != 4 && (param_5 & 0xfffffffb) != 2)) goto LAB_00dabef8;
  }
  png_warning(param_1,"Invalid color type/bit depth combination in IHDR");
  bVar2 = true;
LAB_00dabef8:
  if (1 < param_6) {
    png_warning(param_1,"Unknown interlace method in IHDR");
    bVar2 = true;
  }
  if (param_7 != 0) {
    png_warning(param_1,"Unknown compression method in IHDR");
    bVar2 = true;
  }
  if (((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x418) != 0)) {
    png_warning(param_1,"MNG features are not allowed in a PNG datastream");
  }
  if ((param_8 == 0) ||
     ((((param_8 == 0x40 && ((*(uint *)(param_1 + 0x418) >> 2 & 1) != 0)) &&
       ((param_5 & 0xfffffffb) == 2)) && ((*(uint *)(param_1 + 0x164) >> 0xc & 1) == 0)))) {
    if (!bVar2) {
      return;
    }
  }
  else {
    png_warning(param_1,"Unknown filter method in IHDR");
    if ((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0) {
      png_warning(param_1,"Invalid filter method in IHDR");
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Invalid IHDR data");
}


