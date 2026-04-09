// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_compression_method
// Entry Point: 00dc5b74
// Size: 64 bytes
// Signature: undefined png_set_compression_method(void)


void png_set_compression_method(long param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 8) {
      png_warning(param_1,"Only compression method 8 is supported by PNG");
    }
    *(int *)(param_1 + 0x1f8) = param_2;
  }
  return;
}


