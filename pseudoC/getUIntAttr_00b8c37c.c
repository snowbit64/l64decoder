// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUIntAttr
// Entry Point: 00b8c37c
// Size: 140 bytes
// Signature: undefined __cdecl getUIntAttr(char * param_1, uint * param_2, char * * param_3)


/* ExpatUtil::getUIntAttr(char const*, unsigned int&, char const**) */

undefined8 ExpatUtil::getUIntAttr(char *param_1,uint *param_2,char **param_3)

{
  int iVar1;
  uint uVar2;
  char *__s1;
  ulong uVar3;
  
  __s1 = *param_3;
  if (__s1 != (char *)0x0) {
    uVar3 = 0;
    do {
      iVar1 = strcmp(__s1,param_1);
      if (iVar1 == 0) {
        if (param_3[(uVar3 & 0xfffffffe) + 1] == (char *)0x0) {
          return 0;
        }
        uVar2 = StringUtil::strtouint(param_3[(uVar3 & 0xfffffffe) + 1]);
        *param_2 = uVar2;
        return 1;
      }
      __s1 = param_3[uVar3 + 2];
      uVar3 = uVar3 + 2;
    } while (__s1 != (char *)0x0);
  }
  return 0;
}


