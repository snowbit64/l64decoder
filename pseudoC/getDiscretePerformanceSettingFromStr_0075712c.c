// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDiscretePerformanceSettingFromStr
// Entry Point: 0075712c
// Size: 156 bytes
// Signature: undefined __cdecl getDiscretePerformanceSettingFromStr(char * param_1)


/* HardwareScalability::getDiscretePerformanceSettingFromStr(char const*) */

undefined HardwareScalability::getDiscretePerformanceSettingFromStr(char *param_1)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = strcasecmp(param_1,(char *)s_discretePerformanceSettingNames._8_8_);
  iVar4 = strcasecmp(param_1,(char *)s_discretePerformanceSettingNames._16_8_);
  uVar1 = 2;
  if (iVar4 != 0) {
    uVar1 = iVar3 == 0;
  }
  iVar3 = strcasecmp(param_1,(char *)s_discretePerformanceSettingNames._24_8_);
  uVar2 = 3;
  if (iVar3 != 0) {
    uVar2 = uVar1;
  }
  iVar3 = strcasecmp(param_1,(char *)s_discretePerformanceSettingNames._32_8_);
  uVar1 = 4;
  if (iVar3 != 0) {
    uVar1 = uVar2;
  }
  iVar3 = strcasecmp(param_1,(char *)s_discretePerformanceSettingNames._40_8_);
  uVar2 = 5;
  if (iVar3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


