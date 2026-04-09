// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3efc
// Entry Point: 007b3efc
// Size: 76 bytes
// Signature: undefined FUN_007b3efc(void)


void FUN_007b3efc(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = BaseTerrain::getLodBlendStartDynamic();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  uVar1 = BaseTerrain::getLodBlendEndDynamic();
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  return;
}


