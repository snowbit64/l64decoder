// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_chunk_cache_max
// Entry Point: 00db0a68
// Size: 12 bytes
// Signature: undefined png_get_chunk_cache_max(void)


ulong png_get_chunk_cache_max(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x464);
  }
  return param_1;
}


