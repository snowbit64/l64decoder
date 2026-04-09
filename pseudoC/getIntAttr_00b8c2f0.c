// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIntAttr
// Entry Point: 00b8c2f0
// Size: 140 bytes
// Signature: undefined __cdecl getIntAttr(char * param_1, int * param_2, char * * param_3)


/* ExpatUtil::getIntAttr(char const*, int&, char const**) */

undefined8 ExpatUtil::getIntAttr(char *param_1,int *param_2,char **param_3)

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
        iVar1 = StringUtil::strtoint(param_3[(uVar2 & 0xfffffffe) + 1]);
        *param_2 = iVar1;
        return 1;
      }
      __s1 = param_3[uVar2 + 2];
      uVar2 = uVar2 + 2;
    } while (__s1 != (char *)0x0);
  }
  return 0;
}


