// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unicodeToUtf16
// Entry Point: 00b9f77c
// Size: 88 bytes
// Signature: undefined __cdecl unicodeToUtf16(uint param_1, ushort * param_2)


/* StringUtil::unicodeToUtf16(unsigned int, unsigned short*) */

undefined8 StringUtil::unicodeToUtf16(uint param_1,ushort *param_2)

{
  if (0x1a < param_1 >> 0xb) {
    if (param_1 < 0xe000) {
      return 0;
    }
    if (param_1 >> 0x10 != 0) {
      param_2[1] = (ushort)param_1 & 0x3ff | 0xdc00;
      *param_2 = (ushort)(param_1 + 0xf0000 >> 10) & 0x3ff | 0xd800;
      return 2;
    }
  }
  *param_2 = (ushort)param_1;
  return 1;
}


