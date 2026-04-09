// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeBB
// Entry Point: 00d5c250
// Size: 264 bytes
// Signature: undefined ComputeBB(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::RaycastMesh::ComputeBB() */

void HACD::RaycastMesh::ComputeBB(void)

{
  double dVar1;
  long in_x0;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (*(long *)(in_x0 + 0x10) != 0) {
    pdVar3 = *(double **)(in_x0 + 8);
    dVar5 = *pdVar3;
    lVar2 = *(long *)(in_x0 + 0x10) + -1;
    *(double *)(in_x0 + 0x28) = dVar5;
    dVar7 = pdVar3[1];
    *(double *)(in_x0 + 0x30) = dVar7;
    dVar8 = pdVar3[2];
    *(double *)(in_x0 + 0x38) = dVar8;
    dVar9 = *pdVar3;
    *(double *)(in_x0 + 0x40) = dVar9;
    dVar10 = pdVar3[1];
    *(double *)(in_x0 + 0x48) = dVar10;
    dVar11 = pdVar3[2];
    *(double *)(in_x0 + 0x50) = dVar11;
    if (lVar2 != 0) {
      pdVar3 = pdVar3 + 5;
      do {
        dVar14 = pdVar3[-2];
        dVar13 = pdVar3[-1];
        dVar12 = *pdVar3;
        pdVar4 = (double *)(in_x0 + 0x28);
        dVar6 = dVar14;
        dVar1 = dVar9;
        if ((dVar14 < dVar5) ||
           (pdVar4 = (double *)(in_x0 + 0x40), dVar6 = dVar5, dVar1 = dVar14, dVar9 < dVar14)) {
          dVar9 = dVar1;
          *pdVar4 = dVar14;
          dVar5 = dVar6;
        }
        pdVar4 = (double *)(in_x0 + 0x30);
        dVar6 = dVar13;
        dVar1 = dVar10;
        if ((dVar13 < dVar7) ||
           (pdVar4 = (double *)(in_x0 + 0x48), dVar6 = dVar7, dVar1 = dVar13, dVar10 < dVar13)) {
          dVar10 = dVar1;
          *pdVar4 = dVar13;
          dVar7 = dVar6;
        }
        pdVar4 = (double *)(in_x0 + 0x38);
        dVar6 = dVar12;
        dVar1 = dVar11;
        if ((dVar12 < dVar8) ||
           (pdVar4 = (double *)(in_x0 + 0x50), dVar6 = dVar8, dVar1 = dVar12, dVar11 < dVar12)) {
          dVar11 = dVar1;
          *pdVar4 = dVar12;
          dVar8 = dVar6;
        }
        lVar2 = lVar2 + -1;
        pdVar3 = pdVar3 + 3;
      } while (lVar2 != 0);
    }
  }
  return;
}


