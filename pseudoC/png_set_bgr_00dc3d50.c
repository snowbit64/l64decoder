// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_bgr
// Entry Point: 00dc3d50
// Size: 20 bytes
// Signature: undefined png_set_bgr(void)


void png_set_bgr(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 1;
  }
  return;
}


