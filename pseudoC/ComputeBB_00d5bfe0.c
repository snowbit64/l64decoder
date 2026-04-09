// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeBB
// Entry Point: 00d5bfe0
// Size: 624 bytes
// Signature: undefined ComputeBB(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::RMNode::ComputeBB() */

void HACD::RMNode::ComputeBB(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  long *plVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar3 = *(long *)(in_x0 + 0xd0);
  if (lVar3 != 0) {
    dVar8 = 2.225073858507201e-308;
    *(undefined8 *)(in_x0 + 0x40) = 0x10000000000000;
    *(undefined8 *)(in_x0 + 0x38) = 0x10000000000000;
    dVar7 = 1.797693134862316e+308;
    lVar1 = **(long **)(in_x0 + 0xe0);
    lVar2 = (*(long **)(in_x0 + 0xe0))[1];
    dVar9 = 2.225073858507201e-308;
    dVar10 = 1.797693134862316e+308;
    dVar11 = 2.225073858507201e-308;
    dVar12 = 1.797693134862316e+308;
    plVar4 = (long *)(in_x0 + 0x48);
    if (*(long *)(in_x0 + 0xd8) != 0x10) {
      plVar4 = *(long **)(in_x0 + 200);
    }
    *(undefined8 *)(in_x0 + 0x20) = 0x7fefffffffffffff;
    *(undefined8 *)(in_x0 + 0x18) = 0x7fefffffffffffff;
    *(undefined8 *)(in_x0 + 0x30) = 0x10000000000000;
    *(undefined8 *)(in_x0 + 0x28) = 0x7fefffffffffffff;
    do {
      lVar5 = *plVar4;
      pdVar6 = (double *)(lVar2 + *(long *)(lVar1 + lVar5 * 0x18) * 0x18);
      dVar15 = *pdVar6;
      dVar14 = pdVar6[1];
      dVar13 = pdVar6[2];
      if (dVar15 < dVar12) {
        *(double *)(in_x0 + 0x18) = dVar15;
        dVar12 = dVar15;
      }
      if (dVar11 < dVar15) {
        *(double *)(in_x0 + 0x30) = dVar15;
        dVar11 = dVar15;
      }
      if (dVar14 < dVar10) {
        *(double *)(in_x0 + 0x20) = dVar14;
        dVar10 = dVar14;
      }
      if (dVar9 < dVar14) {
        *(double *)(in_x0 + 0x38) = dVar14;
        dVar9 = dVar14;
      }
      if (dVar13 < dVar7) {
        *(double *)(in_x0 + 0x28) = dVar13;
        dVar7 = dVar13;
      }
      if (dVar8 < dVar13) {
        *(double *)(in_x0 + 0x40) = dVar13;
        dVar8 = dVar13;
      }
      pdVar6 = (double *)(lVar2 + *(long *)(lVar1 + lVar5 * 0x18 + 8) * 0x18);
      dVar15 = *pdVar6;
      dVar14 = pdVar6[1];
      dVar13 = pdVar6[2];
      if (dVar15 < dVar12) {
        *(double *)(in_x0 + 0x18) = dVar15;
        dVar12 = dVar15;
      }
      if (dVar11 < dVar15) {
        *(double *)(in_x0 + 0x30) = dVar15;
        dVar11 = dVar15;
      }
      if (dVar14 < dVar10) {
        *(double *)(in_x0 + 0x20) = dVar14;
        dVar10 = dVar14;
      }
      if (dVar9 < dVar14) {
        *(double *)(in_x0 + 0x38) = dVar14;
        dVar9 = dVar14;
      }
      if (dVar13 < dVar7) {
        *(double *)(in_x0 + 0x28) = dVar13;
        dVar7 = dVar13;
      }
      if (dVar8 < dVar13) {
        *(double *)(in_x0 + 0x40) = dVar13;
        dVar8 = dVar13;
      }
      pdVar6 = (double *)(lVar2 + *(long *)(lVar1 + lVar5 * 0x18 + 0x10) * 0x18);
      dVar15 = *pdVar6;
      dVar14 = pdVar6[1];
      dVar13 = pdVar6[2];
      if (dVar15 < dVar12) {
        *(double *)(in_x0 + 0x18) = dVar15;
        dVar12 = dVar15;
      }
      if (dVar11 < dVar15) {
        *(double *)(in_x0 + 0x30) = dVar15;
        dVar11 = dVar15;
      }
      if (dVar14 < dVar10) {
        *(double *)(in_x0 + 0x20) = dVar14;
        dVar10 = dVar14;
      }
      if (dVar9 < dVar14) {
        *(double *)(in_x0 + 0x38) = dVar14;
        dVar9 = dVar14;
      }
      if (dVar13 < dVar7) {
        *(double *)(in_x0 + 0x28) = dVar13;
        dVar7 = dVar13;
      }
      if (dVar8 < dVar13) {
        *(double *)(in_x0 + 0x40) = dVar13;
        dVar8 = dVar13;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}


