// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestPosition
// Entry Point: 00b56af0
// Size: 652 bytes
// Signature: undefined __cdecl getClosestPosition(Vector3 * param_1, float param_2, Vector3 * param_3)


/* LinearSpline::getClosestPosition(Vector3 const&, float, Vector3&) const */

float LinearSpline::getClosestPosition(Vector3 *param_1,float param_2,Vector3 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float *in_x2;
  float fVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  pfVar3 = *(float **)(param_1 + 0x10);
  pfVar4 = *(float **)(param_1 + 0x18);
  fVar10 = *(float *)param_3;
  fVar13 = *(float *)(param_3 + 4);
  uVar5 = *(uint *)(param_1 + 0x28);
  fVar11 = *(float *)(param_3 + 8);
  if (uVar5 < 2) {
    fVar9 = 0.0;
    fVar12 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar6 = 3.402823e+38;
  }
  else {
    fVar15 = 0.0;
    fVar14 = 0.0;
    fVar6 = 3.402823e+38;
    fVar12 = 0.0;
    fVar9 = 0.0;
    uVar7 = 0;
    fVar16 = *pfVar3;
    pfVar8 = pfVar3;
    do {
      pfVar8 = pfVar8 + 1;
      pfVar1 = pfVar4 + (uVar7 & 0xffffffff);
      pfVar2 = pfVar4 + ((int)uVar7 + 3);
      fVar20 = *pfVar1;
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar23 = pfVar2[1] - fVar18;
      fVar25 = pfVar2[2] - fVar19;
      fVar26 = *pfVar2 - fVar20;
      uVar17 = NEON_fmadd(fVar26,fVar26,fVar23 * fVar23);
      fVar21 = (float)NEON_fmadd(fVar25,fVar25,uVar17);
      if (1e-06 <= fVar21) {
        uVar17 = NEON_fmadd(fVar10 - fVar20,fVar26,fVar23 * (fVar13 - fVar18));
        fVar24 = (float)NEON_fmadd(fVar11 - fVar19,fVar25,uVar17);
        fVar22 = fVar24 / fVar21;
        if (fVar24 / fVar21 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar22 = (float)NEON_fmin(fVar22,0x3f800000);
        fVar20 = fVar20 + fVar26 * fVar22;
        fVar18 = fVar18 + fVar23 * fVar22;
        fVar19 = fVar19 + fVar25 * fVar22;
        uVar17 = NEON_fmadd(fVar13 - fVar18,fVar13 - fVar18,(fVar10 - fVar20) * (fVar10 - fVar20));
        fVar21 = (float)NEON_fmadd(fVar11 - fVar19,fVar11 - fVar19,uVar17);
        if (fVar21 < fVar6) {
          fVar16 = (float)NEON_fmadd(fVar22,*pfVar8 - fVar16,fVar16);
          goto LAB_00b56b48;
        }
      }
      else {
        uVar17 = NEON_fmadd(fVar18 - fVar13,fVar18 - fVar13,(fVar20 - fVar10) * (fVar20 - fVar10));
        fVar21 = (float)NEON_fmadd(fVar19 - fVar11,fVar19 - fVar11,uVar17);
        if (fVar21 < fVar6) {
LAB_00b56b48:
          fVar6 = fVar21;
          fVar12 = fVar20;
          fVar14 = fVar18;
          fVar15 = fVar19;
          fVar9 = fVar16;
        }
      }
      uVar7 = uVar7 + 3;
      fVar16 = *pfVar8;
    } while ((ulong)uVar5 * 3 - 3 != uVar7);
  }
  if (*(int *)(param_1 + 8) == 1) {
    pfVar8 = pfVar4 + (uVar5 - 1) * 3;
    fVar20 = *pfVar8;
    fVar19 = pfVar8[1];
    fVar16 = pfVar8[2];
    fVar21 = pfVar4[1] - fVar19;
    fVar25 = pfVar4[2] - fVar16;
    fVar26 = *pfVar4 - fVar20;
    uVar17 = NEON_fmadd(fVar26,fVar26,fVar21 * fVar21);
    fVar23 = (float)NEON_fmadd(fVar25,fVar25,uVar17);
    fVar18 = pfVar3[uVar5 - 1];
    if (1e-06 <= fVar23) {
      uVar17 = NEON_fmadd(fVar10 - fVar20,fVar26,fVar21 * (fVar13 - fVar19));
      fVar24 = (float)NEON_fmadd(fVar11 - fVar16,fVar25,uVar17);
      fVar22 = fVar24 / fVar23;
      if (fVar24 / fVar23 <= 0.0) {
        fVar22 = 0.0;
      }
      fVar23 = (float)NEON_fmin(fVar22,0x3f800000);
      fVar20 = fVar20 + fVar26 * fVar23;
      fVar19 = fVar19 + fVar21 * fVar23;
      fVar10 = fVar10 - fVar20;
      fVar16 = fVar16 + fVar25 * fVar23;
      fVar13 = fVar13 - fVar19;
      fVar11 = fVar11 - fVar16;
      uVar17 = NEON_fmadd(fVar13,fVar13,fVar10 * fVar10);
      fVar10 = (float)NEON_fmadd(fVar11,fVar11,uVar17);
      if (fVar10 < fVar6) {
        fVar9 = (float)NEON_fmadd(fVar23,*(float *)(param_1 + 0x2c) - fVar18,fVar18);
        fVar12 = fVar20;
        fVar14 = fVar19;
        fVar15 = fVar16;
      }
    }
    else {
      uVar17 = NEON_fmadd(fVar19 - fVar13,fVar19 - fVar13,(fVar20 - fVar10) * (fVar20 - fVar10));
      fVar10 = (float)NEON_fmadd(fVar16 - fVar11,fVar16 - fVar11,uVar17);
      if (fVar10 < fVar6) {
        fVar12 = fVar20;
        fVar14 = fVar19;
        fVar15 = fVar16;
        fVar9 = fVar18;
      }
    }
  }
  *in_x2 = fVar12;
  in_x2[1] = fVar14;
  in_x2[2] = fVar15;
  return fVar9 / *(float *)(param_1 + 0x2c);
}


