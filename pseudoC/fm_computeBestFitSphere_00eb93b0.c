// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitSphere
// Entry Point: 00eb93b0
// Size: 704 bytes
// Signature: undefined __cdecl fm_computeBestFitSphere(uint param_1, float * param_2, uint param_3, float * param_4)


/* FLOAT_MATH::fm_computeBestFitSphere(unsigned int, float const*, unsigned int, float*) */

void FLOAT_MATH::fm_computeBestFitSphere(uint param_1,float *param_2,uint param_3,float *param_4)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  
  if (param_1 == 0) {
    fVar9 = 1e+08;
    fVar5 = -1e+08;
    fVar7 = fVar9;
    fVar8 = fVar5;
    fVar22 = fVar5;
    fVar11 = fVar9;
    fVar18 = fVar5;
    fVar13 = fVar9;
    fVar16 = fVar5;
    fVar15 = fVar5;
    fVar14 = fVar9;
    fVar12 = fVar9;
    fVar17 = fVar5;
    fVar10 = fVar5;
    fVar6 = fVar5;
    fVar19 = fVar9;
    fVar20 = fVar9;
    fVar21 = fVar9;
  }
  else {
    fVar5 = -1e+08;
    fVar9 = 1e+08;
    pfVar4 = param_2 + 2;
    fVar7 = fVar9;
    fVar8 = fVar5;
    fVar26 = fVar5;
    fVar24 = fVar9;
    fVar18 = fVar5;
    fVar13 = fVar9;
    fVar16 = fVar5;
    fVar15 = fVar5;
    fVar14 = fVar9;
    fVar12 = fVar9;
    fVar28 = fVar5;
    fVar10 = fVar5;
    fVar6 = fVar5;
    fVar19 = fVar9;
    fVar20 = fVar9;
    fVar21 = fVar9;
    uVar1 = param_1;
    do {
      fVar22 = pfVar4[-2];
      if (fVar22 < fVar13) {
        fVar7 = pfVar4[-1];
        fVar9 = *pfVar4;
        fVar25 = pfVar4[-1];
        fVar13 = fVar22;
      }
      else {
        fVar25 = pfVar4[-1];
      }
      if (fVar18 < fVar22) {
        fVar5 = *pfVar4;
        fVar18 = fVar22;
        fVar8 = fVar25;
      }
      if (fVar25 < fVar20) {
        fVar19 = *pfVar4;
        fVar20 = fVar25;
        fVar21 = fVar22;
      }
      fVar27 = *pfVar4;
      pfVar4 = (float *)((long)pfVar4 + (ulong)param_3);
      fVar17 = fVar22;
      fVar11 = fVar27;
      fVar3 = fVar25;
      if (fVar25 <= fVar10) {
        fVar17 = fVar28;
        fVar11 = fVar6;
        fVar3 = fVar10;
      }
      fVar10 = fVar3;
      fVar6 = fVar11;
      fVar11 = fVar22;
      fVar28 = fVar27;
      fVar3 = fVar25;
      if (fVar12 <= fVar27) {
        fVar11 = fVar24;
        fVar28 = fVar12;
        fVar3 = fVar14;
      }
      fVar14 = fVar3;
      fVar12 = fVar28;
      if (fVar27 <= fVar15) {
        fVar22 = fVar26;
        fVar27 = fVar15;
        fVar25 = fVar16;
      }
      fVar16 = fVar25;
      fVar15 = fVar27;
      uVar1 = uVar1 - 1;
      fVar26 = fVar22;
      fVar24 = fVar11;
      fVar28 = fVar17;
    } while (uVar1 != 0);
  }
  uVar23 = NEON_fmadd(fVar18 - fVar13,fVar18 - fVar13,(fVar8 - fVar7) * (fVar8 - fVar7));
  uVar29 = NEON_fmadd(fVar17 - fVar21,fVar17 - fVar21,(fVar10 - fVar20) * (fVar10 - fVar20));
  fVar26 = (float)NEON_fmadd(fVar5 - fVar9,fVar5 - fVar9,uVar23);
  fVar28 = (float)NEON_fmadd(fVar6 - fVar19,fVar6 - fVar19,uVar29);
  uVar23 = NEON_fmadd(fVar22 - fVar11,fVar22 - fVar11,(fVar16 - fVar14) * (fVar16 - fVar14));
  fVar24 = (float)NEON_fmadd(fVar15 - fVar12,fVar15 - fVar12,uVar23);
  if (fVar26 < fVar28) {
    fVar5 = fVar6;
    fVar9 = fVar19;
    fVar7 = fVar20;
    fVar8 = fVar10;
    fVar18 = fVar17;
    fVar13 = fVar21;
    fVar26 = fVar28;
  }
  if (fVar26 < fVar24) {
    fVar5 = fVar15;
    fVar9 = fVar12;
    fVar7 = fVar14;
    fVar8 = fVar16;
    fVar18 = fVar22;
    fVar13 = fVar11;
  }
  fVar10 = (fVar7 + fVar8) * 0.5;
  fVar6 = (fVar13 + fVar18) * 0.5;
  fVar9 = (fVar9 + fVar5) * 0.5;
  *param_4 = fVar6;
  param_4[1] = fVar10;
  param_4[2] = fVar9;
  uVar23 = NEON_fmadd(fVar18 - fVar6,fVar18 - fVar6,(fVar8 - fVar10) * (fVar8 - fVar10));
  fVar12 = (float)NEON_fmadd(fVar5 - fVar9,fVar5 - fVar9,uVar23);
  fVar5 = SQRT(fVar12);
  if (param_1 != 0) {
    do {
      fVar15 = *param_2;
      pfVar2 = param_2 + 1;
      fVar14 = *pfVar2 - fVar10;
      fVar16 = fVar15 - fVar6;
      pfVar4 = param_2 + 2;
      fVar18 = *pfVar4 - fVar9;
      uVar23 = NEON_fmadd(fVar16,fVar16,fVar14 * fVar14);
      fVar14 = (float)NEON_fmadd(fVar18,fVar18,uVar23);
      if (fVar12 < fVar14) {
        fVar14 = SQRT(fVar14);
        param_2 = (float *)((long)param_2 + (ulong)param_3);
        fVar5 = (fVar5 + fVar14) * 0.5;
        fVar16 = 1.0 / fVar14;
        fVar14 = fVar14 - fVar5;
        fVar6 = (float)NEON_fmadd(fVar5,fVar6,fVar15 * fVar14);
        fVar10 = (float)NEON_fmadd(fVar5,fVar10,*pfVar2 * fVar14);
        fVar9 = (float)NEON_fmadd(fVar5,fVar9,*pfVar4 * fVar14);
        fVar12 = fVar5 * fVar5;
        fVar6 = fVar16 * fVar6;
        fVar10 = fVar16 * fVar10;
        fVar9 = fVar16 * fVar9;
        *param_4 = fVar6;
        param_4[1] = fVar10;
        param_4[2] = fVar9;
      }
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}


