// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BiquadResonantFilter
// Entry Point: 00e4482c
// Size: 36 bytes
// Signature: undefined __thiscall ~BiquadResonantFilter(BiquadResonantFilter * this)


/* SoLoud::BiquadResonantFilter::~BiquadResonantFilter() */

void __thiscall SoLoud::BiquadResonantFilter::~BiquadResonantFilter(BiquadResonantFilter *this)

{
  Filter::~Filter((Filter *)this);
  operator_delete(this);
  return;
}


