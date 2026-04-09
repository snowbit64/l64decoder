// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_invert_mono
// Entry Point: 00dc3fcc
// Size: 20 bytes
// Signature: undefined png_set_invert_mono(void)


void png_set_invert_mono(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x20;
  }
  return;
}


