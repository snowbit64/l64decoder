// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyPassFilters
// Entry Point: 008b7cb8
// Size: 160 bytes
// Signature: undefined __thiscall applyPassFilters(BandDistortion * this, float param_1, float * param_2, float * param_3, float * param_4)


/* BandDistortion::applyPassFilters(float, float&, float&, float&) */

bool __thiscall
BandDistortion::applyPassFilters
          (BandDistortion *this,float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(this + 0x58);
  fVar2 = *(float *)(this + 0x90);
  if (0.0 < fVar2 && (0.0 < fVar1 && fVar1 <= fVar2)) {
    BiquadResonantFilter::filter((BiquadResonantFilter *)(this + 0x2c),param_2);
    BiquadResonantFilter::filter((BiquadResonantFilter *)(this + 100),param_4);
    *param_3 = param_1 - (*param_2 + *param_4);
  }
  return 0.0 < fVar2 && (0.0 < fVar1 && fVar1 <= fVar2);
}


