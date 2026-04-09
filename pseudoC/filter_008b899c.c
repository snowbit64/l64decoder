// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filter
// Entry Point: 008b899c
// Size: 84 bytes
// Signature: undefined __thiscall filter(BiquadResonantFilter * this, float * param_1)


/* BiquadResonantFilter::filter(float&) */

void __thiscall BiquadResonantFilter::filter(BiquadResonantFilter *this,float *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  if (this[0x24] != (BiquadResonantFilter)0x0) {
    fVar3 = *param_1;
    uVar1 = NEON_fmadd(*(undefined4 *)(this + 8),fVar3,
                       *(float *)(this + 0xc) * *(float *)(this + 0x1c));
    uVar1 = NEON_fmadd(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x20),uVar1);
    uVar1 = NEON_fmsub(*(undefined4 *)this,*(undefined4 *)(this + 0x14),uVar1);
    fVar2 = (float)NEON_fmsub(*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x18),uVar1);
    *param_1 = fVar2;
    uVar1 = *(undefined4 *)(this + 0x1c);
    *(float *)(this + 0x1c) = fVar3;
    *(undefined4 *)(this + 0x20) = uVar1;
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x14);
    *(float *)(this + 0x14) = *param_1;
  }
  return;
}


