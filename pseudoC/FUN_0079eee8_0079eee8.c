// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079eee8
// Entry Point: 0079eee8
// Size: 28 bytes
// Signature: undefined FUN_0079eee8(void)


void FUN_0079eee8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(int *)(param_2 + 0x100) = (int)((ulong)(lVar2 - lVar1) >> 3);
  return;
}


