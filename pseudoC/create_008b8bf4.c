// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: create
// Entry Point: 008b8bf4
// Size: 284 bytes
// Signature: undefined __thiscall create(Equalizer * this, vector * param_1)


/* Equalizer::create(std::__ndk1::vector<BiquadResonantFilter::Settings,
   std::__ndk1::allocator<BiquadResonantFilter::Settings> > const&) */

void __thiscall Equalizer::create(Equalizer *this,vector *param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  BiquadResonantFilter *this_00;
  BiquadResonantFilter *pBVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  this_00 = *(BiquadResonantFilter **)(this + 8);
  lVar4 = (long)this_00 - *(long *)this >> 3;
  uVar3 = (ulong)((int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 2) * -0x55555555);
  bVar2 = uVar3 < (ulong)(lVar4 * 0x6db6db6db6db6db7);
  uVar1 = uVar3 + lVar4 * -0x6db6db6db6db6db7;
  if (bVar2 || uVar1 == 0) {
    if (bVar2) {
      pBVar5 = (BiquadResonantFilter *)(*(long *)this + uVar3 * 0x38);
      while (this_00 != pBVar5) {
        this_00 = this_00 + -0x38;
        BiquadResonantFilter::~BiquadResonantFilter(this_00);
      }
      *(BiquadResonantFilter **)(this + 8) = pBVar5;
      this_00 = pBVar5;
    }
  }
  else {
    std::__ndk1::vector<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>>::__append
              ((vector<BiquadResonantFilter,std::__ndk1::allocator<BiquadResonantFilter>> *)this,
               uVar1);
    this_00 = *(BiquadResonantFilter **)(this + 8);
  }
  lVar4 = *(long *)this;
  if (0 < (int)((ulong)((long)this_00 - lVar4) >> 3) * -0x49249249) {
    lVar6 = 0;
    lVar7 = 0;
    lVar8 = 0;
    do {
      BiquadResonantFilter::setup
                ((BiquadResonantFilter *)(lVar4 + lVar7),5,(Settings *)(*(long *)param_1 + lVar6));
      lVar4 = *(long *)this;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x38;
      lVar6 = lVar6 + 0xc;
    } while (lVar8 < (int)((ulong)(*(long *)(this + 8) - lVar4) >> 3) * -0x49249249);
  }
  return;
}


