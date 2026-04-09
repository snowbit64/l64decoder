// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitIntoUInts
// Entry Point: 00b9cda8
// Size: 212 bytes
// Signature: undefined __cdecl splitIntoUInts(char * param_1, uint * param_2, uint param_3, char param_4)


/* StringUtil::splitIntoUInts(char const*, unsigned int*, unsigned int, char) */

uint StringUtil::splitIntoUInts(char *param_1,uint *param_2,uint param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    return 0;
  }
  uVar2 = 0;
  pbVar3 = (byte *)param_1;
  do {
    if (cVar4 == param_4) {
      uVar6 = (uint)*pbVar3;
      if (*pbVar3 - 0x30 < 10) {
        uVar5 = 0;
        do {
          pbVar3 = pbVar3 + 1;
          iVar1 = uVar6 + uVar5 * 10;
          uVar6 = (uint)*pbVar3;
          uVar5 = iVar1 - 0x30;
        } while (uVar6 - 0x30 < 10);
      }
      else {
        uVar5 = 0;
      }
      param_2[uVar2] = uVar5;
      if (uVar2 + 1 == param_3) {
        return param_3;
      }
      pbVar3 = (byte *)(param_1 + 1);
      uVar2 = uVar2 + 1;
    }
    if (param_3 <= uVar2) break;
    param_1 = param_1 + 1;
    cVar4 = *param_1;
  } while (cVar4 != '\0');
  uVar6 = (uint)*pbVar3;
  if (*pbVar3 - 0x30 < 10) {
    uVar5 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      iVar1 = uVar6 + uVar5 * 10;
      uVar6 = (uint)*pbVar3;
      uVar5 = iVar1 - 0x30;
    } while (uVar6 - 0x30 < 10);
  }
  else {
    uVar5 = 0;
  }
  param_2[uVar2] = uVar5;
  return uVar2 + 1;
}


