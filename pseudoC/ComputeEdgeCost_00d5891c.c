// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeEdgeCost
// Entry Point: 00d5891c
// Size: 1628 bytes
// Signature: undefined __thiscall ComputeEdgeCost(MeshDecimator * this, long param_1, long param_2, Vec3 * param_3)


/* HACD::MeshDecimator::ComputeEdgeCost(long, long, HACD::Vec3<double>&) const */

undefined  [16] __thiscall
HACD::MeshDecimator::ComputeEdgeCost(MeshDecimator *this,long param_1,long param_2,Vec3 *param_3)

{
  void *__src;
  long lVar1;
  long *plVar2;
  long *plVar3;
  double *pdVar4;
  double *pdVar5;
  long *plVar6;
  double *pdVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  undefined auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  long alStack_148 [16];
  long *local_c8;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(this + 0x40) + param_1 * 0x188;
  lVar12 = *(long *)(this + 0x40) + param_2 * 0x188;
  dVar50 = *(double *)(lVar8 + 0x150) + *(double *)(lVar12 + 0x150);
  dVar36 = *(double *)(lVar8 + 0x158) + *(double *)(lVar12 + 0x158);
  dVar47 = *(double *)(lVar8 + 0x138) + *(double *)(lVar12 + 0x138);
  dVar48 = *(double *)(lVar8 + 0x140) + *(double *)(lVar12 + 0x140);
  dVar49 = *(double *)(lVar8 + 0x130) + *(double *)(lVar12 + 0x130);
  dVar37 = *(double *)(lVar8 + 0x168) + *(double *)(lVar12 + 0x168);
  dVar38 = *(double *)(lVar8 + 0x170) + *(double *)(lVar12 + 0x170);
  dVar51 = *(double *)(lVar8 + 0x148) + *(double *)(lVar12 + 0x148);
  dVar45 = *(double *)(lVar8 + 0x160) + *(double *)(lVar12 + 0x160);
  uVar27 = NEON_fmadd(dVar49 * dVar50,dVar37,dVar36 * dVar47 * dVar48);
  uVar27 = NEON_fmadd(dVar47 * dVar48,dVar36,uVar27);
  dVar28 = (double)NEON_fmsub(dVar49 * dVar36,dVar36,uVar27);
  dVar28 = (dVar28 - dVar37 * dVar47 * dVar47) - dVar50 * dVar48 * dVar48;
  if (dVar28 == 0.0) {
    pdVar5 = (double *)(*(long *)(this + 8) + param_1 * 0x18);
    pdVar4 = (double *)(*(long *)(this + 8) + param_2 * 0x18);
    dVar17 = *pdVar5 * 0.5 + *pdVar4 * 0.5;
    dVar28 = pdVar5[1] * 0.5 + pdVar4[1] * 0.5;
    dVar20 = pdVar5[2] * 0.5 + pdVar4[2] * 0.5;
  }
  else {
    dVar28 = 1.0 / dVar28;
    uVar32 = NEON_fmadd(dVar47 * dVar45,dVar37,dVar50 * dVar48 * dVar38);
    uVar30 = NEON_fmadd(dVar49 * dVar45,dVar36,dVar47 * dVar47 * dVar38);
    uVar27 = NEON_fmadd(dVar49 * dVar36,dVar38,dVar48 * dVar48 * dVar45);
    uVar33 = NEON_fmadd(dVar51 * dVar36,dVar36,uVar32);
    uVar30 = NEON_fmadd(dVar51 * dVar50,dVar48,uVar30);
    uVar32 = NEON_fmadd(dVar47 * dVar51,dVar37,uVar27);
    uVar27 = NEON_fmsub(dVar36 * dVar47,dVar38,uVar33);
    uVar30 = NEON_fmsub(dVar49 * dVar50,dVar38,uVar30);
    uVar32 = NEON_fmsub(dVar49 * dVar45,dVar37,uVar32);
    uVar27 = NEON_fmsub(dVar48 * dVar45,dVar36,uVar27);
    uVar30 = NEON_fmsub(dVar47 * dVar45,dVar48,uVar30);
    uVar32 = NEON_fmsub(dVar47 * dVar48,dVar38,uVar32);
    dVar17 = (double)NEON_fmsub(dVar51 * dVar50,dVar37,uVar27);
    dVar20 = (double)NEON_fmsub(dVar47 * dVar51,dVar36,uVar30);
    dVar23 = (double)NEON_fmsub(dVar51 * dVar36,dVar48,uVar32);
    dVar17 = dVar28 * dVar17;
    dVar20 = dVar28 * dVar20;
    dVar28 = dVar28 * dVar23;
  }
  dVar21 = *(double *)(lVar8 + 0x178);
  dVar23 = *(double *)(lVar12 + 0x178);
  *(double *)param_3 = dVar17;
  *(double *)(param_3 + 8) = dVar28;
  *(double *)(param_3 + 0x10) = dVar20;
  lVar8 = *(long *)(this + 8);
  lVar12 = *(long *)(this + 0x40);
  puVar13 = (undefined8 *)(lVar8 + param_1 * 0x18);
  puVar9 = (undefined8 *)(lVar8 + param_2 * 0x18);
  uVar33 = puVar13[1];
  uVar32 = *puVar13;
  uVar39 = puVar13[2];
  uVar30 = puVar9[1];
  uVar27 = *puVar9;
  uVar40 = puVar9[2];
  local_c0 = 0;
  local_b8 = 0x10;
  local_c8 = (long *)0x0;
  uVar14 = *(ulong *)(lVar12 + param_1 * 0x188 + 0x120);
  if (0x10 < uVar14) {
    uVar15 = *(ulong *)(lVar12 + param_1 * 0x188 + 0x128);
    uVar10 = uVar15 << 3;
    if (uVar15 >> 0x3d != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    local_b8 = uVar15;
    plVar2 = (long *)operator_new__(uVar10);
    local_c8 = plVar2;
    if (uVar15 != 0x10) goto LAB_00d58b80;
  }
  plVar2 = alStack_148;
LAB_00d58b80:
  lVar11 = lVar12 + param_1 * 0x188;
  __src = (void *)(lVar11 + 0x98);
  if (*(long *)(lVar11 + 0x128) != 0x10) {
    __src = *(void **)(lVar11 + 0x118);
  }
  local_c0 = uVar14;
  memcpy(plVar2,__src,uVar14 << 3);
  if (*(long *)(lVar12 + param_2 * 0x188 + 0x120) != 0) {
    uVar14 = 0;
    do {
      uVar10 = local_b8;
      plVar2 = local_c8;
      lVar11 = lVar12 + param_2 * 0x188;
      lVar8 = lVar11 + 0x98;
      if (*(long *)(lVar11 + 0x128) != 0x10) {
        lVar8 = *(long *)(lVar11 + 0x118);
      }
      lVar8 = *(long *)(lVar8 + uVar14 * 8);
      plVar3 = alStack_148;
      uVar15 = local_c0;
      plVar6 = alStack_148;
      if (local_b8 != 0x10) {
        plVar3 = local_c8;
        plVar6 = local_c8;
      }
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        if (lVar8 == *plVar3) goto LAB_00d58c00;
        plVar3 = plVar3 + 1;
      }
      uVar15 = local_c0;
      if (local_c0 == local_b8) {
        uVar16 = local_b8 << 1;
        uVar15 = local_b8 << 4;
        if (uVar16 >> 0x3d != 0) {
          uVar15 = 0xffffffffffffffff;
        }
        plVar3 = (long *)operator_new__(uVar15);
        memcpy(plVar3,plVar6,uVar10 << 3);
        uVar15 = uVar10;
        if (plVar2 != (long *)0x0) {
          operator_delete__(plVar2);
          lVar12 = *(long *)(this + 0x40);
          uVar15 = local_c0;
        }
        local_c8 = plVar3;
        local_b8 = uVar16;
      }
      plVar2 = alStack_148;
      if (local_b8 != 0x10) {
        plVar2 = local_c8;
      }
      local_c0 = uVar15 + 1;
      plVar2[uVar15] = lVar8;
LAB_00d58c00:
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ulong *)(lVar12 + param_2 * 0x188 + 0x120));
    lVar8 = *(long *)(this + 8);
  }
  if (local_c0 != 0) {
    lVar12 = *(long *)this;
    puVar9 = (undefined8 *)(lVar8 + param_1 * 0x18);
    puVar13 = (undefined8 *)(lVar8 + param_2 * 0x18);
    uVar14 = local_c0;
    plVar2 = alStack_148;
    if (local_b8 != 0x10) {
      plVar2 = local_c8;
    }
    do {
      plVar6 = (long *)(lVar12 + *plVar2 * 0x18);
      pdVar5 = (double *)(lVar8 + *plVar6 * 0x18);
      pdVar4 = (double *)(lVar8 + plVar6[1] * 0x18);
      pdVar7 = (double *)(lVar8 + plVar6[2] * 0x18);
      dVar31 = *pdVar4 - *pdVar5;
      dVar42 = pdVar4[1] - pdVar5[1];
      dVar25 = pdVar7[1] - pdVar5[1];
      dVar29 = pdVar4[2] - pdVar5[2];
      dVar18 = pdVar7[2] - pdVar5[2];
      dVar24 = *pdVar7 - *pdVar5;
      dVar22 = (double)NEON_fmadd(dVar29,dVar24,dVar18 * -dVar31);
      dVar18 = (double)NEON_fmadd(dVar42,dVar18,dVar25 * -dVar29);
      dVar24 = (double)NEON_fmadd(dVar31,dVar25,dVar24 * -dVar42);
      uVar26 = NEON_fmadd(dVar18,dVar18,dVar22 * dVar22);
      dVar25 = (double)NEON_fmadd(dVar24,dVar24,uVar26);
      *puVar9 = *(undefined8 *)param_3;
      dVar25 = SQRT(dVar25);
      puVar9[1] = *(undefined8 *)(param_3 + 8);
      puVar9[2] = *(undefined8 *)(param_3 + 0x10);
      *puVar13 = *(undefined8 *)param_3;
      puVar13[1] = *(undefined8 *)(param_3 + 8);
      dVar43 = *pdVar4;
      dVar31 = pdVar4[1];
      puVar13[2] = *(undefined8 *)(param_3 + 0x10);
      dVar29 = *pdVar5;
      dVar42 = pdVar5[1];
      dVar34 = *pdVar7;
      dVar35 = pdVar7[1];
      puVar9[1] = uVar33;
      *puVar9 = uVar32;
      dVar44 = pdVar4[2];
      puVar13[1] = uVar30;
      *puVar13 = uVar27;
      dVar41 = pdVar5[2];
      dVar46 = pdVar7[2];
      puVar9[2] = uVar39;
      puVar13[2] = uVar40;
      if (dVar25 != 0.0) {
        dVar18 = dVar18 / dVar25;
        dVar22 = dVar22 / dVar25;
        dVar24 = dVar24 / dVar25;
      }
      dVar43 = dVar43 - dVar29;
      dVar44 = dVar44 - dVar41;
      dVar46 = dVar46 - dVar41;
      dVar31 = dVar31 - dVar42;
      dVar35 = dVar35 - dVar42;
      dVar34 = dVar34 - dVar29;
      dVar29 = (double)NEON_fmadd(dVar44,dVar34,dVar46 * -dVar43);
      dVar25 = (double)NEON_fmadd(dVar31,dVar46,dVar35 * -dVar44);
      dVar31 = (double)NEON_fmadd(dVar43,dVar35,dVar34 * -dVar31);
      uVar26 = NEON_fmadd(dVar25,dVar25,dVar29 * dVar29);
      dVar42 = (double)NEON_fmadd(dVar31,dVar31,uVar26);
      dVar42 = SQRT(dVar42);
      if (dVar42 != 0.0) {
        dVar25 = dVar25 / dVar42;
        dVar29 = dVar29 / dVar42;
        dVar31 = dVar31 / dVar42;
      }
      uVar26 = NEON_fmadd(dVar18,dVar25,dVar22 * dVar29);
      dVar18 = (double)NEON_fmadd(dVar24,dVar31,uVar26);
      if (dVar18 < 0.0) {
        dVar28 = 1.797693134862316e+308;
        if (local_c8 == (long *)0x0) goto LAB_00d58f1c;
        goto LAB_00d58f18;
      }
      uVar14 = uVar14 - 1;
      plVar2 = plVar2 + 1;
    } while (uVar14 != 0);
  }
  uVar27 = NEON_fmadd(dVar47,dVar17,dVar50 * dVar28);
  uVar30 = NEON_fmadd(dVar49,dVar17,dVar47 * dVar28);
  dVar47 = (double)NEON_fmadd(dVar36,dVar20,uVar27);
  dVar49 = (double)NEON_fmadd(dVar48,dVar20,uVar30);
  uVar27 = NEON_fmadd(dVar48,dVar17,dVar36 * dVar28);
  dVar36 = (double)NEON_fmadd(dVar37,dVar20,uVar27);
  uVar30 = NEON_fmadd(dVar51,dVar17,dVar45 * dVar28);
  uVar27 = NEON_fmadd(dVar17,dVar51 + dVar49,dVar28 * (dVar45 + dVar47));
  dVar37 = (double)NEON_fmadd(dVar38,dVar20,uVar30);
  dVar28 = (double)NEON_fmadd(dVar20,dVar38 + dVar36,uVar27);
  dVar28 = dVar21 + dVar23 + dVar37 + dVar28;
  if ((this[0xa0] != (MeshDecimator)0x0) &&
     (uVar14 = ManifoldConstraint(this,param_1,param_2), (uVar14 & 1) == 0)) {
    dVar28 = 1.797693134862316e+308;
  }
  if (local_c8 != (long *)0x0) {
LAB_00d58f18:
    operator_delete__(local_c8);
  }
LAB_00d58f1c:
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar28;
    return auVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


