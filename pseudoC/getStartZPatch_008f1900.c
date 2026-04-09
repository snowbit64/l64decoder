// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStartZPatch
// Entry Point: 008f1900
// Size: 20 bytes
// Signature: undefined getStartZPatch(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GeoMipMappingTerrainPatch::getStartZPatch() const */

uint GeoMipMappingTerrainPatch::getStartZPatch(void)

{
  long in_x0;
  
  return *(uint *)(in_x0 + 0x84) >> (ulong)(*(uint *)(*(long *)(in_x0 + 0x70) + 0x198) & 0x1f);
}


