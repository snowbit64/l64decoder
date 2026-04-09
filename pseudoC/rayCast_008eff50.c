// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayCast
// Entry Point: 008eff50
// Size: 8 bytes
// Signature: undefined __thiscall rayCast(GeoMipMappingTerrain * this, Vector3 * param_1, Vector3 * param_2, float * param_3, Vector3 * param_4)


/* GeoMipMappingTerrain::rayCast(Vector3 const&, Vector3 const&, float&, Vector3&) */

void __thiscall
GeoMipMappingTerrain::rayCast
          (GeoMipMappingTerrain *this,Vector3 *param_1,Vector3 *param_2,float *param_3,
          Vector3 *param_4)

{
  GeoQuadTree::rayCast(*(GeoQuadTree **)(this + 400),param_1,param_2,param_3,param_4);
  return;
}


