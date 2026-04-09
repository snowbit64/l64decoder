// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clamp
// Entry Point: 008567f0
// Size: 300 bytes
// Signature: undefined __thiscall clamp(Ellipse2 * this, float * param_1, float * param_2, float param_3, uint param_4)


/* Ellipse2::clamp(float&, float&, float, unsigned int) const */

void __thiscall
Ellipse2::clamp(Ellipse2 *this,float *param_1,float *param_2,float param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)this;
  if ((fVar1 == 0.0) || (fVar3 = *(float *)(this + 4), fVar3 == 0.0)) {
    fVar2 = *param_1;
    fVar3 = fVar1;
    if (fVar2 <= fVar1) {
      fVar3 = fVar2;
    }
    fVar4 = -fVar1;
    if (-fVar1 <= fVar2) {
      fVar4 = fVar3;
    }
    *param_1 = fVar4;
    fVar3 = *param_2;
    fVar2 = *(float *)(this + 4);
    fVar1 = fVar2;
    if (fVar3 <= fVar2) {
      fVar1 = fVar3;
    }
    fVar4 = -fVar2;
    if (-fVar2 <= fVar3) {
      fVar4 = fVar1;
    }
  }
  else {
    fVar2 = *param_1;
    fVar4 = *param_2 / fVar3;
    fVar4 = (float)NEON_fmadd(fVar2 / fVar1,fVar2 / fVar1,fVar4 * fVar4);
    if (fVar4 + -1.0 <= 0.0) {
      return;
    }
    if (param_4 == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = 0.0;
      uVar5 = NEON_fmov(0x3f800000,4);
      do {
        fVar9 = (float)uVar5 / (fVar1 * fVar1 + fVar4);
        fVar10 = (float)((ulong)uVar5 >> 0x20) / (fVar3 * fVar3 + fVar4);
        fVar6 = fVar2 * fVar1 * fVar9;
        fVar7 = *param_2 * fVar1 * fVar10;
        fVar8 = fVar6 * fVar6 + fVar7 * fVar7 + -1.0;
        if (fVar8 <= param_3) break;
        param_4 = param_4 - 1;
        fVar9 = fVar9 * (0.0 - fVar6);
        fVar10 = fVar10 * (0.0 - fVar7);
        fVar4 = fVar4 - fVar8 / (fVar9 * fVar6 + fVar6 * fVar9 + fVar10 * fVar7 + fVar7 * fVar10);
      } while (param_4 != 0);
    }
    fVar3 = (float)NEON_fmadd(fVar1,fVar1,fVar4);
    *param_1 = fVar2 * ((fVar1 * fVar1) / fVar3);
    fVar1 = *(float *)(this + 4);
    fVar3 = (float)NEON_fmadd(fVar1,fVar1,fVar4);
    fVar4 = *param_2 * ((fVar1 * fVar1) / fVar3);
  }
  *param_2 = fVar4;
  return;
}


