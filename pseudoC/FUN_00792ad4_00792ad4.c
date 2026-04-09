// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792ad4
// Entry Point: 00792ad4
// Size: 36 bytes
// Signature: undefined FUN_00792ad4(void)


void FUN_00792ad4(void)

{
  I3DStreamingManager *this;
  
  this = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  I3DStreamingManager::cancelAllI3DLoadTasks(this,false,false);
  StreamManager::getInstance();
  StreamManager::cancelAllStreamQueues();
  return;
}


