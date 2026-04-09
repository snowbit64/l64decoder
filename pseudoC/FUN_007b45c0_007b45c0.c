// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b45c0
// Entry Point: 007b45c0
// Size: 80 bytes
// Signature: undefined FUN_007b45c0(void)


void FUN_007b45c0(undefined8 param_1,long param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = BaseTerrain::getHeightMapSize();
  fVar2 = (float)BaseTerrain::getUnitsPerPixel();
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(float *)(param_2 + 0x100) = fVar2 * (float)(ulong)(iVar1 - 1);
  return;
}


