// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_decode
// Entry Point: 00e0a340
// Size: 72 bytes
// Signature: undefined vorbis_book_decode(void)


long vorbis_book_decode(long param_1)

{
  long lVar1;
  
  if ((0 < *(long *)(param_1 + 0x10)) && (lVar1 = FUN_00e0a388(), -1 < lVar1)) {
    return (long)*(int *)(*(long *)(param_1 + 0x30) + lVar1 * 4);
  }
  return -1;
}


