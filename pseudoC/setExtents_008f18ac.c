// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setExtents
// Entry Point: 008f18ac
// Size: 64 bytes
// Signature: undefined __thiscall setExtents(GeoMipMappingTerrainPatch * this, uint param_1, uint param_2, uint param_3, uint param_4, float param_5, float param_6)


/* GeoMipMappingTerrainPatch::setExtents(unsigned int, unsigned int, unsigned int, unsigned int,
   float, float) */

void __thiscall
GeoMipMappingTerrainPatch::setExtents
          (GeoMipMappingTerrainPatch *this,uint param_1,uint param_2,uint param_3,uint param_4,
          float param_5,float param_6)

{
  *(uint *)(this + 0x80) = param_1;
  *(uint *)(this + 0x84) = param_2;
  *(uint *)(this + 0x88) = param_3;
  *(uint *)(this + 0x8c) = param_4;
  *(uint *)(this + 0x90) =
       param_3 - param_1 >> (ulong)(*(uint *)(*(long *)(this + 0x70) + 0x198) & 0x1f);
  updateBoundingSphere(this,param_5,param_6);
  DynamicGeometry::notifyBoundingVolumeDirtyListeners();
  return;
}


