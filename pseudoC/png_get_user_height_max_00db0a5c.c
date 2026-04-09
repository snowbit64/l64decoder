// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_user_height_max
// Entry Point: 00db0a5c
// Size: 12 bytes
// Signature: undefined png_get_user_height_max(void)


ulong png_get_user_height_max(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x460);
  }
  return param_1;
}


