// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitIntoInts
// Entry Point: 00b9cec0
// Size: 368 bytes
// Signature: undefined __cdecl splitIntoInts(char * param_1, int * param_2, uint param_3, char param_4)


/* StringUtil::splitIntoInts(char const*, int*, unsigned int, char) */

uint StringUtil::splitIntoInts(char *param_1,int *param_2,uint param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    return 0;
  }
  uVar2 = 0;
  pbVar3 = (byte *)param_1;
  do {
    if (cVar4 == param_4) {
      bVar1 = *pbVar3;
      uVar5 = (uint)bVar1;
      if (bVar1 == 0x2d) {
        uVar5 = (uint)pbVar3[1];
        if (pbVar3[1] - 0x30 < 10) {
          iVar6 = 0;
          pbVar3 = pbVar3 + 2;
          do {
            iVar6 = uVar5 + iVar6 * 10;
            uVar5 = (uint)*pbVar3;
            iVar6 = iVar6 + -0x30;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 - 0x30 < 10);
          iVar6 = -iVar6;
        }
        else {
          iVar6 = 0;
        }
      }
      else if (bVar1 - 0x30 < 10) {
        iVar6 = 0;
        do {
          pbVar3 = pbVar3 + 1;
          iVar6 = uVar5 + iVar6 * 10;
          uVar5 = (uint)*pbVar3;
          iVar6 = iVar6 + -0x30;
        } while (uVar5 - 0x30 < 10);
      }
      else {
        iVar6 = 0;
      }
      param_2[uVar2] = iVar6;
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
  bVar1 = *pbVar3;
  uVar5 = (uint)bVar1;
  if (bVar1 == 0x2d) {
    uVar5 = (uint)pbVar3[1];
    if (pbVar3[1] - 0x30 < 10) {
      iVar6 = 0;
      pbVar3 = pbVar3 + 2;
      do {
        iVar6 = uVar5 + iVar6 * 10;
        uVar5 = (uint)*pbVar3;
        iVar6 = iVar6 + -0x30;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 - 0x30 < 10);
      iVar6 = -iVar6;
    }
    else {
      iVar6 = 0;
    }
  }
  else if (bVar1 - 0x30 < 10) {
    iVar6 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      iVar6 = uVar5 + iVar6 * 10;
      uVar5 = (uint)*pbVar3;
      iVar6 = iVar6 + -0x30;
    } while (uVar5 - 0x30 < 10);
  }
  else {
    iVar6 = 0;
  }
  param_2[uVar2] = iVar6;
  return uVar2 + 1;
}


