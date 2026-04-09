// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParams
// Entry Point: 00e447ec
// Size: 60 bytes
// Signature: undefined __thiscall setParams(BiquadResonantFilter * this, int param_1, float param_2, float param_3, float param_4)


/* SoLoud::BiquadResonantFilter::setParams(int, float, float, float) */

undefined8 __thiscall
SoLoud::BiquadResonantFilter::setParams
          (BiquadResonantFilter *this,int param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((((uint)param_1 < 4) && (0.0 < param_2)) && (0.0 < param_3)) && (0.0 < param_4)) {
    uVar1 = 0;
    *(int *)(this + 8) = param_1;
    *(float *)(this + 0xc) = param_2;
    *(float *)(this + 0x10) = param_3;
    *(float *)(this + 0x14) = param_4;
  }
  return uVar1;
}


