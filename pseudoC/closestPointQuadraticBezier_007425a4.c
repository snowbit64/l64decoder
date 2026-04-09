// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPointQuadraticBezier
// Entry Point: 007425a4
// Size: 872 bytes
// Signature: undefined __cdecl closestPointQuadraticBezier(float * param_1, Vector2 * param_2, Vector2 * param_3)


/* closestPointQuadraticBezier(float&, Vector2 const*, Vector2 const&) */

float closestPointQuadraticBezier(float *param_1,Vector2 *param_2,Vector2 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
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
  undefined4 uVar22;
  float fVar23;
  
  fVar8 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 0xc);
  fVar9 = *(float *)param_3;
  fVar7 = *(float *)(param_3 + 4);
  fVar3 = fVar2 - *(float *)(param_2 + 4);
  fVar4 = fVar8 - *(float *)param_2;
  fVar5 = (float)NEON_fmadd(fVar4,fVar9 - *(float *)param_2,
                            fVar3 * (fVar7 - *(float *)(param_2 + 4)));
  if (0.0 <= fVar5) {
    fVar5 = *(float *)(param_2 + 0x14) - fVar2;
    fVar6 = *(float *)(param_2 + 0x10) - fVar8;
    fVar11 = (float)NEON_fmadd(fVar6,fVar9 - *(float *)(param_2 + 0x10),
                               fVar5 * (fVar7 - *(float *)(param_2 + 0x14)));
    if (fVar11 <= 0.0) {
      *param_1 = 0.0;
      fVar2 = fVar2 - fVar7;
      fVar8 = fVar8 - fVar9;
      fVar12 = *(float *)param_2 - *(float *)param_3;
      fVar7 = *(float *)(param_2 + 4) - *(float *)(param_3 + 4);
      fVar11 = *(float *)(param_2 + 0x10) - *(float *)param_3;
      fVar13 = *(float *)(param_2 + 0x14) - *(float *)(param_3 + 4);
      fVar17 = (float)NEON_fmadd(fVar4,fVar4,fVar3 * fVar3);
      fVar9 = (float)NEON_fmadd(fVar4,fVar6,fVar3 * fVar5);
      fVar7 = (float)NEON_fmadd(fVar7,fVar7,fVar12 * fVar12);
      fVar12 = (float)NEON_fmadd(fVar4,fVar8,fVar3 * fVar2);
      fVar14 = (float)NEON_fmadd(fVar13,fVar13,fVar11 * fVar11);
      fVar11 = (float)NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
      fVar13 = (float)NEON_fmadd(fVar6,fVar8,fVar2 * fVar5);
      if (fVar14 < fVar7) {
        *param_1 = 1.0;
        fVar7 = fVar14;
      }
      fVar14 = -fVar17;
      fVar15 = -fVar9;
      fVar16 = fVar13 - fVar12;
      iVar1 = 0;
      fVar17 = fVar17 * 3.0;
      fVar18 = fVar11 * 3.0;
      do {
        fVar19 = (float)iVar1;
        fVar23 = 1.0 - fVar19;
        fVar20 = fVar23 * fVar23;
        uVar10 = NEON_fmadd(fVar12,fVar23,fVar13 * fVar19);
        fVar21 = fVar19 * fVar19;
        uVar10 = NEON_fmadd(fVar14,fVar23 * fVar20,uVar10);
        uVar10 = NEON_fmadd(fVar9 * fVar23,fVar21,uVar10);
        uVar10 = NEON_fmadd(fVar20 * fVar15,fVar19,uVar10);
        fVar23 = (float)NEON_fmadd(fVar11,fVar21 * fVar19,uVar10);
        if (0.01 <= ABS(fVar23)) {
          uVar10 = NEON_fmadd(fVar17,fVar20,fVar16);
          fVar20 = (float)NEON_fmadd(fVar21,0xc0c00000,fVar19 * 6.0);
          uVar10 = NEON_fmadd(fVar9,fVar20 + -1.0,uVar10);
          fVar20 = (float)NEON_fmadd(fVar18,fVar21,uVar10);
          fVar19 = fVar19 - fVar23 / fVar20;
          fVar23 = 1.0 - fVar19;
          fVar20 = fVar23 * fVar23;
          uVar10 = NEON_fmadd(fVar12,fVar23,fVar13 * fVar19);
          fVar21 = fVar19 * fVar19;
          uVar10 = NEON_fmadd(fVar14,fVar23 * fVar20,uVar10);
          uVar10 = NEON_fmadd(fVar9 * fVar23,fVar21,uVar10);
          uVar10 = NEON_fmadd(fVar20 * fVar15,fVar19,uVar10);
          fVar23 = (float)NEON_fmadd(fVar11,fVar19 * fVar21,uVar10);
          if (0.01 <= ABS(fVar23)) {
            uVar10 = NEON_fmadd(fVar17,fVar20,fVar16);
            fVar20 = (float)NEON_fmadd(fVar21,0xc0c00000,fVar19 * 6.0);
            uVar10 = NEON_fmadd(fVar9,fVar20 + -1.0,uVar10);
            fVar20 = (float)NEON_fmadd(fVar18,fVar21,uVar10);
            fVar19 = fVar19 - fVar23 / fVar20;
            fVar23 = 1.0 - fVar19;
            fVar20 = fVar23 * fVar23;
            uVar10 = NEON_fmadd(fVar12,fVar23,fVar13 * fVar19);
            fVar21 = fVar19 * fVar19;
            uVar10 = NEON_fmadd(fVar14,fVar23 * fVar20,uVar10);
            uVar10 = NEON_fmadd(fVar9 * fVar23,fVar21,uVar10);
            uVar10 = NEON_fmadd(fVar20 * fVar15,fVar19,uVar10);
            fVar23 = (float)NEON_fmadd(fVar11,fVar19 * fVar21,uVar10);
            if (0.01 <= ABS(fVar23)) {
              uVar10 = NEON_fmadd(fVar17,fVar20,fVar16);
              fVar20 = (float)NEON_fmadd(fVar21,0xc0c00000,fVar19 * 6.0);
              uVar10 = NEON_fmadd(fVar9,fVar20 + -1.0,uVar10);
              fVar20 = (float)NEON_fmadd(fVar18,fVar21,uVar10);
              fVar19 = fVar19 - fVar23 / fVar20;
              fVar23 = 1.0 - fVar19;
              fVar20 = fVar23 * fVar23;
              uVar10 = NEON_fmadd(fVar12,fVar23,fVar13 * fVar19);
              fVar21 = fVar19 * fVar19;
              uVar10 = NEON_fmadd(fVar14,fVar23 * fVar20,uVar10);
              uVar10 = NEON_fmadd(fVar9 * fVar23,fVar21,uVar10);
              uVar10 = NEON_fmadd(fVar20 * fVar15,fVar19,uVar10);
              fVar23 = (float)NEON_fmadd(fVar11,fVar19 * fVar21,uVar10);
              if (0.01 <= ABS(fVar23)) {
                uVar10 = NEON_fmadd(fVar17,fVar20,fVar16);
                fVar20 = (float)NEON_fmadd(fVar21,0xc0c00000,fVar19 * 6.0);
                uVar10 = NEON_fmadd(fVar9,fVar20 + -1.0,uVar10);
                fVar20 = (float)NEON_fmadd(fVar18,fVar21,uVar10);
                fVar19 = fVar19 - fVar23 / fVar20;
                fVar23 = 1.0 - fVar19;
                fVar20 = fVar23 * fVar23;
                uVar10 = NEON_fmadd(fVar12,fVar23,fVar13 * fVar19);
                fVar21 = fVar19 * fVar19;
                uVar10 = NEON_fmadd(fVar14,fVar23 * fVar20,uVar10);
                uVar10 = NEON_fmadd(fVar9 * fVar23,fVar21,uVar10);
                uVar10 = NEON_fmadd(fVar20 * fVar15,fVar19,uVar10);
                fVar23 = (float)NEON_fmadd(fVar11,fVar19 * fVar21,uVar10);
                if (0.01 <= ABS(fVar23)) {
                  uVar10 = NEON_fmadd(fVar17,fVar20,fVar16);
                  fVar20 = (float)NEON_fmadd(fVar21,0xc0c00000,fVar19 * 6.0);
                  uVar10 = NEON_fmadd(fVar9,fVar20 + -1.0,uVar10);
                  fVar20 = (float)NEON_fmadd(fVar18,fVar21,uVar10);
                  fVar19 = fVar19 - fVar23 / fVar20;
                }
              }
            }
          }
        }
        if ((0.0 < fVar19) && (fVar19 < 1.0)) {
          fVar20 = (1.0 - fVar19) * -(1.0 - fVar19);
          uVar22 = NEON_fmadd(fVar3,fVar20,fVar2);
          uVar10 = NEON_fmadd(fVar4,fVar20,fVar8);
          fVar20 = (float)NEON_fmadd(fVar5,fVar19 * fVar19,uVar22);
          uVar10 = NEON_fmadd(fVar6,fVar19 * fVar19,uVar10);
          fVar20 = (float)NEON_fmadd(uVar10,uVar10,fVar20 * fVar20);
          if (fVar20 < fVar7) {
            *param_1 = fVar19;
            fVar7 = fVar20;
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 2);
      return fVar7;
    }
  }
  return INFINITY;
}


