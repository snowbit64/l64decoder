// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transferFunction
// Entry Point: 008b89f0
// Size: 48 bytes
// Signature: undefined __thiscall transferFunction(BiquadResonantFilter * this, float param_1)


/* BiquadResonantFilter::transferFunction(float) */

undefined4 __thiscall
BiquadResonantFilter::transferFunction(BiquadResonantFilter *this,float param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(*(undefined4 *)(this + 8),param_1,
                     *(float *)(this + 0xc) * *(float *)(this + 0x1c));
  uVar1 = NEON_fmadd(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x20),uVar1);
  uVar1 = NEON_fmsub(*(undefined4 *)this,*(undefined4 *)(this + 0x14),uVar1);
  uVar1 = NEON_fmsub(*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x18),uVar1);
  return uVar1;
}


