// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_page_bos
// Entry Point: 00e234e8
// Size: 16 bytes
// Signature: undefined ogg_page_bos(void)


byte ogg_page_bos(long *param_1)

{
  return *(byte *)(*param_1 + 5) & 2;
}


