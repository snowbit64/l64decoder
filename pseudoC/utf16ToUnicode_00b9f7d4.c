// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: utf16ToUnicode
// Entry Point: 00b9f7d4
// Size: 84 bytes
// Signature: undefined __cdecl utf16ToUnicode(ushort * param_1, uint * param_2)


/* StringUtil::utf16ToUnicode(unsigned short const*, unsigned int&) */

undefined8 StringUtil::utf16ToUnicode(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if ((0x3e < (uVar1 + 0x2400 >> 10 & 0x3f)) && (0x3e < (param_1[1] + 0x2000 >> 10 & 0x3f))) {
    *param_2 = (uint)param_1[1] + (uint)uVar1 * 0x400 + 0xfca02400;
    return 2;
  }
  *param_2 = (uint)uVar1;
  return 1;
}


