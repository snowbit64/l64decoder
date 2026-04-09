// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079e6d4
// Entry Point: 0079e6d4
// Size: 32 bytes
// Signature: undefined FUN_0079e6d4(void)


void FUN_0079e6d4(long param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  param_2[0x42] = 3;
  *(byte *)(param_2 + 0x40) = (byte)(uVar1 >> ((ulong)*param_2 & 0x3f)) & 1;
  return;
}


