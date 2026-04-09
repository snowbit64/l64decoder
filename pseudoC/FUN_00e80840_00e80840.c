// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e80840
// Entry Point: 00e80840
// Size: 116 bytes
// Signature: undefined FUN_00e80840(void)


int FUN_00e80840(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x90) / 400;
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  if (iVar1 == -1) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (param_3 * *(int *)(param_1 + 0x90) * 8) / param_2;
    }
  }
  else if (iVar1 == -1000) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (*(int *)(param_1 + 0x90) * 0x3c) / param_2;
    }
    return iVar1 + *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x90);
  }
  return iVar1;
}


