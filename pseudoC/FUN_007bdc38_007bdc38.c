// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bdc38
// Entry Point: 007bdc38
// Size: 48 bytes
// Signature: undefined FUN_007bdc38(void)


void FUN_007bdc38(TerrainDeformation *param_1,int *param_2)

{
  TerrainBrush *pTVar1;
  
  pTVar1 = (TerrainBrush *)TerrainBrush::createBrush(*(BaseTerrain **)(param_1 + 0x38),*param_2);
  TerrainDeformation::setOutsideAreaBrush(param_1,pTVar1);
  return;
}


