// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectLineSegments2d
// Entry Point: 00eb65d0
// Size: 192 bytes
// Signature: undefined __cdecl fm_intersectLineSegments2d(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* WARNING: Removing unreachable block (ram,0x00eb6630) */
/* FLOAT_MATH::fm_intersectLineSegments2d(float const*, float const*, float const*, float const*,
   float*) */

undefined4
FLOAT_MATH::fm_intersectLineSegments2d
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar6 = *param_4 - *param_3;
  fVar9 = param_4[1] - param_3[1];
  fVar2 = *param_1;
  fVar7 = param_2[1] - param_1[1];
  fVar3 = *param_2 - fVar2;
  fVar4 = fVar2 - *param_3;
  fVar5 = param_1[1] - param_3[1];
  fVar8 = (float)NEON_fmadd(fVar9,fVar3,fVar7 * -fVar6);
  fVar6 = (float)NEON_fmadd(fVar6,fVar5,fVar4 * -fVar9);
  fVar4 = (float)NEON_fmadd(fVar3,fVar5,fVar4 * -fVar7);
  if (fVar8 != 0.0) {
    uVar1 = 0;
    fVar6 = fVar6 * (1.0 / fVar8);
    if ((0.0 <= fVar6 && fVar6 < 1.0 || 0.0 <= fVar6 && fVar6 == 1.0) &&
       (fVar4 = fVar4 * (1.0 / fVar8), 0.0 <= fVar4 && fVar4 < 1.0 || 0.0 <= fVar4 && fVar4 == 1.0))
    {
      fVar2 = (float)NEON_fmadd(fVar6,fVar3,fVar2);
      uVar1 = 1;
      *param_5 = fVar2;
      fVar2 = (float)NEON_fmadd(fVar6,param_2[1] - param_1[1],param_1[1]);
      param_5[1] = fVar2;
    }
    return uVar1;
  }
  return 3;
}


