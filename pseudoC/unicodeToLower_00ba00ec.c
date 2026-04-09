// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unicodeToLower
// Entry Point: 00ba00ec
// Size: 112 bytes
// Signature: undefined __cdecl unicodeToLower(uint param_1)


/* StringUtil::unicodeToLower(unsigned int) */

uint StringUtil::unicodeToLower(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0xffff) {
    iVar3 = 0;
    iVar4 = 0x3ea;
    do {
      while( true ) {
        uVar1 = iVar3 + iVar4;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 + 1;
        }
        uVar2 = (int)uVar1 >> 1;
        if (*(ushort *)
             (s_lowerCaseMappings +
             (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)) < param_1) break;
        if (*(ushort *)
             (s_lowerCaseMappings +
             (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)) <= param_1) {
          return (uint)*(ushort *)
                        (s_lowerCaseMappings + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 4 + 2);
        }
        iVar4 = uVar2 - 1;
        if (iVar4 < iVar3) {
          return param_1;
        }
      }
      iVar3 = uVar2 + 1;
    } while (iVar3 <= iVar4);
  }
  return param_1;
}


