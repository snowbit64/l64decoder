// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_io_ptr
// Entry Point: 00da94cc
// Size: 12 bytes
// Signature: undefined png_get_io_ptr(void)


long png_get_io_ptr(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x140);
  }
  return param_1;
}


