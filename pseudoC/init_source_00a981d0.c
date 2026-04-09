// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init_source
// Entry Point: 00a981d0
// Size: 16 bytes
// Signature: undefined __cdecl init_source(jpeg_decompress_struct * param_1)


/* JPEGUtil::init_source(jpeg_decompress_struct*) */

void JPEGUtil::init_source(jpeg_decompress_struct *param_1)

{
  *(undefined *)(*(long *)(param_1 + 0x28) + 0x40) = 1;
  return;
}


