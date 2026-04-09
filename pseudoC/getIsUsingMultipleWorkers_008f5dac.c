// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsUsingMultipleWorkers
// Entry Point: 008f5dac
// Size: 36 bytes
// Signature: undefined getIsUsingMultipleWorkers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::getIsUsingMultipleWorkers() const */

bool TerrainPatchOccluderManager::getIsUsingMultipleWorkers(void)

{
  long in_x0;
  long *plVar1;
  
  plVar1 = *(long **)(in_x0 + 0x180);
  if (plVar1 != (long *)0x0) {
    return (plVar1[1] - *plVar1 & 0x7fffffff0U) != 0;
  }
  return false;
}


