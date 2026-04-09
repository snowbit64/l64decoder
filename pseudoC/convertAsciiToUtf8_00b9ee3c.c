// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertAsciiToUtf8
// Entry Point: 00b9ee3c
// Size: 176 bytes
// Signature: undefined __cdecl convertAsciiToUtf8(char * param_1, char * param_2, uint param_3, bool param_4)


/* StringUtil::convertAsciiToUtf8(char const*, char*, unsigned int, bool) */

int StringUtil::convertAsciiToUtf8(char *param_1,char *param_2,uint param_3,bool param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  
  if (param_2 == (char *)0x0) {
    cVar2 = *param_1;
    iVar5 = 3;
    if (!param_4) {
      iVar5 = 0;
    }
    if (cVar2 != '\0') {
      pcVar4 = param_1 + 1;
      do {
        iVar6 = 1;
        if (cVar2 < '\0') {
          iVar6 = 2;
        }
        cVar2 = *pcVar4;
        iVar5 = iVar6 + iVar5;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
    }
  }
  else {
    pbVar7 = (byte *)param_2;
    if (param_4) {
      pbVar7 = (byte *)(param_2 + 3);
      *(undefined2 *)param_2 = 0xbbef;
      param_2[2] = -0x41;
    }
    bVar1 = *param_1;
    if (bVar1 != 0) {
      pbVar3 = (byte *)(param_1 + 1);
      do {
        if ((char)bVar1 < '\0') {
          lVar8 = 2;
          *pbVar7 = bVar1 >> 6 | 0xc0;
          pbVar7[1] = bVar1 & 0x3f | 0x80;
        }
        else {
          lVar8 = 1;
          *pbVar7 = bVar1;
        }
        bVar1 = *pbVar3;
        pbVar7 = pbVar7 + lVar8;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
    }
    iVar5 = (int)pbVar7 - (int)param_2;
    *pbVar7 = 0;
  }
  return iVar5;
}


