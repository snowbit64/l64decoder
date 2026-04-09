// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df4e1c
// Entry Point: 00df4e1c
// Size: 92 bytes
// Signature: undefined FUN_00df4e1c(void)


void FUN_00df4e1c(undefined *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2[2] + (int)*param_2 + (int)param_2[4] + (int)param_2[6];
  iVar2 = (int)param_2[3] + (int)param_2[1] + (int)param_2[5] + (int)param_2[7];
  *param_1 = (char)(iVar1 + (iVar1 >> 0x1f) + 2U >> 2);
  param_1[1] = (char)(iVar2 + (iVar2 >> 0x1f) + 2U >> 2);
  return;
}


