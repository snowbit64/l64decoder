// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9de4
// Entry Point: 006e9de4
// Size: 36 bytes
// Signature: undefined FUN_006e9de4(void)


void FUN_006e9de4(uint *param_1)

{
  AdsBrockerManager *this;
  
  this = (AdsBrockerManager *)AdsBrockerManager::getInstance();
  AdsBrockerManager::clearOcclusionRegionGroup(this,*param_1);
  return;
}


