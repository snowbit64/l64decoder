// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BiquadResonantFilter
// Entry Point: 00e447a0
// Size: 76 bytes
// Signature: undefined __thiscall BiquadResonantFilter(BiquadResonantFilter * this)


/* SoLoud::BiquadResonantFilter::BiquadResonantFilter() */

void __thiscall SoLoud::BiquadResonantFilter::BiquadResonantFilter(BiquadResonantFilter *this)

{
  Filter::Filter((Filter *)this);
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0xc) = 0x447a0000472c4400;
  *(undefined4 *)(this + 0x14) = 0x40000000;
  *(undefined ***)this = &PTR_createInstance_01013e90;
  return;
}


