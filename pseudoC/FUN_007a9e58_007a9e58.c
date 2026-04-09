// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9e58
// Entry Point: 007a9e58
// Size: 40 bytes
// Signature: undefined FUN_007a9e58(void)


void FUN_007a9e58(long param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x12) >> 2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x210) & 0x3f;
  }
  *(uint *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


