// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeVolume
// Entry Point: 00eb0770
// Size: 404 bytes
// Signature: undefined ComputeVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::Mesh::ComputeVolume() const */

undefined  [16] VHACD::Mesh::ComputeVolume(void)

{
  double *pdVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  double *pdVar6;
  double *pdVar7;
  long in_x0;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  double *pdVar13;
  double *pdVar14;
  ulong uVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  undefined auVar19 [16];
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  
  dVar17 = 0.0;
  uVar9 = *(ulong *)(in_x0 + 0x608);
  if ((uVar9 == 0) || (uVar8 = *(ulong *)(in_x0 + 0x920), uVar8 == 0)) goto LAB_00eb0900;
  lVar3 = in_x0;
  if (*(long *)(in_x0 + 0x610) != 0x40) {
    lVar3 = *(long *)(in_x0 + 0x600);
  }
  if (uVar9 < 2) {
    dVar18 = 0.0;
    uVar11 = 0;
    dVar20 = 0.0;
    dVar21 = 0.0;
LAB_00eb07f4:
    lVar12 = uVar9 - uVar11;
    pdVar13 = (double *)(lVar3 + uVar11 * 0x18 + 0x10);
    do {
      lVar12 = lVar12 + -1;
      dVar20 = dVar20 + pdVar13[-2];
      dVar21 = dVar21 + pdVar13[-1];
      dVar18 = dVar18 + *pdVar13;
      pdVar13 = pdVar13 + 3;
    } while (lVar12 != 0);
  }
  else {
    uVar11 = uVar9 & 0xfffffffffffffffe;
    dVar18 = 0.0;
    dVar20 = 0.0;
    dVar21 = 0.0;
    pdVar13 = (double *)(lVar3 + 0x18);
    uVar15 = uVar11;
    do {
      pdVar16 = pdVar13 + -3;
      pdVar6 = pdVar13 + -2;
      uVar15 = uVar15 - 2;
      pdVar1 = pdVar13 + -1;
      pdVar7 = pdVar13 + 1;
      dVar17 = *pdVar13;
      pdVar14 = pdVar13 + 2;
      pdVar13 = pdVar13 + 6;
      dVar20 = dVar20 + *pdVar16 + dVar17;
      dVar21 = dVar21 + *pdVar6 + *pdVar7;
      dVar18 = dVar18 + *pdVar1 + *pdVar14;
    } while (uVar15 != 0);
    if (uVar9 != uVar11) goto LAB_00eb07f4;
  }
  lVar12 = in_x0 + 0x618;
  if (*(long *)(in_x0 + 0x928) != 0x40) {
    lVar12 = *(long *)(in_x0 + 0x918);
  }
  if ((int)uVar8 < 1) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = (double)(unkuint9)uVar9;
    uVar8 = uVar8 & 0xffffffff;
    piVar10 = (int *)(lVar12 + 4);
    dVar20 = dVar20 / dVar17;
    dVar21 = dVar21 / dVar17;
    dVar18 = dVar18 / dVar17;
    dVar17 = 0.0;
    do {
      iVar4 = *piVar10;
      piVar5 = piVar10 + 2;
      piVar2 = piVar10 + -1;
      piVar10 = piVar10 + 3;
      uVar8 = uVar8 - 1;
      pdVar13 = (double *)(lVar3 + (long)iVar4 * 0x18);
      pdVar16 = (double *)(lVar3 + (long)*piVar5 * 0x18);
      pdVar14 = (double *)(lVar3 + (long)*piVar2 * 0x18);
      dVar24 = (double)NEON_fmadd(pdVar13[2] - dVar18,*pdVar16 - dVar20,
                                  (pdVar16[2] - dVar18) * -(*pdVar13 - dVar20));
      uVar23 = NEON_fmadd(pdVar13[1] - dVar21,pdVar16[2] - dVar18,
                          (pdVar16[1] - dVar21) * -(pdVar13[2] - dVar18));
      uVar22 = NEON_fmadd(*pdVar13 - dVar20,pdVar16[1] - dVar21,
                          (*pdVar16 - dVar20) * -(pdVar13[1] - dVar21));
      uVar23 = NEON_fmadd(*pdVar14 - dVar20,uVar23,(pdVar14[1] - dVar21) * dVar24);
      dVar24 = (double)NEON_fmadd(pdVar14[2] - dVar18,uVar22,uVar23);
      dVar17 = dVar17 + dVar24;
    } while (uVar8 != 0);
  }
  dVar17 = dVar17 / 6.0;
LAB_00eb0900:
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar17;
  return auVar19;
}


