// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_save_uint_32
// Entry Point: 00dc7fe0
// Size: 12 bytes
// Signature: undefined png_save_uint_32(void)


void png_save_uint_32(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


