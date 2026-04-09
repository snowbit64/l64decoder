// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd94c
// Entry Point: 007bd94c
// Size: 88 bytes
// Signature: undefined FUN_007bd94c(void)


TerrainDeformation * FUN_007bd94c(uint *param_1)

{
  EntityRegistryManager *this;
  TerrainTransformGroup *pTVar1;
  TerrainDeformation *this_00;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar1 = (TerrainTransformGroup *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pTVar1 == (TerrainTransformGroup *)0x0) || (-1 < (char)pTVar1[0x10])) {
    this_00 = (TerrainDeformation *)0x0;
  }
  else {
    this_00 = (TerrainDeformation *)operator_new(0x160);
                    /* try { // try from 007bd98c to 007bd993 has its CatchHandler @ 007bd9a4 */
    TerrainDeformation::TerrainDeformation(this_00,pTVar1);
  }
  return this_00;
}


