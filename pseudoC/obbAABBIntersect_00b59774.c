// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: obbAABBIntersect
// Entry Point: 00b59774
// Size: 904 bytes
// Signature: undefined __cdecl obbAABBIntersect(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* MathUtil::obbAABBIntersect(float const (*) [3], float const*, float const*, float const*, float
   const*) */

undefined8
MathUtil::obbAABBIntersect
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
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
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar3 = *param_1;
  fVar2 = param_1[1];
  fVar31 = param_1[8];
  fVar1 = param_1[2];
  fVar16 = param_1[3];
  fVar8 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = ABS(fVar3) + 1e-06;
  fVar5 = ABS(fVar2) + 1e-06;
  fVar4 = ABS(fVar1) + 1e-06;
  fVar32 = param_1[6];
  fVar33 = param_1[7];
  fVar17 = ABS(fVar16) + 1e-06;
  fVar19 = param_3[1];
  fVar30 = param_3[2];
  fVar22 = ABS(fVar8) + 1e-06;
  fVar18 = ABS(fVar6) + 1e-06;
  fVar20 = *param_3;
  fVar23 = ABS(fVar32) + 1e-06;
  uVar26 = NEON_fmadd(fVar20,fVar7,fVar19 * fVar5);
  fVar21 = ABS(fVar33) + 1e-06;
  fVar29 = ABS(fVar31) + 1e-06;
  fVar24 = *param_5;
  fVar27 = (float)NEON_fmadd(fVar30,fVar4,uVar26);
  if (ABS(*param_2 - *param_4) <= fVar27 + fVar24) {
    uVar26 = NEON_fmadd(fVar20,fVar17,fVar19 * fVar22);
    fVar25 = param_2[1] - param_4[1];
    fVar28 = param_5[1];
    fVar27 = (float)NEON_fmadd(fVar30,fVar18,uVar26);
    if (ABS(fVar25) <= fVar27 + fVar28) {
      uVar26 = NEON_fmadd(fVar20,fVar23,fVar19 * fVar21);
      fVar9 = param_2[2] - param_4[2];
      fVar11 = (float)NEON_fmadd(fVar30,fVar29,uVar26);
      fVar27 = param_5[2];
      if (ABS(fVar9) <= fVar11 + fVar27) {
        fVar11 = *param_2 - *param_4;
        uVar26 = NEON_fmadd(fVar11,fVar3,fVar25 * fVar16);
        uVar12 = NEON_fmadd(fVar24,fVar7,fVar28 * fVar17);
        fVar10 = (float)NEON_fmadd(fVar9,fVar32,uVar26);
        fVar13 = (float)NEON_fmadd(fVar27,fVar23,uVar12);
        if (ABS(fVar10) <= fVar13 + fVar20) {
          uVar26 = NEON_fmadd(fVar11,fVar2,fVar25 * fVar8);
          uVar12 = NEON_fmadd(fVar24,fVar5,fVar28 * fVar22);
          fVar10 = (float)NEON_fmadd(fVar9,fVar33,uVar26);
          fVar13 = (float)NEON_fmadd(fVar27,fVar21,uVar12);
          if (ABS(fVar10) <= fVar13 + fVar19) {
            uVar26 = NEON_fmadd(fVar11,fVar1,fVar25 * fVar6);
            uVar12 = NEON_fmadd(fVar24,fVar4,fVar28 * fVar18);
            fVar10 = (float)NEON_fmadd(fVar9,fVar31,uVar26);
            fVar13 = (float)NEON_fmadd(fVar27,fVar29,uVar12);
            if (ABS(fVar10) <= fVar13 + fVar30) {
              if ((((((((0.9999 < fVar7 || 0.9999 < fVar5) || 0.9999 < fVar4) || 0.9999 < fVar17) ||
                     0.9999 < fVar22) || 0.9999 < fVar18) || 0.9999 < fVar23) || 0.9999 < fVar21) ||
                  0.9999 < fVar29) {
                return 1;
              }
              fVar10 = -fVar25;
              fVar13 = (float)NEON_fmadd(fVar19,fVar4,fVar30 * fVar5);
              fVar15 = (float)NEON_fmadd(fVar28,fVar23,fVar17 * fVar27);
              fVar14 = (float)NEON_fmadd(fVar9,fVar16,fVar32 * fVar10);
              if (ABS(fVar14) <= fVar13 + fVar15) {
                fVar13 = (float)NEON_fmadd(fVar20,fVar4,fVar30 * fVar7);
                fVar14 = (float)NEON_fmadd(fVar9,fVar8,fVar33 * fVar10);
                fVar15 = (float)NEON_fmadd(fVar28,fVar21,fVar22 * fVar27);
                if (ABS(fVar14) <= fVar13 + fVar15) {
                  fVar13 = (float)NEON_fmadd(fVar20,fVar5,fVar19 * fVar7);
                  fVar10 = (float)NEON_fmadd(fVar9,fVar6,fVar31 * fVar10);
                  fVar14 = (float)NEON_fmadd(fVar28,fVar29,fVar18 * fVar27);
                  if (ABS(fVar10) <= fVar13 + fVar14) {
                    fVar9 = -fVar9;
                    fVar10 = (float)NEON_fmadd(fVar19,fVar18,fVar30 * fVar22);
                    fVar13 = (float)NEON_fmadd(fVar11,fVar32,fVar3 * fVar9);
                    fVar32 = (float)NEON_fmadd(fVar24,fVar23,fVar7 * fVar27);
                    if (ABS(fVar13) <= fVar10 + fVar32) {
                      fVar10 = (float)NEON_fmadd(fVar20,fVar18,fVar30 * fVar17);
                      fVar33 = (float)NEON_fmadd(fVar11,fVar33,fVar2 * fVar9);
                      fVar32 = (float)NEON_fmadd(fVar24,fVar21,fVar5 * fVar27);
                      if (ABS(fVar33) <= fVar10 + fVar32) {
                        fVar32 = (float)NEON_fmadd(fVar20,fVar22,fVar19 * fVar17);
                        fVar31 = (float)NEON_fmadd(fVar11,fVar31,fVar1 * fVar9);
                        fVar27 = (float)NEON_fmadd(fVar24,fVar29,fVar4 * fVar27);
                        if (ABS(fVar31) <= fVar32 + fVar27) {
                          fVar11 = -fVar11;
                          fVar27 = (float)NEON_fmadd(fVar19,fVar29,fVar30 * fVar21);
                          fVar7 = (float)NEON_fmadd(fVar24,fVar17,fVar7 * fVar28);
                          fVar3 = (float)NEON_fmadd(fVar25,fVar3,fVar16 * fVar11);
                          if (ABS(fVar3) <= fVar27 + fVar7) {
                            fVar3 = (float)NEON_fmadd(fVar20,fVar29,fVar30 * fVar23);
                            fVar2 = (float)NEON_fmadd(fVar25,fVar2,fVar8 * fVar11);
                            fVar5 = (float)NEON_fmadd(fVar24,fVar22,fVar5 * fVar28);
                            if (ABS(fVar2) <= fVar3 + fVar5) {
                              fVar2 = (float)NEON_fmadd(fVar20,fVar21,fVar19 * fVar23);
                              fVar1 = (float)NEON_fmadd(fVar25,fVar1,fVar6 * fVar11);
                              fVar3 = (float)NEON_fmadd(fVar24,fVar18,fVar4 * fVar28);
                              if (ABS(fVar1) <= fVar2 + fVar3) {
                                return 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


