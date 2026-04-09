// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BiquadResonantFilterWithDefaultWet
// Entry Point: 00b10eec
// Size: 36 bytes
// Signature: undefined __thiscall ~BiquadResonantFilterWithDefaultWet(BiquadResonantFilterWithDefaultWet * this)


/* SoftAudioSource::BiquadResonantFilterWithDefaultWet::~BiquadResonantFilterWithDefaultWet() */

void __thiscall
SoftAudioSource::BiquadResonantFilterWithDefaultWet::~BiquadResonantFilterWithDefaultWet
          (BiquadResonantFilterWithDefaultWet *this)

{
  SoLoud::BiquadResonantFilter::~BiquadResonantFilter((BiquadResonantFilter *)this);
  operator_delete(this);
  return;
}


