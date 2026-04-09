// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtIntersectSegmentPoly2D
// Entry Point: 00dcd8b0
// Size: 304 bytes
// Signature: undefined __cdecl dtIntersectSegmentPoly2D(float * param_1, float * param_2, float * param_3, int param_4, float * param_5, float * param_6, int * param_7, int * param_8)


/* dtIntersectSegmentPoly2D(float const*, float const*, float const*, int, float&, float&, int&,
   int&) */

undefined8
dtIntersectSegmentPoly2D
          (float *param_1,float *param_2,float *param_3,int param_4,float *param_5,float *param_6,
          int *param_7,int *param_8)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
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
  
  iVar1 = param_4 + -1;
  *param_5 = 0.0;
  *param_6 = 1.0;
  *param_7 = -1;
  *param_8 = -1;
  if (param_4 < 1) {
    return 1;
  }
  fVar7 = *param_1;
  lVar2 = 0;
  fVar8 = param_1[2];
  pfVar3 = param_3 + 2;
  fVar5 = *param_2 - fVar7;
  fVar4 = param_2[2] - fVar8;
  fVar6 = 1.0;
  while( true ) {
    fVar11 = (param_3 + iVar1 * 3)[2];
    fVar13 = param_3[iVar1 * 3];
    fVar10 = *pfVar3 - fVar11;
    fVar12 = pfVar3[-2] - fVar13;
    fVar9 = (float)NEON_fmadd(fVar4,fVar12,fVar10 * -fVar5);
    fVar7 = (float)NEON_fmadd(fVar10,fVar7 - fVar13,(fVar8 - fVar11) * -fVar12);
    if (1e-08 <= ABS(fVar9)) {
      fVar7 = fVar7 / fVar9;
      if (0.0 <= fVar9) {
        if (fVar7 < fVar6) {
          *param_6 = fVar7;
          fVar8 = *param_5;
          *param_8 = iVar1;
          fVar6 = fVar7;
          if (fVar7 < fVar8) {
            return 0;
          }
        }
      }
      else if (*param_5 < fVar7) {
        *param_5 = fVar7;
        fVar6 = *param_6;
        *param_7 = iVar1;
        if (fVar6 < fVar7) {
          return 0;
        }
      }
    }
    else if (fVar7 < 0.0) {
      return 0;
    }
    if ((ulong)(uint)param_4 - 1 == lVar2) break;
    fVar7 = *param_1;
    iVar1 = (int)lVar2;
    fVar8 = param_1[2];
    pfVar3 = pfVar3 + 3;
    lVar2 = lVar2 + 1;
  }
  return 1;
}


