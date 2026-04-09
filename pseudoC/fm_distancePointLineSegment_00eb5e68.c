// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_distancePointLineSegment
// Entry Point: 00eb5e68
// Size: 476 bytes
// Signature: undefined __cdecl fm_distancePointLineSegment(float * param_1, float * param_2, float * param_3, float * param_4, LineSegmentType * param_5, float param_6)


/* FLOAT_MATH::fm_distancePointLineSegment(float const*, float const*, float const*, float*,
   FLOAT_MATH::LineSegmentType&, float) */

float FLOAT_MATH::fm_distancePointLineSegment
                (float *param_1,float *param_2,float *param_3,float *param_4,
                LineSegmentType *param_5,float param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
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
  
  fVar6 = *param_3;
  fVar7 = *param_2;
  pfVar2 = param_3 + 1;
  fVar9 = param_2[1];
  fVar8 = fVar6 - fVar7;
  pfVar1 = param_3 + 2;
  fVar11 = *pfVar2 - fVar9;
  fVar12 = param_2[2];
  fVar13 = *pfVar1 - fVar12;
  uVar3 = NEON_fmadd(fVar8,fVar8,fVar11 * fVar11);
  fVar4 = (float)NEON_fmadd(fVar13,fVar13,uVar3);
  fVar4 = SQRT(fVar4);
  if (fVar4 <= 0.0) {
    *param_4 = fVar6;
    param_4[1] = *pfVar2;
    param_4[2] = *pfVar1;
    *(undefined4 *)param_5 = 2;
    return fVar4;
  }
  fVar9 = param_1[1] - fVar9;
  fVar10 = *param_1 - fVar7;
  fVar12 = param_1[2] - fVar12;
  uVar3 = NEON_fmadd(fVar10,fVar8,fVar11 * fVar9);
  fVar11 = (float)NEON_fmadd(fVar12,fVar13,uVar3);
  fVar11 = fVar11 / (fVar4 * fVar4);
  if (0.0 <= fVar11 && fVar11 == 1.0 || 0.0 <= fVar11 && fVar11 < 1.0) {
    fVar7 = (float)NEON_fmadd(fVar11,fVar8,fVar7);
    *param_4 = fVar7;
    fVar6 = (param_6 + param_6) * (param_6 + param_6);
    fVar8 = (float)NEON_fmadd(fVar11,*pfVar2 - param_2[1],param_2[1]);
    param_4[1] = fVar8;
    fVar9 = (float)NEON_fmadd(fVar11,*pfVar1 - param_2[2],param_2[2]);
    param_4[2] = fVar9;
    uVar3 = NEON_fmadd(*param_1 - fVar7,*param_1 - fVar7,(param_1[1] - fVar8) * (param_1[1] - fVar8)
                      );
    fVar4 = (float)NEON_fmadd(param_1[2] - fVar9,param_1[2] - fVar9,uVar3);
    uVar3 = NEON_fmadd(fVar7 - *param_2,fVar7 - *param_2,(fVar8 - param_2[1]) * (fVar8 - param_2[1])
                      );
    fVar11 = (float)NEON_fmadd(fVar9 - param_2[2],fVar9 - param_2[2],uVar3);
    if (fVar6 <= fVar11) {
      uVar3 = NEON_fmadd(fVar7 - *param_3,fVar7 - *param_3,
                         (fVar8 - param_3[1]) * (fVar8 - param_3[1]));
      fVar7 = (float)NEON_fmadd(fVar9 - param_3[2],fVar9 - param_3[2],uVar3);
      uVar3 = 2;
      if (fVar6 <= fVar7) {
        uVar3 = 1;
      }
      *(undefined4 *)param_5 = uVar3;
      return SQRT(fVar4);
    }
    *(undefined4 *)param_5 = 0;
    return SQRT(fVar4);
  }
  fVar4 = param_1[1] - *pfVar2;
  fVar8 = *param_1 - fVar6;
  fVar11 = param_1[2] - *pfVar1;
  uVar5 = NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
  uVar3 = NEON_fmadd(fVar8,fVar8,fVar4 * fVar4);
  fVar9 = (float)NEON_fmadd(fVar12,fVar12,uVar5);
  fVar8 = (float)NEON_fmadd(fVar11,fVar11,uVar3);
  fVar4 = fVar8;
  if (fVar9 <= fVar8) {
    pfVar1 = param_2 + 2;
    fVar4 = fVar9;
    pfVar2 = param_2 + 1;
  }
  if (fVar9 <= fVar8) {
    fVar6 = fVar7;
  }
  *param_4 = fVar6;
  param_4[1] = *pfVar2;
  param_4[2] = *pfVar1;
  *(uint *)param_5 = (uint)(fVar8 < fVar9) << 1;
  return SQRT(fVar4);
}


