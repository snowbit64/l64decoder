// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_chunk_cache_max
// Entry Point: 00dc3b60
// Size: 12 bytes
// Signature: undefined png_set_chunk_cache_max(void)


void png_set_chunk_cache_max(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x464) = param_2;
  }
  return;
}


