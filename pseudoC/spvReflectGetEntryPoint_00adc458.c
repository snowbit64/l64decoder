// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetEntryPoint
// Entry Point: 00adc458
// Size: 96 bytes
// Signature: undefined spvReflectGetEntryPoint(void)


char ** spvReflectGetEntryPoint(long param_1,char *param_2)

{
  int iVar1;
  char **ppcVar2;
  ulong uVar3;
  
  if (((param_1 != 0) && (param_2 != (char *)0x0)) &&
     (uVar3 = (ulong)*(uint *)(param_1 + 0x14), *(uint *)(param_1 + 0x14) != 0)) {
    ppcVar2 = *(char ***)(param_1 + 0x18);
    do {
      iVar1 = strcmp(*ppcVar2,param_2);
      if (iVar1 == 0) {
        return ppcVar2;
      }
      ppcVar2 = ppcVar2 + 0x11;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return (char **)0x0;
}


