// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NormalizeData
// Entry Point: 00d48490
// Size: 388 bytes
// Signature: undefined NormalizeData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::HACD::NormalizeData() */

void HACD::HACD::NormalizeData(void)

{
  long in_x0;
  ulong uVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
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
  double dVar17;
  
  uVar1 = *(ulong *)(in_x0 + 0x60);
  if (uVar1 != 0) {
    pdVar2 = *(double **)(in_x0 + 0x18);
    lVar3 = uVar1 - 1;
    dVar5 = *pdVar2;
    *(double *)(in_x0 + 200) = dVar5;
    dVar6 = pdVar2[1];
    *(double *)(in_x0 + 0xd0) = dVar6;
    dVar7 = pdVar2[2];
    *(double *)(in_x0 + 0xd8) = dVar7;
    dVar10 = *pdVar2;
    dVar12 = pdVar2[1];
    dVar8 = pdVar2[2];
    dVar14 = dVar8;
    dVar15 = dVar10;
    dVar16 = dVar12;
    if (lVar3 != 0) {
      pdVar4 = pdVar2 + 5;
      dVar9 = dVar8;
      dVar17 = dVar10;
      dVar13 = dVar12;
      do {
        dVar5 = pdVar4[-2] + dVar5;
        *(double *)(in_x0 + 200) = dVar5;
        dVar6 = pdVar4[-1] + dVar6;
        *(double *)(in_x0 + 0xd0) = dVar6;
        dVar7 = *pdVar4 + dVar7;
        *(double *)(in_x0 + 0xd8) = dVar7;
        dVar8 = pdVar4[-2];
        dVar10 = dVar8;
        if ((dVar17 <= dVar8) && (dVar10 = dVar17, dVar15 < dVar8)) {
          dVar15 = dVar8;
        }
        dVar8 = pdVar4[-1];
        dVar17 = *pdVar4;
        dVar12 = dVar8;
        if ((dVar13 <= dVar8) && (dVar12 = dVar13, dVar16 < dVar8)) {
          dVar16 = dVar8;
        }
        dVar8 = dVar17;
        if ((dVar9 <= dVar17) && (dVar8 = dVar9, dVar14 < dVar17)) {
          dVar14 = dVar17;
        }
        lVar3 = lVar3 + -1;
        pdVar4 = pdVar4 + 3;
        dVar9 = dVar8;
        dVar17 = dVar10;
        dVar13 = dVar12;
      } while (lVar3 != 0);
    }
    uVar11 = NEON_fmadd(dVar15 - dVar10,dVar15 - dVar10,(dVar16 - dVar12) * (dVar16 - dVar12));
    dVar10 = (double)(unkuint9)uVar1;
    dVar8 = (double)NEON_fmadd(dVar14 - dVar8,dVar14 - dVar8,uVar11);
    dVar6 = dVar6 / dVar10;
    dVar8 = SQRT(dVar8);
    *(double *)(in_x0 + 0xa0) = dVar8;
    dVar5 = dVar5 / dVar10;
    dVar7 = dVar7 / dVar10;
    *(double *)(in_x0 + 200) = dVar5;
    *(double *)(in_x0 + 0xd0) = dVar6;
    *(double *)(in_x0 + 0xd8) = dVar7;
    if (dVar8 != 0.0) {
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      pdVar2 = pdVar2 + 1;
      dVar8 = (*(double *)(in_x0 + 0xa8) + *(double *)(in_x0 + 0xa8)) / dVar8;
      while( true ) {
        uVar1 = uVar1 - 1;
        pdVar2[-1] = dVar8 * (pdVar2[-1] - dVar5);
        *pdVar2 = dVar8 * (*pdVar2 - dVar6);
        pdVar2[1] = dVar8 * (pdVar2[1] - dVar7);
        if (uVar1 == 0) break;
        dVar5 = *(double *)(in_x0 + 200);
        dVar6 = *(double *)(in_x0 + 0xd0);
        pdVar2 = pdVar2 + 3;
        dVar7 = *(double *)(in_x0 + 0xd8);
      }
    }
  }
  return;
}


