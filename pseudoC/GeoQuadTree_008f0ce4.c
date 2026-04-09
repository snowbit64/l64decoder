// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GeoQuadTree
// Entry Point: 008f0ce4
// Size: 56 bytes
// Signature: undefined __thiscall ~GeoQuadTree(GeoQuadTree * this)


/* GeoQuadTree::~GeoQuadTree() */

void __thiscall GeoQuadTree::~GeoQuadTree(GeoQuadTree *this)

{
  QuadTreeNode *this_00;
  
  this_00 = *(QuadTreeNode **)(this + 8);
  if (this_00 != (QuadTreeNode *)0x0) {
    QuadTreeNode::~QuadTreeNode(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


