// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae8b0
// Entry Point: 007ae8b0
// Size: 20 bytes
// Signature: undefined FUN_007ae8b0(void)


void FUN_007ae8b0(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


