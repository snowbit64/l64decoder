// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7bb7c
// Entry Point: 00d7bb7c
// Size: 20 bytes
// Signature: undefined FUN_00d7bb7c(void)


void FUN_00d7bb7c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x260);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined *)(lVar2 + 0x48) = 0;
  *(undefined4 *)(lVar2 + 0x50) = uVar1;
  return;
}


