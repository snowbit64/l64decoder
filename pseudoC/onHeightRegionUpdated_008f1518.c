// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHeightRegionUpdated
// Entry Point: 008f1518
// Size: 12 bytes
// Signature: undefined __thiscall onHeightRegionUpdated(GeoQuadTree * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* GeoQuadTree::onHeightRegionUpdated(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
GeoQuadTree::onHeightRegionUpdated
          (GeoQuadTree *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  QuadTreeNode::onHeightRegionUpdated
            (*(QuadTreeNode **)(this + 8),param_1,param_2,param_3,param_4,
             *(GeoMipMappingTerrain **)this);
  return;
}


