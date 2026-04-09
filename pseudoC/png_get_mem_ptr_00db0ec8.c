// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_mem_ptr
// Entry Point: 00db0ec8
// Size: 12 bytes
// Signature: undefined png_get_mem_ptr(void)


long png_get_mem_ptr(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x420);
  }
  return param_1;
}


