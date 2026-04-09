// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeDiagBB
// Entry Point: 00eb10f4
// Size: 224 bytes
// Signature: undefined ComputeDiagBB(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::Mesh::ComputeDiagBB() */

undefined  [16] VHACD::Mesh::ComputeDiagBB(void)

{
  double *in_x0;
  long lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  undefined auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (in_x0[0xc1] == 0.0) {
    return ZEXT816(0);
  }
  pdVar2 = in_x0;
  if (in_x0[0xc2] != 3.162020133383978e-322) {
    pdVar2 = (double *)in_x0[0xc0];
  }
  lVar1 = (long)in_x0[0xc1] + -1;
  dVar6 = *pdVar2;
  dVar8 = pdVar2[1];
  dVar3 = pdVar2[2];
  dVar10 = dVar3;
  dVar11 = dVar6;
  dVar12 = dVar8;
  if (lVar1 != 0) {
    pdVar2 = pdVar2 + 5;
    dVar4 = dVar3;
    dVar13 = dVar6;
    dVar9 = dVar8;
    do {
      dVar3 = pdVar2[-2];
      dVar6 = dVar3;
      if ((dVar13 <= dVar3) && (dVar6 = dVar13, dVar11 < dVar3)) {
        dVar11 = dVar3;
      }
      dVar3 = pdVar2[-1];
      dVar8 = dVar3;
      if ((dVar9 <= dVar3) && (dVar8 = dVar9, dVar12 < dVar3)) {
        dVar12 = dVar3;
      }
      dVar13 = *pdVar2;
      dVar3 = dVar13;
      if ((dVar4 <= dVar13) && (dVar3 = dVar4, dVar10 < dVar13)) {
        dVar10 = dVar13;
      }
      lVar1 = lVar1 + -1;
      pdVar2 = pdVar2 + 3;
      dVar4 = dVar3;
      dVar13 = dVar6;
      dVar9 = dVar8;
    } while (lVar1 != 0);
  }
  uVar7 = NEON_fmadd(dVar11 - dVar6,dVar11 - dVar6,(dVar12 - dVar8) * (dVar12 - dVar8));
  dVar3 = (double)NEON_fmadd(dVar10 - dVar3,dVar10 - dVar3,uVar7);
  auVar5._0_8_ = SQRT(dVar3);
  in_x0[0x12f] = auVar5._0_8_;
  auVar5._8_8_ = 0;
  return auVar5;
}


