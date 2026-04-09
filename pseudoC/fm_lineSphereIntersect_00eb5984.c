// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_lineSphereIntersect
// Entry Point: 00eb5984
// Size: 312 bytes
// Signature: undefined __cdecl fm_lineSphereIntersect(float * param_1, float param_2, float * param_3, float * param_4, float * param_5)


/* FLOAT_MATH::fm_lineSphereIntersect(float const*, float, float const*, float const*, float*) */

undefined8
FLOAT_MATH::fm_lineSphereIntersect
          (float *param_1,float param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar4 = *param_3;
  fVar10 = param_3[1];
  fVar9 = param_3[2];
  fVar7 = param_4[1] - fVar10;
  fVar8 = *param_4 - fVar4;
  fVar11 = param_4[2] - fVar9;
  uVar5 = NEON_fmadd(fVar8,fVar8,fVar7 * fVar7);
  fVar6 = (float)NEON_fmadd(fVar11,fVar11,uVar5);
  fVar6 = SQRT(fVar6);
  if (fVar6 <= 0.0) {
    uVar5 = NEON_fmadd(*param_1 - fVar4,*param_1 - fVar4,
                       (param_1[1] - fVar10) * (param_1[1] - fVar10));
    fVar6 = (float)NEON_fmadd(param_1[2] - fVar9,param_1[2] - fVar9,uVar5);
    if (param_2 * param_2 <= fVar6) {
      return 0;
    }
    if (param_5 == (float *)0x0) {
      return 1;
    }
    *param_5 = fVar4;
    param_5[1] = param_3[1];
    fVar4 = param_3[2];
  }
  else {
    fVar10 = param_1[1] - fVar10;
    fVar14 = 1.0 / fVar6;
    fVar9 = param_1[2] - fVar9;
    fVar12 = *param_1 - fVar4;
    uVar5 = NEON_fmadd(fVar12,fVar12,fVar10 * fVar10);
    fVar13 = (float)NEON_fmadd(fVar9,fVar9,uVar5);
    fVar3 = -(fVar11 * fVar14);
    fVar1 = -(fVar8 * fVar14);
    fVar2 = -(fVar7 * fVar14);
    if (param_2 * param_2 <= fVar13) {
      fVar3 = fVar11 * fVar14;
      fVar1 = fVar8 * fVar14;
      fVar2 = fVar7 * fVar14;
    }
    if (param_5 == (float *)0x0) {
      return 0;
    }
    uVar5 = NEON_fmadd(fVar12,fVar1,fVar10 * fVar2);
    fVar7 = (float)NEON_fmadd(fVar9,fVar3,uVar5);
    fVar8 = (float)NEON_fmsub(fVar7,fVar7,fVar13);
    fVar8 = param_2 * param_2 - fVar8;
    if (fVar8 <= 0.0) {
      return 0;
    }
    fVar7 = fVar7 - SQRT(fVar8);
    if (fVar6 <= fVar7) {
      return 0;
    }
    fVar4 = (float)NEON_fmadd(fVar1,fVar7,fVar4);
    *param_5 = fVar4;
    fVar4 = (float)NEON_fmadd(fVar2,fVar7,param_3[1]);
    param_5[1] = fVar4;
    fVar4 = (float)NEON_fmadd(fVar3,fVar7,param_3[2]);
  }
  param_5[2] = fVar4;
  return 1;
}


