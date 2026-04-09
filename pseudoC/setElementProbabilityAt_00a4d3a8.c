// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setElementProbabilityAt
// Entry Point: 00a4d3a8
// Size: 44 bytes
// Signature: undefined __thiscall setElementProbabilityAt(AudioSourceSample * this, uint param_1, float param_2)


/* AudioSourceSample::setElementProbabilityAt(unsigned int, float) */

void __thiscall
AudioSourceSample::setElementProbabilityAt(AudioSourceSample *this,uint param_1,float param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    pfVar1 = (float *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  *pfVar1 = param_2;
  return;
}


