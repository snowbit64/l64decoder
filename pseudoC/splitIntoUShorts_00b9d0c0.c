// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitIntoUShorts
// Entry Point: 00b9d0c0
// Size: 212 bytes
// Signature: undefined __cdecl splitIntoUShorts(char * param_1, ushort * param_2, uint param_3, char param_4)


/* StringUtil::splitIntoUShorts(char const*, unsigned short*, unsigned int, char) */

uint StringUtil::splitIntoUShorts(char *param_1,ushort *param_2,uint param_3,char param_4)

{
  uint uVar1;
  byte *pbVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return 0;
  }
  uVar1 = 0;
  pbVar2 = (byte *)param_1;
  do {
    if (cVar3 == param_4) {
      uVar6 = (uint)*pbVar2;
      if (*pbVar2 - 0x30 < 10) {
        iVar5 = 0;
        do {
          pbVar2 = pbVar2 + 1;
          iVar5 = uVar6 + iVar5 * 10;
          uVar6 = (uint)*pbVar2;
          iVar5 = iVar5 + -0x30;
          uVar4 = (ushort)iVar5;
        } while (uVar6 - 0x30 < 10);
      }
      else {
        uVar4 = 0;
      }
      param_2[uVar1] = uVar4;
      if (uVar1 + 1 == param_3) {
        return param_3;
      }
      pbVar2 = (byte *)(param_1 + 1);
      uVar1 = uVar1 + 1;
    }
    if (param_3 <= uVar1) break;
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  } while (cVar3 != '\0');
  uVar6 = (uint)*pbVar2;
  if (*pbVar2 - 0x30 < 10) {
    iVar5 = 0;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = uVar6 + iVar5 * 10;
      uVar6 = (uint)*pbVar2;
      iVar5 = iVar5 + -0x30;
      uVar4 = (ushort)iVar5;
    } while (uVar6 - 0x30 < 10);
  }
  else {
    uVar4 = 0;
  }
  param_2[uVar1] = uVar4;
  return uVar1 + 1;
}


