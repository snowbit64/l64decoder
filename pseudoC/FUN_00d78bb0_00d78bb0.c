// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d78bb0
// Entry Point: 00d78bb0
// Size: 44 bytes
// Signature: undefined FUN_00d78bb0(void)


void FUN_00d78bb0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x248);
  iVar2 = *(int *)(*(long *)(param_1 + 0x250) + 0x20);
  *(undefined4 *)(*(long *)(param_1 + 0x250) + 0x20) = 0;
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + (iVar1 >> 3);
  return;
}


