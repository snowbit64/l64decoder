// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aefe8
// Entry Point: 007aefe8
// Size: 20 bytes
// Signature: undefined FUN_007aefe8(void)


void FUN_007aefe8(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


