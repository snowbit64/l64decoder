// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007926e0
// Entry Point: 007926e0
// Size: 40 bytes
// Signature: undefined FUN_007926e0(void)


void FUN_007926e0(uint *param_1)

{
  I3DStreamingManager *this;
  
  this = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  I3DStreamingManager::cancelI3DLoadTask(this,*param_1,true);
  return;
}


