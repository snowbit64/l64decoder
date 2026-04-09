// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateGeometryLod
// Entry Point: 008eff48
// Size: 8 bytes
// Signature: undefined __thiscall updateGeometryLod(GeoMipMappingTerrain * this, Vector3 * param_1, float param_2, bool param_3)


/* GeoMipMappingTerrain::updateGeometryLod(Vector3 const&, float, bool) */

void __thiscall
GeoMipMappingTerrain::updateGeometryLod
          (GeoMipMappingTerrain *this,Vector3 *param_1,float param_2,bool param_3)

{
  GeoQuadTree::updateQuadTree(*(GeoQuadTree **)(this + 400),param_1,param_2,param_3);
  return;
}


