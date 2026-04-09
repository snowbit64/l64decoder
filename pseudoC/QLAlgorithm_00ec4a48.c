// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QLAlgorithm
// Entry Point: 00ec4a48
// Size: 604 bytes
// Signature: undefined QLAlgorithm(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::Eigen<float>::QLAlgorithm() */

byte FLOAT_MATH::Eigen<float>::QLAlgorithm(void)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  long in_x0;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  int iVar13;
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
  float fVar26;
  
  bVar8 = true;
  uVar12 = 0;
  do {
    uVar1 = uVar12 + 1;
    lVar2 = in_x0 + 0x24;
    iVar13 = 0;
    pfVar3 = (float *)(lVar2 + uVar1 * 4);
    pfVar4 = (float *)(lVar2 + uVar12 * 4);
    pfVar5 = (float *)(in_x0 + 0x30 + uVar12 * 4);
    while( true ) {
      uVar9 = uVar12;
      if (uVar12 != 2) {
        fVar14 = ABS(*pfVar4) + ABS(*pfVar3);
        bVar7 = ABS(*pfVar5) + fVar14 != fVar14;
        if (bVar7) {
          uVar9 = uVar1;
        }
        if ((bVar7 && uVar1 != 2) &&
           (fVar14 = ABS(*pfVar3) + ABS(*(float *)(lVar2 + (uVar12 + 2) * 4)),
           bVar7 = ABS(*(float *)(in_x0 + 0x30 + uVar1 * 4)) + fVar14 != fVar14, uVar9 = uVar1,
           bVar7 && uVar12 != 0 || bVar7)) {
          uVar9 = uVar12 + 2;
        }
      }
      uVar9 = uVar9 & 0xffffffff;
      if (uVar9 == uVar12) break;
      lVar6 = in_x0 + uVar9 * 4;
      fVar17 = *pfVar4;
      fVar16 = *pfVar5;
      fVar15 = (*pfVar3 - fVar17) / (fVar16 + fVar16);
      fVar18 = (float)NEON_fmadd(fVar15,fVar15,0x3f800000);
      fVar14 = -SQRT(fVar18);
      if (0.0 <= fVar15) {
        fVar14 = SQRT(fVar18);
      }
      fVar18 = *(float *)(lVar6 + 0x24);
      fVar15 = fVar16 / (fVar15 + fVar14) + (fVar18 - fVar17);
      fVar14 = 0.0;
      if (uVar12 < uVar9) {
        fVar14 = 0.0;
        fVar17 = 1.0;
        pfVar10 = (float *)(in_x0 + 0x18 + uVar9 * 4);
        fVar16 = 1.0;
        do {
          uVar9 = uVar9 - 1;
          fVar17 = fVar17 * pfVar10[5];
          if (ABS(fVar17) < ABS(fVar15)) {
            fVar17 = fVar17 / fVar15;
            fVar19 = (float)NEON_fmadd(fVar17,fVar17,0x3f800000);
            fVar20 = fVar15 * SQRT(fVar19);
            fVar19 = 1.0 / SQRT(fVar19);
            fVar17 = fVar17 * fVar19;
          }
          else {
            fVar15 = fVar15 / fVar17;
            fVar19 = (float)NEON_fmadd(fVar15,fVar15,0x3f800000);
            fVar20 = fVar17 * SQRT(fVar19);
            fVar17 = 1.0 / SQRT(fVar19);
            fVar19 = fVar15 * fVar17;
          }
          fVar16 = fVar16 * pfVar10[5];
          fVar21 = fVar18 - fVar14;
          fVar18 = pfVar10[2];
          fVar23 = -fVar17;
          pfVar11 = pfVar10 + -1;
          fVar26 = (float)NEON_fmadd(fVar17,pfVar10[-7],fVar19 * pfVar10[-6]);
          pfVar10[6] = fVar20;
          fVar14 = (float)NEON_fmadd(fVar19,pfVar10[-7],pfVar10[-6] * fVar23);
          fVar15 = (float)NEON_fmadd(fVar18 - fVar21,fVar17,(fVar16 + fVar16) * fVar19);
          fVar25 = (float)NEON_fmadd(fVar17,*pfVar11,fVar19 * *pfVar10);
          fVar22 = (float)NEON_fmadd(fVar17,pfVar10[-4],fVar19 * pfVar10[-3]);
          fVar24 = (float)NEON_fmadd(fVar19,pfVar10[-4],pfVar10[-3] * fVar23);
          pfVar10[-7] = fVar14;
          pfVar10[-6] = fVar26;
          fVar20 = (float)NEON_fmadd(fVar19,*pfVar11,*pfVar10 * fVar23);
          fVar14 = fVar17 * fVar15;
          fVar15 = (float)NEON_fnmsub(fVar19,fVar15,fVar16);
          *pfVar10 = fVar25;
          pfVar10[-4] = fVar24;
          pfVar10[-3] = fVar22;
          *pfVar11 = fVar20;
          pfVar10[3] = fVar21 + fVar14;
          pfVar10 = pfVar11;
          fVar16 = fVar19;
        } while ((long)uVar12 < (long)uVar9);
        fVar17 = *pfVar4;
      }
      iVar13 = iVar13 + 1;
      *pfVar5 = fVar15;
      *pfVar4 = fVar17 - fVar14;
      *(undefined4 *)(lVar6 + 0x30) = 0;
      if (iVar13 == 0x20) goto LAB_00ec4c98;
    }
  } while ((iVar13 != 0x20) && (bVar8 = uVar12 < 2, uVar12 = uVar1, uVar1 != 3));
LAB_00ec4c98:
  return ~bVar8 & 1;
}


