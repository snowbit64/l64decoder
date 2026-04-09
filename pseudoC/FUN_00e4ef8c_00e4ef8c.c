// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4ef8c
// Entry Point: 00e4ef8c
// Size: 88 bytes
// Signature: undefined FUN_00e4ef8c(void)


int FUN_00e4ef8c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00e4c7e4();
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  iVar2 = FUN_00e4c7e4(param_1);
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  iVar3 = FUN_00e4c7e4(param_1);
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  iVar4 = FUN_00e4c7e4(param_1);
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  return iVar1 + iVar2 * 0x100 + iVar3 * 0x10000 + iVar4 * 0x1000000;
}


