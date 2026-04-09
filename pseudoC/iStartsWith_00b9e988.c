// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: iStartsWith
// Entry Point: 00b9e988
// Size: 88 bytes
// Signature: undefined __cdecl iStartsWith(char * param_1, char * param_2)


/* StringUtil::iStartsWith(char const*, char const*) */

bool StringUtil::iStartsWith(char *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar6 = (uint)(byte)*param_2;
  if (*param_2 == 0) {
    return true;
  }
  pbVar5 = (byte *)(param_2 + 1);
  while( true ) {
    bVar2 = *param_1;
    uVar4 = bVar2 | 0x20;
    if (0x19 < bVar2 - 0x41) {
      uVar4 = (uint)bVar2;
    }
    uVar1 = uVar6 | 0x20;
    if (0x19 < uVar6 - 0x41) {
      uVar1 = uVar6;
    }
    bVar3 = uVar4 == uVar1;
    if (!bVar3) break;
    uVar6 = (uint)*pbVar5;
    param_1 = (char *)((byte *)param_1 + 1);
    pbVar5 = pbVar5 + 1;
    if (uVar6 == 0) {
      return bVar3;
    }
  }
  return bVar3;
}


