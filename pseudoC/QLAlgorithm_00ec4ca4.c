// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QLAlgorithm
// Entry Point: 00ec4ca4
// Size: 628 bytes
// Signature: undefined QLAlgorithm(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::Eigen<double>::QLAlgorithm() */

byte FLOAT_MATH::Eigen<double>::QLAlgorithm(void)

{
  ulong uVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  long in_x0;
  ulong uVar9;
  double *pdVar10;
  double *pdVar11;
  ulong uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  bVar8 = true;
  uVar12 = 0;
  do {
    uVar1 = uVar12 + 1;
    lVar2 = in_x0 + 0x48;
    iVar13 = 0;
    pdVar3 = (double *)(lVar2 + uVar1 * 8);
    pdVar4 = (double *)(lVar2 + uVar12 * 8);
    pdVar5 = (double *)(in_x0 + 0x60 + uVar12 * 8);
    while( true ) {
      uVar9 = uVar12;
      if (uVar12 != 2) {
        dVar14 = ABS(*pdVar4) + ABS(*pdVar3);
        bVar7 = ABS(*pdVar5) + dVar14 != dVar14;
        if (bVar7) {
          uVar9 = uVar1;
        }
        if ((bVar7 && uVar1 != 2) &&
           (dVar14 = ABS(*pdVar3) + ABS(*(double *)(lVar2 + (uVar12 + 2) * 8)),
           bVar7 = ABS(*(double *)(in_x0 + 0x60 + uVar1 * 8)) + dVar14 != dVar14, uVar9 = uVar1,
           bVar7 && uVar12 != 0 || bVar7)) {
          uVar9 = uVar12 + 2;
        }
      }
      uVar9 = uVar9 & 0xffffffff;
      if (uVar9 == uVar12) break;
      lVar6 = in_x0 + uVar9 * 8;
      dVar17 = *pdVar4;
      dVar16 = *pdVar5;
      dVar15 = (*pdVar3 - dVar17) / (dVar16 + dVar16);
      dVar19 = (double)NEON_fmadd(dVar15,dVar15,0x3ff0000000000000);
      dVar14 = -(double)(float)SQRT(dVar19);
      if (0.0 <= dVar15) {
        dVar14 = (double)(float)SQRT(dVar19);
      }
      dVar19 = *(double *)(lVar6 + 0x48);
      dVar15 = dVar16 / (dVar15 + dVar14) + (dVar19 - dVar17);
      dVar14 = 0.0;
      if (uVar12 < uVar9) {
        dVar14 = 0.0;
        dVar17 = 1.0;
        pdVar10 = (double *)(in_x0 + 0x30 + uVar9 * 8);
        dVar16 = 1.0;
        do {
          uVar9 = uVar9 - 1;
          dVar20 = dVar17 * pdVar10[5];
          if (ABS(dVar20) < ABS(dVar15)) {
            dVar17 = dVar20 / dVar15;
            dVar20 = (double)NEON_fmadd(dVar17,dVar17,0x3ff0000000000000);
            dVar18 = 1.0 / (double)(float)SQRT(dVar20);
            dVar20 = dVar15 * (double)(float)SQRT(dVar20);
            dVar17 = dVar17 * dVar18;
          }
          else {
            dVar15 = dVar15 / dVar20;
            dVar18 = (double)NEON_fmadd(dVar15,dVar15,0x3ff0000000000000);
            dVar17 = 1.0 / (double)(float)SQRT(dVar18);
            dVar20 = dVar20 * (double)(float)SQRT(dVar18);
            dVar18 = dVar15 * dVar17;
          }
          dVar16 = dVar16 * pdVar10[5];
          dVar21 = dVar19 - dVar14;
          dVar19 = pdVar10[2];
          dVar24 = -dVar17;
          pdVar10[6] = dVar20;
          pdVar11 = pdVar10 + -1;
          dVar20 = (double)NEON_fmadd(dVar17,pdVar10[-7],dVar18 * pdVar10[-6]);
          dVar22 = (double)NEON_fmadd(dVar19 - dVar21,dVar17,(dVar16 + dVar16) * dVar18);
          dVar15 = (double)NEON_fmadd(dVar18,pdVar10[-7],pdVar10[-6] * dVar24);
          dVar26 = (double)NEON_fmadd(dVar17,*pdVar11,dVar18 * *pdVar10);
          dVar23 = (double)NEON_fmadd(dVar17,pdVar10[-4],dVar18 * pdVar10[-3]);
          dVar25 = (double)NEON_fmadd(dVar18,pdVar10[-4],pdVar10[-3] * dVar24);
          dVar14 = dVar17 * dVar22;
          pdVar10[-7] = dVar15;
          pdVar10[-6] = dVar20;
          dVar20 = (double)NEON_fmadd(dVar18,*pdVar11,*pdVar10 * dVar24);
          dVar15 = (double)NEON_fnmsub(dVar18,dVar22,dVar16);
          *pdVar10 = dVar26;
          pdVar10[-4] = dVar25;
          pdVar10[-3] = dVar23;
          *pdVar11 = dVar20;
          pdVar10[3] = dVar21 + dVar14;
          pdVar10 = pdVar11;
          dVar16 = dVar18;
        } while ((long)uVar12 < (long)uVar9);
        dVar17 = *pdVar4;
      }
      iVar13 = iVar13 + 1;
      *pdVar5 = dVar15;
      *pdVar4 = dVar17 - dVar14;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      if (iVar13 == 0x20) goto LAB_00ec4f0c;
    }
  } while ((iVar13 != 0x20) && (bVar8 = uVar12 < 2, uVar12 = uVar1, uVar1 != 3));
LAB_00ec4f0c:
  return ~bVar8 & 1;
}


