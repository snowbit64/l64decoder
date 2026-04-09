// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strtouint64
// Entry Point: 00b9e1cc
// Size: 76 bytes
// Signature: undefined __cdecl strtouint64(char * param_1, char * param_2, ulonglong * param_3)


/* StringUtil::strtouint64(char const*, char const*, unsigned long long&) */

byte * StringUtil::strtouint64(char *param_1,char *param_2,ulonglong *param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
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
    uVar3 = (ulong)(bVar1 - 0x30) + uVar3 * 10;
    lVar4 = lVar4 + -1;
    pbVar2 = (byte *)param_2;
  } while (lVar4 != 0);
  *param_3 = uVar3;
  return pbVar2;
}


