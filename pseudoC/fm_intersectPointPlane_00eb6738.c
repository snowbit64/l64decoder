// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectPointPlane
// Entry Point: 00eb6738
// Size: 184 bytes
// Signature: undefined __cdecl fm_intersectPointPlane(float * param_1, float * param_2, float * param_3, float * param_4)


/* FLOAT_MATH::fm_intersectPointPlane(float const*, float const*, float*, float const*) */

undefined8
FLOAT_MATH::fm_intersectPointPlane(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  fVar3 = *param_4;
  fVar2 = param_4[1];
  fVar1 = *param_1;
  uVar7 = NEON_fmadd(fVar1,fVar3,param_1[1] * fVar2);
  fVar4 = param_4[2];
  fVar6 = param_4[3];
  uVar11 = NEON_fmadd(*param_2,fVar3,fVar2 * param_2[1]);
  fVar9 = (float)NEON_fmadd(param_1[2],fVar4,uVar7);
  fVar9 = fVar9 + fVar6;
  fVar10 = (float)NEON_fmadd(param_2[2],fVar4,uVar11);
  if ((fVar9 <= 0.0) && (fVar6 + fVar10 <= 0.0)) {
    return 0;
  }
  if ((0.0 <= fVar9) && (0.0 <= fVar6 + fVar10)) {
    return 0;
  }
  fVar10 = param_2[1] - param_1[1];
  fVar8 = *param_2 - fVar1;
  fVar5 = param_2[2] - param_1[2];
  uVar7 = NEON_fmadd(fVar8,fVar3,fVar2 * fVar10);
  fVar2 = (float)NEON_fmadd(fVar5,fVar4,uVar7);
  fVar2 = -(fVar6 + (fVar9 - fVar6)) / fVar2;
  fVar1 = (float)NEON_fmadd(fVar8,fVar2,fVar1);
  *param_3 = fVar1;
  fVar1 = (float)NEON_fmadd(fVar10,fVar2,param_1[1]);
  param_3[1] = fVar1;
  fVar1 = (float)NEON_fmadd(fVar5,fVar2,param_1[2]);
  param_3[2] = fVar1;
  return 1;
}


