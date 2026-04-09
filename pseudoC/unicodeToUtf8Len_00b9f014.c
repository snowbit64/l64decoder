// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unicodeToUtf8Len
// Entry Point: 00b9f014
// Size: 64 bytes
// Signature: undefined __cdecl unicodeToUtf8Len(uint param_1)


/* StringUtil::unicodeToUtf8Len(unsigned int) */

long StringUtil::unicodeToUtf8Len(uint param_1)

{
  if (param_1 < 0x80) {
    return 1;
  }
  if (param_1 < 0x800) {
    return 2;
  }
  if (param_1 < 0x10000) {
    return 3;
  }
  return (ulong)(param_1 < 0x200000) << 2;
}


