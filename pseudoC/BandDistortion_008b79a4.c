// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BandDistortion
// Entry Point: 008b79a4
// Size: 64 bytes
// Signature: undefined __thiscall ~BandDistortion(BandDistortion * this)


/* BandDistortion::~BandDistortion() */

void __thiscall BandDistortion::~BandDistortion(BandDistortion *this)

{
  BiquadResonantFilter::~BiquadResonantFilter((BiquadResonantFilter *)(this + 100));
  BiquadResonantFilter::~BiquadResonantFilter((BiquadResonantFilter *)(this + 0x2c));
  Distortion::~Distortion((Distortion *)(this + 0x20));
  Distortion::~Distortion((Distortion *)(this + 0x14));
  Distortion::~Distortion((Distortion *)(this + 8));
  return;
}


