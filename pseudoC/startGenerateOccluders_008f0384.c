// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startGenerateOccluders
// Entry Point: 008f0384
// Size: 20 bytes
// Signature: undefined startGenerateOccluders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GeoMipMappingTerrain::startGenerateOccluders() */

void GeoMipMappingTerrain::startGenerateOccluders(void)

{
  TerrainPatchOccluderManager::getInstance();
  TerrainPatchOccluderManager::startGenerateOccluders();
  return;
}


