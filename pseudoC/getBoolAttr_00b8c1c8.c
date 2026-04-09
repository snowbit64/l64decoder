// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBoolAttr
// Entry Point: 00b8c1c8
// Size: 152 bytes
// Signature: undefined __cdecl getBoolAttr(char * param_1, bool * param_2, char * * param_3)


/* ExpatUtil::getBoolAttr(char const*, bool&, char const**) */

undefined8 ExpatUtil::getBoolAttr(char *param_1,bool *param_2,char **param_3)

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
        if (param_3[(uVar2 & 0xfffffffe) + 1] == (char *)0x0) {
          return 0;
        }
        iVar1 = strcasecmp(param_3[(uVar2 & 0xfffffffe) + 1],"true");
        *param_2 = iVar1 == 0;
        return 1;
      }
      __s1 = param_3[uVar2 + 2];
      uVar2 = uVar2 + 2;
    } while (__s1 != (char *)0x0);
  }
  return 0;
}


