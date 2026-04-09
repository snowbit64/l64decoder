// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_flush
// Entry Point: 00dc57e4
// Size: 88 bytes
// Signature: undefined png_write_flush(void)


void png_write_flush(long param_1)

{
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x24c) < *(uint *)(param_1 + 0x238))) {
    png_compress_IDAT(param_1,0,0,2);
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    png_flush(param_1);
    return;
  }
  return;
}


