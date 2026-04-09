// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestPointsNonVirtual
// Entry Point: 00f6f310
// Size: 3072 bytes
// Signature: undefined __thiscall getClosestPointsNonVirtual(btGjkPairDetector * this, ClosestPointInput * param_1, Result * param_2, btIDebugDraw * param_3, bool param_4)


/* btGjkPairDetector::getClosestPointsNonVirtual(btDiscreteCollisionDetectorInterface::ClosestPointInput
   const&, btDiscreteCollisionDetectorInterface::Result&, btIDebugDraw*, bool) */

void __thiscall
btGjkPairDetector::getClosestPointsNonVirtual
          (btGjkPairDetector *this,ClosestPointInput *param_1,Result *param_2,btIDebugDraw *param_3,
          bool param_4)

{
  uint uVar1;
  int iVar2;
  btGjkPairDetector bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  ulong uVar13;
  float *pfVar14;
  byte bVar15;
  undefined8 *puVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  undefined8 uVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_170;
  float fStack_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float fStack_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_b8;
  
  lVar7 = tpidr_el0;
  local_b8 = *(long *)(lVar7 + 0x28);
  bVar8 = false;
  *(undefined4 *)(this + 0x4c) = 0;
  uStack_e8 = *(undefined8 *)(param_1 + 0x28);
  uVar41 = *(undefined8 *)(param_1 + 0x20);
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_128 = *(undefined8 *)(param_1 + 0x68);
  local_130 = *(undefined8 *)(param_1 + 0x60);
  local_d8._0_4_ = (float)*(undefined8 *)(param_1 + 0x38);
  local_118._0_4_ = (float)*(undefined8 *)(param_1 + 0x78);
  fVar45 = (float)*(undefined8 *)(param_1 + 0x30);
  local_120 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar47 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fStack_11c = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar52 = (local_120 + fVar45) * 0.5;
  fVar53 = (fStack_11c + fVar47) * 0.5;
  local_f8 = *(undefined8 *)(param_1 + 0x18);
  uVar39 = *(undefined8 *)(param_1 + 0x10);
  fVar49 = ((float)local_118 + (float)local_d8) * 0.5;
  fVar45 = fVar45 - fVar52;
  fVar47 = fVar47 - fVar53;
  uVar46 = CONCAT44(fVar47,fVar45);
  local_120 = local_120 - fVar52;
  fStack_11c = fStack_11c - fVar53;
  fVar48 = (float)local_d8 - fVar49;
  local_138 = *(undefined8 *)(param_1 + 0x58);
  local_140 = *(undefined8 *)(param_1 + 0x50);
  fStack_108 = (float)*(undefined8 *)(param_1 + 8);
  fVar31 = fStack_108;
  uStack_104 = (undefined4)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  local_110 = (float)*(undefined8 *)param_1;
  fVar44 = local_110;
  fStack_10c = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar26 = fStack_10c;
  local_d8 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),fVar48);
  local_118 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20),
                       (float)local_118 - fVar49);
  fStack_148 = (float)*(undefined8 *)(param_1 + 0x48);
  uStack_144 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  local_150 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar34 = local_150;
  fStack_14c = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  if (*(int *)(*(long *)(this + 0x28) + 8) - 0x11U < 2) {
    bVar8 = *(int *)(*(long *)(this + 0x30) + 8) - 0x11U < 2;
  }
  puVar16 = (undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  *puVar16 = 0x3f80000000000000;
  bVar3 = this[0x48];
  *(undefined4 *)(this + 0x58) = 0;
  gNumGjkChecks = gNumGjkChecks + 1;
  *(undefined8 *)(this + 0x50) = 0xffffffff;
  fVar18 = *(float *)(this + 0x40);
  fVar27 = *(float *)(this + 0x44);
  puVar11 = *(undefined4 **)(this + 0x20);
  if (bVar3 != (btGjkPairDetector)0x0) {
    fVar18 = 0.0;
  }
  *puVar11 = 0;
  if (bVar3 != (btGjkPairDetector)0x0) {
    fVar27 = 0.0;
  }
  *(undefined *)(puVar11 + 0x4e) = 0;
  *(undefined8 *)(puVar11 + 0x4b) = 0x5d5e0b6b;
  *(undefined8 *)(puVar11 + 0x49) = 0x5d5e0b6b5d5e0b6b;
  *(undefined *)(puVar11 + 0x59) = 1;
  *(undefined8 *)(puVar11 + 0x54) = 0;
  *(undefined8 *)(puVar11 + 0x56) = 0;
  *(undefined *)(puVar11 + 0x58) = 0;
  fVar18 = fVar18 + fVar27;
  *(byte *)(puVar11 + 0x53) = *(byte *)(puVar11 + 0x53) & 0xf0;
  local_100._4_4_ = (float)((ulong)uVar39 >> 0x20);
  fVar33 = local_100._4_4_;
  fVar43 = (float)uStack_e8;
  local_f0._0_4_ = (float)uVar41;
  fVar40 = (float)local_f0;
  local_f0._4_4_ = (undefined4)((ulong)uVar41 >> 0x20);
  uVar23 = local_f0._4_4_;
  fVar19 = *(float *)puVar16;
  fVar28 = *(float *)(this + 0xc);
  local_100._0_4_ = (float)uVar39;
  fVar32 = (float)local_100;
  fVar38 = (float)local_f8;
  fVar24 = *(float *)(this + 0x10);
  fVar42 = 1e+18;
  local_100 = uVar39;
  local_f0 = uVar41;
  local_e0 = uVar46;
  do {
    local_154 = 0;
    local_164 = 0;
    fVar35 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar24,
                               *(float *)(param_1 + 0x18) * fVar28);
    fVar29 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x58),fVar28,
                               *(float *)(param_1 + 0x48) * fVar19);
    local_158 = (float)NEON_fnmadd(*(undefined4 *)(param_1 + 8),fVar19,-fVar35);
    local_170 = (float)*(undefined8 *)(param_1 + 0x40) * fVar19 +
                (float)*(undefined8 *)(param_1 + 0x50) * fVar28 +
                (float)*(undefined8 *)(param_1 + 0x60) * fVar24;
    fStack_16c = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar19 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) * fVar28 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar24;
    local_168 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x68),fVar24,fVar29);
    local_160 = -((float)*(undefined8 *)(param_1 + 0x10) * fVar28 +
                 (float)*(undefined8 *)(param_1 + 0x20) * fVar24) -
                (float)*(undefined8 *)param_1 * fVar19;
    fStack_15c = -((float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar28 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar24) -
                 (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar19;
    fVar28 = local_168;
    fVar35 = (float)btConvexShape::localGetSupportVertexWithoutMarginNonVirtual
                              (*(btVector3 **)(this + 0x28));
    fVar19 = fVar28;
    fVar24 = fVar29;
    fVar20 = (float)btConvexShape::localGetSupportVertexWithoutMarginNonVirtual
                              (*(btVector3 **)(this + 0x30));
    uVar36 = NEON_fmadd(uVar23,fVar28,fVar40 * fVar35);
    uVar21 = NEON_fmadd(local_130._4_4_,fVar19,(float)local_130 * fVar20);
    fVar37 = (float)NEON_fmadd(fVar43,fVar29,uVar36);
    fVar30 = (float)NEON_fmadd((undefined4)uStack_128,fVar24,uVar21);
    fVar22 = fVar34 * fVar20 + fStack_14c * fVar19 + fStack_148 * fVar24 + local_120;
    fVar20 = (float)local_140 * fVar20 + local_140._4_4_ * fVar19 + (float)local_138 * fVar24 +
             fStack_11c;
    fVar25 = fVar44 * fVar35 + fVar26 * fVar28 + fVar31 * fVar29 + fVar45;
    fVar28 = fVar32 * fVar35 + fVar33 * fVar28 + fVar38 * fVar29 + fVar47;
    fVar35 = fVar25 - fVar22;
    fVar29 = fVar28 - fVar20;
    fVar24 = 0.0;
    fVar19 = 0.0;
    if (!bVar8) {
      fVar24 = fVar30 + (float)local_118;
      fVar19 = fVar37 + fVar48;
    }
    fVar30 = fVar19 - fVar24;
    fVar37 = (float)NEON_fmadd(*(undefined4 *)(this + 0x10),fVar30,
                               (float)*(undefined8 *)(this + 8) * fVar35 +
                               (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * fVar29);
    if ((0.0 < fVar37) && (*(float *)(param_1 + 0x80) * fVar42 < fVar37 * fVar37)) {
      bVar15 = 1;
      uVar23 = 10;
LAB_00f6f868:
      *(undefined4 *)(this + 0x58) = uVar23;
      fVar35 = fVar42;
      goto LAB_00f6f870;
    }
    puVar12 = *(uint **)(this + 0x20);
    uVar1 = *puVar12;
    if ((int)uVar1 < 1) {
      bVar9 = false;
    }
    else {
      uVar13 = 0;
      pfVar14 = (float *)(puVar12 + 3);
      bVar9 = true;
      do {
        fVar50 = fVar35 - (float)*(undefined8 *)(pfVar14 + -2);
        fVar51 = fVar29 - (float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20);
        fVar50 = (float)NEON_fmadd(fVar30 - *pfVar14,fVar30 - *pfVar14,
                                   fVar50 * fVar50 + fVar51 * fVar51);
        if (fVar50 <= (float)puVar12[0x4d]) break;
        uVar13 = uVar13 + 1;
        pfVar14 = pfVar14 + 4;
        bVar9 = uVar13 < uVar1;
      } while (uVar1 != uVar13);
    }
    if ((((float)puVar12[0x4c] == 0.0) && (fVar30 == (float)puVar12[0x4b])) &&
       (fVar29 == (float)puVar12[0x4a])) {
      bVar9 = (bool)(fVar35 == (float)puVar12[0x49] | bVar9);
    }
    if (bVar9) {
      bVar15 = 0;
      uVar23 = 1;
      goto LAB_00f6f868;
    }
    if (fVar42 - fVar37 <= fVar42 * 1e-06) {
      bVar15 = 0;
      uVar23 = 0xb;
      if (fVar42 - fVar37 <= 0.0) {
        uVar23 = 2;
      }
      goto LAB_00f6f868;
    }
    puVar12[0x4c] = 0;
    puVar12[0x4b] = (uint)fVar30;
    *(undefined *)(puVar12 + 0x59) = 1;
    puVar12[(long)(int)uVar1 * 4 + 4] = 0;
    uVar4 = *puVar12;
    *(ulong *)(puVar12 + 0x49) = CONCAT44(fVar29,fVar35);
    *(ulong *)(puVar12 + (long)(int)uVar1 * 4 + 1) = CONCAT44(fVar29,fVar35);
    puVar12[(long)(int)uVar1 * 4 + 3] = (uint)fVar30;
    puVar12[(long)(int)uVar4 * 4 + 0x18] = 0;
    uVar5 = *puVar12;
    *(ulong *)(puVar12 + (long)(int)uVar4 * 4 + 0x15) = CONCAT44(fVar28,fVar25);
    puVar12[(long)(int)uVar4 * 4 + 0x17] = (uint)fVar19;
    puVar12[(long)(int)uVar5 * 4 + 0x2c] = 0;
    uVar1 = *puVar12;
    *(ulong *)(puVar12 + (long)(int)uVar5 * 4 + 0x29) = CONCAT44(fVar20,fVar22);
    puVar12[(long)(int)uVar5 * 4 + 0x2b] = (uint)fVar24;
    *puVar12 = uVar1 + 1;
    lVar17 = *(long *)(this + 0x20);
    uVar13 = btVoronoiSimplexSolver::updateClosestVectorAndPoints();
    if ((uVar13 & 1) == 0) {
      uVar23 = 3;
      bVar15 = 0;
      goto LAB_00f6f868;
    }
    fVar19 = *(float *)(lVar17 + 0x114);
    fVar28 = *(float *)(lVar17 + 0x118);
    uVar21 = NEON_fmadd(fVar28,fVar28,fVar19 * fVar19);
    fVar24 = *(float *)(lVar17 + 0x11c);
    fVar35 = (float)NEON_fmadd(fVar24,fVar24,uVar21);
    uVar21 = *(undefined4 *)(lVar17 + 0x120);
    if (fVar35 < 1e-06) {
      *(float *)(this + 8) = fVar19;
      *(float *)(this + 0xc) = fVar28;
      uVar23 = 6;
      *(float *)(this + 0x10) = fVar24;
      *(undefined4 *)(this + 0x14) = uVar21;
      bVar15 = 0;
      goto LAB_00f6f868;
    }
    if (fVar42 - fVar35 <= fVar42 * 1.192093e-07) {
      uVar23 = 0xc;
      bVar15 = 0;
      fVar42 = fVar35;
      goto LAB_00f6f868;
    }
    iVar2 = *(int *)(this + 0x54);
    *(float *)(this + 8) = fVar19;
    *(float *)(this + 0xc) = fVar28;
    *(float *)(this + 0x10) = fVar24;
    *(undefined4 *)(this + 0x14) = uVar21;
    *(int *)(this + 0x54) = iVar2 + 1;
    if (1000 < iVar2) goto LAB_00f6f844;
    fVar42 = fVar35;
  } while (**(int **)(this + 0x20) != 4);
  *(undefined4 *)(this + 0x58) = 0xd;
LAB_00f6f844:
  bVar15 = 0;
  if (param_4) {
    fVar34 = 0.0;
  }
  else {
LAB_00f6f870:
    lVar17 = *(long *)(this + 0x20);
    btVoronoiSimplexSolver::updateClosestVectorAndPoints();
    uStack_c8 = *(undefined8 *)(this + 0x10);
    local_d0 = *puVar16;
    fVar34 = (float)*(undefined8 *)(this + 8);
    fVar44 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
    uVar46 = *(undefined8 *)(lVar17 + 0x104);
    fVar43 = *(float *)(lVar17 + 0x10c);
    uVar23 = *(undefined4 *)(this + 0x10);
    fVar26 = (float)NEON_fmadd(uVar23,uVar23,fVar34 * fVar34 + fVar44 * fVar44);
    if (fVar26 < 0.0001) {
      *(undefined4 *)(this + 0x58) = 5;
    }
    if (fVar26 <= 1.421085e-14) {
      bVar6 = bVar15 | param_4;
      bVar15 = (bVar15 | param_4) ^ 1;
      uVar21 = 2;
      fVar34 = 0.0;
      if (bVar6 == 0) {
        fVar34 = -0.01;
      }
    }
    else {
      uVar21 = 1;
      bVar15 = 1;
      fVar45 = 1.0 / SQRT(fVar26);
      fVar31 = fVar27 / SQRT(fVar35);
      local_d0 = CONCAT44((float)((ulong)local_d0 >> 0x20) * fVar45,(float)local_d0 * fVar45);
      uStack_c8._4_4_ = (undefined4)((ulong)uStack_c8 >> 0x20);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8 * fVar45);
      uVar46 = CONCAT44((float)((ulong)uVar46 >> 0x20) + fVar44 * fVar31,
                        (float)uVar46 + fVar34 * fVar31);
      fVar43 = (float)NEON_fmadd(uVar23,fVar31,fVar43);
      fVar34 = SQRT(fVar26) - fVar18;
    }
    *(undefined4 *)(this + 0x50) = uVar21;
  }
  bVar8 = true;
  plVar10 = *(long **)(this + 0x18);
  if (((*(int *)(this + 0x5c) != 0) && (plVar10 != (long *)0x0)) && (*(int *)(this + 0x58) != 0)) {
    bVar8 = gGjkEpaPenetrationTolerance <= fVar34 + fVar18;
  }
  if (((param_4) && ((bVar15 & bVar8) == 0)) && (plVar10 != (long *)0x0)) {
    *puVar16 = 0;
    *(undefined8 *)(this + 0x10) = 0;
    gNumDeepPenetrationChecks = gNumDeepPenetrationChecks + 1;
    uVar13 = (**(code **)(*plVar10 + 0x10))
                       (plVar10,*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                        *(undefined8 *)(this + 0x30),&local_110,&local_150,puVar16,&local_160,
                        &local_170,param_3);
    fVar44 = local_168;
    if ((uVar13 & 1) != 0) {
      fVar31 = local_170 - local_160;
      fVar45 = fStack_16c - fStack_15c;
      fVar26 = local_168 - local_158;
      uVar23 = NEON_fmadd(fVar45,fVar45,fVar31 * fVar31);
      fVar47 = (float)NEON_fmadd(fVar26,fVar26,uVar23);
      uVar23 = 0;
      if (fVar47 <= 1.421085e-14) {
        fVar31 = *(float *)(this + 8);
        fVar45 = *(float *)(this + 0xc);
        uVar21 = NEON_fmadd(fVar45,fVar45,fVar31 * fVar31);
        fVar26 = *(float *)(this + 0x10);
        uVar23 = *(undefined4 *)(this + 0x14);
        fVar47 = (float)NEON_fmadd(fVar26,fVar26,uVar21);
      }
      if (fVar47 <= 1.421085e-14) {
        uVar23 = 9;
      }
      else {
        *(undefined4 *)(this + 0x50) = 3;
        uVar21 = NEON_fmadd(fStack_15c - fStack_16c,fStack_15c - fStack_16c,
                            (local_160 - local_170) * (local_160 - local_170));
        fVar48 = (float)NEON_fmadd(local_158 - local_168,local_158 - local_168,uVar21);
        fVar18 = -SQRT(fVar48);
        if (((bVar15 ^ 1) & 1 | fVar18 < fVar34) != 0) {
          uVar46 = CONCAT44(fStack_16c,local_170);
          fVar48 = 1.0 / SQRT(fVar47);
          fVar31 = fVar48 * fVar31;
          fVar45 = fVar48 * fVar45;
          fVar48 = fVar48 * fVar26;
          local_d0 = CONCAT44(fVar45,fVar31);
          uStack_c8 = CONCAT44(uVar23,fVar48);
          uVar23 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),fVar45,
                              *(float *)(param_1 + 8) * fVar31);
          fVar32 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar48,uVar23);
          NEON_fmsub(fVar48,*(undefined4 *)(param_1 + 0x68),
                     *(float *)(param_1 + 0x48) * -fVar31 - *(float *)(param_1 + 0x58) * fVar45);
          fVar31 = (float)btConvexShape::localGetSupportVertexWithoutMarginNonVirtual
                                    (*(btVector3 **)(this + 0x28));
          fVar34 = fVar48;
          fVar26 = fVar32;
          fVar45 = (float)btConvexShape::localGetSupportVertexWithoutMarginNonVirtual
                                    (*(btVector3 **)(this + 0x30));
          uVar21 = NEON_fmadd(local_f0._4_4_,fVar48,(float)local_f0 * fVar31);
          uVar23 = NEON_fmadd(local_130._4_4_,fVar34,(float)local_130 * fVar45);
          fVar40 = (float)NEON_fmadd((float)uStack_e8,fVar32,uVar21);
          fVar38 = -(float)local_d0;
          fVar47 = (float)NEON_fmadd((undefined4)uStack_128,fVar26,uVar23);
          fVar27 = (float)((ulong)local_d0 >> 0x20);
          fVar33 = ((local_110 * fVar31 + fStack_10c * fVar48 + fStack_108 * fVar32 +
                    (float)local_e0) -
                   (local_150 * fVar45 + fStack_14c * fVar34 + fStack_148 * fVar26 + local_120)) *
                   fVar38;
          NEON_fmsub((float)uStack_c8,*(undefined4 *)(param_1 + 0x28),
                     *(float *)(param_1 + 8) * fVar38 - *(float *)(param_1 + 0x18) * fVar27);
          fVar31 = (float)NEON_fmadd((float)uStack_c8,
                                     (fVar40 + (float)local_d8) - (fVar47 + (float)local_118),
                                     (((float)local_100 * fVar31 + local_100._4_4_ * fVar48 +
                                       (float)local_f8 * fVar32 + (float)((ulong)local_e0 >> 0x20))
                                     - ((float)local_140 * fVar45 + local_140._4_4_ * fVar34 +
                                        (float)local_138 * fVar26 + fStack_11c)) * fVar27);
          fVar27 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x68),(float)uStack_c8,
                                     *(float *)(param_1 + 0x48) * (float)local_d0 +
                                     *(float *)(param_1 + 0x58) * fVar27);
          fVar31 = fVar33 - fVar31;
          fVar45 = (float)btConvexShape::localGetSupportVertexWithoutMarginNonVirtual
                                    (*(btVector3 **)(this + 0x28));
          fVar34 = fVar27;
          fVar26 = fVar33;
          fVar47 = (float)btConvexShape::localGetSupportVertexWithoutMarginNonVirtual
                                    (*(btVector3 **)(this + 0x30));
          uVar21 = NEON_fmadd(local_f0._4_4_,fVar27,(float)local_f0 * fVar45);
          uVar23 = NEON_fmadd(local_130._4_4_,fVar34,(float)local_130 * fVar47);
          fVar32 = (float)NEON_fmadd((float)uStack_e8,fVar33,uVar21);
          fVar38 = (float)NEON_fmadd((undefined4)uStack_128,fVar26,uVar23);
          fVar48 = (float)((ulong)local_d0 >> 0x20);
          fVar34 = (float)NEON_fmadd((fVar32 + (float)local_d8) - (fVar38 + (float)local_118),
                                     (float)uStack_c8,
                                     ((local_110 * fVar45 + fStack_10c * fVar27 +
                                       fStack_108 * fVar33 + (float)local_e0) -
                                     (local_150 * fVar47 + fStack_14c * fVar34 + fStack_148 * fVar26
                                     + local_120)) * (float)local_d0 +
                                     (((float)local_100 * fVar45 + local_100._4_4_ * fVar27 +
                                       (float)local_f8 * fVar33 + (float)((ulong)local_e0 >> 0x20))
                                     - ((float)local_140 * fVar47 + local_140._4_4_ * fVar34 +
                                        (float)local_138 * fVar26 + fStack_11c)) * fVar48);
          if (fVar34 < fVar31) {
            local_d0 = CONCAT44(-fVar48,-(float)local_d0);
            *(undefined4 *)(this + 0x50) = 10;
            uStack_c8 = CONCAT44(uStack_c8._4_4_,-(float)uStack_c8);
          }
          goto LAB_00f6fe60;
        }
        uVar23 = 8;
      }
      *(undefined4 *)(this + 0x50) = uVar23;
      goto joined_r0x00f6fe5c;
    }
    fVar44 = (float)*(undefined8 *)(this + 8);
    fVar26 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
    uVar23 = *(undefined4 *)(this + 0x10);
    fVar31 = (float)NEON_fmadd(uVar23,uVar23,fVar44 * fVar44 + fVar26 * fVar26);
    if (fVar31 <= 0.0) goto joined_r0x00f6fe5c;
    fVar31 = (float)NEON_fmadd(local_160 - local_170,local_160 - local_170,
                               (fStack_15c - fStack_16c) * (fStack_15c - fStack_16c));
    fVar18 = SQRT(fVar31 + (local_158 - local_168) * (local_158 - local_168)) - fVar18;
    if (((bVar15 ^ 1) & 1 | fVar18 < fVar34) == 0) {
      *(undefined4 *)(this + 0x50) = 5;
      goto joined_r0x00f6fe5c;
    }
    local_d0._0_4_ = (float)*puVar16;
    local_d0._4_4_ = (float)((ulong)*puVar16 >> 0x20);
    uStack_c8._0_4_ = (float)*(undefined8 *)(this + 0x10);
    *(undefined4 *)(this + 0x50) = 6;
    uVar21 = NEON_fmadd(local_d0._4_4_,local_d0._4_4_,(float)local_d0 * (float)local_d0);
    fVar34 = (float)NEON_fmadd((float)uStack_c8,(float)uStack_c8,uVar21);
    fVar34 = 1.0 / SQRT(fVar34);
    uVar46 = CONCAT44(fStack_16c + fVar26 * fVar27,local_170 + fVar44 * fVar27);
    fVar44 = (float)NEON_fmadd(uVar23,fVar27,local_168);
    local_d0 = CONCAT44(fVar34 * local_d0._4_4_,fVar34 * (float)local_d0);
    uStack_c8._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar34 * (float)uStack_c8);
  }
  else {
joined_r0x00f6fe5c:
    fVar44 = fVar43;
    fVar18 = fVar34;
    if ((bVar15 & 1) == 0) goto LAB_00f6febc;
  }
LAB_00f6fe60:
  if ((fVar18 < 0.0) || (fVar18 * fVar18 < *(float *)(param_1 + 0x80))) {
    *(float *)(this + 0x4c) = fVar18;
    *(undefined8 *)(this + 0x10) = uStack_c8;
    *puVar16 = local_d0;
    local_154 = 0;
    local_158 = fVar44 + fVar49;
    local_160 = (float)uVar46 + fVar52;
    fStack_15c = (float)((ulong)uVar46 >> 0x20) + fVar53;
    (**(code **)(*(long *)param_2 + 0x20))(fVar18,param_2,&local_d0,&local_160);
  }
LAB_00f6febc:
  if (*(long *)(lVar7 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


