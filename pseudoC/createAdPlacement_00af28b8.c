// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAdPlacement
// Entry Point: 00af28b8
// Size: 376 bytes
// Signature: undefined __thiscall createAdPlacement(GiantsAdsProvider * this, uchar * param_1, uint param_2, ASPECT_RATIO param_3)


/* GiantsAdsProvider::createAdPlacement(unsigned char const*, unsigned int,
   AdPlacementBase::ASPECT_RATIO) */

GiantsAdPlacement * __thiscall
GiantsAdsProvider::createAdPlacement
          (GiantsAdsProvider *this,uchar *param_1,uint param_2,ASPECT_RATIO param_3)

{
  ulong uVar1;
  GiantsAdPlacement **__src;
  GiantsAdPlacement **ppGVar2;
  undefined8 uVar3;
  GiantsAdPlacement *this_00;
  void *__dest;
  GiantsAdPlacement **ppGVar4;
  ulong __n;
  
  uVar3 = Watch::getCurrentTicks();
  *(undefined8 *)(this + 0x158) = uVar3;
  this[0x151] = (GiantsAdsProvider)0x1;
  this_00 = (GiantsAdPlacement *)operator_new(0x68);
                    /* try { // try from 00af28fc to 00af290f has its CatchHandler @ 00af2a30 */
  GiantsAdPlacement::GiantsAdPlacement(this_00,this,param_1,param_2,param_3);
  __src = *(GiantsAdPlacement ***)(this + 0xa0);
  ppGVar2 = *(GiantsAdPlacement ***)(this + 0xa8);
  ppGVar4 = __src;
  if (__src == ppGVar2) {
LAB_00af2944:
    if (ppGVar4 != ppGVar2) {
      GiantsAdPlacement::~GiantsAdPlacement(this_00);
      operator_delete(this_00);
      return (GiantsAdPlacement *)0x0;
    }
  }
  else {
    do {
      if (*ppGVar4 == this_00) goto LAB_00af2944;
      ppGVar4 = ppGVar4 + 1;
    } while (ppGVar4 != ppGVar2);
  }
  if (ppGVar2 == *(GiantsAdPlacement ***)(this + 0xb0)) {
    __n = (long)ppGVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    ppGVar4 = (GiantsAdPlacement **)((long)__dest + ((long)__n >> 3) * 8);
    *ppGVar4 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xa0) = __dest;
    *(GiantsAdPlacement ***)(this + 0xa8) = ppGVar4 + 1;
    *(void **)(this + 0xb0) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (GiantsAdPlacement **)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppGVar2 = this_00;
    *(GiantsAdPlacement ***)(this + 0xa8) = ppGVar2 + 1;
  }
  return this_00;
}


