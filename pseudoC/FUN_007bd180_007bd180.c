// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd180
// Entry Point: 007bd180
// Size: 32 bytes
// Signature: undefined FUN_007bd180(void)


void FUN_007bd180(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2 + *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x3c) = iVar1;
  iVar2 = param_2[4];
  *(int *)(param_1 + 0x40) = iVar2;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x5c) = iVar2;
  return;
}


