// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_colorspace_set_ICC
// Entry Point: 00daba08
// Size: 228 bytes
// Signature: undefined png_colorspace_set_ICC(void)


undefined8
png_colorspace_set_ICC
          (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(short *)(param_2 + 0x4a) < 0) {
    return 0;
  }
  if (param_4 < 0x84) {
    FUN_00daaff8(param_1,param_2,param_3,param_4,"too short");
    uVar1 = 0;
  }
  else {
    uVar1 = png_icc_check_header(param_1,param_2,param_3,param_4);
    if (((int)uVar1 != 0) &&
       (uVar1 = png_icc_check_tag_table(param_1,param_2,param_3,param_4,param_5), (int)uVar1 != 0))
    {
      png_icc_set_sRGB(param_1,param_2,param_5,0);
      return 1;
    }
  }
  return uVar1;
}


