// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9e30
// Entry Point: 006e9e30
// Size: 56 bytes
// Signature: undefined FUN_006e9e30(void)


void FUN_006e9e30(uint *param_1)

{
  AdsBrockerManager *this;
  byte bVar1;
  
  this = (AdsBrockerManager *)AdsBrockerManager::getInstance();
  bVar1 = AdsBrockerManager::getActiveStateAdsOcclusionRegionGroup(this,*param_1);
  param_1[0x42] = 3;
  *(byte *)(param_1 + 0x40) = bVar1 & 1;
  return;
}


