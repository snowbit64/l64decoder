// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: configureShapes
// Entry Point: 008ef66c
// Size: 24 bytes
// Signature: undefined __thiscall configureShapes(GeoMipMappingTerrain * this, TerrainTransformGroup * param_1, bool param_2, uint param_3)


/* GeoMipMappingTerrain::configureShapes(TerrainTransformGroup*, bool, unsigned int) */

undefined8 __thiscall
GeoMipMappingTerrain::configureShapes
          (GeoMipMappingTerrain *this,TerrainTransformGroup *param_1,bool param_2,uint param_3)

{
  *(TerrainTransformGroup **)(this + 0x1c0) = param_1;
  this[0x1c8] = (GeoMipMappingTerrain)param_2;
  *(uint *)(this + 0x1cc) = param_3;
  return 1;
}


