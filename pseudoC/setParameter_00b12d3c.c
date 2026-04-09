// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParameter
// Entry Point: 00b12d3c
// Size: 28 bytes
// Signature: undefined __thiscall setParameter(FDNReverbEffect * this, uint param_1, float param_2)


/* FDNReverbEffect::setParameter(unsigned int, float) */

void __thiscall FDNReverbEffect::setParameter(FDNReverbEffect *this,uint param_1,float param_2)

{
  if (param_1 < 0xb) {
    *(float *)(this + (ulong)param_1 * 4 + 0x34) = param_2;
    this[0x60] = (FDNReverbEffect)0x1;
  }
  return;
}


