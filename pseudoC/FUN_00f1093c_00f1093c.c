// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1093c
// Entry Point: 00f1093c
// Size: 64 bytes
// Signature: undefined FUN_00f1093c(void)


void FUN_00f1093c(long param_1,long *param_2,long *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x20);
  uVar3 = (ulong)*(int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  *param_4 = *(undefined4 *)(param_1 + 0x34);
  iVar5 = 0;
  if (uVar3 != 0) {
    iVar5 = (int)(((long)iVar2 - 0x38U) / uVar3);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *param_2 = param_1 + 0x38 + (long)iVar1 + uVar3;
  *param_3 = param_1 + 0x38 + uVar3 * (long)iVar5;
  *param_5 = uVar4;
  return;
}


