// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BiquadResonantFilterInstance
// Entry Point: 00e4477c
// Size: 36 bytes
// Signature: undefined __thiscall ~BiquadResonantFilterInstance(BiquadResonantFilterInstance * this)


/* SoLoud::BiquadResonantFilterInstance::~BiquadResonantFilterInstance() */

void __thiscall
SoLoud::BiquadResonantFilterInstance::~BiquadResonantFilterInstance
          (BiquadResonantFilterInstance *this)

{
  FilterInstance::~FilterInstance((FilterInstance *)this);
  operator_delete(this);
  return;
}


