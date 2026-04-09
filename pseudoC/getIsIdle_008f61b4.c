// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsIdle
// Entry Point: 008f61b4
// Size: 60 bytes
// Signature: undefined getIsIdle(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::getIsIdle() const */

bool TerrainPatchOccluderManager::getIsIdle(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x138) != *(long *)(in_x0 + 0x140) || *(int *)(in_x0 + 0x150) != 0) {
    return false;
  }
  return *(long *)(in_x0 + 0x158) == *(long *)(in_x0 + 0x160) && *(int *)(in_x0 + 0x170) == 0;
}


