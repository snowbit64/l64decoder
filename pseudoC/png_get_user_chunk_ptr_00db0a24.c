// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_user_chunk_ptr
// Entry Point: 00db0a24
// Size: 12 bytes
// Signature: undefined png_get_user_chunk_ptr(void)


long png_get_user_chunk_ptr(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 1000);
  }
  return param_1;
}


