// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 008f586c
// Size: 44 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::init() */

void TerrainPatchOccluderManager::init(void)

{
  undefined8 *in_x0;
  undefined8 uVar1;
  
  uVar1 = ThreadUtil::getCurrentThreadId();
  *in_x0 = uVar1;
  initSingleWorker();
  return;
}


