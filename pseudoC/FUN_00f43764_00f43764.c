// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f43764
// Entry Point: 00f43764
// Size: 100 bytes
// Signature: undefined FUN_00f43764(void)


void FUN_00f43764(long param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  while (lVar2 != 0) {
    param_2 = param_2 + 1;
    FUN_00f43764(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    param_1 = *(long *)(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  iVar1 = *param_3;
  if (*param_3 <= param_2) {
    iVar1 = param_2;
  }
  *param_3 = iVar1;
  return;
}


