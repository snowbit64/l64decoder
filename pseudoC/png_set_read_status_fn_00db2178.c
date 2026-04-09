// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_read_status_fn
// Entry Point: 00db2178
// Size: 12 bytes
// Signature: undefined png_set_read_status_fn(void)


void png_set_read_status_fn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x338) = param_2;
  }
  return;
}


