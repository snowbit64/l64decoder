// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aefac
// Entry Point: 007aefac
// Size: 20 bytes
// Signature: undefined FUN_007aefac(void)


void FUN_007aefac(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


