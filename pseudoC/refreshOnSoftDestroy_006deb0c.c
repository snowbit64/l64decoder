// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshOnSoftDestroy
// Entry Point: 006deb0c
// Size: 24 bytes
// Signature: undefined refreshOnSoftDestroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::refreshOnSoftDestroy() */

void EngineApplication::refreshOnSoftDestroy(void)

{
  ThreadUtil::setCurrentThreadAsMainthread();
  TerrainPatchOccluderManager::getInstance();
  TerrainPatchOccluderManager::refreshMainThreadId();
  return;
}


