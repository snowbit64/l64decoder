// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7c6b8
// Entry Point: 00d7c6b8
// Size: 20 bytes
// Signature: undefined FUN_00d7c6b8(void)


void FUN_00d7c6b8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x260);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(lVar2 + 0xbc) = uVar1;
  return;
}


