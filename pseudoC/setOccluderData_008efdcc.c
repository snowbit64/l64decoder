// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOccluderData
// Entry Point: 008efdcc
// Size: 20 bytes
// Signature: undefined __thiscall setOccluderData(GeoMipMappingTerrain * this, uint param_1, uint param_2, void * param_3)


/* GeoMipMappingTerrain::setOccluderData(unsigned int, unsigned int, void*) */

void __thiscall
GeoMipMappingTerrain::setOccluderData
          (GeoMipMappingTerrain *this,uint param_1,uint param_2,void *param_3)

{
  *(void **)(*(long *)(this + 0x2c8) + (ulong)(param_1 + *(int *)(this + 0x19c) * param_2) * 8) =
       param_3;
  return;
}


