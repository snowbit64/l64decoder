// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectLineSegments2dTime
// Entry Point: 00eb6690
// Size: 168 bytes
// Signature: undefined __cdecl fm_intersectLineSegments2dTime(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5, float * param_6)


/* WARNING: Removing unreachable block (ram,0x00eb66f0) */
/* FLOAT_MATH::fm_intersectLineSegments2dTime(float const*, float const*, float const*, float
   const*, float&, float&) */

undefined4
FLOAT_MATH::fm_intersectLineSegments2dTime
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6
          )

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *param_4 - *param_3;
  fVar4 = param_4[1] - param_3[1];
  fVar6 = param_2[1] - param_1[1];
  fVar8 = *param_2 - *param_1;
  fVar3 = *param_1 - *param_3;
  fVar7 = param_1[1] - param_3[1];
  fVar5 = (float)NEON_fmadd(fVar4,fVar8,fVar6 * -fVar2);
  fVar2 = (float)NEON_fmadd(fVar2,fVar7,fVar3 * -fVar4);
  fVar3 = (float)NEON_fmadd(fVar8,fVar7,fVar3 * -fVar6);
  if (fVar5 != 0.0) {
    uVar1 = 0;
    fVar2 = fVar2 * (1.0 / fVar5);
    if ((0.0 <= fVar2 && fVar2 < 1.0 || 0.0 <= fVar2 && fVar2 == 1.0) &&
       (fVar3 = fVar3 * (1.0 / fVar5), 0.0 <= fVar3 && fVar3 < 1.0 || 0.0 <= fVar3 && fVar3 == 1.0))
    {
      uVar1 = 1;
      *param_5 = fVar2;
      *param_6 = fVar3;
    }
    return uVar1;
  }
  return 3;
}


