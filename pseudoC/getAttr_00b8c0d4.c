// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAttr
// Entry Point: 00b8c0d4
// Size: 108 bytes
// Signature: undefined __cdecl getAttr(char * param_1, char * * param_2)


/* ExpatUtil::getAttr(char const*, char const**) */

char * ExpatUtil::getAttr(char *param_1,char **param_2)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  
  __s1 = *param_2;
  if (__s1 != (char *)0x0) {
    uVar2 = 0;
    do {
      iVar1 = strcmp(__s1,param_1);
      if (iVar1 == 0) {
        return param_2[(uVar2 & 0xfffffffe) + 1];
      }
      __s1 = param_2[uVar2 + 2];
      uVar2 = uVar2 + 2;
    } while (__s1 != (char *)0x0);
  }
  return (char *)0x0;
}


