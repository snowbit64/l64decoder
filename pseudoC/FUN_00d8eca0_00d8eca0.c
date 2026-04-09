// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8eca0
// Entry Point: 00d8eca0
// Size: 156 bytes
// Signature: undefined FUN_00d8eca0(void)


void FUN_00d8eca0(long *param_1,long param_2,void *param_3,long param_4,size_t param_5)

{
  int iVar1;
  size_t sVar2;
  code **ppcVar3;
  
  iVar1 = fseek(*(FILE **)(param_2 + 0x18),param_4,0);
  if (iVar1 != 0) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x43;
    (**ppcVar3)(param_1);
  }
  sVar2 = fwrite(param_3,1,param_5,*(FILE **)(param_2 + 0x18));
  if (sVar2 == param_5) {
    return;
  }
  ppcVar3 = (code **)*param_1;
  *(undefined4 *)(ppcVar3 + 5) = 0x44;
                    /* WARNING: Could not recover jumptable at 0x00d8ed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**ppcVar3)(param_1);
  return;
}


