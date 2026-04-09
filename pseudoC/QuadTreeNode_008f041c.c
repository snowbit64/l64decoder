// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~QuadTreeNode
// Entry Point: 008f041c
// Size: 148 bytes
// Signature: undefined __thiscall ~QuadTreeNode(QuadTreeNode * this)


/* GeoQuadTree::QuadTreeNode::~QuadTreeNode() */

void __thiscall GeoQuadTree::QuadTreeNode::~QuadTreeNode(QuadTreeNode *this)

{
  GeoMipMappingTerrainPatch *pGVar1;
  QuadTreeNode *pQVar2;
  
  if (this[0x38] != (QuadTreeNode)0x0) {
    pQVar2 = *(QuadTreeNode **)(this + 0x40);
    if (pQVar2 != (QuadTreeNode *)0x0) {
      ~QuadTreeNode(pQVar2);
      operator_delete(pQVar2);
    }
    pQVar2 = *(QuadTreeNode **)(this + 0x48);
    if (pQVar2 != (QuadTreeNode *)0x0) {
      ~QuadTreeNode(pQVar2);
      operator_delete(pQVar2);
    }
    pQVar2 = *(QuadTreeNode **)(this + 0x50);
    if (pQVar2 != (QuadTreeNode *)0x0) {
      ~QuadTreeNode(pQVar2);
      operator_delete(pQVar2);
    }
    pQVar2 = *(QuadTreeNode **)(this + 0x58);
    if (pQVar2 != (QuadTreeNode *)0x0) {
      ~QuadTreeNode(pQVar2);
      operator_delete(pQVar2);
    }
  }
  pGVar1 = *(GeoMipMappingTerrainPatch **)(this + 0x60);
  if (pGVar1 != (GeoMipMappingTerrainPatch *)0x0) {
                    /* try { // try from 008f04a0 to 008f04a3 has its CatchHandler @ 008f04b0 */
    GeoMipMappingTerrain::freePatch(*(GeoMipMappingTerrain **)(pGVar1 + 0x70),pGVar1);
  }
  return;
}


