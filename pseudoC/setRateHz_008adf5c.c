// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRateHz
// Entry Point: 008adf5c
// Size: 32 bytes
// Signature: undefined __thiscall setRateHz(LowFrequencyOscillator * this, float param_1)


/* LowFrequencyOscillator::setRateHz(float) */

void __thiscall LowFrequencyOscillator::setRateHz(LowFrequencyOscillator *this,float param_1)

{
  *(int *)(this + 8) = (int)(((param_1 * 256.0) / *(float *)this) * 1.677722e+07);
  return;
}


