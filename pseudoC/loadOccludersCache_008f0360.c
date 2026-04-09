// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadOccludersCache
// Entry Point: 008f0360
// Size: 36 bytes
// Signature: undefined __thiscall loadOccludersCache(GeoMipMappingTerrain * this, char * param_1)


/* GeoMipMappingTerrain::loadOccludersCache(char const*) */

void __thiscall GeoMipMappingTerrain::loadOccludersCache(GeoMipMappingTerrain *this,char *param_1)

{
  TerrainPatchOccluderManager *this_00;
  
  this_00 = (TerrainPatchOccluderManager *)TerrainPatchOccluderManager::getInstance();
  TerrainPatchOccluderManager::loadCacheFile(this_00,param_1);
  return;
}


