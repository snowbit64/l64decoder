// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtOverlapPolyPoly2D
// Entry Point: 00dcddc4
// Size: 892 bytes
// Signature: undefined __cdecl dtOverlapPolyPoly2D(float * param_1, int param_2, float * param_3, int param_4)


/* dtOverlapPolyPoly2D(float const*, int, float const*, int) */

byte dtOverlapPolyPoly2D(float *param_1,int param_2,float *param_3,int param_4)

{
  float *pfVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar8 = param_2 + -1;
  uVar7 = (ulong)(uint)param_2;
  uVar6 = (ulong)(uint)param_4;
  if (0 < param_2) {
    fVar11 = *param_1;
    fVar14 = param_1[2];
    fVar12 = *param_3;
    fVar13 = param_3[2];
    if (param_2 == 1) {
      fVar16 = -(fVar11 - param_1[(uint)(iVar8 * 3)]);
      fVar15 = fVar14 - (param_1 + (uint)(iVar8 * 3))[2];
      if (param_4 < 2) {
        fVar11 = (float)NEON_fmadd(fVar15,fVar11,fVar14 * fVar16);
        fVar12 = (float)NEON_fmadd(fVar15,fVar12,fVar13 * fVar16);
        if (fVar12 < fVar11 + 0.0001 || fVar11 + -0.0001 < fVar12) {
          return 0;
        }
      }
      else {
        lVar9 = uVar6 - 1;
        pfVar5 = param_3 + 5;
        fVar12 = (float)NEON_fmadd(fVar15,fVar12,fVar13 * fVar16);
        fVar13 = fVar12;
        do {
          fVar17 = *pfVar5;
          pfVar1 = pfVar5 + -2;
          pfVar5 = pfVar5 + 3;
          fVar17 = (float)NEON_fmadd(fVar15,*pfVar1,fVar17 * fVar16);
          if (fVar17 <= fVar13) {
            fVar13 = fVar17;
          }
          if (fVar12 <= fVar17) {
            fVar12 = fVar17;
          }
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        fVar11 = (float)NEON_fmadd(fVar15,fVar11,fVar14 * fVar16);
        if (fVar12 < fVar11 + 0.0001 || fVar11 + -0.0001 < fVar13) {
          return 0;
        }
      }
    }
    else {
      uVar10 = 0;
      do {
        fVar17 = -(param_1[uVar10 * 3] - param_1[iVar8 * 3]);
        fVar18 = (param_1 + uVar10 * 3)[2] - (param_1 + iVar8 * 3)[2];
        fVar15 = (float)NEON_fmadd(fVar18,fVar11,fVar14 * fVar17);
        pfVar5 = param_1 + 5;
        lVar9 = uVar7 - 1;
        fVar16 = fVar15;
        do {
          fVar19 = *pfVar5;
          pfVar1 = pfVar5 + -2;
          pfVar5 = pfVar5 + 3;
          fVar19 = (float)NEON_fmadd(fVar18,*pfVar1,fVar19 * fVar17);
          if (fVar19 <= fVar16) {
            fVar16 = fVar19;
          }
          if (fVar15 <= fVar19) {
            fVar15 = fVar19;
          }
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        fVar19 = (float)NEON_fmadd(fVar18,fVar12,fVar13 * fVar17);
        pfVar5 = param_3 + 5;
        lVar9 = uVar6 - 1;
        fVar20 = fVar19;
        if (1 < param_4) {
          do {
            fVar21 = *pfVar5;
            pfVar1 = pfVar5 + -2;
            pfVar5 = pfVar5 + 3;
            fVar21 = (float)NEON_fmadd(fVar18,*pfVar1,fVar21 * fVar17);
            if (fVar21 <= fVar20) {
              fVar20 = fVar21;
            }
            if (fVar19 <= fVar21) {
              fVar19 = fVar21;
            }
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (fVar19 < fVar16 + 0.0001 || fVar15 + -0.0001 < fVar20) {
          return 0;
        }
        uVar2 = uVar10 + 1;
        iVar8 = (int)uVar10;
        uVar10 = uVar2;
      } while (uVar2 != uVar7);
    }
  }
  iVar8 = param_4 + -1;
  if (param_4 < 1) {
    return 1;
  }
  bVar4 = true;
  uVar10 = 0;
  do {
    fVar13 = -(param_3[uVar10 * 3] - param_3[iVar8 * 3]);
    fVar14 = (param_3 + uVar10 * 3)[2] - (param_3 + iVar8 * 3)[2];
    fVar11 = (float)NEON_fmadd(fVar14,*param_1,param_1[2] * fVar13);
    pfVar5 = param_1 + 5;
    lVar9 = uVar7 - 1;
    fVar12 = fVar11;
    if (param_2 < 2) {
      fVar15 = (float)NEON_fmadd(fVar14,*param_3,param_3[2] * fVar13);
    }
    else {
      do {
        fVar15 = (float)NEON_fmadd(fVar14,pfVar5[-2],*pfVar5 * fVar13);
        if (fVar15 <= fVar12) {
          fVar12 = fVar15;
        }
        if (fVar11 <= fVar15) {
          fVar11 = fVar15;
        }
        lVar9 = lVar9 + -1;
        pfVar5 = pfVar5 + 3;
      } while (lVar9 != 0);
      fVar15 = (float)NEON_fmadd(fVar14,*param_3,param_3[2] * fVar13);
    }
    pfVar5 = param_3 + 5;
    lVar9 = uVar6 - 1;
    fVar16 = fVar15;
    if (1 < param_4) {
      do {
        fVar17 = (float)NEON_fmadd(fVar14,pfVar5[-2],*pfVar5 * fVar13);
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
        if (fVar15 <= fVar17) {
          fVar15 = fVar17;
        }
        lVar9 = lVar9 + -1;
        pfVar5 = pfVar5 + 3;
      } while (lVar9 != 0);
    }
    bVar3 = fVar11 + -0.0001 < fVar16;
    if ((bVar3 || fVar12 + 0.0001 != fVar15) && (bVar3 || fVar15 <= fVar12 + 0.0001)) break;
    uVar2 = uVar10 + 1;
    iVar8 = (int)uVar10;
    bVar4 = uVar2 < uVar6;
    uVar10 = uVar2;
  } while (uVar2 != uVar6);
  return bVar4 ^ 1;
}


