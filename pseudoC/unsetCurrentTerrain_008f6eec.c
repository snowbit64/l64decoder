// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unsetCurrentTerrain
// Entry Point: 008f6eec
// Size: 20 bytes
// Signature: undefined __thiscall unsetCurrentTerrain(TerrainPatchOccluderManager * this, GeoMipMappingTerrain * param_1)


/* TerrainPatchOccluderManager::unsetCurrentTerrain(GeoMipMappingTerrain&) */

void __thiscall
TerrainPatchOccluderManager::unsetCurrentTerrain
          (TerrainPatchOccluderManager *this,GeoMipMappingTerrain *param_1)

{
  if (*(GeoMipMappingTerrain **)(this + 0x68) != param_1) {
    return;
  }
  clear();
  return;
}


