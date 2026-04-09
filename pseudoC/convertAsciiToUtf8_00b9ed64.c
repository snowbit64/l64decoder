// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertAsciiToUtf8
// Entry Point: 00b9ed64
// Size: 216 bytes
// Signature: undefined __cdecl convertAsciiToUtf8(char * param_1, char * * param_2, bool param_3)


/* StringUtil::convertAsciiToUtf8(char const*, char*&, bool) */

int StringUtil::convertAsciiToUtf8(char *param_1,char **param_2,bool param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  
  cVar1 = *param_1;
  iVar4 = 3;
  if (!param_3) {
    iVar4 = 0;
  }
  if (cVar1 != '\0') {
    pcVar6 = param_1 + 1;
    do {
      iVar8 = 1;
      if (cVar1 < '\0') {
        iVar8 = 2;
      }
      cVar1 = *pcVar6;
      iVar4 = iVar8 + iVar4;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  puVar3 = (undefined2 *)operator_new__((ulong)(iVar4 + 1));
  *param_2 = (char *)puVar3;
  puVar5 = puVar3;
  if (param_3) {
    puVar5 = (undefined2 *)((long)puVar3 + 3);
    *puVar3 = 0xbbef;
    *(undefined *)(puVar3 + 1) = 0xbf;
  }
  bVar2 = *param_1;
  if (bVar2 != 0) {
    pbVar7 = (byte *)(param_1 + 1);
    do {
      if ((char)bVar2 < '\0') {
        lVar9 = 2;
        *(byte *)puVar5 = bVar2 >> 6 | 0xc0;
        *(byte *)((long)puVar5 + 1) = bVar2 & 0x3f | 0x80;
      }
      else {
        lVar9 = 1;
        *(byte *)puVar5 = bVar2;
      }
      bVar2 = *pbVar7;
      puVar5 = (undefined2 *)((long)puVar5 + lVar9);
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  *(undefined *)puVar5 = 0;
  return (int)puVar5 - (int)puVar3;
}


