// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9ec0
// Entry Point: 007a9ec0
// Size: 24 bytes
// Signature: undefined FUN_007a9ec0(void)


void FUN_007a9ec0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 400);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = (byte)(uVar1 >> 10) & 1;
  return;
}


