// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHeightRegionUpdated
// Entry Point: 008f050c
// Size: 296 bytes
// Signature: undefined __thiscall onHeightRegionUpdated(QuadTreeNode * this, uint param_1, uint param_2, uint param_3, uint param_4, GeoMipMappingTerrain * param_5)


/* GeoQuadTree::QuadTreeNode::onHeightRegionUpdated(unsigned int, unsigned int, unsigned int,
   unsigned int, GeoMipMappingTerrain*) */

void __thiscall
GeoQuadTree::QuadTreeNode::onHeightRegionUpdated
          (QuadTreeNode *this,uint param_1,uint param_2,uint param_3,uint param_4,
          GeoMipMappingTerrain *param_5)

{
  if ((((*(uint *)this < param_3 + param_1) && (param_1 < *(uint *)(this + 8))) &&
      (*(uint *)(this + 4) < param_4 + param_2)) && (param_2 < *(uint *)(this + 0xc))) {
    GeoMipMappingTerrain::queryMinMaxHeights
              (param_5,*(uint *)this,*(uint *)(this + 4),*(uint *)(this + 8),*(uint *)(this + 0xc),
               (float *)(this + 0x20),(float *)(this + 0x24));
    if (*(GeoMipMappingTerrainPatch **)(this + 0x60) != (GeoMipMappingTerrainPatch *)0x0) {
      GeoMipMappingTerrainPatch::setExtents
                (*(GeoMipMappingTerrainPatch **)(this + 0x60),*(uint *)this,*(uint *)(this + 4),
                 *(uint *)(this + 8),*(uint *)(this + 0xc),*(float *)(this + 0x20),
                 *(float *)(this + 0x24));
    }
    if (this[0x38] != (QuadTreeNode)0x0) {
      onHeightRegionUpdated(*(QuadTreeNode **)(this + 0x40),param_1,param_2,param_3,param_4,param_5)
      ;
      onHeightRegionUpdated(*(QuadTreeNode **)(this + 0x48),param_1,param_2,param_3,param_4,param_5)
      ;
      onHeightRegionUpdated(*(QuadTreeNode **)(this + 0x50),param_1,param_2,param_3,param_4,param_5)
      ;
      onHeightRegionUpdated(*(QuadTreeNode **)(this + 0x58),param_1,param_2,param_3,param_4,param_5)
      ;
      return;
    }
  }
  return;
}


