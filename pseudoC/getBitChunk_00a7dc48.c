// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBitChunk
// Entry Point: 00a7dc48
// Size: 44 bytes
// Signature: undefined __cdecl getBitChunk(ulonglong * param_1, uint param_2)


/* BC6BC7Util::getBitChunk(unsigned long long*, unsigned int) */

ulong BC6BC7Util::getBitChunk(ulonglong *param_1,uint param_2)

{
  if (0x3f < param_2) {
    return param_1[1] >> ((ulong)param_2 & 0x3f);
  }
  return param_1[1] << ((ulong)-param_2 & 0x3f) | *param_1 >> ((ulong)param_2 & 0x3f);
}


