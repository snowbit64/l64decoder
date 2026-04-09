// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEndZPatch
// Entry Point: 008f1928
// Size: 20 bytes
// Signature: undefined getEndZPatch(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GeoMipMappingTerrainPatch::getEndZPatch() const */

uint GeoMipMappingTerrainPatch::getEndZPatch(void)

{
  long in_x0;
  
  return *(uint *)(in_x0 + 0x8c) >> (ulong)(*(uint *)(*(long *)(in_x0 + 0x70) + 0x198) & 0x1f);
}


