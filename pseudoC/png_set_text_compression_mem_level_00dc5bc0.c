// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_text_compression_mem_level
// Entry Point: 00dc5bc0
// Size: 12 bytes
// Signature: undefined png_set_text_compression_mem_level(void)


void png_set_text_compression_mem_level(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x214) = param_2;
  }
  return;
}


