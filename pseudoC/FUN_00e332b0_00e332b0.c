// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e332b0
// Entry Point: 00e332b0
// Size: 56 bytes
// Signature: undefined FUN_00e332b0(void)


long FUN_00e332b0(undefined8 param_1,FILE *param_2,long param_3,uint param_4)

{
  int iVar1;
  
  if (param_4 < 3) {
    iVar1 = fseek(param_2,param_3,param_4);
    return -(ulong)(iVar1 != 0);
  }
  return -1;
}


