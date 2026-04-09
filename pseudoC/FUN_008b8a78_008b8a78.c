// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008b8a78
// Entry Point: 008b8a78
// Size: 108 bytes
// Signature: undefined FUN_008b8a78(void)


void FUN_008b8a78(BiquadResonantFilter **param_1)

{
  BiquadResonantFilter *pBVar1;
  BiquadResonantFilter *this;
  BiquadResonantFilter *pBVar2;
  
  pBVar2 = *param_1;
  if (pBVar2 == (BiquadResonantFilter *)0x0) {
    return;
  }
  this = param_1[1];
  pBVar1 = pBVar2;
  if (this != pBVar2) {
    do {
      this = this + -0x38;
      BiquadResonantFilter::~BiquadResonantFilter(this);
    } while (this != pBVar2);
    pBVar1 = *param_1;
  }
  param_1[1] = pBVar2;
  operator_delete(pBVar1);
  return;
}


