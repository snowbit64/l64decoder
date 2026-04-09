// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertAsciiToUtf8
// Entry Point: 00b9eeec
// Size: 296 bytes
// Signature: undefined __cdecl convertAsciiToUtf8(char * param_1, basic_string * param_2, bool param_3)


/* StringUtil::convertAsciiToUtf8(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool) */

int StringUtil::convertAsciiToUtf8(char *param_1,basic_string *param_2,bool param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  
  iVar3 = 3;
  if (!param_3) {
    iVar3 = 0;
  }
  cVar1 = *param_1;
  iVar5 = iVar3;
  if (cVar1 != '\0') {
    pcVar4 = param_1 + 1;
    do {
      iVar9 = 1;
      if (cVar1 < '\0') {
        iVar9 = 2;
      }
      cVar1 = *pcVar4;
      iVar5 = iVar9 + iVar5;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)param_2,(char)iVar5);
  puVar6 = *(undefined2 **)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    puVar6 = (undefined2 *)((long)param_2 + 1);
  }
  if (puVar6 == (undefined2 *)0x0) {
    cVar1 = *param_1;
    if (cVar1 != '\0') {
      pcVar4 = param_1 + 1;
      do {
        iVar5 = 1;
        if (cVar1 < '\0') {
          iVar5 = 2;
        }
        cVar1 = *pcVar4;
        iVar3 = iVar5 + iVar3;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
  }
  else {
    puVar7 = puVar6;
    if (param_3) {
      puVar7 = (undefined2 *)((long)puVar6 + 3);
      *puVar6 = 0xbbef;
      *(undefined *)(puVar6 + 1) = 0xbf;
    }
    bVar2 = *param_1;
    if (bVar2 != 0) {
      pbVar8 = (byte *)(param_1 + 1);
      do {
        if ((char)bVar2 < '\0') {
          lVar10 = 2;
          *(byte *)puVar7 = bVar2 >> 6 | 0xc0;
          *(byte *)((long)puVar7 + 1) = bVar2 & 0x3f | 0x80;
        }
        else {
          lVar10 = 1;
          *(byte *)puVar7 = bVar2;
        }
        bVar2 = *pbVar8;
        puVar7 = (undefined2 *)((long)puVar7 + lVar10);
        pbVar8 = pbVar8 + 1;
      } while (bVar2 != 0);
    }
    iVar3 = (int)puVar7 - (int)puVar6;
    *(undefined *)puVar7 = 0;
  }
  return iVar3;
}


