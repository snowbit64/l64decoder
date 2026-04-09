// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDirtyTerrainSculpt
// Entry Point: 009c40d4
// Size: 36 bytes
// Signature: undefined setDirtyTerrainSculpt(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::setDirtyTerrainSculpt() */

void ProceduralPlacementCacheManager::setDirtyTerrainSculpt(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x198) != 0) {
    *(undefined *)(*(long *)(in_x0 + 0x198) + 0xd0) = 1;
  }
  if (*(long *)(in_x0 + 0x1a0) != 0) {
    *(undefined *)(*(long *)(in_x0 + 0x1a0) + 0xd0) = 1;
  }
  return;
}


