// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateOrCreateObstacle
// Entry Point: 0072b374
// Size: 1900 bytes
// Signature: undefined __thiscall updateOrCreateObstacle(PhysicsObstacle * this, DynamicAvoidance * param_1)


/* VehicleNavigationMapGenerator::PhysicsObstacle::updateOrCreateObstacle(DynamicAvoidance*) */

void __thiscall
VehicleNavigationMapGenerator::PhysicsObstacle::updateOrCreateObstacle
          (PhysicsObstacle *this,DynamicAvoidance *param_1)

{
  long lVar1;
  DynamicObstacle *this_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  Bt2PhysicsRBObject *pBVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  StoppingPath *pSVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  undefined4 local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  lVar11 = *(long *)(this + 8);
  if (lVar11 == 0) {
    fVar13 = *(float *)(this + 0x3c);
    if ((0.0 < fVar13) ||
       (((*(float *)(this + 0x2c) == 0.0 && (*(float *)(this + 0x30) == 0.0)) &&
        (*(float *)(this + 0x34) == 0.0)))) {
      lVar7 = RawTransformGroup::getPhysicsObject();
      if ((*(byte *)(lVar7 + 8) & 1) == 0) goto LAB_0072baa0;
      fVar13 = *(float *)(this + 0x3c);
    }
    if (fVar13 <= 0.0) {
      puVar2 = (undefined8 *)operator_new(0x20);
      uVar12 = *(undefined4 *)(this + 0x44);
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
                    /* try { // try from 0072b4ac to 0072b4b3 has its CatchHandler @ 0072bae0 */
      puVar3 = (undefined8 *)operator_new(0x1c);
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      puVar2[1] = (long)puVar3 + 0x1c;
      puVar2[2] = (long)puVar3 + 0x1c;
      *puVar2 = puVar3;
      *(undefined4 *)(puVar2 + 3) = uVar12;
      *(undefined4 *)((long)puVar2 + 0x1c) = 0;
      puVar3[1] = 0x3f80000000000000;
      *puVar3 = 0;
      *(undefined8 **)(this + 8) = puVar2;
    }
    else {
      this_00 = (DynamicObstacle *)operator_new(0x40);
      local_e0 = 0;
                    /* try { // try from 0072b428 to 0072b437 has its CatchHandler @ 0072bae4 */
      DynamicObstacle::DynamicObstacle(this_00,1,(Vector2 *)&local_e0,*(uint *)(this + 0x44),1);
      *(DynamicObstacle **)(this + 8) = this_00;
      DynamicObstacle::initStoppingPath(this_00,0,0.0,*(float *)(this + 0x3c));
      pSVar10 = *(StoppingPath **)(*(long *)(this + 8) + 0x20);
      *(PhysicsObstacle *)(*(long *)(this + 8) + 0x38) = this[0x40];
      StoppingPath::clear();
      local_e0 = 0;
      local_110 = 0x3f80000000000000;
      StoppingPath::addKnot(pSVar10,0.0,0.0,(Vector2 *)&local_e0,(Vector2 *)&local_110);
    }
    *(undefined2 *)(this + 0x38) = 0x101;
LAB_0072b4e4:
    uVar4 = (ulong)(uint)*(float *)(this + 0x2c);
    fVar13 = *(float *)(this + 0x34);
    if (((*(float *)(this + 0x2c) == 0.0) && (*(float *)(this + 0x30) == 0.0)) && (fVar13 == 0.0)) {
      uStack_d8 = 0;
      local_e0 = 0x3f800000;
      local_c8 = 0;
      local_d0 = 0x3f80000000000000;
      uStack_b8 = 0x3f800000;
      local_c0 = 0;
      local_a8 = 0x3f80000000000000;
      local_b0 = 0;
      pBVar5 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
      uVar4 = Bt2PhysicsRBObject::getCollisionAABB
                        (pBVar5,(Matrix4x4 *)&local_e0,(Vector3 *)&local_110,(Vector3 *)&local_f0);
      if ((uVar4 & 1) == 0) goto LAB_0072baa0;
      fVar16 = (float)((ulong)local_110 >> 0x20);
      uVar4 = CONCAT44((fStack_ec - fVar16) * 0.5,(local_f0 - (float)local_110) * 0.5);
      fVar13 = (local_e8 - local_108) * 0.5;
      *(ulong *)(this + 0x2c) = uVar4;
      *(ulong *)(this + 0x20) =
           CONCAT44((fStack_ec + fVar16) * 0.5,(local_f0 + (float)local_110) * 0.5);
      *(float *)(this + 0x34) = fVar13;
      *(float *)(this + 0x28) = (local_e8 + local_108) * 0.5;
    }
    *(undefined2 *)(this + 0x38) = 0x100;
    if (0.0 < *(float *)(this + 0x3c)) {
      lVar7 = **(long **)(this + 8);
      *(int *)(lVar7 + 0x10) = (int)uVar4;
      *(float *)(lVar7 + 0x14) = fVar13;
    }
  }
  else if (this[0x38] != (PhysicsObstacle)0x0) goto LAB_0072b4e4;
  if (this[0x39] != (PhysicsObstacle)0x0) {
    lVar9 = *(long *)(this + 0x18);
    this[0x39] = (PhysicsObstacle)0x0;
    RawTransformGroup::updateWorldTransformation();
    lVar7 = *(long *)(this + 0x10);
    uVar12 = *(undefined4 *)(lVar9 + 0xb8);
    fVar13 = *(float *)(lVar9 + 0xbc);
    uVar14 = *(undefined4 *)(lVar9 + 200);
    fVar16 = *(float *)(lVar9 + 0xcc);
    fVar18 = *(float *)(lVar7 + 0x1b0);
    fVar19 = *(float *)(lVar7 + 0x1b4);
    fVar20 = *(float *)(lVar7 + 0x1b8);
    uVar28 = *(undefined4 *)(lVar7 + 0x1a0);
    uVar31 = *(undefined4 *)(lVar7 + 0x1a4);
    uVar34 = *(undefined4 *)(lVar7 + 0x1a8);
    uVar21 = NEON_fmadd(uVar12,uVar28,fVar13 * fVar18);
    uVar35 = *(undefined4 *)(lVar9 + 0xc0);
    uVar26 = NEON_fmadd(uVar12,uVar31,fVar13 * fVar19);
    uVar37 = *(undefined4 *)(lVar7 + 0x1c0);
    uVar39 = *(undefined4 *)(lVar7 + 0x1c4);
    uVar12 = NEON_fmadd(uVar12,uVar34,fVar13 * fVar20);
    uVar29 = NEON_fmadd(uVar14,uVar28,fVar18 * fVar16);
    fVar13 = (float)NEON_fmadd(uVar35,uVar37,uVar21);
    uVar32 = NEON_fmadd(uVar14,uVar31,fVar19 * fVar16);
    uVar26 = NEON_fmadd(uVar35,uVar39,uVar26);
    uVar21 = *(undefined4 *)(lVar9 + 0xd0);
    uVar22 = *(undefined4 *)(lVar9 + 0xd8);
    fVar23 = *(float *)(lVar9 + 0xdc);
    uVar14 = NEON_fmadd(uVar14,uVar34,fVar20 * fVar16);
    uVar41 = *(undefined4 *)(lVar7 + 0x1c8);
    fVar15 = (float)NEON_fmadd(uVar21,uVar37,uVar29);
    uVar29 = *(undefined4 *)(lVar9 + 0xe0);
    local_e0 = CONCAT44(uVar26,fVar13);
    uVar26 = NEON_fmadd(uVar21,uVar39,uVar32);
    uVar33 = *(undefined4 *)(lVar9 + 0xe8);
    fVar30 = *(float *)(lVar9 + 0xec);
    fVar17 = (float)NEON_fmadd(uVar21,uVar41,uVar14);
    fVar16 = (float)NEON_fmadd(uVar35,uVar41,uVar12);
    local_d0 = CONCAT44(uVar26,fVar15);
    uVar26 = NEON_fmadd(uVar22,uVar28,fVar18 * fVar23);
    uStack_d8 = (ulong)(uint)fVar16;
    uVar32 = NEON_fmadd(uVar22,uVar31,fVar19 * fVar23);
    local_c8 = (ulong)(uint)fVar17;
    uVar12 = NEON_fmadd(uVar33,uVar28,fVar18 * fVar30);
    uVar14 = NEON_fmadd(uVar33,uVar31,fVar19 * fVar30);
    uVar28 = NEON_fmadd(uVar22,uVar34,fVar20 * fVar23);
    uVar21 = NEON_fmadd(uVar33,uVar34,fVar20 * fVar30);
    fVar24 = (float)NEON_fmadd(uVar29,uVar37,uVar26);
    uVar31 = *(undefined4 *)(lVar9 + 0xf0);
    uVar26 = NEON_fmadd(uVar29,uVar39,uVar32);
    fVar25 = (float)NEON_fmadd(uVar29,uVar41,uVar28);
    fVar18 = (float)NEON_fmadd(uVar31,uVar37,uVar12);
    fVar20 = (float)NEON_fmadd(uVar31,uVar41,uVar21);
    local_c0 = CONCAT44(uVar26,fVar24);
    uVar12 = NEON_fmadd(*(undefined4 *)(this + 0x20),fVar13,fVar15 * *(float *)(this + 0x24));
    uVar21 = NEON_fmadd(*(undefined4 *)(this + 0x20),fVar16,fVar17 * *(float *)(this + 0x24));
    fVar18 = *(float *)(lVar7 + 0x1d0) + fVar18;
    fVar19 = (float)NEON_fmadd(uVar31,uVar39,uVar14);
    fVar20 = fVar20 + *(float *)(lVar7 + 0x1d8);
    uStack_b8 = (ulong)(uint)fVar25;
    fVar30 = (float)NEON_fmadd(*(undefined4 *)(this + 0x28),fVar24,uVar12);
    fVar27 = (float)NEON_fmadd(*(undefined4 *)(this + 0x28),fVar25,uVar21);
    local_a8 = CONCAT44(0x3f800000,fVar20);
    fVar30 = fVar18 + fVar30;
    fVar20 = fVar20 + fVar27;
    local_b0 = CONCAT44(fVar19 + *(float *)(lVar7 + 0x1d4),fVar18);
    if (*(float *)(this + 0x3c) <= 0.0) {
      uVar21 = *(undefined4 *)(this + 0x34);
      pfVar8 = **(float ***)(this + 8);
      uVar12 = NEON_fmadd(*(undefined4 *)(this + 0x2c),ABS(fVar13),
                          ABS(fVar15) * *(float *)(this + 0x30));
      uVar14 = NEON_fmadd(*(undefined4 *)(this + 0x2c),ABS(fVar16),
                          ABS(fVar17) * *(float *)(this + 0x30));
      *pfVar8 = fVar30;
      pfVar8[1] = fVar20;
      fVar13 = (float)NEON_fmadd(uVar21,ABS(fVar24),uVar12);
      fVar16 = (float)NEON_fmadd(uVar21,ABS(fVar25),uVar14);
      *(undefined8 *)(pfVar8 + 2) = 0x3f80000000000000;
      pfVar8[4] = fVar13;
      pfVar8[5] = fVar16;
      if (lVar11 != 0) {
        DynamicAvoidance::updateObstacle((Obstacle *)param_1);
        goto LAB_0072baa0;
      }
    }
    else {
      pBVar5 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
      Bt2PhysicsRBObject::getLinearVelocity(pBVar5,(Vector3 *)&local_f0);
      uVar12 = NEON_fmadd(uVar22,local_f0,fVar23 * fStack_ec);
      fVar13 = (float)NEON_fmadd(uVar29,local_e8,uVar12);
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      pSVar10 = *(StoppingPath **)(*(long *)(this + 8) + 0x20);
      fVar15 = (float)NEON_fmin(fVar13,0x40b1c71d);
      fVar16 = (fVar15 * fVar15) / (*(float *)(this + 0x3c) + *(float *)(this + 0x3c));
      StoppingPath::clear();
      local_110 = CONCAT44(fVar20,fVar30);
      fVar13 = fVar16;
      if (fVar16 <= 1.0) {
        fVar13 = 1.0;
      }
      local_100 = fVar24 * fVar13;
      fStack_fc = fVar25 * fVar13;
      StoppingPath::addKnot(pSVar10,0.0,0.0,(Vector2 *)&local_110,(Vector2 *)&local_100);
      if (1.0 < fVar16) {
        fVar19 = *(float *)(this + 0x3c);
        Bt2PhysicsRBObject::getAngularVelocity(pBVar5,(Vector3 *)&local_100);
        lVar7 = *(long *)(this + 0x10);
        fVar18 = 0.7853981 / (fVar15 / fVar19);
        uVar12 = NEON_fmadd(local_100,*(undefined4 *)(lVar7 + 0x1a4),
                            fStack_fc * *(float *)(lVar7 + 0x1b4));
        fVar20 = (float)NEON_fmadd(local_f8,*(undefined4 *)(lVar7 + 0x1c4),uVar12);
        fVar17 = -fVar18;
        if (-fVar18 <= fVar20) {
          fVar17 = fVar20;
        }
        if (fVar17 <= fVar18) {
          fVar18 = fVar17;
        }
        GsQuaternion::set((GsQuaternion *)&local_110,(Matrix4x4 *)&local_e0);
        iVar6 = 3;
        fVar17 = (fVar16 / fVar15) / 3.0;
        fVar20 = fVar17 * 0.5;
        fVar17 = fVar15 * fVar17;
        fVar30 = fVar20 * 0.0;
        fVar23 = -(fVar20 * 0.0);
        local_118 = (float)local_b0;
        fStack_114 = (float)local_a8;
        do {
          iVar6 = iVar6 + -1;
          uVar12 = NEON_fmadd(fVar20 * fVar18,(float)local_110,fVar30 * local_110._4_4_);
          uVar14 = NEON_fmadd(fVar30,(float)local_110,fVar20 * fVar18 * fStack_104);
          uVar21 = NEON_fmadd(fVar30,(float)local_110,fVar30 * local_108);
          fVar25 = (float)NEON_fmadd(fVar23,fStack_104,uVar12);
          fVar27 = (float)NEON_fmadd(fVar23,local_108,uVar14);
          fVar36 = (float)NEON_fmadd(-(fVar20 * fVar18),local_110._4_4_,uVar21);
          fVar25 = local_108 + fVar25;
          uVar12 = NEON_fmadd(fVar23,local_110._4_4_,local_108 * -(fVar20 * fVar18));
          fVar27 = local_110._4_4_ + fVar27;
          fVar36 = fStack_104 + fVar36;
          fVar24 = (float)NEON_fmadd(fVar23,fStack_104,uVar12);
          uVar12 = NEON_fmadd(fVar27,fVar27,fVar25 * fVar25);
          local_110._0_4_ = (float)local_110 + fVar24;
          uVar12 = NEON_fmadd(fVar36,fVar36,uVar12);
          fVar24 = (float)NEON_fmadd((float)local_110,(float)local_110,uVar12);
          fVar24 = 1.0 / SQRT(fVar24);
          local_108 = fVar25 * fVar24;
          local_110._4_4_ = fVar27 * fVar24;
          local_110._0_4_ = (float)local_110 * fVar24;
          fStack_104 = fVar36 * fVar24;
          uVar12 = NEON_fmadd((float)local_110,0,fVar17 * local_108);
          uVar14 = NEON_fmadd((float)local_110,fVar17,local_110._4_4_ * 0.0);
          fVar40 = (float)NEON_fmadd(local_110._4_4_,0x80000000,local_108 * -0.0);
          fVar43 = (float)NEON_fmadd(fStack_104,0x80000000,uVar12);
          fVar42 = (float)NEON_fmadd(local_108,0x80000000,uVar14);
          uVar12 = NEON_fmsub(fStack_104,fVar17,fVar40);
          fVar38 = (float)NEON_fmadd((float)local_110,0,fStack_104 * 0.0);
          uVar14 = NEON_fmsub(uVar12,local_110._4_4_,(float)local_110 * fVar43);
          uVar12 = NEON_fmsub(uVar12,fStack_104,(float)local_110 * fVar42);
          uVar21 = NEON_fmsub(local_110._4_4_,fVar17,fVar38);
          uVar14 = NEON_fmsub(uVar21,fStack_104,uVar14);
          uVar12 = NEON_fmsub(fVar43,local_108,uVar12);
          fVar42 = (float)NEON_fmadd(local_108,fVar42,uVar14);
          fVar43 = (float)NEON_fmadd(local_110._4_4_,uVar21,uVar12);
          local_118 = local_118 + fVar42;
          fStack_114 = fStack_114 + fVar43;
        } while (iVar6 != 0);
        fVar18 = *(float *)(this + 0x24);
        fVar17 = *(float *)(this + 0x28);
        fVar30 = -(fVar25 * fVar24);
        fVar25 = *(float *)(this + 0x20);
        fVar20 = -(fVar27 * fVar24);
        fVar27 = -(fVar36 * fVar24);
        uVar26 = NEON_fmadd((float)local_110,0,local_108);
        fVar42 = (float)NEON_fmadd(fVar30,0,local_110._4_4_ * 0.0 + (float)local_110);
        uVar12 = NEON_fmadd((float)local_110,fVar25,local_108 * fVar17);
        uVar14 = NEON_fmadd((float)local_110,fVar17,local_110._4_4_ * fVar18);
        uVar21 = NEON_fmadd(fVar20,fVar25,fVar18 * fVar30);
        fVar23 = (float)NEON_fmadd(fVar27,fVar18,uVar12);
        fVar24 = (float)NEON_fmadd(fVar30,fVar25,uVar14);
        fVar36 = (float)NEON_fmadd(fVar27,0,uVar26);
        uVar12 = NEON_fmadd((float)local_110,fVar18,fStack_104 * fVar25);
        uVar21 = NEON_fmadd(fVar27,fVar17,uVar21);
        uVar12 = NEON_fmadd(fVar20,fVar17,uVar12);
        uVar14 = NEON_fmadd(uVar21,fVar20,(float)local_110 * fVar23);
        uVar26 = NEON_fmadd(uVar21,fVar27,(float)local_110 * fVar24);
        uVar21 = NEON_fmadd(fVar40 - fStack_104,fVar20,(float)local_110 * fVar36);
        uVar29 = NEON_fmadd(fVar40 - fStack_104,fVar27,(float)local_110 * fVar42);
        uVar14 = NEON_fmadd(uVar12,fVar27,uVar14);
        uVar22 = NEON_fmadd(fVar23,fVar30,uVar26);
        uVar21 = NEON_fmadd(fVar38 - local_110._4_4_,fVar27,uVar21);
        uVar26 = NEON_fmadd(fVar36,fVar30,uVar29);
        fVar18 = (float)NEON_fmadd(local_108,fVar24,uVar14);
        fVar17 = (float)NEON_fmadd(local_110._4_4_,uVar12,uVar22);
        local_120 = (float)NEON_fmadd(local_108,fVar42,uVar21);
        fStack_11c = (float)NEON_fmadd(local_110._4_4_,fVar38 - local_110._4_4_,uVar26);
        local_118 = local_118 + fVar18;
        fStack_114 = fStack_114 + fVar17;
        local_120 = fVar13 * local_120;
        fStack_11c = fVar13 * fStack_11c;
        StoppingPath::addKnot
                  (pSVar10,fVar15 / fVar19,fVar16 * 0.05,(Vector2 *)&local_118,(Vector2 *)&local_120
                  );
      }
      if (lVar11 != 0) goto LAB_0072baa0;
    }
    DynamicAvoidance::addObstacle((Obstacle *)param_1);
  }
LAB_0072baa0:
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


