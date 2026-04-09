// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPatch
// Entry Point: 008f04b4
// Size: 88 bytes
// Signature: undefined __thiscall setPatch(QuadTreeNode * this, GeoMipMappingTerrainPatch * param_1)


/* GeoQuadTree::QuadTreeNode::setPatch(GeoMipMappingTerrainPatch*) */

void __thiscall
GeoQuadTree::QuadTreeNode::setPatch(QuadTreeNode *this,GeoMipMappingTerrainPatch *param_1)

{
  GeoMipMappingTerrainPatch *pGVar1;
  
  pGVar1 = *(GeoMipMappingTerrainPatch **)(this + 0x60);
  if (pGVar1 != (GeoMipMappingTerrainPatch *)0x0) {
    GeoMipMappingTerrain::freePatch(*(GeoMipMappingTerrain **)(pGVar1 + 0x70),pGVar1);
  }
  *(GeoMipMappingTerrainPatch **)(this + 0x60) = param_1;
  if (param_1 != (GeoMipMappingTerrainPatch *)0x0) {
    GeoMipMappingTerrainPatch::setExtents
              (param_1,*(uint *)this,*(uint *)(this + 4),*(uint *)(this + 8),*(uint *)(this + 0xc),
               *(float *)(this + 0x20),*(float *)(this + 0x24));
    return;
  }
  return;
}


