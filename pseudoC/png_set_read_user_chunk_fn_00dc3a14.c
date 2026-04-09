// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_read_user_chunk_fn
// Entry Point: 00dc3a14
// Size: 16 bytes
// Signature: undefined png_set_read_user_chunk_fn(void)


void png_set_read_user_chunk_fn(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x3f0) = param_3;
    *(undefined8 *)(param_1 + 1000) = param_2;
  }
  return;
}


