// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAdsProvider
// Entry Point: 00af19cc
// Size: 100 bytes
// Signature: undefined __thiscall createAdsProvider(AdsProviderManager * this, uint param_1, char * param_2)


/* AdsProviderManager::createAdsProvider(unsigned int, char const*) */

void __thiscall
AdsProviderManager::createAdsProvider(AdsProviderManager *this,uint param_1,char *param_2)

{
  GiantsAdsProvider *pGVar1;
  
  pGVar1 = *(GiantsAdsProvider **)this;
  if (pGVar1 != (GiantsAdsProvider *)0x0) {
    GiantsAdsProvider::~GiantsAdsProvider(pGVar1);
    operator_delete(pGVar1);
  }
  *(undefined8 *)this = 0;
  pGVar1 = (GiantsAdsProvider *)operator_new(0x1d0);
                    /* try { // try from 00af1a10 to 00af1a1b has its CatchHandler @ 00af1a30 */
  GiantsAdsProvider::GiantsAdsProvider(pGVar1,param_1,param_2);
  *(GiantsAdsProvider **)this = pGVar1;
  return;
}


