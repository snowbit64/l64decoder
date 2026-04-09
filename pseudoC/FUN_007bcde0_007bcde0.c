// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcde0
// Entry Point: 007bcde0
// Size: 24 bytes
// Signature: undefined FUN_007bcde0(void)


void FUN_007bcde0(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[4];
  *(int *)(param_1 + 0x18) = *param_2 + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}


