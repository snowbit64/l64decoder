// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3eb0
// Entry Point: 007b3eb0
// Size: 76 bytes
// Signature: undefined FUN_007b3eb0(void)


void FUN_007b3eb0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = BaseTerrain::getLodBlendStart();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  uVar1 = BaseTerrain::getLodBlendEnd();
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  return;
}


