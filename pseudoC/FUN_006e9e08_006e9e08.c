// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9e08
// Entry Point: 006e9e08
// Size: 40 bytes
// Signature: undefined FUN_006e9e08(void)


void FUN_006e9e08(uint *param_1)

{
  AdsBrockerManager *this;
  
  this = (AdsBrockerManager *)AdsBrockerManager::getInstance();
  AdsBrockerManager::setActiveStateAdsOcclusionRegionGroup(this,*param_1,*(bool *)(param_1 + 4));
  return;
}


