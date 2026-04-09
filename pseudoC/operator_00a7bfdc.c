// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00a7bfdc
// Size: 136 bytes
// Signature: undefined __thiscall operator=(LDRColorA * this, HDRColorA * param_1)


/* BC6BC7Util::LDRColorA::TEMPNAMEPLACEHOLDERVALUE(BC6BC7Util::HDRColorA const&) */

uint __thiscall BC6BC7Util::LDRColorA::operator=(LDRColorA *this,HDRColorA *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 8) <= 0.0) {
    fVar1 = 0.0;
  }
  fVar3 = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0xc) <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar2 = (float)NEON_fminnm(fVar1,0x3f800000);
  fVar3 = (float)NEON_fminnm(fVar3,0x3f800000);
  fVar4 = (float)NEON_fminnm(fVar4,0x3f800000);
  fVar1 = (float)NEON_fminnm(*(undefined4 *)param_1,0x3f800000);
  return ((int)(fVar2 * 255.0 + 0.001) & 0xffU) << 0x10 | (int)(fVar3 * 255.0 + 0.001) << 0x18 |
         ((int)(fVar4 * 255.0 + 0.001) & 0xffU) << 8 | (int)(fVar1 * 255.0 + 0.001);
}


