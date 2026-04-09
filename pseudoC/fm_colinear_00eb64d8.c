// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_colinear
// Entry Point: 00eb64d8
// Size: 208 bytes
// Signature: undefined __cdecl fm_colinear(float * param_1, float * param_2, float * param_3, float param_4)


/* FLOAT_MATH::fm_colinear(float const*, float const*, float const*, float) */

bool FLOAT_MATH::fm_colinear(float *param_1,float *param_2,float *param_3,float param_4)

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
  float fVar12;
  float fVar13;
  
  fVar11 = param_2[1] - param_1[1];
  fVar13 = param_2[2] - param_1[2];
  fVar12 = *param_2 - *param_1;
  fVar10 = *param_3 - *param_2;
  fVar9 = param_3[1] - param_2[1];
  fVar8 = param_3[2] - param_2[2];
  fVar5 = 0.0;
  uVar1 = NEON_fmadd(fVar12,fVar12,fVar11 * fVar11);
  fVar7 = 0.0;
  fVar4 = 1.0;
  fVar6 = 1.0;
  fVar2 = (float)NEON_fmadd(fVar13,fVar13,uVar1);
  fVar3 = 0.0;
  if (1e-07 < SQRT(fVar2)) {
    fVar7 = 1.0 / SQRT(fVar2);
    fVar6 = fVar12 * fVar7;
    fVar5 = fVar11 * fVar7;
    fVar7 = fVar13 * fVar7;
  }
  uVar1 = NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
  fVar2 = (float)NEON_fmadd(fVar8,fVar8,uVar1);
  fVar11 = 0.0;
  if (1e-07 < SQRT(fVar2)) {
    fVar11 = 1.0 / SQRT(fVar2);
    fVar4 = fVar10 * fVar11;
    fVar3 = fVar9 * fVar11;
    fVar11 = fVar8 * fVar11;
  }
  uVar1 = NEON_fmadd(fVar6,fVar4,fVar5 * fVar3);
  fVar2 = (float)NEON_fmadd(fVar7,fVar11,uVar1);
  return param_4 <= fVar2;
}


