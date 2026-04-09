// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLateReverbInputGain
// Entry Point: 00b13a2c
// Size: 108 bytes
// Signature: undefined __thiscall setLateReverbInputGain(FDNReverb * this, float param_1)


/* FDNReverb::setLateReverbInputGain(float) */

void __thiscall FDNReverb::setLateReverbInputGain(FDNReverb *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(0.001,(float)(ulong)((uint)(*(int *)(this + 0xa0) +
                                          *(int *)(this + 0x90) +
                                          *(int *)(this + 0x80) + *(int *)(this + 0x70)) >> 2) /
                     (*(float *)this * param_1));
  fVar1 = (float)NEON_fmsub(fVar1,fVar1,0x3f800000);
  *(float *)(this + 0x144) = SQRT(fVar1);
  return;
}


