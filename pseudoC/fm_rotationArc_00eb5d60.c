// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_rotationArc
// Entry Point: 00eb5d60
// Size: 264 bytes
// Signature: undefined __cdecl fm_rotationArc(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_rotationArc(float const*, float const*, float*) */

void FLOAT_MATH::fm_rotationArc(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  fVar3 = *param_1;
  fVar1 = param_1[1];
  fVar5 = *param_2;
  fVar4 = param_2[1];
  fVar6 = param_2[2];
  uVar8 = NEON_fmadd(fVar3,fVar5,fVar1 * fVar4);
  fVar7 = param_1[2];
  fVar9 = (float)NEON_fmadd(fVar7,fVar6,uVar8);
  if (-0.99999 < fVar9) {
    fVar2 = (float)NEON_fmadd(fVar1,fVar6,fVar4 * -fVar7);
    fVar6 = (float)NEON_fmadd(fVar7,fVar5,fVar6 * -fVar3);
    fVar1 = (float)NEON_fmadd(fVar3,fVar4,fVar5 * -fVar1);
    fVar3 = SQRT(fVar9 + 1.0 + fVar9 + 1.0);
    fVar4 = 1.0 / fVar3;
    *param_3 = fVar2 * fVar4;
    param_3[1] = fVar6 * fVar4;
    param_3[2] = fVar1 * fVar4;
    param_3[3] = fVar3 * 0.5;
    return;
  }
  if (0.1 <= ABS(fVar3)) {
    *param_3 = fVar1;
    fVar4 = 0.0;
    fVar3 = -*param_1;
  }
  else {
    *param_3 = 0.0;
    fVar3 = param_1[2];
    param_3[1] = fVar3;
    fVar4 = -param_1[1];
    fVar1 = 0.0;
  }
  uVar8 = NEON_fmadd(fVar1,fVar1,fVar3 * fVar3);
  fVar5 = (float)NEON_fmadd(fVar4,fVar4,uVar8);
  fVar5 = 1.0 / SQRT(fVar5 + 0.0);
  *(ulong *)(param_3 + 2) = CONCAT44(fVar5 * 0.0,fVar4 * fVar5);
  *(ulong *)param_3 = CONCAT44(fVar3 * fVar5,fVar1 * fVar5);
  return;
}


