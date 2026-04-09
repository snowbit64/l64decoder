// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_rgb_to_gray_status
// Entry Point: 00db0a18
// Size: 12 bytes
// Signature: undefined png_get_rgb_to_gray_status(void)


ulong png_get_rgb_to_gray_status(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(byte *)(param_1 + 0x408);
  }
  return param_1;
}


