// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeArea
// Entry Point: 00d51f44
// Size: 156 bytes
// Signature: undefined ComputeArea(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::ICHull::ComputeArea() */

undefined  [16] HACD::ICHull::ComputeArea(void)

{
  double *pdVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  double *pdVar4;
  undefined auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar2 = *(long *)(in_x0 + 0x60);
  if (lVar2 != 0) {
    auVar5._0_8_ = 0.0;
    lVar3 = *(long *)(in_x0 + 0x58);
    do {
      pdVar4 = *(double **)(lVar3 + 0x20);
      pdVar1 = *(double **)(lVar3 + 0x28);
      lVar2 = lVar2 + -1;
      dVar6 = *pdVar4;
      dVar8 = pdVar4[1];
      dVar9 = pdVar4[2];
      pdVar4 = *(double **)(lVar3 + 0x30);
      dVar11 = *pdVar1 - dVar6;
      lVar3 = *(long *)(lVar3 + 0xd8);
      dVar15 = pdVar4[1];
      dVar14 = pdVar4[2];
      dVar13 = pdVar1[2] - dVar9;
      dVar12 = pdVar1[1] - dVar8;
      dVar16 = *pdVar4;
      *(long *)(in_x0 + 0x58) = lVar3;
      dVar15 = dVar15 - dVar8;
      dVar14 = dVar14 - dVar9;
      dVar16 = dVar16 - dVar6;
      dVar6 = (double)NEON_fmadd(dVar13,dVar16,dVar14 * -dVar11);
      uVar10 = NEON_fmadd(dVar12,dVar14,dVar15 * -dVar13);
      uVar7 = NEON_fmadd(dVar11,dVar15,dVar16 * -dVar12);
      uVar10 = NEON_fmadd(uVar10,uVar10,dVar6 * dVar6);
      dVar6 = (double)NEON_fmadd(uVar7,uVar7,uVar10);
      auVar5._0_8_ = auVar5._0_8_ + SQRT(dVar6);
    } while (lVar2 != 0);
    auVar5._8_8_ = 0;
    return auVar5;
  }
  return ZEXT816(0);
}


