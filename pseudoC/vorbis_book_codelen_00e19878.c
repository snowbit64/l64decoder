// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_codelen
// Entry Point: 00e19878
// Size: 28 bytes
// Signature: undefined vorbis_book_codelen(void)


ulong vorbis_book_codelen(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (long)param_2);
  }
  return 0xffffffffffffffff;
}


