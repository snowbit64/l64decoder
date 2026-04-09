// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa32c
// Entry Point: 007aa32c
// Size: 24 bytes
// Signature: undefined FUN_007aa32c(void)


void FUN_007aa32c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 400);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = (byte)(uVar1 >> 0xc) & 1;
  return;
}


