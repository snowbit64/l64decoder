// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_text_compression_strategy
// Entry Point: 00dc5bcc
// Size: 12 bytes
// Signature: undefined png_set_text_compression_strategy(void)


void png_set_text_compression_strategy(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x218) = param_2;
  }
  return;
}


