// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_save_uint_16
// Entry Point: 00dc7fec
// Size: 16 bytes
// Signature: undefined png_save_uint_16(void)


void png_save_uint_16(ushort *param_1,uint param_2)

{
  *param_1 = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  return;
}


