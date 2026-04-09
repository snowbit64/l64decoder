// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateQuadTree
// Entry Point: 008f0e60
// Size: 68 bytes
// Signature: undefined __thiscall updateQuadTree(GeoQuadTree * this, Vector3 * param_1, float param_2, bool param_3)


/* GeoQuadTree::updateQuadTree(Vector3 const&, float, bool) */

void __thiscall
GeoQuadTree::updateQuadTree(GeoQuadTree *this,Vector3 *param_1,float param_2,bool param_3)

{
  updateQuadTree(this,*(QuadTreeNode **)(this + 8),param_1,param_2,param_3);
  updateQuadTreeLodDeltas
            (this,*(QuadTreeNode **)(this + 8),(QuadTreeNode *)0x0,(QuadTreeNode *)0x0,
             (QuadTreeNode *)0x0,(QuadTreeNode *)0x0);
  return;
}


