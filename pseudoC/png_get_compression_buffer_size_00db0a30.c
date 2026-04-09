// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_compression_buffer_size
// Entry Point: 00db0a30
// Size: 32 bytes
// Signature: undefined png_get_compression_buffer_size(void)


ulong png_get_compression_buffer_size(ulong param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = 0x1f0;
    if ((*(byte *)(param_1 + 0x165) & 0x80) != 0) {
      lVar1 = 0x4a8;
    }
    param_1 = (ulong)*(uint *)(param_1 + lVar1);
  }
  return param_1;
}


