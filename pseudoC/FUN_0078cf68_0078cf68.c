// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cf68
// Entry Point: 0078cf68
// Size: 88 bytes
// Signature: undefined FUN_0078cf68(void)


void FUN_0078cf68(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[4];
  iVar3 = *param_1;
  iVar1 = iVar2;
  if (iVar3 <= iVar2) {
    iVar1 = iVar3;
  }
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  if (((iVar1 == iVar2) || (iVar1 == 4 && iVar2 == 10)) || ((iVar1 == 3 && (iVar2 == 9)))) {
    *(undefined *)(param_1 + 0x40) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x40) = 0;
  }
  param_1[0x42] = 3;
  return;
}


