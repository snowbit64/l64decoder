// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectorigin
// Entry Point: 00f6cdc0
// Size: 1148 bytes
// Signature: undefined __cdecl projectorigin(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, float * param_4, uint * param_5)


/* gjkepa2_impl::GJK::projectorigin(btVector3 const&, btVector3 const&, btVector3 const&, float*,
   unsigned int&) */

float gjkepa2_impl::GJK::projectorigin
                (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,float *param_4,
                uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
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
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar23 = *(float *)(param_2 + 4);
  fVar22 = *(float *)(param_2 + 8);
  fVar20 = *(float *)(param_1 + 4);
  fVar14 = *(float *)(param_1 + 8);
  fVar13 = *(float *)(param_3 + 4);
  fVar19 = *(float *)(param_3 + 8);
  fVar24 = *(float *)param_2;
  fVar12 = *(float *)param_1;
  fVar17 = fVar14 - fVar22;
  fVar18 = fVar20 - fVar23;
  fVar5 = fVar23 - fVar13;
  fVar7 = fVar22 - fVar19;
  fVar15 = fVar12 - fVar24;
  fVar21 = *(float *)param_3;
  fVar6 = fVar24 - fVar21;
  fVar8 = (float)NEON_fnmsub(fVar7,fVar18,fVar5 * fVar17);
  fVar10 = (float)NEON_fnmsub(fVar6,fVar17,fVar15 * fVar7);
  fVar9 = (float)NEON_fnmsub(fVar15,fVar5,fVar6 * fVar18);
  uVar2 = NEON_fmadd(fVar10,fVar10,fVar8 * fVar8);
  fVar11 = (float)NEON_fmadd(fVar9,fVar9,uVar2);
  fVar3 = -1.0;
  if (0.0 < fVar11) {
    fVar3 = (float)NEON_fnmsub(fVar18,fVar9,fVar17 * fVar10);
    uVar2 = NEON_fnmsub(fVar17,fVar8,fVar15 * fVar9);
    uVar16 = NEON_fnmsub(fVar15,fVar10,fVar18 * fVar8);
    uVar2 = NEON_fmadd(uVar2,fVar20,fVar3 * fVar12);
    fVar3 = (float)NEON_fmadd(fVar14,uVar16,uVar2);
    if (fVar3 <= 0.0) {
      uVar1 = 0;
      fVar15 = 0.0;
      fVar17 = 0.0;
      fVar3 = -1.0;
    }
    else {
      fVar3 = fVar24 - fVar12;
      fVar15 = fVar23 - fVar20;
      fVar18 = fVar22 - fVar14;
      uVar2 = NEON_fmadd(fVar15,fVar15,fVar3 * fVar3);
      fVar25 = (float)NEON_fmadd(fVar18,fVar18,uVar2);
      fVar17 = 0.0;
      if (fVar25 <= 0.0) {
        uVar1 = 0;
        fVar15 = 0.0;
        fVar3 = -1.0;
      }
      else {
        fVar26 = (float)NEON_fmadd(fVar15,fVar20,fVar3 * fVar12);
        fVar26 = (float)NEON_fnmadd(fVar18,fVar14,-fVar26);
        fVar26 = fVar26 / fVar25;
        if (1.0 <= fVar26) {
          fVar15 = 0.0;
          uVar1 = 2;
          fVar17 = 1.0;
          uVar2 = NEON_fmadd(fVar23,fVar23,fVar24 * fVar24);
          fVar3 = (float)NEON_fmadd(fVar22,fVar22,uVar2);
        }
        else if (fVar26 <= 0.0) {
          fVar15 = 1.0;
          uVar1 = 1;
          uVar2 = NEON_fmadd(fVar20,fVar20,fVar12 * fVar12);
          fVar3 = (float)NEON_fmadd(fVar14,fVar14,uVar2);
        }
        else {
          fVar3 = (float)NEON_fmadd(fVar26,fVar3,fVar12);
          uVar2 = NEON_fmadd(fVar26,fVar15,fVar20);
          uVar16 = NEON_fmadd(fVar26,fVar18,fVar14);
          uVar1 = 3;
          uVar2 = NEON_fmadd(uVar2,uVar2,fVar3 * fVar3);
          fVar15 = 1.0 - fVar26;
          fVar3 = (float)NEON_fmadd(uVar16,uVar16,uVar2);
          fVar17 = fVar26;
        }
      }
      *param_4 = fVar15;
      param_4[1] = fVar17;
      param_4[2] = 0.0;
      fVar24 = *(float *)param_2;
      fVar23 = *(float *)(param_2 + 4);
      fVar22 = *(float *)(param_2 + 8);
      *param_5 = uVar1;
    }
    fVar21 = fVar21 - fVar12;
    fVar13 = fVar13 - fVar20;
    fVar19 = fVar19 - fVar14;
    fVar12 = (float)NEON_fnmsub(fVar5,fVar9,fVar7 * fVar10);
    uVar2 = NEON_fnmsub(fVar7,fVar8,fVar6 * fVar9);
    uVar16 = NEON_fnmsub(fVar6,fVar10,fVar5 * fVar8);
    uVar2 = NEON_fmadd(uVar2,fVar23,fVar12 * fVar24);
    fVar12 = (float)NEON_fmadd(fVar22,uVar16,uVar2);
    if (0.0 < fVar12) {
      fVar25 = *(float *)param_3;
      fVar26 = *(float *)(param_3 + 4);
      fVar27 = *(float *)(param_3 + 8);
      fVar18 = fVar25 - fVar24;
      fVar14 = fVar26 - fVar23;
      fVar20 = fVar27 - fVar22;
      uVar2 = NEON_fmadd(fVar14,fVar14,fVar18 * fVar18);
      fVar28 = (float)NEON_fmadd(fVar20,fVar20,uVar2);
      fVar12 = -1.0;
      if (0.0 < fVar28) {
        fVar17 = 1.0;
        fVar12 = (float)NEON_fmadd(fVar14,fVar23,fVar18 * fVar24);
        fVar4 = (float)NEON_fnmadd(fVar20,fVar22,-fVar12);
        fVar4 = fVar4 / fVar28;
        if (1.0 <= fVar4) {
          fVar15 = 0.0;
          uVar1 = 2;
          uVar2 = NEON_fmadd(fVar26,fVar26,fVar25 * fVar25);
          fVar12 = (float)NEON_fmadd(fVar27,fVar27,uVar2);
        }
        else if (fVar4 <= 0.0) {
          fVar17 = 0.0;
          fVar15 = 1.0;
          uVar1 = 1;
          uVar2 = NEON_fmadd(fVar23,fVar23,fVar24 * fVar24);
          fVar12 = (float)NEON_fmadd(fVar22,fVar22,uVar2);
        }
        else {
          fVar12 = (float)NEON_fmadd(fVar4,fVar18,fVar24);
          uVar2 = NEON_fmadd(fVar4,fVar14,fVar23);
          uVar16 = NEON_fmadd(fVar4,fVar20,fVar22);
          uVar1 = 3;
          uVar2 = NEON_fmadd(uVar2,uVar2,fVar12 * fVar12);
          fVar15 = 1.0 - fVar4;
          fVar12 = (float)NEON_fmadd(uVar16,uVar16,uVar2);
          fVar17 = fVar4;
        }
      }
      if ((fVar3 < 0.0) || (fVar12 < fVar3)) {
        param_4[1] = fVar15;
        param_4[2] = fVar17;
        *param_4 = 0.0;
        *param_5 = uVar1 << 1;
        fVar3 = fVar12;
      }
    }
    fVar18 = *(float *)param_3;
    fVar20 = *(float *)(param_3 + 4);
    fVar12 = (float)NEON_fnmsub(fVar13,fVar9,fVar19 * fVar10);
    uVar2 = NEON_fnmsub(fVar19,fVar8,fVar21 * fVar9);
    uVar16 = NEON_fnmsub(fVar21,fVar10,fVar13 * fVar8);
    uVar2 = NEON_fmadd(uVar2,fVar20,fVar12 * fVar18);
    fVar14 = *(float *)(param_3 + 8);
    fVar12 = (float)NEON_fmadd(fVar14,uVar16,uVar2);
    if (0.0 < fVar12) {
      fVar25 = *(float *)param_1;
      fVar26 = *(float *)(param_1 + 4);
      fVar27 = *(float *)(param_1 + 8);
      fVar23 = fVar25 - fVar18;
      fVar22 = fVar26 - fVar20;
      fVar24 = fVar27 - fVar14;
      uVar2 = NEON_fmadd(fVar22,fVar22,fVar23 * fVar23);
      fVar28 = (float)NEON_fmadd(fVar24,fVar24,uVar2);
      fVar12 = -1.0;
      if (0.0 < fVar28) {
        fVar12 = (float)NEON_fmadd(fVar22,fVar20,fVar23 * fVar18);
        fVar4 = (float)NEON_fnmadd(fVar24,fVar14,-fVar12);
        fVar4 = fVar4 / fVar28;
        fVar17 = 1.0;
        if (1.0 <= fVar4) {
          uVar1 = 2;
          uVar2 = NEON_fmadd(fVar26,fVar26,fVar25 * fVar25);
          fVar12 = (float)NEON_fmadd(fVar27,fVar27,uVar2);
          fVar15 = 0.0;
        }
        else if (0.0 < fVar4) {
          fVar12 = (float)NEON_fmadd(fVar4,fVar23,fVar18);
          uVar2 = NEON_fmadd(fVar4,fVar22,fVar20);
          uVar16 = NEON_fmadd(fVar4,fVar24,fVar14);
          uVar1 = 3;
          uVar2 = NEON_fmadd(uVar2,uVar2,fVar12 * fVar12);
          fVar15 = 1.0 - fVar4;
          fVar12 = (float)NEON_fmadd(uVar16,uVar16,uVar2);
          fVar17 = fVar4;
        }
        else {
          fVar15 = 1.0;
          uVar1 = 1;
          uVar2 = NEON_fmadd(fVar20,fVar20,fVar18 * fVar18);
          fVar12 = (float)NEON_fmadd(fVar14,fVar14,uVar2);
          fVar17 = 0.0;
        }
      }
      if ((fVar3 < 0.0) || (fVar12 < fVar3)) {
        param_4[2] = fVar15;
        *param_4 = fVar17;
        param_4[1] = 0.0;
        *param_5 = uVar1 >> 1 | (uVar1 & 1) << 2;
        fVar3 = fVar12;
      }
    }
    if (fVar3 < 0.0) {
      fVar3 = *(float *)param_1;
      uVar2 = *(undefined4 *)(param_1 + 4);
      fVar14 = *(float *)param_2;
      *param_5 = 7;
      uVar2 = NEON_fmadd(uVar2,fVar10,fVar3 * fVar8);
      fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar9,uVar2);
      fVar12 = fVar12 / fVar11;
      fVar10 = fVar12 * fVar10;
      fVar9 = fVar12 * fVar9;
      fVar12 = fVar12 * fVar8;
      fVar3 = (float)NEON_fnmsub(*(float *)(param_2 + 8) - fVar9,fVar5,
                                 (*(float *)(param_2 + 4) - fVar10) * fVar7);
      uVar16 = NEON_fnmsub(fVar14 - fVar12,fVar7,(*(float *)(param_2 + 8) - fVar9) * fVar6);
      uVar2 = NEON_fnmsub(*(float *)(param_2 + 4) - fVar10,fVar6,(fVar14 - fVar12) * fVar5);
      uVar16 = NEON_fmadd(uVar16,uVar16,fVar3 * fVar3);
      fVar3 = (float)NEON_fmadd(uVar2,uVar2,uVar16);
      fVar5 = SQRT(fVar3) / SQRT(fVar11);
      *param_4 = fVar5;
      uVar2 = NEON_fmadd(fVar10,fVar10,fVar12 * fVar12);
      fVar6 = (float)NEON_fnmsub(*(float *)(param_3 + 8) - fVar9,fVar13,
                                 fVar19 * (*(float *)(param_3 + 4) - fVar10));
      uVar16 = NEON_fnmsub(fVar19,*(float *)param_3 - fVar12,
                           fVar21 * (*(float *)(param_3 + 8) - fVar9));
      fVar3 = (float)NEON_fmadd(fVar9,fVar9,uVar2);
      uVar2 = NEON_fnmsub(fVar21,*(float *)(param_3 + 4) - fVar10,
                          fVar13 * (*(float *)param_3 - fVar12));
      uVar16 = NEON_fmadd(uVar16,uVar16,fVar6 * fVar6);
      fVar6 = (float)NEON_fmadd(uVar2,uVar2,uVar16);
      fVar6 = SQRT(fVar6) / SQRT(fVar11);
      param_4[1] = fVar6;
      param_4[2] = 1.0 - (fVar5 + fVar6);
    }
  }
  return fVar3;
}


