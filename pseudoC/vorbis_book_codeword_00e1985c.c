// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_codeword
// Entry Point: 00e1985c
// Size: 28 bytes
// Signature: undefined vorbis_book_codeword(void)


ulong vorbis_book_codeword(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return (ulong)*(uint *)(*(long *)(param_1 + 0x28) + (long)param_2 * 4);
  }
  return 0xffffffffffffffff;
}


