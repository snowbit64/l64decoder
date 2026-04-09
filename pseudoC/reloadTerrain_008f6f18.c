// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reloadTerrain
// Entry Point: 008f6f18
// Size: 44 bytes
// Signature: undefined reloadTerrain(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::reloadTerrain() */

void TerrainPatchOccluderManager::reloadTerrain(void)

{
  TerrainPatchOccluderManager *in_x0;
  GeoMipMappingTerrain *pGVar1;
  
  pGVar1 = *(GeoMipMappingTerrain **)(in_x0 + 0x68);
  clear();
  setCurrentTerrain(in_x0,pGVar1);
  return;
}


