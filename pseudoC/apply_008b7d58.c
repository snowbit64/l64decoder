// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: apply
// Entry Point: 008b7d58
// Size: 236 bytes
// Signature: undefined __thiscall apply(BandDistortion * this, float * param_1)


/* BandDistortion::apply(float&) */

void __thiscall BandDistortion::apply(BandDistortion *this,float *param_1)

{
  long lVar1;
  float fVar2;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar2 = *param_1;
  local_54 = fVar2;
  local_4c = fVar2;
  if (((0.0 < *(float *)(this + 0x90)) && (0.0 < *(float *)(this + 0x58))) &&
     (*(float *)(this + 0x58) <= *(float *)(this + 0x90))) {
    BiquadResonantFilter::filter((BiquadResonantFilter *)(this + 0x2c),&local_4c);
    BiquadResonantFilter::filter((BiquadResonantFilter *)(this + 100),&local_54);
    local_50 = fVar2 - (local_4c + local_54);
    Distortion::apply((Distortion *)(this + 8),&local_4c);
    Distortion::apply((Distortion *)(this + 0x14),&local_50);
    Distortion::apply((Distortion *)(this + 0x20),&local_54);
    *param_1 = local_4c + local_50 + local_54;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


