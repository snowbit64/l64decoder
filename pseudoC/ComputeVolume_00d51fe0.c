// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeVolume
// Entry Point: 00d51fe0
// Size: 256 bytes
// Signature: undefined ComputeVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::ICHull::ComputeVolume() */

undefined  [16] HACD::ICHull::ComputeVolume(void)

{
  double *pdVar1;
  double *pdVar2;
  long in_x0;
  double *pdVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  dVar8 = 0.0;
  uVar5 = *(ulong *)(in_x0 + 0x20);
  if ((uVar5 != 0) && (*(char *)(in_x0 + 0x100) == '\0')) {
    dVar9 = 0.0;
    dVar12 = 0.0;
    dVar11 = 0.0;
    pdVar3 = *(double **)(in_x0 + 0x18);
    uVar7 = uVar5;
    do {
      dVar8 = *pdVar3;
      pdVar2 = pdVar3 + 1;
      uVar7 = uVar7 - 1;
      pdVar1 = pdVar3 + 2;
      pdVar3 = (double *)pdVar3[7];
      dVar11 = dVar11 + dVar8;
      dVar12 = dVar12 + *pdVar2;
      dVar9 = dVar9 + *pdVar1;
      *(double **)(in_x0 + 0x18) = pdVar3;
    } while (uVar7 != 0);
    lVar4 = *(long *)(in_x0 + 0x60);
    if (lVar4 == 0) {
      return ZEXT816(0);
    }
    dVar8 = (double)(unkuint9)uVar5;
    lVar6 = *(long *)(in_x0 + 0x58);
    dVar11 = dVar11 / dVar8;
    dVar12 = dVar12 / dVar8;
    dVar9 = dVar9 / dVar8;
    dVar8 = 0.0;
    do {
      pdVar3 = *(double **)(lVar6 + 0x28);
      pdVar1 = *(double **)(lVar6 + 0x30);
      lVar4 = lVar4 + -1;
      dVar13 = *pdVar3;
      dVar15 = pdVar3[1];
      dVar20 = pdVar1[1];
      dVar19 = pdVar1[2];
      dVar17 = pdVar3[2];
      pdVar3 = *(double **)(lVar6 + 0x20);
      dVar21 = *pdVar1;
      dVar24 = pdVar3[2];
      dVar23 = *pdVar3;
      dVar22 = pdVar3[1];
      lVar6 = *(long *)(lVar6 + 0xd8);
      *(long *)(in_x0 + 0x58) = lVar6;
      dVar18 = (double)NEON_fmadd(dVar17 - dVar9,dVar21 - dVar11,
                                  (dVar19 - dVar9) * -(dVar13 - dVar11));
      uVar16 = NEON_fmadd(dVar15 - dVar12,dVar19 - dVar9,(dVar20 - dVar12) * -(dVar17 - dVar9));
      uVar14 = NEON_fmadd(dVar13 - dVar11,dVar20 - dVar12,(dVar21 - dVar11) * -(dVar15 - dVar12));
      uVar16 = NEON_fmadd(dVar23 - dVar11,uVar16,(dVar22 - dVar12) * dVar18);
      dVar13 = (double)NEON_fmadd(dVar24 - dVar9,uVar14,uVar16);
      dVar8 = dVar8 + dVar13;
    } while (lVar4 != 0);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar8;
  return auVar10;
}


