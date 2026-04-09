// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtDistancePtPolyEdgesSqr
// Entry Point: 00dcdc8c
// Size: 312 bytes
// Signature: undefined __cdecl dtDistancePtPolyEdgesSqr(float * param_1, float * param_2, int param_3, float * param_4, float * param_5)


/* dtDistancePtPolyEdgesSqr(float const*, float const*, int, float*, float*) */

uint dtDistancePtPolyEdgesSqr
               (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_3 < 1) {
    return 0;
  }
  uVar3 = 0;
  uVar1 = 0;
  pfVar4 = param_2;
  iVar5 = param_3 + -1;
  do {
    pfVar6 = param_2 + (long)iVar5 * 3;
    fVar8 = pfVar4[2];
    fVar7 = param_1[2];
    fVar9 = pfVar6[2];
    if (fVar8 <= fVar7 == fVar7 < fVar9) {
      fVar11 = *pfVar6;
      fVar12 = *pfVar4;
      fVar13 = *param_1;
      if (fVar13 < fVar12 + ((fVar7 - fVar8) * (fVar11 - fVar12)) / (fVar9 - fVar8)) {
        uVar1 = uVar1 ^ 1;
      }
    }
    else {
      fVar12 = *pfVar4;
      fVar11 = *pfVar6;
      fVar13 = *param_1;
    }
    fVar8 = fVar8 - fVar9;
    fVar12 = fVar12 - fVar11;
    fVar10 = (float)NEON_fmadd(fVar12,fVar12,fVar8 * fVar8);
    fVar7 = (float)NEON_fmadd(fVar12,fVar13 - fVar11,fVar8 * (fVar7 - fVar9));
    if (fVar10 <= 0.0) {
      fVar10 = 1.0;
    }
    fVar7 = fVar7 / fVar10;
    param_5[iVar5] = fVar7;
    fVar9 = 0.0;
    if ((fVar7 < 0.0) || (fVar9 = 1.0, 1.0 < fVar7)) {
      fVar7 = fVar9;
      param_5[iVar5] = fVar7;
    }
    iVar2 = (int)uVar3;
    uVar3 = uVar3 + 1;
    pfVar4 = pfVar4 + 3;
    fVar8 = (float)NEON_fmadd(fVar7,fVar8,pfVar6[2]);
    fVar7 = (float)NEON_fmadd(fVar7,fVar12,*pfVar6);
    fVar7 = (float)NEON_fmadd(fVar7 - *param_1,fVar7 - *param_1,
                              (fVar8 - param_1[2]) * (fVar8 - param_1[2]));
    param_4[iVar5] = fVar7;
    iVar5 = iVar2;
  } while ((uint)param_3 != uVar3);
  return uVar1;
}


