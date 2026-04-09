// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsSlowInOrOut
// Entry Point: 009046fc
// Size: 56 bytes
// Signature: undefined __cdecl getIsSlowInOrOut(char * * param_1, char * param_2)


/* I3DAnimationSetsFactory::getIsSlowInOrOut(char const**, char const*) */

undefined4 I3DAnimationSetsFactory::getIsSlowInOrOut(char **param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = (char *)ExpatUtil::getAttr(param_2,param_1);
  if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,"linear"), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


