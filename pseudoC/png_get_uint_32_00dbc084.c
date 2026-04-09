// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_uint_32
// Entry Point: 00dbc084
// Size: 12 bytes
// Signature: undefined png_get_uint_32(void)


uint png_get_uint_32(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


