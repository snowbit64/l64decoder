// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStitchesOccludersAreIdle
// Entry Point: 008f7194
// Size: 32 bytes
// Signature: undefined getStitchesOccludersAreIdle(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::getStitchesOccludersAreIdle() const */

bool TerrainPatchOccluderManager::getStitchesOccludersAreIdle(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x158) == *(long *)(in_x0 + 0x160) && *(int *)(in_x0 + 0x170) == 0;
}


