// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializeQEM
// Entry Point: 00d57ac0
// Size: 1576 bytes
// Signature: undefined InitializeQEM(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::MeshDecimator::InitializeQEM() */

void HACD::MeshDecimator::InitializeQEM(void)

{
  ulong uVar1;
  bool bVar2;
  long *in_x0;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  
  pdVar19 = (double *)in_x0[1];
  uVar11 = in_x0[2];
  dVar23 = *pdVar19;
  dVar25 = pdVar19[1];
  dVar22 = pdVar19[2];
  dVar30 = dVar22;
  dVar27 = dVar23;
  dVar28 = dVar25;
  if (1 < uVar11) {
    lVar12 = uVar11 - 1;
    pdVar20 = pdVar19 + 5;
    dVar36 = dVar22;
    dVar29 = dVar23;
    dVar32 = dVar25;
    dVar34 = dVar22;
    dVar26 = dVar23;
    dVar37 = dVar25;
    do {
      dVar27 = pdVar20[-2];
      dVar28 = pdVar20[-1];
      dVar30 = *pdVar20;
      dVar23 = dVar27;
      if (dVar29 <= dVar27) {
        dVar23 = dVar29;
      }
      dVar25 = dVar28;
      if (dVar32 <= dVar28) {
        dVar25 = dVar32;
      }
      dVar22 = dVar30;
      if (dVar36 <= dVar30) {
        dVar22 = dVar36;
      }
      if (dVar27 <= dVar26) {
        dVar27 = dVar26;
      }
      if (dVar28 <= dVar37) {
        dVar28 = dVar37;
      }
      if (dVar30 <= dVar34) {
        dVar30 = dVar34;
      }
      lVar12 = lVar12 + -1;
      pdVar20 = pdVar20 + 3;
      dVar36 = dVar22;
      dVar29 = dVar23;
      dVar32 = dVar25;
      dVar34 = dVar30;
      dVar26 = dVar27;
      dVar37 = dVar28;
    } while (lVar12 != 0);
  }
  uVar24 = NEON_fmadd(dVar27 - dVar23,dVar27 - dVar23,(dVar28 - dVar25) * (dVar28 - dVar25));
  dVar22 = (double)NEON_fmadd(dVar30 - dVar22,dVar30 - dVar22,uVar24);
  in_x0[7] = (long)SQRT(dVar22);
  if (uVar11 != 0) {
    uVar11 = 0;
    lVar12 = in_x0[8];
    do {
      lVar12 = lVar12 + uVar11 * 0x188;
      *(undefined8 *)(lVar12 + 0x168) = 0;
      *(undefined8 *)(lVar12 + 0x160) = 0;
      *(undefined8 *)(lVar12 + 0x178) = 0;
      *(undefined8 *)(lVar12 + 0x170) = 0;
      *(undefined8 *)(lVar12 + 0x148) = 0;
      *(undefined8 *)(lVar12 + 0x140) = 0;
      *(undefined8 *)(lVar12 + 0x158) = 0;
      *(undefined8 *)(lVar12 + 0x150) = 0;
      *(undefined8 *)(lVar12 + 0x138) = 0;
      *(undefined8 *)(lVar12 + 0x130) = 0;
      lVar12 = in_x0[8];
      lVar6 = lVar12 + uVar11 * 0x188;
      lVar13 = *(long *)(lVar6 + 0x120);
      if (lVar13 != 0) {
        lVar17 = lVar12 + uVar11 * 0x188;
        lVar14 = *in_x0;
        lVar7 = in_x0[1];
        puVar5 = (undefined8 *)(lVar7 + uVar11 * 0x18);
        plVar3 = (long *)(lVar17 + 0x98);
        if (*(long *)(lVar17 + 0x128) != 0x10) {
          plVar3 = *(long **)(lVar17 + 0x118);
        }
        do {
          plVar18 = (long *)(lVar14 + *plVar3 * 0x18);
          pdVar21 = (double *)(lVar7 + *plVar18 * 0x18);
          pdVar20 = (double *)(lVar7 + plVar18[1] * 0x18);
          pdVar19 = (double *)(lVar7 + plVar18[2] * 0x18);
          dVar22 = *pdVar20 - *pdVar21;
          dVar36 = pdVar20[1] - pdVar21[1];
          dVar28 = pdVar19[1] - pdVar21[1];
          dVar30 = pdVar20[2] - pdVar21[2];
          dVar27 = pdVar19[2] - pdVar21[2];
          dVar25 = *pdVar19 - *pdVar21;
          dVar23 = (double)NEON_fmadd(dVar30,dVar25,dVar27 * -dVar22);
          dVar30 = (double)NEON_fmadd(dVar36,dVar27,dVar28 * -dVar30);
          dVar27 = dVar23 * dVar23;
          dVar25 = (double)NEON_fmadd(dVar22,dVar28,dVar25 * -dVar36);
          uVar24 = NEON_fmadd(dVar30,dVar30,dVar27);
          dVar22 = (double)NEON_fmadd(dVar25,dVar25,uVar24);
          dVar22 = SQRT(dVar22);
          if (dVar22 != 0.0) {
            dVar23 = dVar23 / dVar22;
            dVar30 = dVar30 / dVar22;
            dVar27 = dVar23 * dVar23;
            dVar25 = dVar25 / dVar22;
          }
          uVar31 = puVar5[2];
          lVar13 = lVar13 + -1;
          uVar24 = NEON_fmadd(dVar22,dVar27,*(undefined8 *)(lVar6 + 0x150));
          dVar27 = (double)NEON_fmadd(*puVar5,dVar30,dVar23 * (double)puVar5[1]);
          uVar38 = NEON_fmadd(dVar22,dVar30 * dVar23,*(undefined8 *)(lVar6 + 0x138));
          uVar33 = NEON_fmadd(dVar22,dVar30 * dVar30,*(undefined8 *)(lVar6 + 0x130));
          *(undefined8 *)(lVar6 + 0x150) = uVar24;
          uVar41 = NEON_fmadd(dVar22,dVar30 * dVar25,*(undefined8 *)(lVar6 + 0x140));
          dVar28 = (double)NEON_fnmadd(uVar31,dVar25,-dVar27);
          dVar27 = (double)NEON_fmadd(uVar31,dVar25,dVar27);
          *(undefined8 *)(lVar6 + 0x130) = uVar33;
          uVar24 = NEON_fmadd(dVar22,dVar23 * dVar25,*(undefined8 *)(lVar6 + 0x158));
          uVar35 = NEON_fmadd(dVar22,dVar25 * dVar25,*(undefined8 *)(lVar6 + 0x168));
          *(undefined8 *)(lVar6 + 0x138) = uVar38;
          *(undefined8 *)(lVar6 + 0x140) = uVar41;
          uVar38 = NEON_fmadd(dVar22,dVar30 * dVar28,*(undefined8 *)(lVar6 + 0x148));
          uVar31 = NEON_fmadd(dVar22,dVar23 * dVar28,*(undefined8 *)(lVar6 + 0x160));
          uVar33 = NEON_fmadd(dVar22,dVar25 * dVar28,*(undefined8 *)(lVar6 + 0x170));
          *(undefined8 *)(lVar6 + 0x158) = uVar24;
          uVar24 = NEON_fmadd(dVar22,dVar27 * dVar27,*(undefined8 *)(lVar6 + 0x178));
          *(undefined8 *)(lVar6 + 0x168) = uVar35;
          *(undefined8 *)(lVar6 + 0x148) = uVar38;
          *(undefined8 *)(lVar6 + 0x160) = uVar31;
          *(undefined8 *)(lVar6 + 0x170) = uVar33;
          *(undefined8 *)(lVar6 + 0x178) = uVar24;
          plVar3 = plVar3 + 1;
        } while (lVar13 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)in_x0[2]);
    pdVar19 = (double *)in_x0[1];
  }
  lVar12 = in_x0[0xb];
  lVar6 = in_x0[0xc] - lVar12;
  if (lVar6 != 0) {
    uVar11 = 0;
    lVar13 = in_x0[8];
    lVar14 = *in_x0;
    uVar1 = lVar6 / 0x38;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    do {
      plVar3 = (long *)(lVar12 + uVar11 * 0x38);
      lVar6 = *plVar3;
      lVar7 = *(long *)(lVar13 + lVar6 * 0x188 + 0x120);
      if (lVar7 != 0) {
        lVar8 = lVar13 + lVar6 * 0x188;
        lVar4 = plVar3[1];
        lVar10 = *(long *)(lVar13 + lVar4 * 0x188 + 0x120);
        lVar17 = lVar8 + 0x98;
        if (*(long *)(lVar8 + 0x128) != 0x10) {
          lVar17 = *(long *)(lVar8 + 0x118);
        }
        if (lVar10 != 0) {
          lVar9 = lVar13 + lVar4 * 0x188;
          lVar8 = 0;
          plVar3 = (long *)(lVar9 + 0x98);
          if (*(long *)(lVar9 + 0x128) != 0x10) {
            plVar3 = *(long **)(lVar9 + 0x118);
          }
          lVar9 = -1;
          do {
            lVar15 = *(long *)(lVar17 + lVar8 * 8);
            plVar18 = plVar3;
            lVar16 = lVar10;
            do {
              if ((lVar15 == *plVar18) && (bVar2 = lVar9 != -1, lVar9 = lVar15, bVar2))
              goto LAB_00d57f10;
              lVar16 = lVar16 + -1;
              plVar18 = plVar18 + 1;
            } while (lVar16 != 0);
            lVar8 = lVar8 + 1;
          } while (lVar8 != lVar7);
          if (lVar9 != -1) {
            lVar7 = *(long *)(lVar14 + lVar9 * 0x18);
            if (lVar7 == lVar6 || lVar7 == lVar4) {
              lVar7 = lVar14 + lVar9 * 0x18;
              plVar18 = (long *)(lVar7 + 8);
              lVar17 = *plVar18;
              plVar3 = (long *)(lVar7 + 0x10);
              if (lVar17 != lVar4 && lVar17 != lVar6) {
                plVar3 = plVar18;
              }
              lVar7 = *plVar3;
            }
            pdVar21 = pdVar19 + lVar6 * 3;
            pdVar20 = pdVar19 + lVar4 * 3;
            dVar28 = *pdVar21;
            dVar36 = pdVar21[1];
            dVar27 = pdVar21[2];
            dVar29 = pdVar20[1] - dVar36;
            dVar34 = pdVar20[2] - dVar27;
            dVar32 = *pdVar20 - dVar28;
            uVar24 = NEON_fmadd(dVar32,dVar32,dVar29 * dVar29);
            dVar30 = (double)NEON_fmadd(dVar34,dVar34,uVar24);
            dVar30 = SQRT(dVar30);
            dVar22 = dVar32;
            dVar23 = dVar29;
            dVar25 = dVar34;
            if (dVar30 != 0.0) {
              dVar22 = dVar32 / dVar30;
              dVar23 = dVar29 / dVar30;
              dVar25 = dVar34 / dVar30;
            }
            pdVar21 = pdVar19 + lVar7 * 3;
            dVar37 = pdVar21[1] - dVar36;
            dVar40 = pdVar21[2] - dVar27;
            dVar39 = *pdVar21 - dVar28;
            uVar24 = NEON_fmadd(dVar39,dVar22,dVar37 * dVar23);
            dVar26 = (double)NEON_fmadd(dVar40,dVar25,uVar24);
            dVar23 = dVar37 - dVar23 * dVar26;
            dVar30 = dVar39 - dVar22 * dVar26;
            dVar22 = dVar40 - dVar25 * dVar26;
            dVar25 = dVar23 * dVar23;
            uVar24 = NEON_fmadd(dVar30,dVar30,dVar25);
            dVar26 = (double)NEON_fmadd(dVar22,dVar22,uVar24);
            dVar26 = SQRT(dVar26);
            if (dVar26 != 0.0) {
              dVar23 = dVar23 / dVar26;
              dVar30 = dVar30 / dVar26;
              dVar25 = dVar23 * dVar23;
              dVar22 = dVar22 / dVar26;
            }
            lVar7 = lVar13 + lVar6 * 0x188;
            lVar6 = lVar13 + lVar4 * 0x188;
            dVar28 = (double)NEON_fmadd(dVar28,dVar30,dVar36 * dVar23);
            dVar26 = (double)NEON_fmadd(dVar34,dVar39,dVar40 * -dVar32);
            uVar24 = NEON_fmadd(dVar29,dVar40,dVar37 * -dVar34);
            dVar36 = (double)NEON_fnmadd(dVar27,dVar22,-dVar28);
            dVar27 = (double)NEON_fmadd(dVar27,dVar22,dVar28);
            uVar31 = NEON_fmadd(dVar32,dVar37,dVar39 * -dVar29);
            uVar24 = NEON_fmadd(uVar24,uVar24,dVar26 * dVar26);
            dVar28 = (double)NEON_fmadd(uVar31,uVar31,uVar24);
            dVar29 = SQRT(dVar28) * 1000.0;
            uVar33 = NEON_fmadd(dVar29,dVar30 * dVar30,*(undefined8 *)(lVar7 + 0x130));
            uVar38 = NEON_fmadd(dVar29,dVar30 * dVar23,*(undefined8 *)(lVar7 + 0x138));
            uVar31 = NEON_fmadd(dVar29,dVar30 * dVar22,*(undefined8 *)(lVar7 + 0x140));
            uVar24 = NEON_fmadd(dVar29,dVar22 * dVar22,*(undefined8 *)(lVar7 + 0x168));
            uVar35 = NEON_fmadd(dVar29,dVar30 * dVar36,*(undefined8 *)(lVar7 + 0x148));
            uVar41 = NEON_fmadd(dVar29,dVar23 * dVar36,*(undefined8 *)(lVar7 + 0x160));
            *(undefined8 *)(lVar7 + 0x130) = uVar33;
            *(undefined8 *)(lVar7 + 0x138) = uVar38;
            *(undefined8 *)(lVar7 + 0x140) = uVar31;
            *(undefined8 *)(lVar7 + 0x148) = uVar35;
            uVar35 = NEON_fmadd(dVar29,dVar25,*(undefined8 *)(lVar7 + 0x150));
            *(undefined8 *)(lVar7 + 0x160) = uVar41;
            *(undefined8 *)(lVar7 + 0x168) = uVar24;
            uVar41 = NEON_fmadd(dVar29,dVar23 * dVar22,*(undefined8 *)(lVar7 + 0x158));
            uVar31 = NEON_fmadd(dVar29,dVar22 * dVar36,*(undefined8 *)(lVar7 + 0x170));
            uVar24 = NEON_fmadd(dVar29,dVar27 * dVar27,*(undefined8 *)(lVar7 + 0x178));
            uVar33 = *(undefined8 *)(lVar6 + 0x130);
            uVar38 = *(undefined8 *)(lVar6 + 0x138);
            *(undefined8 *)(lVar7 + 0x150) = uVar35;
            *(undefined8 *)(lVar7 + 0x158) = uVar41;
            uVar35 = *(undefined8 *)(lVar6 + 0x150);
            uVar42 = *(undefined8 *)(lVar6 + 0x158);
            *(undefined8 *)(lVar7 + 0x170) = uVar31;
            *(undefined8 *)(lVar7 + 0x178) = uVar24;
            dVar27 = pdVar20[1];
            uVar31 = NEON_fmadd(dVar29,dVar30 * dVar30,uVar33);
            dVar28 = *pdVar20;
            uVar33 = NEON_fmadd(dVar29,dVar30 * dVar23,uVar38);
            dVar36 = pdVar20[2];
            uVar24 = NEON_fmadd(dVar29,dVar25,uVar35);
            *(undefined8 *)(lVar6 + 0x130) = uVar31;
            *(undefined8 *)(lVar6 + 0x138) = uVar33;
            dVar25 = (double)NEON_fmadd(dVar28,dVar30,dVar23 * dVar27);
            dVar27 = (double)NEON_fnmadd(dVar36,dVar22,-dVar25);
            dVar25 = (double)NEON_fmadd(dVar36,dVar22,dVar25);
            uVar41 = NEON_fmadd(dVar29,dVar30 * dVar22,*(undefined8 *)(lVar6 + 0x140));
            uVar31 = NEON_fmadd(dVar29,dVar23 * dVar22,uVar42);
            *(undefined8 *)(lVar6 + 0x150) = uVar24;
            *(undefined8 *)(lVar6 + 0x158) = uVar31;
            uVar35 = NEON_fmadd(dVar29,dVar22 * dVar22,*(undefined8 *)(lVar6 + 0x168));
            uVar33 = NEON_fmadd(dVar29,dVar30 * dVar27,*(undefined8 *)(lVar6 + 0x148));
            uVar31 = NEON_fmadd(dVar29,dVar23 * dVar27,*(undefined8 *)(lVar6 + 0x160));
            uVar24 = NEON_fmadd(dVar29,dVar22 * dVar27,*(undefined8 *)(lVar6 + 0x170));
            uVar38 = NEON_fmadd(dVar29,dVar25 * dVar25,*(undefined8 *)(lVar6 + 0x178));
            *(undefined8 *)(lVar6 + 0x140) = uVar41;
            *(undefined8 *)(lVar6 + 0x148) = uVar33;
            *(undefined8 *)(lVar6 + 0x160) = uVar31;
            *(undefined8 *)(lVar6 + 0x168) = uVar35;
            *(undefined8 *)(lVar6 + 0x170) = uVar24;
            *(undefined8 *)(lVar6 + 0x178) = uVar38;
          }
        }
      }
LAB_00d57f10:
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
  }
  return;
}


