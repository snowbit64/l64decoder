// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getKnotAndParam
// Entry Point: 00b53ff0
// Size: 260 bytes
// Signature: undefined __thiscall getKnotAndParam(CubicSpline * this, uint * param_1, float * param_2, float param_3)


/* CubicSpline::getKnotAndParam(unsigned int&, float&, float) const */

void __thiscall
CubicSpline::getKnotAndParam(CubicSpline *this,uint *param_1,float *param_2,float param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(this + 8) == 0) {
    fVar5 = (float)NEON_fmin(param_3,0x3f800000);
    fVar7 = 0.0;
    if (0.0 <= param_3) {
      fVar7 = fVar5;
    }
  }
  else {
    fVar7 = param_3 - (float)(int)param_3;
  }
  fVar5 = *(float *)(this + 0x2c);
  uVar3 = *(uint *)(this + 0x28);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      if (*(float *)(*(long *)(this + 0x10) + (ulong)uVar2 * 4) < fVar7 * fVar5) {
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar3);
    if (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      goto LAB_00b54060;
    }
  }
  uVar4 = 0;
LAB_00b54060:
  fVar6 = *(float *)(*(long *)(this + 0x10) + (ulong)uVar4 * 4);
  *param_1 = uVar4;
  *param_2 = 0.0;
  fVar6 = fVar7 * fVar5 - fVar6;
  if (0.0 < fVar6) {
    uVar3 = 0;
    lVar1 = *(long *)(this + 0x38) + (ulong)(uVar4 * 0x21) * 4;
    uVar4 = 0x20;
    do {
      uVar2 = uVar4 + uVar3 >> 1;
      if (*(float *)(lVar1 + (ulong)uVar2 * 4) < fVar6) {
        uVar3 = uVar2 + 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar3 < uVar4);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar3 - 1;
    }
    fVar7 = (float)(ulong)uVar4;
    *param_2 = fVar7;
    fVar5 = *(float *)(lVar1 + (ulong)uVar4 * 4);
    fVar8 = *(float *)(lVar1 + (ulong)(uVar4 + 1) * 4) - fVar5;
    if (0.0 < fVar8) {
      fVar7 = (fVar6 - fVar5) / fVar8 + fVar7;
    }
    *param_2 = fVar7 * 0.03125;
  }
  return;
}


