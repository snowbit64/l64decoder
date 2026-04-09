// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: apply
// Entry Point: 008ae36c
// Size: 168 bytes
// Signature: undefined __thiscall apply(LowFrequencyOscillator * this, float * param_1)


/* LowFrequencyOscillator::apply(float&) */

void __thiscall LowFrequencyOscillator::apply(LowFrequencyOscillator *this,float *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if (**(char **)(this + 0x420) != '\0') {
    if ((*(float *)(this + 0x410) != 0.0) || (*(float *)(this + 0x414) != 0.0)) {
      uVar1 = *(uint *)(this + 4);
      uVar2 = (ulong)(uVar1 >> 0x16) & 0x3fc;
      fVar5 = *(float *)(this + uVar2 + 0xc);
      fVar4 = *(float *)(this + uVar2 + 0x10);
      *(uint *)(this + 4) = *(int *)(this + 8) + uVar1;
      uVar3 = NEON_fmadd((float)(ulong)(uVar1 & 0xffffff) * 5.960464e-08,fVar4 - fVar5,fVar5);
      fVar4 = (float)NEON_fmadd(*(float *)(this + 0x410),uVar3,*(float *)(this + 0x414));
      fVar4 = powf(10.0,*(float *)(this + 0x418) * fVar4 * 0.05);
      *param_1 = *param_1 * fVar4;
    }
  }
  return;
}


