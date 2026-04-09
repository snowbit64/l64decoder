// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeoMipMappingTerrainPatch
// Entry Point: 008f1694
// Size: 116 bytes
// Signature: undefined __thiscall GeoMipMappingTerrainPatch(GeoMipMappingTerrainPatch * this, char * param_1, GeoMipMappingTerrain * param_2)


/* GeoMipMappingTerrainPatch::GeoMipMappingTerrainPatch(char const*, GeoMipMappingTerrain*) */

void __thiscall
GeoMipMappingTerrainPatch::GeoMipMappingTerrainPatch
          (GeoMipMappingTerrainPatch *this,char *param_1,GeoMipMappingTerrain *param_2)

{
  DynamicGeometry::DynamicGeometry((DynamicGeometry *)this,param_1,false);
  *(GeoMipMappingTerrain **)(this + 0x70) = param_2;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined ***)(this + 0x10) = &PTR__GeoMipMappingTerrainPatch_00fde7f8;
  *(undefined ***)this = &PTR__GeoMipMappingTerrainPatch_00fde7a8;
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
  *(uint *)(this + 0x34) = *(uint *)(this + 0x34) & 0xffffffe3 | 8;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined8 *)(this + 0x90) = 1;
  return;
}


