// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strtouint
// Entry Point: 00b9e0f4
// Size: 76 bytes
// Signature: undefined __cdecl strtouint(char * param_1, char * param_2, uint * param_3)


/* StringUtil::strtouint(char const*, char const*, unsigned int&) */

byte * StringUtil::strtouint(char *param_1,char *param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 <= param_1) {
    *param_3 = 0;
    return (byte *)param_1;
  }
  uVar3 = 0;
  lVar4 = (long)param_2 - (long)param_1;
  do {
    bVar1 = *param_1;
    pbVar2 = (byte *)param_1;
    if (9 < bVar1 - 0x30) break;
    param_1 = (char *)((byte *)param_1 + 1);
    lVar4 = lVar4 + -1;
    uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
    pbVar2 = (byte *)param_2;
  } while (lVar4 != 0);
  *param_3 = uVar3;
  return pbVar2;
}


