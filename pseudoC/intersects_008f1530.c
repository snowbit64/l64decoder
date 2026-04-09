// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersects
// Entry Point: 008f1530
// Size: 8 bytes
// Signature: undefined __thiscall intersects(GeoQuadTree * this, Frustum * param_1)


/* GeoQuadTree::intersects(Frustum const&) */

void __thiscall GeoQuadTree::intersects(GeoQuadTree *this,Frustum *param_1)

{
  QuadTreeNode::intersects(*(QuadTreeNode **)(this + 8),param_1);
  return;
}


