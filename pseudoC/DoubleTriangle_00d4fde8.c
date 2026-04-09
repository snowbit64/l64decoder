// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DoubleTriangle
// Entry Point: 00d4fde8
// Size: 1132 bytes
// Signature: undefined DoubleTriangle(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::ICHull::DoubleTriangle() */

void HACD::ICHull::DoubleTriangle(void)

{
  CircularList<HACD::TMMEdge> *this;
  long lVar1;
  long in_x0;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
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
  undefined8 uVar24;
  double dVar25;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  pdVar7 = *(double **)(in_x0 + 0x18);
  *(undefined *)(in_x0 + 0x100) = 0;
  pdVar9 = (double *)pdVar7[7];
  dVar12 = pdVar9[1];
  pdVar11 = pdVar7;
  dVar16 = pdVar7[2];
  dVar13 = pdVar9[2];
  do {
    pdVar10 = pdVar9;
    pdVar9 = (double *)pdVar10[7];
    dVar15 = dVar12 - pdVar11[1];
    dVar12 = pdVar9[1];
    dVar14 = dVar12 - pdVar11[1];
    dVar17 = pdVar9[2] - dVar16;
    dVar18 = (double)NEON_fmadd(dVar17,dVar15,dVar14 * -(dVar13 - dVar16));
    if (dVar18 != 0.0) {
LAB_00d4fed8:
      this = (CircularList<HACD::TMMEdge> *)(in_x0 + 0x30);
      *(undefined *)((long)pdVar9 + 0x31) = 1;
      *(undefined *)((long)pdVar10 + 0x31) = 1;
      *(undefined *)((long)pdVar11 + 0x31) = 1;
      lVar3 = CircularList<HACD::TMMEdge>::Add(this,(TMMEdge *)0x0);
      lVar4 = CircularList<HACD::TMMEdge>::Add(this,(TMMEdge *)0x0);
      lVar5 = CircularList<HACD::TMMEdge>::Add(this,(TMMEdge *)0x0);
      *(double **)(lVar3 + 0x18) = pdVar11;
      *(double **)(lVar3 + 0x20) = pdVar10;
      *(double **)(lVar4 + 0x18) = pdVar10;
      *(double **)(lVar4 + 0x20) = pdVar9;
      *(double **)(lVar5 + 0x18) = pdVar9;
      *(double **)(lVar5 + 0x20) = pdVar11;
      lVar6 = CircularList<HACD::TMMTriangle>::Add
                        ((CircularList<HACD::TMMTriangle> *)(in_x0 + 0x50),(TMMTriangle *)0x0);
      *(long *)(lVar6 + 8) = lVar3;
      *(long *)(lVar6 + 0x10) = lVar4;
      *(long *)(lVar6 + 0x18) = lVar5;
      *(double **)(lVar6 + 0x20) = pdVar11;
      *(double **)(lVar6 + 0x28) = pdVar10;
      *(double **)(lVar6 + 0x30) = pdVar9;
      *(long *)(lVar5 + 8) = lVar6;
      *(long *)(lVar4 + 8) = lVar6;
      *(long *)(lVar3 + 8) = lVar6;
      lVar3 = *(long *)(lVar6 + 0x10);
      lVar4 = *(long *)(lVar6 + 0x18);
      lVar6 = *(long *)(lVar6 + 8);
      *(double **)(lVar4 + 0x18) = pdVar9;
      *(double **)(lVar4 + 0x20) = pdVar10;
      *(double **)(lVar3 + 0x18) = pdVar10;
      *(double **)(lVar3 + 0x20) = pdVar11;
      *(double **)(lVar6 + 0x18) = pdVar11;
      *(double **)(lVar6 + 0x20) = pdVar9;
      lVar5 = CircularList<HACD::TMMTriangle>::Add
                        ((CircularList<HACD::TMMTriangle> *)(in_x0 + 0x50),(TMMTriangle *)0x0);
      *(long *)(lVar5 + 8) = lVar4;
      *(long *)(lVar5 + 0x10) = lVar3;
      *(long *)(lVar5 + 0x18) = lVar6;
      *(double **)(lVar5 + 0x20) = pdVar9;
      *(double **)(lVar5 + 0x28) = pdVar10;
      *(double **)(lVar5 + 0x30) = pdVar11;
      *(long *)(lVar6 + 0x10) = lVar5;
      *(long *)(lVar3 + 0x10) = lVar5;
      *(long *)(lVar4 + 0x10) = lVar5;
      pdVar8 = (double *)pdVar9[7];
      *(double **)(in_x0 + 0x18) = pdVar8;
      dVar20 = *pdVar8;
      dVar22 = pdVar8[1];
      dVar13 = *pdVar10;
      dVar16 = pdVar10[1];
      dVar12 = pdVar9[1];
      dVar15 = pdVar9[2];
      dVar23 = pdVar8[2];
      dVar14 = pdVar10[2];
      dVar18 = *pdVar9;
      dVar19 = *pdVar11;
      dVar17 = pdVar11[1];
      dVar25 = (double)NEON_fmadd(dVar14 - dVar23,dVar18 - dVar20,
                                  (dVar15 - dVar23) * -(dVar13 - dVar20));
      dVar21 = pdVar11[2];
      uVar2 = NEON_fmadd(dVar16 - dVar22,dVar15 - dVar23,(dVar12 - dVar22) * -(dVar14 - dVar23));
      uVar24 = NEON_fmadd(dVar13 - dVar20,dVar12 - dVar22,(dVar18 - dVar20) * -(dVar16 - dVar22));
      uVar2 = NEON_fmadd(dVar19 - dVar20,uVar2,(dVar17 - dVar22) * dVar25);
      dVar20 = (double)NEON_fmadd(dVar21 - dVar23,uVar24,uVar2);
      pdVar7 = pdVar8;
      if (1e-09 <= ABS(dVar20)) goto LAB_00d50104;
      goto LAB_00d5001c;
    }
    dVar18 = *pdVar10 - *pdVar11;
    dVar19 = *pdVar9 - *pdVar11;
    dVar16 = (double)NEON_fmadd(dVar13 - dVar16,dVar19,dVar17 * -dVar18);
    if ((dVar16 != 0.0) ||
       (dVar16 = (double)NEON_fmadd(dVar18,dVar14,dVar19 * -dVar15), dVar16 != 0.0))
    goto LAB_00d4fed8;
    pdVar11 = pdVar10;
    dVar16 = dVar13;
    dVar13 = pdVar9[2];
  } while (pdVar10 != pdVar7);
  uVar2 = 1;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
  goto LAB_00d50250;
  while( true ) {
    dVar20 = *pdVar7;
    dVar22 = pdVar7[1];
    dVar23 = pdVar7[2];
    dVar25 = (double)NEON_fmadd(dVar14 - dVar23,dVar18 - dVar20,
                                (dVar15 - dVar23) * -(dVar13 - dVar20));
    uVar2 = NEON_fmadd(dVar16 - dVar22,dVar15 - dVar23,(dVar12 - dVar22) * -(dVar14 - dVar23));
    uVar24 = NEON_fmadd(dVar13 - dVar20,dVar12 - dVar22,(dVar18 - dVar20) * -(dVar16 - dVar22));
    uVar2 = NEON_fmadd(dVar19 - dVar20,uVar2,(dVar17 - dVar22) * dVar25);
    dVar20 = (double)NEON_fmadd(dVar21 - dVar23,uVar24,uVar2);
    if (1e-09 <= ABS(dVar20)) break;
LAB_00d5001c:
    pdVar7 = (double *)pdVar7[7];
    if (*(char *)((long)pdVar7 + 0x31) != '\0') {
      dVar20 = dVar19 + 0.0;
      dVar22 = dVar17 + 0.0;
      dVar23 = dVar21 + 0.0;
      for (pdVar7 = (double *)pdVar11[7]; pdVar7 != pdVar11; pdVar7 = (double *)pdVar7[7]) {
        dVar20 = dVar20 + *pdVar7;
        dVar22 = dVar22 + pdVar7[1];
        dVar23 = dVar23 + pdVar7[2];
      }
      dVar25 = (double)NEON_fmadd(dVar14 - dVar21,dVar18 - dVar19,
                                  (dVar15 - dVar21) * -(dVar13 - dVar19));
      dVar14 = (double)NEON_fmadd(dVar16 - dVar17,dVar15 - dVar21,
                                  (dVar12 - dVar17) * -(dVar14 - dVar21));
      dVar16 = (double)NEON_fmadd(dVar13 - dVar19,dVar12 - dVar17,
                                  (dVar18 - dVar19) * -(dVar16 - dVar17));
      *(double *)(in_x0 + 0xe8) = dVar14;
      *(double *)(in_x0 + 0xf0) = dVar25;
      uVar2 = NEON_fmadd(dVar14,dVar14,dVar25 * dVar25);
      *(double *)(in_x0 + 0xf8) = dVar16;
      dVar13 = (double)NEON_fmadd(dVar16,dVar16,uVar2);
      dVar13 = SQRT(dVar13);
      dVar12 = (double)NEON_ucvtf(*(undefined8 *)(in_x0 + 0x20));
      if (dVar13 != 0.0) {
        dVar14 = dVar14 / dVar13;
        dVar25 = dVar25 / dVar13;
        dVar16 = dVar16 / dVar13;
        *(double *)(in_x0 + 0xe8) = dVar14;
        *(double *)(in_x0 + 0xf0) = dVar25;
        *(double *)(in_x0 + 0xf8) = dVar16;
      }
      *(double **)(in_x0 + 0x18) = pdVar9;
      pdVar9 = (double *)
               CircularList<HACD::TMMVertex>::Add
                         ((CircularList<HACD::TMMVertex> *)(in_x0 + 0x10),(TMMVertex *)0x0);
      *pdVar9 = dVar20 / dVar12 + dVar14;
      pdVar9[1] = dVar22 / dVar12 + dVar25;
      pdVar9[2] = dVar23 / dVar12 + dVar16;
      pdVar9[3] = 0.0;
      uVar2 = 0;
      *(undefined8 *)(*(long *)(in_x0 + 0x18) + 0x18) = 0x7fffffffffffffff;
      *(undefined *)(in_x0 + 0x100) = 1;
      if (*(long *)(lVar1 + 0x28) == local_78) {
        return;
      }
      goto LAB_00d50250;
    }
  }
  if (pdVar7 != pdVar8) {
    TMMVertex::TMMVertex((TMMVertex *)&local_b0);
    local_98 = pdVar7[3];
    pdVar9 = *(double **)(in_x0 + 0x18);
    dStack_a8 = pdVar7[1];
    local_b0 = *pdVar7;
    local_a0 = pdVar7[2];
    pdVar7[3] = pdVar9[3];
    *pdVar7 = *pdVar9;
    pdVar7[1] = pdVar9[1];
    pdVar7[2] = pdVar9[2];
    *pdVar9 = local_b0;
    pdVar9[3] = local_98;
    pdVar9[1] = dStack_a8;
    pdVar9[2] = local_a0;
    TMMVertex::~TMMVertex((TMMVertex *)&local_b0);
  }
LAB_00d50104:
  uVar2 = 0;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
LAB_00d50250:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


