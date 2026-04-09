// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyAdsProvider
// Entry Point: 00af1a44
// Size: 56 bytes
// Signature: undefined destroyAdsProvider(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AdsProviderManager::destroyAdsProvider() */

void AdsProviderManager::destroyAdsProvider(void)

{
  GiantsAdsProvider **in_x0;
  GiantsAdsProvider *this;
  
  this = *in_x0;
  if (this != (GiantsAdsProvider *)0x0) {
    GiantsAdsProvider::~GiantsAdsProvider(this);
    operator_delete(this);
  }
  *in_x0 = (GiantsAdsProvider *)0x0;
  return;
}


