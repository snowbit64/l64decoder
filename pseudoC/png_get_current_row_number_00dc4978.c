// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_current_row_number
// Entry Point: 00dc4978
// Size: 20 bytes
// Signature: undefined png_get_current_row_number(void)


undefined4 png_get_current_row_number(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x24c);
  }
  return 0xffffffff;
}


