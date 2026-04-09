// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_isValidTriangle
// Entry Point: 00eba79c
// Size: 872 bytes
// Signature: undefined __cdecl fm_isValidTriangle(float * param_1, float * param_2, float * param_3, float param_4)


/* FLOAT_MATH::fm_isValidTriangle(float const*, float const*, float const*, float) */

void FLOAT_MATH::fm_isValidTriangle(float *param_1,float *param_2,float *param_3,float param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float afStack_328 [192];
  long local_28;
  
  lVar4 = tpidr_el0;
  fVar18 = param_4 * param_4;
  local_28 = *(long *)(lVar4 + 0x28);
  fVar26 = *param_1;
  fVar22 = param_1[1];
  fVar15 = *param_2;
  fVar14 = param_2[1];
  fVar23 = param_1[2];
  fVar16 = param_2[2];
  uVar7 = NEON_fmadd(fVar26 - fVar15,fVar26 - fVar15,(fVar22 - fVar14) * (fVar22 - fVar14));
  fVar8 = (float)NEON_fmadd(fVar23 - fVar16,fVar23 - fVar16,uVar7);
  if (fVar18 <= fVar8) {
    fVar9 = *param_3;
    fVar8 = param_3[1];
    fVar10 = param_3[2];
    fVar11 = fVar22 - fVar8;
    fVar12 = fVar26 - fVar9;
    fVar13 = fVar23 - fVar10;
    uVar7 = NEON_fmadd(fVar12,fVar12,fVar11 * fVar11);
    fVar17 = (float)NEON_fmadd(fVar13,fVar13,uVar7);
    if (fVar18 <= fVar17) {
      uVar7 = NEON_fmadd(fVar15 - fVar9,fVar15 - fVar9,(fVar14 - fVar8) * (fVar14 - fVar8));
      fVar19 = (float)NEON_fmadd(fVar16 - fVar10,fVar16 - fVar10,uVar7);
      if (fVar18 <= fVar19) {
        fVar18 = fVar14 - fVar22;
        fVar19 = fVar15 - fVar26;
        fVar20 = fVar16 - fVar23;
        uVar7 = NEON_fmadd(fVar19,fVar19,fVar18 * fVar18);
        fVar21 = (float)NEON_fmadd(fVar20,fVar20,uVar7);
        fVar21 = SQRT(fVar21);
        if (fVar21 == 0.0) {
          fVar22 = fVar21 * 0.5 * 0.0;
        }
        else {
          fVar27 = (float)NEON_fmadd(fVar19,fVar9 - fVar26,fVar18 * (fVar8 - fVar22));
          fVar27 = (float)NEON_fnmadd(fVar20,fVar10 - fVar23,-fVar27);
          fVar27 = fVar27 / (fVar21 * fVar21);
          fVar22 = (float)NEON_fmadd(fVar27,fVar18,fVar8 - fVar22);
          uVar7 = NEON_fmadd(fVar27,fVar19,fVar9 - fVar26);
          uVar25 = NEON_fmadd(fVar27,fVar20,fVar10 - fVar23);
          uVar7 = NEON_fmadd(uVar7,uVar7,fVar22 * fVar22);
          fVar22 = (float)NEON_fmadd(uVar25,uVar25,uVar7);
          fVar22 = fVar21 * 0.5 * SQRT(fVar22);
        }
        if (param_4 < fVar22) {
          fVar17 = SQRT(fVar17);
          fVar22 = 0.0;
          fVar28 = 0.0;
          fVar26 = 1.0;
          fVar27 = 1.0;
          fVar23 = 0.0;
          if (1e-07 < fVar17) {
            fVar28 = 1.0 / fVar17;
            fVar27 = fVar12 * fVar28;
            fVar23 = fVar11 * fVar28;
            fVar28 = fVar13 * fVar28;
          }
          fVar6 = 1.0 - param_4;
          fVar29 = 0.0;
          if (1e-07 < fVar21) {
            fVar29 = 1.0 / fVar21;
            fVar26 = fVar19 * fVar29;
            fVar22 = fVar18 * fVar29;
            fVar29 = fVar20 * fVar29;
          }
          fVar24 = fVar10 - fVar16;
          fVar30 = 0.0;
          uVar7 = NEON_fmadd(fVar27,fVar26,fVar23 * fVar22);
          fVar23 = fVar9 - fVar15;
          fVar32 = 1.0;
          fVar31 = 1.0;
          fVar26 = (float)NEON_fmadd(fVar28,fVar29,uVar7);
          fVar22 = fVar8 - fVar14;
          fVar27 = 0.0;
          cVar2 = fVar26 < fVar6;
          lVar1 = 0xc;
          pfVar5 = afStack_328 + 3;
          if (!(bool)cVar2) {
            lVar1 = 0;
            pfVar5 = afStack_328;
          }
          fVar28 = 0.0;
          if (1e-07 < fVar21) {
            fVar21 = 1.0 / fVar21;
            fVar31 = fVar19 * fVar21;
            fVar28 = fVar18 * fVar21;
            fVar30 = fVar20 * fVar21;
          }
          uVar7 = NEON_fmadd(fVar23,fVar23,fVar22 * fVar22);
          fVar18 = (float)NEON_fmadd(fVar24,fVar24,uVar7);
          fVar18 = SQRT(fVar18);
          fVar19 = 0.0;
          if (1e-07 < fVar18) {
            fVar19 = 1.0 / fVar18;
            fVar32 = fVar23 * fVar19;
            fVar27 = fVar22 * fVar19;
            fVar19 = fVar24 * fVar19;
          }
          uVar7 = NEON_fmadd(fVar31,fVar32,fVar28 * fVar27);
          fVar19 = (float)NEON_fmadd(fVar30,fVar19,uVar7);
          if (fVar19 < fVar6) {
            *(float *)((long)afStack_328 + lVar1) = fVar15;
            pfVar5[1] = fVar14;
            pfVar5[2] = fVar16;
            pfVar5 = pfVar5 + 3;
            cVar2 = '\x02';
            if (fVar6 <= fVar26) {
              cVar2 = '\x01';
            }
          }
          fVar16 = 0.0;
          fVar15 = 1.0;
          fVar14 = 0.0;
          if (fVar18 <= 1e-07) {
            if (fVar17 <= 1e-07) goto LAB_00ebaa10;
LAB_00ebaa64:
            fVar17 = 1.0 / fVar17;
            uVar7 = NEON_fmadd(fVar15,fVar12 * fVar17,fVar14 * fVar11 * fVar17);
            fVar14 = (float)NEON_fmadd(fVar16,fVar13 * fVar17,uVar7);
          }
          else {
            fVar18 = 1.0 / fVar18;
            fVar15 = fVar23 * fVar18;
            fVar14 = fVar22 * fVar18;
            fVar16 = fVar24 * fVar18;
            if (1e-07 < fVar17) goto LAB_00ebaa64;
LAB_00ebaa10:
            uVar7 = NEON_fmadd(fVar15,0x3f800000,fVar14 * 0.0);
            fVar14 = (float)NEON_fmadd(fVar16,0,uVar7);
          }
          if (fVar14 < fVar6) {
            cVar2 = cVar2 + '\x01';
            *pfVar5 = fVar9;
            pfVar5[1] = fVar8;
            pfVar5[2] = fVar10;
          }
          bVar3 = cVar2 == '\x03';
          lVar4 = *(long *)(lVar4 + 0x28);
          goto joined_r0x00ebaa44;
        }
      }
    }
  }
  bVar3 = false;
  lVar4 = *(long *)(lVar4 + 0x28);
joined_r0x00ebaa44:
  if (lVar4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


