// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayCast
// Entry Point: 008f1524
// Size: 12 bytes
// Signature: undefined __thiscall rayCast(GeoQuadTree * this, Vector3 * param_1, Vector3 * param_2, float * param_3, Vector3 * param_4)


/* GeoQuadTree::rayCast(Vector3 const&, Vector3 const&, float&, Vector3&) */

void __thiscall
GeoQuadTree::rayCast
          (GeoQuadTree *this,Vector3 *param_1,Vector3 *param_2,float *param_3,Vector3 *param_4)

{
  QuadTreeNode::rayCast
            (*(QuadTreeNode **)(this + 8),param_1,param_2,param_3,param_4,
             *(GeoMipMappingTerrain **)this);
  return;
}


