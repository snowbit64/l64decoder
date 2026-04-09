// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getULongLongAttr
// Entry Point: 00b8c408
// Size: 140 bytes
// Signature: undefined __cdecl getULongLongAttr(char * param_1, ulonglong * param_2, char * * param_3)


/* ExpatUtil::getULongLongAttr(char const*, unsigned long long&, char const**) */

undefined8 ExpatUtil::getULongLongAttr(char *param_1,ulonglong *param_2,char **param_3)

{
  int iVar1;
  ulonglong uVar2;
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
        uVar2 = StringUtil::strtouint64(param_3[(uVar3 & 0xfffffffe) + 1]);
        *param_2 = uVar2;
        return 1;
      }
      __s1 = param_3[uVar3 + 2];
      uVar3 = uVar3 + 2;
    } while (__s1 != (char *)0x0);
  }
  return 0;
}


