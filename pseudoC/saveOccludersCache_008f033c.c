// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveOccludersCache
// Entry Point: 008f033c
// Size: 36 bytes
// Signature: undefined __thiscall saveOccludersCache(GeoMipMappingTerrain * this, char * param_1)


/* GeoMipMappingTerrain::saveOccludersCache(char const*) */

void __thiscall GeoMipMappingTerrain::saveOccludersCache(GeoMipMappingTerrain *this,char *param_1)

{
  TerrainPatchOccluderManager *this_00;
  
  this_00 = (TerrainPatchOccluderManager *)TerrainPatchOccluderManager::getInstance();
  TerrainPatchOccluderManager::saveCacheFile(this_00,param_1);
  return;
}


