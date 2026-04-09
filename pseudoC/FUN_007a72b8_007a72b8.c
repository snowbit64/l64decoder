// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a72b8
// Entry Point: 007a72b8
// Size: 32 bytes
// Signature: undefined FUN_007a72b8(void)


void FUN_007a72b8(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = *(uint *)(param_1 + 0x120);
  *(undefined4 *)(param_2 + 0x108) = 2;
  *(uint *)(param_2 + 0x100) = uVar2 & (iVar1 << 0x15) >> 0x1f;
  return;
}


