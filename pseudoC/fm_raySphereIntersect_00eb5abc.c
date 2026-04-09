// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_raySphereIntersect
// Entry Point: 00eb5abc
// Size: 180 bytes
// Signature: undefined __cdecl fm_raySphereIntersect(float * param_1, float param_2, float * param_3, float * param_4, float param_5, float * param_6)


/* FLOAT_MATH::fm_raySphereIntersect(float const*, float, float const*, float const*, float, float*)
    */

undefined8
FLOAT_MATH::fm_raySphereIntersect
          (float *param_1,float param_2,float *param_3,float *param_4,float param_5,float *param_6)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = param_1[1] - param_3[1];
  uVar2 = 0;
  fVar7 = *param_1 - *param_3;
  fVar8 = param_1[2] - param_3[2];
  uVar5 = NEON_fmadd(fVar7,fVar7,fVar6 * fVar6);
  fVar9 = (float)NEON_fmadd(fVar8,fVar8,uVar5);
  fVar3 = -param_4[2];
  fVar4 = -*param_4;
  fVar1 = -param_4[1];
  if (param_2 * param_2 <= fVar9) {
    fVar3 = param_4[2];
    fVar4 = *param_4;
    fVar1 = param_4[1];
  }
  if (param_6 != (float *)0x0) {
    uVar5 = NEON_fmadd(fVar7,fVar4,fVar6 * fVar1);
    fVar6 = (float)NEON_fmadd(fVar8,fVar3,uVar5);
    fVar7 = (float)NEON_fmsub(fVar6,fVar6,fVar9);
    fVar7 = param_2 * param_2 - fVar7;
    if (0.0 < fVar7) {
      fVar6 = fVar6 - SQRT(fVar7);
      if (param_5 <= fVar6) {
        return 0;
      }
      fVar4 = (float)NEON_fmadd(fVar4,fVar6,*param_3);
      uVar2 = 1;
      *param_6 = fVar4;
      fVar4 = (float)NEON_fmadd(fVar1,fVar6,param_3[1]);
      param_6[1] = fVar4;
      fVar4 = (float)NEON_fmadd(fVar3,fVar6,param_3[2]);
      param_6[2] = fVar4;
    }
  }
  return uVar2;
}


