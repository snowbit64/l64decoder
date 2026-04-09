// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1dd94
// Entry Point: 00e1dd94
// Size: 16 bytes
// Signature: undefined FUN_00e1dd94(void)


int FUN_00e1dd94(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = fseek(param_1,param_2,param_3);
    return iVar1;
  }
  return -1;
}


