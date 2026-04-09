// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_isMeshCoplanar
// Entry Point: 00eb8a04
// Size: 504 bytes
// Signature: undefined __cdecl fm_isMeshCoplanar(uint param_1, uint * param_2, float * param_3, bool param_4)


/* FLOAT_MATH::fm_isMeshCoplanar(unsigned int, unsigned int const*, float const*, bool) */

uint FLOAT_MATH::fm_isMeshCoplanar(uint param_1,uint *param_2,float *param_3,bool param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint *puVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (param_1 != 0) {
    pfVar1 = param_3 + param_2[1] * 3;
    pfVar2 = param_3 + param_2[2] * 3;
    pfVar3 = param_3 + *param_2 * 3;
    fVar14 = *pfVar1 - *pfVar2;
    fVar11 = pfVar1[1] - pfVar2[1];
    fVar8 = pfVar3[1] - pfVar1[1];
    fVar9 = pfVar1[2] - pfVar2[2];
    fVar12 = pfVar3[2] - pfVar1[2];
    fVar6 = *pfVar3 - *pfVar1;
    fVar10 = (float)NEON_fmadd(fVar9,fVar6,fVar12 * -fVar14);
    fVar9 = (float)NEON_fmadd(fVar11,fVar12,fVar8 * -fVar9);
    fVar11 = (float)NEON_fmadd(fVar14,fVar8,fVar6 * -fVar11);
    uVar7 = NEON_fmadd(fVar9,fVar9,fVar10 * fVar10);
    fVar8 = (float)NEON_fmadd(fVar11,fVar11,uVar7);
    fVar6 = 0.0;
    if (1e-06 <= SQRT(fVar8)) {
      fVar6 = 1.0 / SQRT(fVar8);
    }
    iVar4 = param_1 - 1;
    if (iVar4 == 0) {
      return param_1;
    }
    puVar5 = param_2 + 5;
    uVar7 = NEON_fmadd(fVar9 * fVar6,*pfVar3,pfVar3[1] * fVar10 * fVar6);
    fVar8 = (float)NEON_fmadd(fVar11 * fVar6,pfVar3[2],uVar7);
    do {
      pfVar1 = param_3 + puVar5[-1] * 3;
      pfVar2 = param_3 + *puVar5 * 3;
      pfVar3 = param_3 + puVar5[-2] * 3;
      fVar13 = *pfVar1 - *pfVar2;
      fVar15 = pfVar1[1] - pfVar2[1];
      fVar14 = pfVar3[1] - pfVar1[1];
      fVar17 = pfVar1[2] - pfVar2[2];
      fVar16 = pfVar3[2] - pfVar1[2];
      fVar12 = *pfVar3 - *pfVar1;
      fVar18 = (float)NEON_fmadd(fVar17,fVar12,fVar16 * -fVar13);
      fVar16 = (float)NEON_fmadd(fVar15,fVar16,fVar14 * -fVar17);
      fVar13 = (float)NEON_fmadd(fVar13,fVar14,fVar12 * -fVar15);
      uVar7 = NEON_fmadd(fVar16,fVar16,fVar18 * fVar18);
      fVar14 = (float)NEON_fmadd(fVar13,fVar13,uVar7);
      fVar12 = 0.0;
      if (1e-06 <= SQRT(fVar14)) {
        fVar12 = 1.0 / SQRT(fVar14);
      }
      uVar7 = NEON_fmadd(fVar16 * fVar12,*pfVar3,pfVar3[1] * fVar18 * fVar12);
      fVar14 = (float)NEON_fmadd(fVar13 * fVar12,pfVar3[2],uVar7);
      if (0.001 <= ABS((0.0 - fVar8) - (0.0 - fVar14))) {
        return 0;
      }
      uVar7 = NEON_fmadd(fVar9 * fVar6,fVar16 * fVar12,fVar10 * fVar6 * fVar18 * fVar12);
      fVar14 = (float)NEON_fmadd(fVar11 * fVar6,fVar13 * fVar12,uVar7);
      fVar12 = ABS(fVar14);
      if (!param_4) {
        fVar12 = fVar14;
      }
      if ((fVar12 < 0.99 || 1.01 <= fVar12) && (fVar12 < 0.99 || fVar12 != 1.01)) {
        return 0;
      }
      iVar4 = iVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (iVar4 != 0);
  }
  return 1;
}


