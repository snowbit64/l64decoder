// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_current_pass_number
// Entry Point: 00dc498c
// Size: 20 bytes
// Signature: undefined png_get_current_pass_number(void)


undefined png_get_current_pass_number(long param_1)

{
  if (param_1 != 0) {
    return *(undefined *)(param_1 + 0x29d);
  }
  return 8;
}


