// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOccluderData
// Entry Point: 008efde0
// Size: 20 bytes
// Signature: undefined __thiscall getOccluderData(GeoMipMappingTerrain * this, uint param_1, uint param_2)


/* GeoMipMappingTerrain::getOccluderData(unsigned int, unsigned int) const */

undefined8 __thiscall
GeoMipMappingTerrain::getOccluderData(GeoMipMappingTerrain *this,uint param_1,uint param_2)

{
  return *(undefined8 *)
          (*(long *)(this + 0x2c8) + (ulong)(param_1 + *(int *)(this + 0x19c) * param_2) * 8);
}


