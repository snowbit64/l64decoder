// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyAdPlacement
// Entry Point: 00af2a44
// Size: 184 bytes
// Signature: undefined __thiscall destroyAdPlacement(GiantsAdsProvider * this, GiantsAdPlacement * param_1)


/* GiantsAdsProvider::destroyAdPlacement(GiantsAdPlacement*) */

void __thiscall
GiantsAdsProvider::destroyAdPlacement(GiantsAdsProvider *this,GiantsAdPlacement *param_1)

{
  GiantsAdPlacement **ppGVar1;
  size_t __n;
  GiantsAdPlacement **__dest;
  
  Mutex::enterCriticalSection();
  __dest = *(GiantsAdPlacement ***)(this + 0xa0);
  ppGVar1 = *(GiantsAdPlacement ***)(this + 0xa8);
  if (__dest == ppGVar1) {
LAB_00af2a94:
    if (__dest != ppGVar1) {
      __n = (long)ppGVar1 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(size_t *)(this + 0xa8) = (long)__dest + __n;
    }
  }
  else {
    do {
      if (*__dest == param_1) goto LAB_00af2a94;
      __dest = __dest + 1;
    } while (__dest != ppGVar1);
  }
  Mutex::leaveCriticalSection();
  if (param_1 == (GiantsAdPlacement *)0x0) {
    return;
  }
  GiantsAdPlacement::~GiantsAdPlacement(param_1);
  operator_delete(param_1);
  return;
}


