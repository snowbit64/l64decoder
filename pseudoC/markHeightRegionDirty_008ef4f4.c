// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markHeightRegionDirty
// Entry Point: 008ef4f4
// Size: 316 bytes
// Signature: undefined __thiscall markHeightRegionDirty(GeoMipMappingTerrain * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* GeoMipMappingTerrain::markHeightRegionDirty(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
GeoMipMappingTerrain::markHeightRegionDirty
          (GeoMipMappingTerrain *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TerrainPatchOccluderManager *this_00;
  uint uVar5;
  
  if (BaseTerrain::s_allowTerrainHeightEditing == '\0') {
    return;
  }
  BaseTerrain::markHeightRegionDirty((BaseTerrain *)this,param_1,param_2,param_3,param_4);
  uVar1 = *(uint *)(this + 0x198);
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = param_1 - 1;
  }
  uVar4 = *(int *)(this + 0x19c) - 1;
  uVar2 = uVar2 >> (ulong)(uVar1 & 0x1f);
  if (uVar4 <= uVar2) {
    uVar2 = uVar4;
  }
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_2 - 1;
  }
  uVar5 = uVar5 >> (ulong)(uVar1 & 0x1f);
  uVar3 = param_3 + param_1 >> (ulong)(uVar1 & 0x1f);
  uVar1 = param_4 + param_2 >> (ulong)(uVar1 & 0x1f);
  if (uVar4 <= uVar5) {
    uVar5 = uVar4;
  }
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if (uVar4 <= uVar1) {
    uVar1 = uVar4;
  }
  for (; uVar4 = uVar2, uVar5 <= uVar1; uVar5 = uVar5 + 1) {
    for (; uVar4 <= uVar3; uVar4 = uVar4 + 1) {
      updatePatchHeightInfo(this,uVar4,uVar5);
      this_00 = (TerrainPatchOccluderManager *)TerrainPatchOccluderManager::getInstance();
      TerrainPatchOccluderManager::requestUpdate(this_00,this,uVar4,uVar5);
    }
  }
  GeoQuadTree::onHeightRegionUpdated(*(GeoQuadTree **)(this + 400),param_1,param_2,param_3,param_4);
  return;
}


