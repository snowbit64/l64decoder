// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBoolAttrRet
// Entry Point: 00b8c260
// Size: 144 bytes
// Signature: undefined __cdecl getBoolAttrRet(char * param_1, bool param_2, char * * param_3)


/* ExpatUtil::getBoolAttrRet(char const*, bool, char const**) */

byte ExpatUtil::getBoolAttrRet(char *param_1,bool param_2,char **param_3)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  
  __s1 = *param_3;
  if (__s1 != (char *)0x0) {
    uVar2 = 0;
    do {
      iVar1 = strcmp(__s1,param_1);
      if (iVar1 == 0) {
        if (param_3[(uVar2 & 0xfffffffe) + 1] != (char *)0x0) {
          iVar1 = strcasecmp(param_3[(uVar2 & 0xfffffffe) + 1],"true");
          param_2 = iVar1 == 0;
        }
        break;
      }
      __s1 = param_3[uVar2 + 2];
      uVar2 = uVar2 + 2;
    } while (__s1 != (char *)0x0);
  }
  return param_2 & 1;
}


