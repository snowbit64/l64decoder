// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateHeights
// Entry Point: 008f1888
// Size: 36 bytes
// Signature: undefined __thiscall updateHeights(GeoMipMappingTerrainPatch * this, float param_1, float param_2)


/* GeoMipMappingTerrainPatch::updateHeights(float, float) */

void __thiscall
GeoMipMappingTerrainPatch::updateHeights
          (GeoMipMappingTerrainPatch *this,float param_1,float param_2)

{
  updateBoundingSphere(this,param_1,param_2);
  DynamicGeometry::notifyBoundingVolumeDirtyListeners();
  return;
}


