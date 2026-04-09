// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_page_eos
// Entry Point: 00e234f8
// Size: 16 bytes
// Signature: undefined ogg_page_eos(void)


byte ogg_page_eos(long *param_1)

{
  return *(byte *)(*param_1 + 5) & 4;
}


