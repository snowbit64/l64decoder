// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setActiveStateAdsOcclusionRegionGroup
// Entry Point: 006f9108
// Size: 24 bytes
// Signature: undefined __thiscall setActiveStateAdsOcclusionRegionGroup(AdsBrockerManager * this, uint param_1, bool param_2)


/* AdsBrockerManager::setActiveStateAdsOcclusionRegionGroup(unsigned int, bool) */

void __thiscall
AdsBrockerManager::setActiveStateAdsOcclusionRegionGroup
          (AdsBrockerManager *this,uint param_1,bool param_2)

{
  if (param_1 < 0x20) {
    this[(ulong)param_1 + 0x98] = (AdsBrockerManager)param_2;
  }
  return;
}


