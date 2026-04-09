// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getActiveStateAdsOcclusionRegionGroup
// Entry Point: 006f9120
// Size: 36 bytes
// Signature: undefined __thiscall getActiveStateAdsOcclusionRegionGroup(AdsBrockerManager * this, uint param_1)


/* AdsBrockerManager::getActiveStateAdsOcclusionRegionGroup(unsigned int) const */

bool __thiscall
AdsBrockerManager::getActiveStateAdsOcclusionRegionGroup(AdsBrockerManager *this,uint param_1)

{
  if (param_1 < 0x20) {
    return this[(ulong)param_1 + 0x98] != (AdsBrockerManager)0x0;
  }
  return false;
}


