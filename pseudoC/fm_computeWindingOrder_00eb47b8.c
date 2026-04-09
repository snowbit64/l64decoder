// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeWindingOrder
// Entry Point: 00eb47b8
// Size: 248 bytes
// Signature: undefined __cdecl fm_computeWindingOrder(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_computeWindingOrder(float const*, float const*, float const*) */

bool FLOAT_MATH::fm_computeWindingOrder(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = 0.0;
  fVar7 = 0.0;
  fVar6 = 1.0;
  fVar8 = param_2[1] - param_1[1];
  fVar10 = *param_2 - *param_1;
  fVar11 = param_2[2] - param_1[2];
  uVar1 = NEON_fmadd(fVar10,fVar10,fVar8 * fVar8);
  fVar2 = (float)NEON_fmadd(fVar11,fVar11,uVar1);
  fVar3 = 0.0;
  fVar4 = 1.0;
  if (1e-07 < SQRT(fVar2)) {
    fVar7 = 1.0 / SQRT(fVar2);
    fVar4 = fVar10 * fVar7;
    fVar5 = fVar8 * fVar7;
    fVar7 = fVar11 * fVar7;
  }
  fVar9 = param_3[1] - param_1[1];
  fVar11 = param_3[2] - param_1[2];
  fVar10 = *param_3 - *param_1;
  uVar1 = NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
  fVar2 = (float)NEON_fmadd(fVar11,fVar11,uVar1);
  fVar8 = 0.0;
  if (1e-07 < SQRT(fVar2)) {
    fVar8 = 1.0 / SQRT(fVar2);
    fVar6 = fVar10 * fVar8;
    fVar3 = fVar9 * fVar8;
    fVar8 = fVar11 * fVar8;
  }
  fVar10 = (float)NEON_fmadd(fVar7,fVar6,fVar8 * -fVar4);
  fVar2 = (float)NEON_fmadd(fVar5,fVar8,fVar3 * -fVar7);
  uVar1 = NEON_fmadd(fVar4,fVar3,fVar6 * -fVar5);
  fVar2 = (float)NEON_fmadd(uVar1,0,fVar2 + fVar10 * 0.0);
  return 0.0 < fVar2;
}


