// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_user_width_max
// Entry Point: 00db0a50
// Size: 12 bytes
// Signature: undefined png_get_user_width_max(void)


ulong png_get_user_width_max(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x45c);
  }
  return param_1;
}


