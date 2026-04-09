// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GeoMipMappingTerrainPatch
// Entry Point: 008f1714
// Size: 36 bytes
// Signature: undefined __thiscall ~GeoMipMappingTerrainPatch(GeoMipMappingTerrainPatch * this)


/* GeoMipMappingTerrainPatch::~GeoMipMappingTerrainPatch() */

void __thiscall
GeoMipMappingTerrainPatch::~GeoMipMappingTerrainPatch(GeoMipMappingTerrainPatch *this)

{
  DynamicGeometry::~DynamicGeometry((DynamicGeometry *)this);
  operator_delete(this);
  return;
}


