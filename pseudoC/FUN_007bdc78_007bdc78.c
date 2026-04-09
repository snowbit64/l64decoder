// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bdc78
// Entry Point: 007bdc78
// Size: 44 bytes
// Signature: undefined FUN_007bdc78(void)


void FUN_007bdc78(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = TerrainDeformation::getBlockedAreaMapSize();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


