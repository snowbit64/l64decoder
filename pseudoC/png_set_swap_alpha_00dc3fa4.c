// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_swap_alpha
// Entry Point: 00dc3fa4
// Size: 20 bytes
// Signature: undefined png_set_swap_alpha(void)


void png_set_swap_alpha(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x20000;
  }
  return;
}


