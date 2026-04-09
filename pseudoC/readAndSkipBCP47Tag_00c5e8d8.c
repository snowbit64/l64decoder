// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readAndSkipBCP47Tag
// Entry Point: 00c5e8d8
// Size: 200 bytes
// Signature: undefined __cdecl readAndSkipBCP47Tag(char * * param_1, uint param_2, bool param_3, char * param_4)


/* LanguageUtil::readAndSkipBCP47Tag(char const*&, unsigned int, bool, char*) */

undefined8 LanguageUtil::readAndSkipBCP47Tag(char **param_1,uint param_2,bool param_3,char *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  byte *__src;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  size_t __n;
  
  __src = (byte *)*param_1;
  if (param_2 == 0) {
    __n = 0;
  }
  else {
    __n = (size_t)param_2;
    uVar3 = __n;
    pbVar4 = __src;
    do {
      uVar5 = (uint)*pbVar4;
      if (uVar5 == 0) goto LAB_00c5e98c;
      if (param_3) {
        if (uVar5 - 0x3a < 0xfffffff6) goto LAB_00c5e98c;
      }
      else if ((uVar5 & 0xffffffdf) - 0x5b < 0xffffffe6) goto LAB_00c5e98c;
      pbVar4 = pbVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  bVar1 = __src[__n];
  if (bVar1 == 0x2d || bVar1 == 0) {
    if (param_4 != (char *)0x0) {
      memcpy(param_4,__src,__n);
      param_4[__n] = '\0';
      __src = (byte *)*param_1;
      bVar1 = __src[__n];
    }
    uVar2 = 1;
    if (bVar1 != 0) {
      param_2 = param_2 + 1;
    }
    *param_1 = (char *)(__src + param_2);
  }
  else {
LAB_00c5e98c:
    uVar2 = 0;
  }
  return uVar2;
}


