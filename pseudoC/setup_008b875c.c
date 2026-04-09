// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setup
// Entry Point: 008b875c
// Size: 24 bytes
// Signature: undefined __thiscall setup(BiquadResonantFilter * this, FilterType param_1, Settings * param_2)


/* BiquadResonantFilter::setup(BiquadResonantFilter::FilterType, BiquadResonantFilter::Settings
   const&) */

void __thiscall
BiquadResonantFilter::setup(BiquadResonantFilter *this,FilterType param_1,Settings *param_2)

{
  undefined8 uVar1;
  
  *(FilterType *)(this + 0x28) = param_1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x2c) = uVar1;
  calculateParameters();
  return;
}


