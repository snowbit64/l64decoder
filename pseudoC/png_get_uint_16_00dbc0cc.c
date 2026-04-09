// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_uint_16
// Entry Point: 00dbc0cc
// Size: 16 bytes
// Signature: undefined png_get_uint_16(void)


uint png_get_uint_16(ushort *param_1)

{
  return (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
}


