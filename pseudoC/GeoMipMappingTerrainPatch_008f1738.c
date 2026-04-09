// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GeoMipMappingTerrainPatch
// Entry Point: 008f1738
// Size: 40 bytes
// Signature: undefined __thiscall ~GeoMipMappingTerrainPatch(GeoMipMappingTerrainPatch * this)


/* non-virtual thunk to GeoMipMappingTerrainPatch::~GeoMipMappingTerrainPatch() */

void __thiscall
GeoMipMappingTerrainPatch::~GeoMipMappingTerrainPatch(GeoMipMappingTerrainPatch *this)

{
  DynamicGeometry::~DynamicGeometry((DynamicGeometry *)(this + -0x10));
  operator_delete((DynamicGeometry *)(this + -0x10));
  return;
}


