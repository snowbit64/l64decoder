// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Normalize
// Entry Point: 00d55ef0
// Size: 412 bytes
// Signature: undefined Normalize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::TMMesh::Normalize() */

bool HACD::TMMesh::Normalize(void)

{
  double dVar1;
  double dVar2;
  long in_x0;
  ulong uVar3;
  double *pdVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar3 = *(ulong *)(in_x0 + 0x18);
  if (uVar3 != 0) {
    pdVar4 = *(double **)(in_x0 + 0x10);
    dVar6 = *pdVar4;
    *(double *)(in_x0 + 0x70) = dVar6;
    dVar7 = pdVar4[1];
    *(double *)(in_x0 + 0x78) = dVar7;
    dVar8 = pdVar4[2];
    *(double *)(in_x0 + 0x80) = dVar8;
    dVar9 = dVar6;
    dVar12 = dVar6;
    dVar13 = dVar7;
    dVar1 = dVar7;
    dVar10 = dVar8;
    dVar2 = dVar8;
    uVar5 = uVar3;
    while (uVar5 = uVar5 - 1, uVar5 != 0) {
      dVar6 = *pdVar4 + dVar6;
      *(double *)(in_x0 + 0x70) = dVar6;
      dVar7 = pdVar4[1] + dVar7;
      *(double *)(in_x0 + 0x78) = dVar7;
      dVar8 = pdVar4[2] + dVar8;
      *(double *)(in_x0 + 0x80) = dVar8;
      dVar15 = *pdVar4;
      dVar14 = dVar15;
      if ((dVar12 <= dVar15) && (dVar14 = dVar12, dVar9 < dVar15)) {
        dVar9 = dVar15;
      }
      dVar16 = pdVar4[1];
      dVar12 = pdVar4[2];
      dVar15 = dVar16;
      if ((dVar1 <= dVar16) && (dVar15 = dVar1, dVar13 < dVar16)) {
        dVar13 = dVar16;
      }
      dVar16 = dVar12;
      if ((dVar2 <= dVar12) && (dVar16 = dVar2, dVar10 < dVar12)) {
        dVar10 = dVar12;
      }
      pdVar4 = (double *)pdVar4[7];
      *(double **)(in_x0 + 0x10) = pdVar4;
      dVar12 = dVar14;
      dVar1 = dVar15;
      dVar2 = dVar16;
    }
    uVar11 = NEON_fmadd(dVar9 - dVar12,dVar9 - dVar12,(dVar13 - dVar1) * (dVar13 - dVar1));
    dVar12 = (double)(unkuint9)uVar3;
    dVar9 = (double)NEON_fmadd(dVar10 - dVar2,dVar10 - dVar2,uVar11);
    dVar7 = dVar7 / dVar12;
    dVar8 = dVar8 / dVar12;
    dVar6 = dVar6 / dVar12;
    dVar9 = SQRT(dVar9) * 0.001;
    *(double *)(in_x0 + 0x78) = dVar7;
    *(double *)(in_x0 + 0x80) = dVar8;
    *(double *)(in_x0 + 0x68) = dVar9;
    *(double *)(in_x0 + 0x70) = dVar6;
    if (dVar9 != 0.0) {
      uVar5 = uVar3;
      if (uVar3 < 2) {
        uVar5 = 1;
      }
      dVar9 = 1.0 / dVar9;
      while( true ) {
        uVar5 = uVar5 - 1;
        *pdVar4 = dVar9 * (*pdVar4 - dVar6);
        pdVar4[1] = dVar9 * (pdVar4[1] - dVar7);
        pdVar4[2] = dVar9 * (pdVar4[2] - dVar8);
        pdVar4 = (double *)pdVar4[7];
        *(double **)(in_x0 + 0x10) = pdVar4;
        if (uVar5 == 0) break;
        dVar6 = *(double *)(in_x0 + 0x70);
        dVar7 = *(double *)(in_x0 + 0x78);
        dVar8 = *(double *)(in_x0 + 0x80);
      }
    }
  }
  return uVar3 != 0;
}


