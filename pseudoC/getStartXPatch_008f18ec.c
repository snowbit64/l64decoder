// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStartXPatch
// Entry Point: 008f18ec
// Size: 20 bytes
// Signature: undefined getStartXPatch(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GeoMipMappingTerrainPatch::getStartXPatch() const */

uint GeoMipMappingTerrainPatch::getStartXPatch(void)

{
  long in_x0;
  
  return *(uint *)(in_x0 + 0x80) >> (ulong)(*(uint *)(*(long *)(in_x0 + 0x70) + 0x198) & 0x1f);
}


