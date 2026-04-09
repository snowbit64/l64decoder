// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersects
// Entry Point: 008eff58
// Size: 8 bytes
// Signature: undefined __thiscall intersects(GeoMipMappingTerrain * this, Frustum * param_1)


/* GeoMipMappingTerrain::intersects(Frustum const&) */

void __thiscall GeoMipMappingTerrain::intersects(GeoMipMappingTerrain *this,Frustum *param_1)

{
  GeoQuadTree::intersects(*(GeoQuadTree **)(this + 400),param_1);
  return;
}


