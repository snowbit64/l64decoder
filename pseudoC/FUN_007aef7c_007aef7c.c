// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aef7c
// Entry Point: 007aef7c
// Size: 48 bytes
// Signature: undefined FUN_007aef7c(void)


void FUN_007aef7c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = DensityMap::getSquareSize();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


