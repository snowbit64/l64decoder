// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveCoordExtremes
// Entry Point: 00b5511c
// Size: 700 bytes
// Signature: undefined __thiscall solveCoordExtremes(CubicSpline * this, float * param_1, float * param_2, float * param_3, float * param_4, uint param_5, float param_6, float param_7, int param_8)


/* CubicSpline::solveCoordExtremes(float&, float&, float&, float&, unsigned int, float, float, int)
   const */

void __thiscall
CubicSpline::solveCoordExtremes
          (CubicSpline *this,float *param_1,float *param_2,float *param_3,float *param_4,
          uint param_5,float param_6,float param_7,int param_8)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar9 = param_6 * param_6;
  uVar10 = NEON_fmadd(param_6,0xc0400000,0x3f800000);
  uVar1 = param_5 * 3 + param_8;
  uVar3 = (ulong)uVar1;
  fVar13 = fVar9 * param_6;
  lVar2 = *(long *)(this + 0x18);
  uVar4 = (ulong)(uVar1 + 3);
  uVar19 = NEON_fmadd(param_6,0x40400000,0x3f800000);
  fVar11 = (float)NEON_fmadd(fVar9,0x40400000,uVar10);
  uVar17 = NEON_fmadd(fVar9,0xc0c00000,0x40800000);
  uVar5 = (ulong)(uVar1 + 6);
  uVar6 = (ulong)(uVar1 + 9);
  uVar10 = NEON_fmadd(fVar9,0x40400000,uVar19);
  uVar19 = NEON_fmadd(param_7,0x40400000,0x3f800000);
  uVar10 = NEON_fmadd(fVar13,0xc0400000,uVar10);
  uVar17 = NEON_fmadd(fVar13,0x40400000,uVar17);
  uVar17 = NEON_fmadd(*(undefined4 *)(lVar2 + uVar4 * 4),uVar17,
                      (fVar11 - fVar13) * *(float *)(lVar2 + uVar3 * 4));
  uVar10 = NEON_fmadd(*(undefined4 *)(lVar2 + uVar5 * 4),uVar10,uVar17);
  fVar11 = param_7 * param_7;
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + uVar6 * 4),fVar13,uVar10);
  uVar17 = NEON_fmadd(param_7,0xc0400000,0x3f800000);
  fVar18 = fVar11 * param_7;
  uVar10 = NEON_fmadd(fVar11,0xc0c00000,0x40800000);
  fVar16 = (float)NEON_fmadd(fVar11,0x40400000,uVar17);
  uVar17 = NEON_fmadd(fVar18,0x40400000,uVar10);
  uVar10 = NEON_fmadd(fVar11,0x40400000,uVar19);
  uVar10 = NEON_fmadd(fVar18,0xc0400000,uVar10);
  *param_2 = fVar9 / 6.0;
  *param_1 = fVar9 / 6.0;
  *param_4 = param_6;
  *param_3 = param_6;
  fVar9 = *(float *)(lVar2 + uVar3 * 4);
  fVar11 = *(float *)(lVar2 + uVar4 * 4);
  fVar13 = *(float *)(lVar2 + uVar5 * 4);
  fVar12 = *(float *)(lVar2 + uVar6 * 4);
  uVar17 = NEON_fmadd(fVar11,uVar17,(fVar16 - fVar18) * fVar9);
  uVar10 = NEON_fmadd(fVar13,uVar10,uVar17);
  fVar16 = (float)NEON_fmadd(fVar12,fVar18,uVar10);
  fVar16 = fVar16 / 6.0;
  pfVar7 = param_1;
  pfVar8 = param_3;
  if ((fVar16 < *param_1) || (pfVar7 = param_2, pfVar8 = param_4, *param_2 < fVar16)) {
    *pfVar7 = fVar16;
    *pfVar8 = param_7;
    fVar9 = *(float *)(lVar2 + uVar3 * 4);
    fVar11 = *(float *)(lVar2 + uVar4 * 4);
    fVar13 = *(float *)(lVar2 + uVar5 * 4);
    fVar12 = *(float *)(lVar2 + uVar6 * 4);
  }
  uVar10 = NEON_fnmsub(fVar11,0x40400000,fVar9);
  fVar16 = (float)NEON_fmadd(fVar13,0xc0400000,uVar10);
  fVar16 = fVar16 + fVar12;
  if (fVar16 != 0.0) {
    uVar10 = NEON_fmadd(fVar9,0x40000000,fVar11 * -4.0);
    fVar18 = (float)NEON_fmadd(fVar13,0x40000000,uVar10);
    fVar14 = (float)NEON_fmadd(fVar18,fVar18,(fVar13 - fVar9) * fVar16 * -4.0);
    if (0.0 < fVar14) {
      fVar15 = (0.5 / fVar16) * (-fVar18 - SQRT(fVar14));
      if (param_6 < fVar15 && fVar15 < param_7) {
        fVar20 = fVar15 * fVar15;
        uVar17 = NEON_fmadd(fVar15,0xc0400000,0x3f800000);
        uVar10 = NEON_fmadd(fVar15,0x40400000,0x3f800000);
        fVar22 = fVar15 * fVar20;
        uVar19 = NEON_fmadd(fVar20,0xc0c00000,0x40800000);
        fVar21 = (float)NEON_fmadd(fVar20,0x40400000,uVar17);
        uVar17 = NEON_fmadd(fVar20,0x40400000,uVar10);
        uVar10 = NEON_fmadd(fVar22,0x40400000,uVar19);
        uVar10 = NEON_fmadd(fVar11,uVar10,fVar9 * (fVar21 - fVar22));
        uVar17 = NEON_fmadd(fVar22,0xc0400000,uVar17);
        uVar10 = NEON_fmadd(fVar13,uVar17,uVar10);
        fVar9 = (float)NEON_fmadd(fVar12,fVar22,uVar10);
        fVar9 = fVar9 / 6.0;
        pfVar7 = param_1;
        pfVar8 = param_3;
        if ((fVar9 < *param_1) || (pfVar7 = param_2, pfVar8 = param_4, *param_2 < fVar9)) {
          *pfVar7 = fVar9;
          *pfVar8 = fVar15;
        }
      }
      fVar9 = (0.5 / fVar16) * (SQRT(fVar14) - fVar18);
      if (param_6 < fVar9 && fVar9 < param_7) {
        fVar11 = fVar9 * fVar9;
        uVar17 = NEON_fmadd(fVar9,0xc0400000,0x3f800000);
        uVar10 = NEON_fmadd(fVar9,0x40400000,0x3f800000);
        fVar12 = fVar9 * fVar11;
        uVar19 = NEON_fmadd(fVar11,0xc0c00000,0x40800000);
        fVar13 = (float)NEON_fmadd(fVar11,0x40400000,uVar17);
        uVar10 = NEON_fmadd(fVar11,0x40400000,uVar10);
        uVar17 = NEON_fmadd(fVar12,0x40400000,uVar19);
        uVar10 = NEON_fmadd(fVar12,0xc0400000,uVar10);
        uVar17 = NEON_fmadd(*(undefined4 *)(lVar2 + uVar4 * 4),uVar17,
                            (fVar13 - fVar12) * *(float *)(lVar2 + uVar3 * 4));
        uVar10 = NEON_fmadd(*(undefined4 *)(lVar2 + uVar5 * 4),uVar10,uVar17);
        fVar11 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + uVar6 * 4),fVar12,uVar10);
        fVar11 = fVar11 / 6.0;
        if ((fVar11 < *param_1) || (param_1 = param_2, param_3 = param_4, *param_2 < fVar11)) {
          *param_1 = fVar11;
          *param_3 = fVar9;
        }
      }
    }
  }
  return;
}


