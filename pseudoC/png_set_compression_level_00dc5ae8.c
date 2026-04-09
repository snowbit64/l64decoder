// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_compression_level
// Entry Point: 00dc5ae8
// Size: 12 bytes
// Signature: undefined png_set_compression_level(void)


void png_set_compression_level(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 500) = param_2;
  }
  return;
}


