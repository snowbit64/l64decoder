// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_page_continued
// Entry Point: 00e234d8
// Size: 16 bytes
// Signature: undefined ogg_page_continued(void)


byte ogg_page_continued(long *param_1)

{
  return *(byte *)(*param_1 + 5) & 1;
}


