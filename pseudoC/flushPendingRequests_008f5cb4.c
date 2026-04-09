// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flushPendingRequests
// Entry Point: 008f5cb4
// Size: 88 bytes
// Signature: undefined flushPendingRequests(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::flushPendingRequests() */

void TerrainPatchOccluderManager::flushPendingRequests(void)

{
  long in_x0;
  
  while (((*(long *)(in_x0 + 0x138) != *(long *)(in_x0 + 0x140) || *(int *)(in_x0 + 0x150) != 0 ||
          (*(long *)(in_x0 + 0x158) != *(long *)(in_x0 + 0x160))) || (*(int *)(in_x0 + 0x170) != 0))
        ) {
    ThreadUtil::usleep(1000);
    update();
  }
  return;
}


