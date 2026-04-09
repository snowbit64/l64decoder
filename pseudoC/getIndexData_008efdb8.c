// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndexData
// Entry Point: 008efdb8
// Size: 12 bytes
// Signature: undefined __thiscall getIndexData(GeoMipMappingTerrain * this, uint param_1)


/* GeoMipMappingTerrain::getIndexData(unsigned int) */

GeoMipMappingTerrain * __thiscall
GeoMipMappingTerrain::getIndexData(GeoMipMappingTerrain *this,uint param_1)

{
  return this + (ulong)param_1 * 0x10 + 0x1d8;
}


