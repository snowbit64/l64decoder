// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMainOccludersAreIdle
// Entry Point: 008f6398
// Size: 32 bytes
// Signature: undefined getMainOccludersAreIdle(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::getMainOccludersAreIdle() const */

bool TerrainPatchOccluderManager::getMainOccludersAreIdle(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x138) == *(long *)(in_x0 + 0x140) && *(int *)(in_x0 + 0x150) == 0;
}


