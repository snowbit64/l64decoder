// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FDNReverbEffect
// Entry Point: 00b12d04
// Size: 56 bytes
// Signature: undefined __thiscall ~FDNReverbEffect(FDNReverbEffect * this)


/* FDNReverbEffect::~FDNReverbEffect() */

void __thiscall FDNReverbEffect::~FDNReverbEffect(FDNReverbEffect *this)

{
  FDNReverb *this_00;
  
  this_00 = *(FDNReverb **)this;
  if (this_00 != (FDNReverb *)0x0) {
    FDNReverb::~FDNReverb(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


