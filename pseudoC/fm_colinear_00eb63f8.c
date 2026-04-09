// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_colinear
// Entry Point: 00eb63f8
// Size: 224 bytes
// Signature: undefined __cdecl fm_colinear(float * param_1, float * param_2, float * param_3, float * param_4, float param_5)


/* FLOAT_MATH::fm_colinear(float const*, float const*, float const*, float const*, float) */

bool FLOAT_MATH::fm_colinear
               (float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
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
  
  fVar5 = param_2[2];
  fVar6 = (float)*(undefined8 *)param_1;
  fVar8 = (float)*(undefined8 *)param_2 - fVar6;
  fVar7 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) - fVar7;
  fVar13 = fVar5 - param_1[2];
  fVar3 = (float)NEON_fmadd(fVar13,fVar13,fVar9 * fVar9 + fVar8 * fVar8);
  fVar11 = ((float)*(undefined8 *)param_4 - fVar6) - ((float)*(undefined8 *)param_3 - fVar6);
  fVar12 = ((float)((ulong)*(undefined8 *)param_4 >> 0x20) - fVar7) -
           ((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar7);
  fVar1 = 1.0;
  fVar2 = 0.0;
  fVar10 = (param_4[2] - fVar5) - (param_3[2] - fVar5);
  fVar5 = 0.0;
  fVar4 = 0.0;
  fVar6 = fVar1;
  fVar7 = fVar2;
  if (1e-07 < SQRT(fVar3)) {
    fVar4 = 1.0 / SQRT(fVar3);
    fVar6 = fVar8 * fVar4;
    fVar7 = fVar9 * fVar4;
    fVar4 = fVar13 * fVar4;
  }
  fVar3 = (float)NEON_fmadd(fVar10,fVar10,fVar12 * fVar12 + fVar11 * fVar11);
  if (1e-07 < SQRT(fVar3)) {
    fVar5 = 1.0 / SQRT(fVar3);
    fVar1 = fVar11 * fVar5;
    fVar2 = fVar12 * fVar5;
    fVar5 = fVar10 * fVar5;
  }
  fVar6 = (float)NEON_fmadd(fVar4,fVar5,fVar7 * fVar2 + fVar1 * fVar6);
  return param_5 <= fVar6;
}


