// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ab24
// Entry Point: 00f0ab24
// Size: 24 bytes
// Signature: undefined FUN_00f0ab24(void)


void FUN_00f0ab24(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  iVar1 = iVar2 + param_2;
  if (param_2 <= iVar2) {
    iVar1 = iVar2 << 1;
  }
  FUN_00f0a950(param_1,iVar1);
  return;
}


