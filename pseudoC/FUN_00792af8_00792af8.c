// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792af8
// Entry Point: 00792af8
// Size: 36 bytes
// Signature: undefined FUN_00792af8(void)


void FUN_00792af8(undefined8 param_1)

{
  I3DStreamingManager *this;
  
  this = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  I3DStreamingManager::enableTrace(this,*(bool *)param_1);
  return;
}


