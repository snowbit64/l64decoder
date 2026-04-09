// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Equalizer
// Entry Point: 008b8ae4
// Size: 144 bytes
// Signature: undefined __thiscall ~Equalizer(Equalizer * this)


/* Equalizer::~Equalizer() */

void __thiscall Equalizer::~Equalizer(Equalizer *this)

{
  BiquadResonantFilter *this_00;
  BiquadResonantFilter *pBVar1;
  BiquadResonantFilter *pBVar2;
  
  this_00 = *(BiquadResonantFilter **)this;
  pBVar1 = *(BiquadResonantFilter **)(this + 8);
  pBVar2 = this_00;
  if (pBVar1 != this_00) {
    do {
      pBVar1 = pBVar1 + -0x38;
      BiquadResonantFilter::~BiquadResonantFilter(pBVar1);
    } while (pBVar1 != this_00);
    pBVar2 = *(BiquadResonantFilter **)this;
  }
  *(BiquadResonantFilter **)(this + 8) = this_00;
  if (pBVar2 == (BiquadResonantFilter *)0x0) {
    return;
  }
  pBVar1 = pBVar2;
  if (this_00 != pBVar2) {
    do {
      this_00 = this_00 + -0x38;
      BiquadResonantFilter::~BiquadResonantFilter(this_00);
    } while (this_00 != pBVar2);
    pBVar1 = *(BiquadResonantFilter **)this;
  }
  *(BiquadResonantFilter **)(this + 8) = pBVar2;
  operator_delete(pBVar1);
  return;
}


