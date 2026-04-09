// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_chunk_malloc_max
// Entry Point: 00dc3b6c
// Size: 12 bytes
// Signature: undefined png_set_chunk_malloc_max(void)


void png_set_chunk_malloc_max(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x468) = param_2;
  }
  return;
}


