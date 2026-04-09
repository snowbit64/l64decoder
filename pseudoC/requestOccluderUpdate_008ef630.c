// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestOccluderUpdate
// Entry Point: 008ef630
// Size: 60 bytes
// Signature: undefined __thiscall requestOccluderUpdate(GeoMipMappingTerrain * this, uint param_1, uint param_2)


/* GeoMipMappingTerrain::requestOccluderUpdate(unsigned int, unsigned int) */

void __thiscall
GeoMipMappingTerrain::requestOccluderUpdate(GeoMipMappingTerrain *this,uint param_1,uint param_2)

{
  TerrainPatchOccluderManager *this_00;
  
  this_00 = (TerrainPatchOccluderManager *)TerrainPatchOccluderManager::getInstance();
  TerrainPatchOccluderManager::requestUpdate(this_00,this,param_1,param_2);
  return;
}


