// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEndXPatch
// Entry Point: 008f1914
// Size: 20 bytes
// Signature: undefined getEndXPatch(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GeoMipMappingTerrainPatch::getEndXPatch() const */

uint GeoMipMappingTerrainPatch::getEndXPatch(void)

{
  long in_x0;
  
  return *(uint *)(in_x0 + 0x88) >> (ulong)(*(uint *)(*(long *)(in_x0 + 0x70) + 0x198) & 0x1f);
}


