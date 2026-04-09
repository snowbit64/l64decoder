// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AdsProviderManager
// Entry Point: 00af1994
// Size: 56 bytes
// Signature: undefined __thiscall ~AdsProviderManager(AdsProviderManager * this)


/* AdsProviderManager::~AdsProviderManager() */

void __thiscall AdsProviderManager::~AdsProviderManager(AdsProviderManager *this)

{
  GiantsAdsProvider *this_00;
  
  this_00 = *(GiantsAdsProvider **)this;
  if (this_00 != (GiantsAdsProvider *)0x0) {
    GiantsAdsProvider::~GiantsAdsProvider(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


