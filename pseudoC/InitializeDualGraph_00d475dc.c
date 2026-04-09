// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializeDualGraph
// Entry Point: 00d475dc
// Size: 3764 bytes
// Signature: undefined InitializeDualGraph(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::HACD::InitializeDualGraph() */

void HACD::HACD::InitializeDualGraph(void)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  long lVar11;
  long in_x0;
  ulong *puVar12;
  ulong *puVar13;
  ICHull *this;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  double *pdVar18;
  double *pdVar19;
  long lVar20;
  undefined (*pauVar21) [16];
  double *pdVar22;
  ulong uVar23;
  ulong uVar24;
  size_t __n;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  ulong *puVar31;
  undefined8 uVar32;
  double dVar33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  ulong local_588;
  ulong local_580;
  ulong local_578;
  ulong local_570;
  double dStack_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  double local_530;
  double dStack_528;
  double local_520;
  undefined auStack_518 [1024];
  RaycastMesh aRStack_118 [104];
  double local_b0;
  double dStack_a8;
  double local_a0;
  long local_90;
  
  lVar11 = tpidr_el0;
  local_90 = *(long *)(lVar11 + 0x28);
  if (*(long *)(in_x0 + 0x30) != 0) {
    operator_delete__((void *)(*(long *)(in_x0 + 0x30) + -8));
  }
  uVar23 = *(ulong *)(in_x0 + 0x60);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar23;
  __n = uVar23 * 0x18;
  uVar28 = __n + 8;
  if (SUB168(auVar34 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < __n) {
    uVar28 = 0xffffffffffffffff;
  }
  puVar12 = (ulong *)operator_new__(uVar28);
  cVar3 = *(char *)(in_x0 + 0x198);
  puVar13 = puVar12 + 1;
  *puVar12 = uVar23;
  *(ulong **)(in_x0 + 0x30) = puVar13;
  if (cVar3 != '\0') {
    if (*(long *)(in_x0 + 0x20) != 0) {
      operator_delete__((void *)(*(long *)(in_x0 + 0x20) + -8));
    }
    if (*(long *)(in_x0 + 0x28) != 0) {
      operator_delete__((void *)(*(long *)(in_x0 + 0x28) + -8));
    }
    uVar23 = *(ulong *)(in_x0 + 0x58);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar23;
    uVar28 = uVar23 * 0x18 + 8;
    if (SUB168(auVar4 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uVar23 * 0x18) {
      uVar28 = 0xffffffffffffffff;
    }
    puVar12 = (ulong *)operator_new__(uVar28);
    *puVar12 = uVar23;
    *(ulong **)(in_x0 + 0x20) = puVar12 + 1;
    puVar12 = (ulong *)operator_new__(uVar28);
    puVar13 = *(ulong **)(in_x0 + 0x30);
    __n = *(long *)(in_x0 + 0x60) * 0x18;
    *puVar12 = uVar23;
    *(ulong **)(in_x0 + 0x28) = puVar12 + 1;
  }
  memset(puVar13,0,__n);
  RaycastMesh::RaycastMesh(aRStack_118);
  if (*(char *)(in_x0 + 0x199) == '\0') {
    uVar28 = *(ulong *)(in_x0 + 0x58);
    auVar34 = NEON_fmov(0x4008000000000000,8);
    *(undefined8 *)(in_x0 + 0xc0) = 0;
    dVar41 = auVar34._8_8_;
    dVar33 = auVar34._0_8_;
  }
  else {
    RaycastMesh::Initialize
              (aRStack_118,*(ulong *)(in_x0 + 0x60),*(ulong *)(in_x0 + 0x58),
               *(Vec3 **)(in_x0 + 0x18),*(Vec3 **)(in_x0 + 0x10),0xf,4,2.0);
    uVar28 = *(ulong *)(in_x0 + 0x58);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28;
    uVar23 = uVar28 * 0x18 + 8;
    if (SUB168(auVar5 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uVar28 * 0x18) {
      uVar23 = 0xffffffffffffffff;
    }
    puVar12 = (ulong *)operator_new__(uVar23);
    *puVar12 = uVar28;
    *(ulong **)(in_x0 + 0x38) = puVar12 + 1;
    puVar12 = (ulong *)operator_new__(uVar23);
    *puVar12 = uVar28;
    *(ulong **)(in_x0 + 0x40) = puVar12 + 1;
    auVar34 = NEON_fmov(0x4008000000000000,8);
    *(undefined8 *)(in_x0 + 0xc0) = 0;
    dVar41 = auVar34._8_8_;
    dVar33 = auVar34._0_8_;
  }
  if (uVar28 != 0) {
    uVar23 = 0;
    dVar47 = -1.0;
    do {
      dVar46 = ((double)(unkuint9)uVar23 * 100.0) / (double)(unkuint9)uVar28;
      if (1.0 < ABS(dVar46 - dVar47) && *(long *)(in_x0 + 0x178) != 0) {
        auVar35._8_8_ = 0;
        auVar35._0_8_ = dVar46;
        FUN_00d47538(auVar35,auStack_518);
        auVar36._8_8_ = 0;
        auVar36._0_8_ = dVar46;
        (**(code **)(in_x0 + 0x178))(auVar36,0,auStack_518,*(undefined8 *)(in_x0 + 0x58));
        dVar47 = dVar46;
      }
      lVar30 = *(long *)(in_x0 + 0x138);
      puVar12 = (ulong *)(*(long *)(in_x0 + 0x10) + uVar23 * 0x18);
      lVar27 = lVar30 + uVar23 * 0x310;
      local_580 = *puVar12;
      local_578 = puVar12[1];
      local_588 = puVar12[2];
      uVar28 = *(ulong *)(lVar27 + 0x250);
      uVar25 = *(ulong *)(lVar27 + 600);
      if (uVar28 == uVar25) {
        uVar25 = uVar28 * 2;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar25;
        uVar24 = uVar28 * 0x30 | 8;
        if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) {
          uVar24 = 0xffffffffffffffff;
        }
        puVar13 = (ulong *)operator_new__(uVar24);
        puVar12 = puVar13 + 1;
        *puVar13 = uVar25;
        if (uVar25 != 0) {
          lVar16 = uVar28 * 0x30;
          puVar13 = puVar12;
          do {
            *puVar13 = 0;
            puVar13[1] = 0;
            *(undefined2 *)(puVar13 + 2) = 0;
            lVar16 = lVar16 + -0x18;
            puVar13 = puVar13 + 3;
          } while (lVar16 != 0);
        }
        lVar30 = lVar30 + uVar23 * 0x310;
        puVar31 = *(ulong **)(lVar30 + 0x248);
        puVar13 = (ulong *)(lVar27 + 200);
        if (uVar28 != 0x10) {
          puVar13 = puVar31;
        }
        memcpy(puVar12,puVar13,uVar28 * 0x18);
        if (puVar31 != (ulong *)0x0) {
          operator_delete__(puVar31 + -1);
          uVar28 = *(ulong *)(lVar27 + 0x250);
        }
        *(ulong **)(lVar30 + 0x248) = puVar12;
        *(ulong *)(lVar27 + 600) = uVar25;
      }
      else {
        puVar12 = *(ulong **)(lVar30 + uVar23 * 0x310 + 0x248);
      }
      puVar13 = (ulong *)(lVar27 + 200);
      if (uVar25 != 0x10) {
        puVar13 = puVar12;
      }
      puVar13 = puVar13 + uVar28 * 3;
      *(ulong *)(lVar27 + 0x250) = uVar28 + 1;
      *puVar13 = local_580;
      puVar13[1] = 0;
      *(undefined2 *)(puVar13 + 2) = 0;
      lVar30 = *(long *)(in_x0 + 0x138);
      lVar27 = lVar30 + uVar23 * 0x310;
      uVar28 = *(ulong *)(lVar27 + 0x250);
      uVar25 = *(ulong *)(lVar27 + 600);
      if (uVar28 == uVar25) {
        uVar25 = uVar28 * 2;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar25;
        uVar24 = uVar28 * 0x30 | 8;
        if (SUB168(auVar7 * ZEXT816(0x18),8) != 0) {
          uVar24 = 0xffffffffffffffff;
        }
        puVar13 = (ulong *)operator_new__(uVar24);
        puVar12 = puVar13 + 1;
        *puVar13 = uVar25;
        if (uVar25 != 0) {
          lVar16 = uVar28 * 0x30;
          puVar13 = puVar12;
          do {
            *puVar13 = 0;
            puVar13[1] = 0;
            *(undefined2 *)(puVar13 + 2) = 0;
            lVar16 = lVar16 + -0x18;
            puVar13 = puVar13 + 3;
          } while (lVar16 != 0);
        }
        lVar30 = lVar30 + uVar23 * 0x310;
        puVar31 = *(ulong **)(lVar30 + 0x248);
        puVar13 = (ulong *)(lVar27 + 200);
        if (uVar28 != 0x10) {
          puVar13 = puVar31;
        }
        memcpy(puVar12,puVar13,uVar28 * 0x18);
        if (puVar31 != (ulong *)0x0) {
          operator_delete__(puVar31 + -1);
          uVar28 = *(ulong *)(lVar27 + 0x250);
        }
        *(ulong **)(lVar30 + 0x248) = puVar12;
        *(ulong *)(lVar27 + 600) = uVar25;
      }
      else {
        puVar12 = *(ulong **)(lVar30 + uVar23 * 0x310 + 0x248);
      }
      puVar13 = (ulong *)(lVar27 + 200);
      if (uVar25 != 0x10) {
        puVar13 = puVar12;
      }
      puVar13 = puVar13 + uVar28 * 3;
      *(ulong *)(lVar27 + 0x250) = uVar28 + 1;
      *puVar13 = local_578;
      puVar13[1] = 0;
      *(undefined2 *)(puVar13 + 2) = 0;
      lVar30 = *(long *)(in_x0 + 0x138);
      lVar27 = lVar30 + uVar23 * 0x310;
      uVar28 = *(ulong *)(lVar27 + 0x250);
      uVar25 = *(ulong *)(lVar27 + 600);
      if (uVar28 == uVar25) {
        uVar25 = uVar28 * 2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar25;
        uVar24 = uVar28 * 0x30 | 8;
        if (SUB168(auVar8 * ZEXT816(0x18),8) != 0) {
          uVar24 = 0xffffffffffffffff;
        }
        puVar13 = (ulong *)operator_new__(uVar24);
        puVar12 = puVar13 + 1;
        *puVar13 = uVar25;
        if (uVar25 != 0) {
          lVar16 = uVar28 * 0x30;
          puVar13 = puVar12;
          do {
            *puVar13 = 0;
            puVar13[1] = 0;
            *(undefined2 *)(puVar13 + 2) = 0;
            lVar16 = lVar16 + -0x18;
            puVar13 = puVar13 + 3;
          } while (lVar16 != 0);
        }
        lVar30 = lVar30 + uVar23 * 0x310;
        puVar31 = *(ulong **)(lVar30 + 0x248);
        puVar13 = (ulong *)(lVar27 + 200);
        if (uVar28 != 0x10) {
          puVar13 = puVar31;
        }
        memcpy(puVar12,puVar13,uVar28 * 0x18);
        if (puVar31 != (ulong *)0x0) {
          operator_delete__(puVar31 + -1);
          uVar28 = *(ulong *)(lVar27 + 0x250);
        }
        *(ulong **)(lVar30 + 0x248) = puVar12;
        *(ulong *)(lVar27 + 600) = uVar25;
      }
      else {
        puVar12 = *(ulong **)(lVar30 + uVar23 * 0x310 + 0x248);
      }
      puVar13 = (ulong *)(lVar27 + 200);
      if (uVar25 != 0x10) {
        puVar13 = puVar12;
      }
      puVar13 = puVar13 + uVar28 * 3;
      *(ulong *)(lVar27 + 0x250) = uVar28 + 1;
      *puVar13 = local_588;
      puVar13[1] = 0;
      *(undefined2 *)(puVar13 + 2) = 0;
      this = (ICHull *)operator_new(0x110);
      ICHull::ICHull(this,*(HeapManager **)(in_x0 + 400));
      lVar26 = local_580 * 0x18;
      *(ICHull **)(*(long *)(in_x0 + 0x138) + uVar23 * 0x310 + 0x270) = this;
      ICHull::AddPoint(this,(Vec3 *)(*(long *)(in_x0 + 0x18) + lVar26),local_580);
      lVar16 = local_578 * 0x18;
      ICHull::AddPoint(this,(Vec3 *)(*(long *)(in_x0 + 0x18) + lVar16),local_578);
      lVar30 = local_588 * 0x18;
      ICHull::AddPoint(this,(Vec3 *)(*(long *)(in_x0 + 0x18) + lVar30),local_588);
      lVar27 = *(long *)(in_x0 + 0x18);
      *(undefined8 *)(this + 0xe0) = 0;
      pdVar19 = (double *)(lVar27 + lVar16);
      pdVar22 = (double *)(lVar27 + lVar26);
      pdVar18 = (double *)(lVar27 + lVar30);
      dVar42 = pdVar19[2] - pdVar22[2];
      dVar39 = pdVar19[1] - pdVar22[1];
      dVar46 = *pdVar19 - *pdVar22;
      lVar27 = *(long *)(in_x0 + 0x30);
      dVar45 = pdVar18[1] - pdVar22[1];
      dVar43 = pdVar18[2] - pdVar22[2];
      dVar44 = *pdVar18 - *pdVar22;
      pdVar19 = (double *)(lVar27 + lVar26);
      pdVar22 = (double *)(lVar27 + lVar16);
      pdVar18 = (double *)(lVar27 + lVar30);
      dVar40 = (double)NEON_fmadd(dVar39,dVar43,dVar45 * -dVar42);
      dStack_a8 = (double)NEON_fmadd(dVar42,dVar44,dVar43 * -dVar46);
      local_a0 = (double)NEON_fmadd(dVar46,dVar45,dVar44 * -dVar39);
      *pdVar19 = dVar40 + *pdVar19;
      pdVar19[1] = dStack_a8 + pdVar19[1];
      dVar46 = *pdVar22;
      dVar39 = pdVar22[1];
      pdVar19[2] = local_a0 + pdVar19[2];
      *pdVar22 = dVar40 + dVar46;
      pdVar22[1] = dStack_a8 + dVar39;
      dVar46 = *pdVar18;
      dVar39 = pdVar18[1];
      pdVar22[2] = local_a0 + pdVar22[2];
      *pdVar18 = dVar40 + dVar46;
      pdVar18[1] = dStack_a8 + dVar39;
      pdVar18[2] = local_a0 + pdVar18[2];
      lVar27 = *(long *)(in_x0 + 0x138);
      uVar32 = NEON_fmadd(dVar40,dVar40,dStack_a8 * dStack_a8);
      dVar46 = (double)NEON_fmadd(local_a0,local_a0,uVar32);
      *(double *)(lVar27 + uVar23 * 0x310 + 0x268) = SQRT(dVar46);
      uVar32 = NEON_fmadd(dVar40,dVar40,dStack_a8 * dStack_a8);
      *(double *)(in_x0 + 0xc0) = *(double *)(in_x0 + 0xc0) + SQRT(dVar46);
      dVar46 = (double)NEON_fmadd(local_a0,local_a0,uVar32);
      dVar46 = SQRT(dVar46);
      if (dVar46 != 0.0) {
        dVar40 = dVar40 / dVar46;
        dStack_a8 = dStack_a8 / dVar46;
        local_a0 = local_a0 / dVar46;
      }
      lVar16 = lVar27 + uVar23 * 0x310;
      uVar28 = *(ulong *)(lVar16 + 0x308);
      plVar29 = *(long **)(lVar16 + 0x2f8);
      lVar30 = (local_580 << 0x20) + local_578;
      if (local_580 <= local_578) {
        lVar30 = (local_578 << 0x20) + local_580;
      }
      uVar25 = *(ulong *)(lVar16 + 0x300);
      plVar1 = (long *)(lVar16 + 0x278);
      if (uVar28 != 0x10) {
        plVar1 = plVar29;
      }
      uVar24 = uVar28;
      local_b0 = dVar40;
      if (uVar25 != 0) {
        uVar17 = 0;
        do {
          if (lVar30 == plVar1[uVar17]) goto LAB_00d47e14;
          uVar17 = uVar17 + 1;
        } while (uVar25 != uVar17);
      }
      if (uVar25 == uVar28) {
        uVar24 = uVar28 << 1;
        uVar25 = uVar28 << 4;
        if (uVar24 >> 0x3d != 0) {
          uVar25 = 0xffffffffffffffff;
        }
        plVar14 = (long *)operator_new__(uVar25);
        memcpy(plVar14,plVar1,uVar28 << 3);
        uVar25 = uVar28;
        if (plVar29 != (long *)0x0) {
          operator_delete__(plVar29);
          uVar25 = *(ulong *)(lVar16 + 0x300);
          lVar27 = *(long *)(in_x0 + 0x138);
        }
        *(long **)(lVar16 + 0x2f8) = plVar14;
        *(ulong *)(lVar16 + 0x308) = uVar24;
        uVar28 = uVar24;
        uVar24 = *(ulong *)(lVar27 + uVar23 * 0x310 + 0x308);
        plVar29 = plVar14;
      }
      lVar26 = lVar27 + uVar23 * 0x310;
      plVar1 = (long *)(lVar16 + 0x278);
      if (uVar28 != 0x10) {
        plVar1 = plVar29;
      }
      *(ulong *)(lVar16 + 0x300) = uVar25 + 1;
      plVar1[uVar25] = lVar30;
      plVar29 = *(long **)(lVar26 + 0x2f8);
      uVar25 = *(ulong *)(lVar26 + 0x300);
LAB_00d47e14:
      lVar16 = lVar27 + uVar23 * 0x310;
      lVar30 = (local_578 << 0x20) + local_588;
      if (local_578 <= local_588) {
        lVar30 = (local_588 << 0x20) + local_578;
      }
      plVar1 = (long *)(lVar16 + 0x278);
      if (uVar24 != 0x10) {
        plVar1 = plVar29;
      }
      if (uVar25 != 0) {
        uVar28 = 0;
        do {
          if (lVar30 == plVar1[uVar28]) goto LAB_00d47f18;
          uVar28 = uVar28 + 1;
        } while (uVar25 != uVar28);
      }
      uVar28 = uVar24;
      if (uVar25 == uVar24) {
        uVar28 = uVar25 << 1;
        uVar24 = uVar25 << 4;
        if (uVar28 >> 0x3d != 0) {
          uVar24 = 0xffffffffffffffff;
        }
        plVar14 = (long *)operator_new__(uVar24);
        memcpy(plVar14,plVar1,uVar25 << 3);
        if (plVar29 != (long *)0x0) {
          operator_delete__(plVar29);
          uVar25 = *(ulong *)(lVar16 + 0x300);
          lVar27 = *(long *)(in_x0 + 0x138);
        }
        *(long **)(lVar16 + 0x2f8) = plVar14;
        *(ulong *)(lVar16 + 0x308) = uVar28;
        uVar24 = *(ulong *)(lVar27 + uVar23 * 0x310 + 0x308);
        plVar29 = plVar14;
      }
      lVar26 = lVar27 + uVar23 * 0x310;
      plVar1 = (long *)(lVar16 + 0x278);
      if (uVar28 != 0x10) {
        plVar1 = plVar29;
      }
      *(ulong *)(lVar16 + 0x300) = uVar25 + 1;
      plVar1[uVar25] = lVar30;
      plVar29 = *(long **)(lVar26 + 0x2f8);
      uVar25 = *(ulong *)(lVar26 + 0x300);
LAB_00d47f18:
      lVar27 = lVar27 + uVar23 * 0x310;
      plVar1 = (long *)(lVar27 + 0x278);
      lVar30 = (local_588 << 0x20) + local_580;
      if (local_588 <= local_580) {
        lVar30 = local_588 + (local_580 << 0x20);
      }
      plVar15 = plVar1;
      uVar28 = uVar25;
      plVar14 = plVar1;
      if (uVar24 != 0x10) {
        plVar15 = plVar29;
        plVar14 = plVar29;
      }
      for (; uVar28 != 0; uVar28 = uVar28 - 1) {
        if (lVar30 == *plVar15) goto LAB_00d47fdc;
        plVar15 = plVar15 + 1;
      }
      plVar15 = plVar29;
      if (uVar25 == uVar24) {
        uVar24 = uVar25 << 1;
        uVar28 = uVar25 << 4;
        if (uVar24 >> 0x3d != 0) {
          uVar28 = 0xffffffffffffffff;
        }
        plVar15 = (long *)operator_new__(uVar28);
        memcpy(plVar15,plVar14,uVar25 << 3);
        if (plVar29 != (long *)0x0) {
          operator_delete__(plVar29);
          uVar25 = *(ulong *)(lVar27 + 0x300);
        }
        *(long **)(lVar27 + 0x2f8) = plVar15;
        *(ulong *)(lVar27 + 0x308) = uVar24;
      }
      if (uVar24 != 0x10) {
        plVar1 = plVar15;
      }
      *(ulong *)(lVar27 + 0x300) = uVar25 + 1;
      plVar1[uVar25] = lVar30;
LAB_00d47fdc:
      if (*(char *)(in_x0 + 0x198) != '\0') {
        pdVar19 = (double *)(*(long *)(in_x0 + 0x28) + uVar23 * 0x18);
        *pdVar19 = dVar40;
        pdVar19[1] = dStack_a8;
        pdVar19[2] = local_a0;
        lVar27 = *(long *)(in_x0 + 0x18);
        pauVar21 = (undefined (*) [16])(lVar27 + local_580 * 0x18);
        pdVar19 = (double *)(lVar27 + local_578 * 0x18);
        pdVar18 = (double *)(lVar27 + local_588 * 0x18);
        auVar34 = *pauVar21;
        dVar46 = *pdVar19;
        dVar42 = pdVar19[2];
        dVar39 = *pdVar18;
        dVar40 = *(double *)pauVar21[1];
        dVar43 = pdVar18[2];
        pdVar22 = (double *)(*(long *)(in_x0 + 0x20) + uVar23 * 0x18);
        pdVar22[1] = (auVar34._8_8_ + pdVar19[1] + pdVar18[1]) / dVar41;
        *pdVar22 = (auVar34._0_8_ + dVar46 + dVar39) / dVar33;
        pdVar22[2] = (dVar40 + dVar42 + dVar43) / 3.0;
        lVar30 = *(long *)(in_x0 + 0x138);
        lVar27 = lVar30 + uVar23 * 0x310;
        uVar28 = *(ulong *)(lVar27 + 0x250);
        uVar25 = *(ulong *)(lVar27 + 600);
        if (uVar28 == uVar25) {
          uVar25 = uVar28 * 2;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar25;
          uVar24 = uVar28 * 0x30 | 8;
          if (SUB168(auVar9 * ZEXT816(0x18),8) != 0) {
            uVar24 = 0xffffffffffffffff;
          }
          puVar13 = (ulong *)operator_new__(uVar24);
          puVar12 = puVar13 + 1;
          *puVar13 = uVar25;
          if (uVar25 != 0) {
            lVar16 = uVar28 * 0x30;
            puVar13 = puVar12;
            do {
              *puVar13 = 0;
              puVar13[1] = 0;
              *(undefined2 *)(puVar13 + 2) = 0;
              lVar16 = lVar16 + -0x18;
              puVar13 = puVar13 + 3;
            } while (lVar16 != 0);
          }
          lVar30 = lVar30 + uVar23 * 0x310;
          puVar31 = *(ulong **)(lVar30 + 0x248);
          puVar13 = (ulong *)(lVar27 + 200);
          if (uVar28 != 0x10) {
            puVar13 = puVar31;
          }
          memcpy(puVar12,puVar13,uVar28 * 0x18);
          if (puVar31 != (ulong *)0x0) {
            operator_delete__(puVar31 + -1);
            uVar28 = *(ulong *)(lVar27 + 0x250);
          }
          *(ulong **)(lVar30 + 0x248) = puVar12;
          *(ulong *)(lVar27 + 600) = uVar25;
        }
        else {
          puVar12 = *(ulong **)(lVar30 + uVar23 * 0x310 + 0x248);
        }
        puVar13 = (ulong *)(lVar27 + 200);
        if (uVar25 != 0x10) {
          puVar13 = puVar12;
        }
        puVar13 = puVar13 + uVar28 * 3;
        *(ulong *)(lVar27 + 0x250) = uVar28 + 1;
        *puVar13 = ~uVar23;
        puVar13[1] = 0;
        *(undefined2 *)(puVar13 + 2) = 0x100;
      }
      uVar28 = *(ulong *)(in_x0 + 0x58);
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar28);
  }
  if (*(char *)(in_x0 + 0x199) != '\0') {
    if (*(code **)(in_x0 + 0x178) != (code *)0x0) {
      (**(code **)(in_x0 + 0x178))(ZEXT816(0),0,"++ Also adding distance points\n",0);
      uVar28 = *(ulong *)(in_x0 + 0x58);
    }
    if (0 < (long)uVar28) {
      lVar27 = 0;
      dVar47 = -1.0;
      do {
        lVar30 = *(long *)(in_x0 + 0x18);
        pauVar21 = (undefined (*) [16])(lVar30 + local_580 * 0x18);
        pdVar22 = (double *)(lVar30 + local_578 * 0x18);
        pdVar19 = (double *)(lVar30 + local_588 * 0x18);
        local_a0 = -local_a0;
        auVar34 = *pauVar21;
        local_530 = (auVar34._0_8_ + *pdVar22 + *pdVar19) / dVar33;
        dStack_528 = (auVar34._8_8_ + pdVar22[1] + pdVar19[1]) / dVar41;
        local_b0 = -local_b0;
        dStack_a8 = -dStack_a8;
        local_520 = (*(double *)pauVar21[1] + pdVar22[2] + pdVar19[2]) / 3.0;
        uVar25 = RaycastMesh::Raycast
                           (aRStack_118,(Vec3 *)&local_530,(Vec3 *)&local_b0,(long *)&local_570,
                            &dStack_568,(Vec3 *)&local_548,(Vec3 *)&local_560);
        uVar23 = local_570;
        if ((uVar25 & 1) == 0) {
          uVar23 = uVar28;
        }
        uVar28 = *(ulong *)(in_x0 + 0x58);
        if (uVar23 < uVar28) {
          puVar2 = (undefined8 *)(*(long *)(in_x0 + 0x38) + lVar27 * 0x18);
          *puVar2 = local_548;
          puVar2[1] = local_540;
          puVar2[2] = local_538;
          puVar2 = (undefined8 *)(*(long *)(in_x0 + 0x40) + lVar27 * 0x18);
          *puVar2 = local_560;
          puVar2[1] = local_558;
          puVar2[2] = local_550;
          lVar26 = *(long *)(in_x0 + 0x138);
          lVar16 = *(long *)(in_x0 + 0x60);
          lVar30 = lVar26 + lVar27 * 0x310;
          uVar28 = *(ulong *)(lVar30 + 0x250);
          uVar23 = *(ulong *)(lVar30 + 600);
          if (uVar28 == uVar23) {
            uVar23 = uVar28 * 2;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar23;
            uVar25 = uVar28 * 0x30 | 8;
            if (SUB168(auVar10 * ZEXT816(0x18),8) != 0) {
              uVar25 = 0xffffffffffffffff;
            }
            puVar13 = (ulong *)operator_new__(uVar25);
            puVar12 = puVar13 + 1;
            *puVar13 = uVar23;
            if (uVar23 != 0) {
              lVar20 = uVar28 * 0x30;
              puVar13 = puVar12;
              do {
                *puVar13 = 0;
                puVar13[1] = 0;
                *(undefined2 *)(puVar13 + 2) = 0;
                lVar20 = lVar20 + -0x18;
                puVar13 = puVar13 + 3;
              } while (lVar20 != 0);
            }
            lVar26 = lVar26 + lVar27 * 0x310;
            puVar31 = *(ulong **)(lVar26 + 0x248);
            puVar13 = (ulong *)(lVar30 + 200);
            if (uVar28 != 0x10) {
              puVar13 = puVar31;
            }
            memcpy(puVar12,puVar13,uVar28 * 0x18);
            if (puVar31 != (ulong *)0x0) {
              operator_delete__(puVar31 + -1);
              uVar28 = *(ulong *)(lVar30 + 0x250);
            }
            *(ulong **)(lVar26 + 0x248) = puVar12;
            *(ulong *)(lVar30 + 600) = uVar23;
          }
          else {
            puVar12 = *(ulong **)(lVar26 + lVar27 * 0x310 + 0x248);
          }
          puVar13 = (ulong *)(lVar30 + 200);
          if (uVar23 != 0x10) {
            puVar13 = puVar12;
          }
          puVar13 = puVar13 + uVar28 * 3;
          *(ulong *)(lVar30 + 0x250) = uVar28 + 1;
          *puVar13 = lVar16 + lVar27;
          puVar13[1] = 0;
          *(undefined2 *)(puVar13 + 2) = 0x100;
          uVar28 = *(ulong *)(in_x0 + 0x58);
        }
        lVar27 = lVar27 + 1;
        dVar46 = ((double)lVar27 * 100.0) / (double)(unkuint9)uVar28;
        if ((1.0 < ABS(dVar46 - dVar47)) && (*(long *)(in_x0 + 0x178) != 0)) {
          auVar37._8_8_ = 0;
          auVar37._0_8_ = dVar46;
          FUN_00d47538(auVar37,auStack_518);
          auVar38._8_8_ = 0;
          auVar38._0_8_ = dVar46;
          (**(code **)(in_x0 + 0x178))(auVar38,0,auStack_518,*(undefined8 *)(in_x0 + 0x58));
          uVar28 = *(ulong *)(in_x0 + 0x58);
          dVar47 = dVar46;
        }
      } while (lVar27 < (long)uVar28);
    }
  }
  lVar27 = *(long *)(in_x0 + 0x60);
  if (lVar27 != 0) {
    pdVar19 = (double *)(*(long *)(in_x0 + 0x30) + 8);
    do {
      dVar33 = *pdVar19;
      dVar41 = pdVar19[1];
      dVar46 = pdVar19[-1];
      uVar32 = NEON_fmadd(dVar46,dVar46,dVar33 * dVar33);
      dVar47 = (double)NEON_fmadd(dVar41,dVar41,uVar32);
      dVar47 = SQRT(dVar47);
      if (dVar47 != 0.0) {
        pdVar19[-1] = dVar46 / dVar47;
        *pdVar19 = dVar33 / dVar47;
        pdVar19[1] = dVar41 / dVar47;
      }
      lVar27 = lVar27 + -1;
      pdVar19 = pdVar19 + 3;
    } while (lVar27 != 0);
  }
  RaycastMesh::~RaycastMesh(aRStack_118);
  if (*(long *)(lVar11 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


