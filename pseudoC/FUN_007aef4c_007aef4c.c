// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aef4c
// Entry Point: 007aef4c
// Size: 48 bytes
// Signature: undefined FUN_007aef4c(void)


void FUN_007aef4c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = TerrainDataPlane::getAssociatedTransformGroup();
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


