// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshMainThreadId
// Entry Point: 008f5b68
// Size: 36 bytes
// Signature: undefined refreshMainThreadId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::refreshMainThreadId() */

void TerrainPatchOccluderManager::refreshMainThreadId(void)

{
  undefined8 *in_x0;
  undefined8 uVar1;
  
  uVar1 = ThreadUtil::getCurrentThreadId();
  *in_x0 = uVar1;
  return;
}


