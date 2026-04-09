// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f4feb4
// Size: 4188 bytes
// Signature: undefined __thiscall processCollision(btConvexConvexAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* btConvexConvexAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btConvexConvexAlgorithm::processCollision
          (btConvexConvexAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  float *pfVar1;
  long lVar2;
  undefined *puVar3;
  btPersistentManifold *pbVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float local_328;
  float local_324;
  float local_320;
  float fStack_31c;
  undefined **local_318;
  undefined **local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  float local_2e8;
  char local_2e4;
  btManifoldResult *local_2d8;
  undefined8 local_2d0;
  ulong uStack_2c8;
  undefined8 *local_2c0;
  ulong uStack_2b8;
  undefined8 local_2b0;
  ulong uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  ulong uStack_288;
  undefined8 *local_280;
  ulong uStack_278;
  undefined8 local_270;
  ulong uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 *local_240;
  ulong uStack_238;
  undefined8 local_230;
  ulong uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined local_210;
  btIDebugDraw *local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  ulong uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  long *local_180;
  long *local_178;
  int local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined local_160;
  float local_15c;
  undefined4 local_158;
  undefined8 local_14c;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 *local_130;
  ulong uStack_128;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 *local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  long local_b8;
  
  lVar2 = tpidr_el0;
  local_b8 = *(long *)(lVar2 + 0x28);
  pbVar4 = *(btPersistentManifold **)(this + 0x28);
  if (pbVar4 == (btPersistentManifold *)0x0) {
    pbVar4 = (btPersistentManifold *)
             (**(code **)(**(long **)(this + 8) + 0x18))
                       (*(long **)(this + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_2 + 0x10));
    *(btPersistentManifold **)(this + 0x28) = pbVar4;
    this[0x20] = (btConvexConvexAlgorithm)0x1;
  }
  *(btPersistentManifold **)(param_4 + 8) = pbVar4;
  plVar16 = *(long **)(param_1 + 8);
  plVar15 = *(long **)(param_2 + 8);
  if ((*(int *)(plVar16 + 1) == 10) && (*(int *)(plVar15 + 1) == 10)) {
    lVar10 = *(long *)(param_1 + 0x18);
    lVar12 = *(long *)(param_2 + 0x18);
    lVar11 = (long)*(int *)((long)plVar16 + 0x44) * 4;
    lVar13 = (long)*(int *)((long)plVar15 + 0x44) * 4;
    pfVar9 = (float *)(lVar10 + lVar11);
    pfVar1 = (float *)(lVar12 + lVar13);
    fVar27 = *pfVar9;
    fVar17 = *pfVar1;
    fVar22 = pfVar9[4];
    fVar34 = pfVar1[4];
    fVar29 = pfVar9[8];
    fVar36 = *(float *)(lVar12 + 0x30) - *(float *)(lVar10 + 0x30);
    fVar30 = pfVar1[8];
    fVar38 = *(float *)(lVar12 + 0x34) - *(float *)(lVar10 + 0x34);
    uVar25 = NEON_fmadd(fVar34,fVar22,fVar17 * fVar27);
    fVar40 = *(float *)(lVar12 + 0x38) - *(float *)(lVar10 + 0x38);
    uVar48 = NEON_fmadd(fVar30,fVar29,uVar25);
    uVar25 = NEON_fmadd(fVar38,fVar22,fVar36 * fVar27);
    uVar46 = NEON_fmadd(fVar38,fVar34,fVar36 * fVar17);
    fVar42 = *(float *)((long)plVar16 + lVar11 + 0x2c);
    fVar44 = (float)NEON_fmsub(uVar48,uVar48,0x3f800000);
    fVar47 = *(float *)((long)plVar15 + lVar13 + 0x2c);
    uVar50 = NEON_fmadd(fVar40,fVar29,uVar25);
    uVar25 = NEON_fmadd(fVar40,fVar30,uVar46);
    fVar51 = 0.0;
    if (fVar44 == 0.0) {
LAB_00f50050:
      fVar26 = fVar51;
    }
    else {
      fVar26 = (float)NEON_fmsub(uVar25,uVar48,uVar50);
      fVar26 = fVar26 / fVar44;
      fVar51 = -fVar42;
      if ((fVar26 < -fVar42) || (fVar51 = fVar42, fVar42 < fVar26)) goto LAB_00f50050;
    }
    fVar49 = (float)NEON_fnmsub(fVar26,uVar48,uVar25);
    fVar51 = -fVar47;
    fVar44 = *(float *)((long)plVar15 + (long)((*(int *)((long)plVar15 + 0x44) + 2) % 3) * 4 + 0x2c)
    ;
    if (fVar51 <= fVar49) {
      fVar51 = fVar49;
      if (fVar47 < fVar49) {
        fVar49 = (float)NEON_fmadd(uVar48,fVar47,uVar50);
        fVar26 = -fVar42;
        fVar51 = fVar47;
        if (fVar26 <= fVar49) goto joined_r0x00f50268;
      }
    }
    else {
      fVar49 = (float)NEON_fmsub(uVar48,fVar47,uVar50);
      fVar26 = -fVar42;
      if (-fVar42 <= fVar49) {
joined_r0x00f50268:
        fVar26 = fVar49;
        if (fVar42 < fVar26) {
          fVar26 = fVar42;
        }
      }
    }
    fVar42 = (float)NEON_fmsub(fVar26,fVar27,fVar51 * fVar17 + fVar36);
    fVar38 = (float)NEON_fmsub(fVar26,fVar22,fVar51 * fVar34 + fVar38);
    fVar40 = (float)NEON_fmsub(fVar26,fVar29,fVar51 * fVar30 + fVar40);
    uVar25 = NEON_fmadd(fVar38,fVar38,fVar42 * fVar42);
    fVar47 = (float)NEON_fmadd(fVar40,fVar40,uVar25);
    fVar36 = SQRT(fVar47) -
             (*(float *)((long)plVar16 + (long)((*(int *)((long)plVar16 + 0x44) + 2) % 3) * 4 + 0x2c
                        ) + fVar44);
    if (fVar36 <= *(float *)(pbVar4 + 0x31c)) {
      if (fVar47 <= 1.421085e-14) {
        if (ABS(fVar29) <= 0.7071068) {
          local_308 = (btManifoldResult *)((ulong)local_308._4_4_ << 0x20);
          fVar29 = (float)NEON_fmadd(fVar22,fVar22,fVar27 * fVar27);
          fVar42 = (1.0 / SQRT(fVar29)) * -fVar22;
          fVar38 = (1.0 / SQRT(fVar29)) * fVar27;
          fVar22 = 0.0;
          local_310 = (undefined **)CONCAT44(fVar38,fVar42);
        }
        else {
          fVar27 = (float)NEON_fmadd(fVar29,fVar29,fVar22 * fVar22);
          fVar38 = (1.0 / SQRT(fVar27)) * -fVar29;
          fVar22 = (1.0 / SQRT(fVar27)) * fVar22;
          fVar42 = 0.0;
          local_310 = (undefined **)((ulong)(uint)fVar38 << 0x20);
          local_308 = (btManifoldResult *)CONCAT44(local_308._4_4_,fVar22);
        }
      }
      else {
        fVar22 = -1.0 / SQRT(fVar47);
        fVar42 = fVar22 * fVar42;
        fVar38 = fVar22 * fVar38;
        fVar22 = fVar22 * fVar40;
        local_310 = (undefined **)CONCAT44(fVar38,fVar42);
        local_308 = (btManifoldResult *)(ulong)(uint)fVar22;
      }
      fVar27 = (float)NEON_fmadd(fVar38,fVar44,fVar51 * fVar34);
      fVar22 = (float)NEON_fmadd(fVar22,fVar44,fVar51 * fVar30);
      uVar25 = NEON_fmadd(fVar42,fVar44,*(float *)(lVar12 + 0x30) + fVar51 * fVar17);
      local_140 = CONCAT44(fVar27 + *(float *)(lVar12 + 0x34),uVar25);
      uStack_138 = (ulong)(uint)(fVar22 + *(float *)(lVar12 + 0x38));
    }
    if (fVar36 < *(float *)(pbVar4 + 0x31c)) {
      (**(code **)(*(long *)param_4 + 0x20))(param_4,&local_310,&local_140);
      goto LAB_00f50e98;
    }
    iVar7 = *(int *)(pbVar4 + 0x318);
  }
  else {
    local_188 = *(undefined8 *)(this + 0x10);
    local_190 = *(undefined8 *)(this + 0x18);
    local_c0 = 1e+18;
    local_1a8 = &PTR__btDiscreteCollisionDetectorInterface_0101b4e0;
    uStack_198 = 0;
    local_1a0 = 0x3f80000000000000;
    local_170 = *(int *)(plVar16 + 1);
    local_16c = *(int *)(plVar15 + 1);
    local_168 = (**(code **)(*plVar16 + 0x60))(plVar16);
    local_164 = (**(code **)(*plVar15 + 0x60))(plVar15);
    local_160 = 0;
    local_158 = 0xffffffff;
    local_14c = 0x100000001;
    local_180 = plVar16;
    local_178 = plVar15;
    fVar51 = (float)(**(code **)(*plVar16 + 0x60))(plVar16);
    fVar17 = (float)(**(code **)(*plVar15 + 0x60))(plVar15);
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    local_c0 = fVar17 + fVar51 + *(float *)(*(long *)(this + 0x28) + 0x31c);
    local_c0 = local_c0 * local_c0;
    uStack_138 = puVar8[1];
    local_140 = *puVar8;
    uStack_128 = puVar8[3];
    local_130 = (undefined8 *)puVar8[2];
    uStack_118 = puVar8[5];
    local_120 = puVar8[4];
    uStack_108 = puVar8[7];
    local_110 = puVar8[6];
    puVar8 = *(undefined8 **)(param_2 + 0x18);
    uStack_f8 = puVar8[1];
    local_100 = *puVar8;
    uStack_e8 = puVar8[3];
    local_f0 = (undefined8 *)puVar8[2];
    uStack_d8 = puVar8[5];
    local_e0 = puVar8[4];
    uStack_c8 = puVar8[7];
    local_d0 = puVar8[6];
    if ((*(int *)(plVar16 + 1) < 7) && (iVar7 = *(int *)(plVar15 + 1), iVar7 < 7)) {
      uVar25 = 0;
      local_318 = &PTR__Result_01019ad8;
      if (*(int *)(plVar16 + 1) == 0) {
        local_2f0 = 0;
      }
      else {
        local_2f0 = (**(code **)(*plVar16 + 0x60))(plVar16);
        iVar7 = *(int *)(plVar15 + 1);
      }
      if (iVar7 != 0) {
        uVar25 = (**(code **)(*plVar15 + 0x60))(plVar15);
      }
      local_2e4 = '\0';
      local_310 = &PTR__Result_01019b28;
      local_308 = param_4;
      local_2ec = uVar25;
      if ((btConvexPolyhedron *)plVar16[9] == (btConvexPolyhedron *)0x0) goto LAB_00f50778;
      if ((btConvexPolyhedron *)plVar15[9] == (btConvexPolyhedron *)0x0) {
        if (*(int *)(plVar15 + 1) == 1) {
          pfVar9 = *(float **)(param_2 + 0x18);
          fVar29 = *pfVar9;
          fVar36 = pfVar9[2];
          fVar51 = (float)plVar15[10];
          fVar34 = pfVar9[5];
          fVar27 = (float)((ulong)plVar15[10] >> 0x20);
          fVar38 = pfVar9[6];
          uVar19 = NEON_rev64(CONCAT44(pfVar9[1] * fVar27,pfVar9[4] * fVar51),4);
          fVar17 = *(float *)(plVar15 + 0xb);
          uVar23 = *(undefined8 *)(pfVar9 + 0xc);
          fVar22 = (float)NEON_fmadd(pfVar9[10],fVar17,pfVar9[8] * fVar51 + pfVar9[9] * fVar27);
          fVar30 = pfVar9[0xe];
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          puVar8 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x10,0x10);
          *puVar8 = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar27 * fVar34 + fVar38 * fVar17 +
                             (float)((ulong)uVar23 >> 0x20),
                             (float)uVar19 + fVar51 * fVar29 + fVar36 * fVar17 + (float)uVar23);
          *(float *)(puVar8 + 1) = fVar22 + fVar30;
          *(undefined4 *)((long)puVar8 + 0xc) = 0;
          pfVar9 = *(float **)(param_2 + 0x18);
          fVar29 = *pfVar9;
          fVar36 = pfVar9[2];
          fVar51 = (float)plVar15[0xc];
          fVar34 = pfVar9[5];
          fVar27 = (float)((ulong)plVar15[0xc] >> 0x20);
          fVar38 = pfVar9[6];
          uVar19 = NEON_rev64(CONCAT44(pfVar9[1] * fVar27,pfVar9[4] * fVar51),4);
          fVar17 = *(float *)(plVar15 + 0xd);
          uVar24 = *(undefined8 *)(pfVar9 + 0xc);
          fVar22 = (float)NEON_fmadd(pfVar9[10],fVar17,pfVar9[8] * fVar51 + pfVar9[9] * fVar27);
          fVar30 = pfVar9[0xe];
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          uStack_1fc = 1;
          uStack_1f8 = 1;
          local_1f0 = puVar8;
          puVar6 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x20,0x10);
          puVar3 = PTR_FUN_01048e40;
          uStack_1e8._0_1_ = 1;
          uVar23 = *puVar8;
          puVar6[1] = puVar8[1];
          *puVar6 = uVar23;
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)puVar3)(puVar8);
          puVar6[2] = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar27 * fVar34 + fVar38 * fVar17 +
                               (float)((ulong)uVar24 >> 0x20),
                               (float)uVar19 + fVar51 * fVar29 + fVar36 * fVar17 + (float)uVar24);
          *(float *)(puVar6 + 3) = fVar22 + fVar30;
          *(undefined4 *)((long)puVar6 + 0x1c) = 0;
          pfVar9 = *(float **)(param_2 + 0x18);
          fVar29 = *pfVar9;
          fVar36 = pfVar9[2];
          fVar51 = (float)plVar15[0xe];
          fVar34 = pfVar9[5];
          fVar27 = (float)((ulong)plVar15[0xe] >> 0x20);
          fVar38 = pfVar9[6];
          uVar19 = NEON_rev64(CONCAT44(pfVar9[1] * fVar27,pfVar9[4] * fVar51),4);
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          fVar17 = *(float *)(plVar15 + 0xf);
          uVar24 = *(undefined8 *)(pfVar9 + 0xc);
          fVar22 = (float)NEON_fmadd(pfVar9[10],fVar17,pfVar9[8] * fVar51 + pfVar9[9] * fVar27);
          fVar30 = pfVar9[0xe];
          uStack_1f8 = 2;
          local_1f0 = puVar6;
          puVar8 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x40,0x10);
          uStack_1e8._0_1_ = 1;
          uVar23 = *puVar6;
          puVar8[1] = puVar6[1];
          *puVar8 = uVar23;
          puVar3 = PTR_FUN_01048e40;
          uVar23 = puVar6[2];
          gNumAlignedFree = gNumAlignedFree + 1;
          puVar8[3] = puVar6[3];
          puVar8[2] = uVar23;
          (*(code *)puVar3)(puVar6);
          puVar8[4] = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar27 * fVar34 + fVar38 * fVar17 +
                               (float)((ulong)uVar24 >> 0x20),
                               (float)uVar19 + fVar51 * fVar29 + fVar36 * fVar17 + (float)uVar24);
          *(float *)(puVar8 + 5) = fVar22 + fVar30;
          *(undefined4 *)((long)puVar8 + 0x2c) = 0;
          uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
          fVar17 = *(float *)(*(long *)(this + 0x28) + 0x31c);
          uStack_1fc = 3;
          uStack_1f8 = 4;
          local_1f0 = puVar8;
          btGjkPairDetector::getClosestPointsNonVirtual
                    ((btGjkPairDetector *)&local_1a8,(ClosestPointInput *)&local_140,
                     (Result *)&local_318,*(btIDebugDraw **)(param_3 + 0x18),(bool)param_3[0x22]);
          uVar25 = NEON_fmadd(local_1a0._4_4_,local_1a0._4_4_,(float)local_1a0 * (float)local_1a0);
          fVar51 = (float)NEON_fmadd((float)uStack_198,(float)uStack_198,uVar25);
          if (1.192093e-07 < fVar51) {
            local_1ac = 0;
            fVar51 = 1.0 / fVar51;
            local_1b8 = fVar51 * (float)local_1a0;
            local_1b4 = fVar51 * local_1a0._4_4_;
            local_1b0 = fVar51 * (float)uStack_198;
            fVar51 = (float)(**(code **)(*plVar16 + 0x60))(plVar16);
            fVar22 = (float)(**(code **)(*plVar15 + 0x60))(plVar15);
            btPolyhedralContactClipping::clipFaceAgainstHull
                      ((btVector3 *)&local_1b8,(btConvexPolyhedron *)plVar16[9],
                       *(btTransform **)(param_1 + 0x18),(btAlignedObjectArray *)&local_200,
                       local_15c - (fVar17 + fVar51 + fVar22),fVar17,(Result *)param_4);
          }
          if ((this[0x20] != (btConvexConvexAlgorithm)0x0) &&
             (pbVar4 = *(btPersistentManifold **)(param_4 + 8), *(int *)(pbVar4 + 0x318) != 0)) {
            lVar10 = *(long *)(pbVar4 + 0x308);
            lVar11 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
            if (*(long *)(pbVar4 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
              lVar10 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
              lVar11 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
            }
            btPersistentManifold::refreshContactPoints
                      (pbVar4,(btTransform *)(lVar10 + 8),(btTransform *)(lVar11 + 8));
          }
          if ((local_1f0 != (undefined8 *)0x0) && ((char)uStack_1e8 != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          goto LAB_00f50ecc;
        }
        goto LAB_00f50778;
      }
      fVar51 = *(float *)(*(long *)(this + 0x28) + 0x31c);
      if (param_3[0x20] == (btDispatcherInfo)0x0) {
        btGjkPairDetector::getClosestPointsNonVirtual
                  ((btGjkPairDetector *)&local_1a8,(ClosestPointInput *)&local_140,
                   (Result *)&local_310,*(btIDebugDraw **)(param_3 + 0x18),(bool)param_3[0x22]);
        uStack_1f8 = (undefined4)uStack_2f8;
        uStack_1f4 = (undefined4)((ulong)uStack_2f8 >> 0x20);
        local_200 = (undefined4)local_300;
        uStack_1fc = (undefined4)((ulong)local_300 >> 0x20);
        if ((local_2e4 != '\0') && (local_2e8 < 0.0)) goto LAB_00f50e6c;
      }
      else {
        uVar5 = btPolyhedralContactClipping::findSeparatingAxis
                          ((btConvexPolyhedron *)plVar16[9],(btConvexPolyhedron *)plVar15[9],
                           *(btTransform **)(param_1 + 0x18),*(btTransform **)(param_2 + 0x18),
                           (btVector3 *)&local_200,(Result *)param_4);
        if ((uVar5 & 1) != 0) {
          local_2e8 = -1e+30;
LAB_00f50e6c:
          btPolyhedralContactClipping::clipHullAgainstHull
                    ((btVector3 *)&local_200,(btConvexPolyhedron *)plVar16[9],
                     (btConvexPolyhedron *)plVar15[9],*(btTransform **)(param_1 + 0x18),
                     *(btTransform **)(param_2 + 0x18),local_2e8 - fVar51,fVar51,(Result *)param_4);
        }
      }
    }
    else {
LAB_00f50778:
      btGjkPairDetector::getClosestPointsNonVirtual
                ((btGjkPairDetector *)&local_1a8,(ClosestPointInput *)&local_140,(Result *)param_4,
                 *(btIDebugDraw **)(param_3 + 0x18),(bool)param_3[0x22]);
      if ((*(int *)(this + 0x34) != 0) &&
         (*(int *)(*(long *)(param_4 + 8) + 0x318) < *(int *)(this + 0x38))) {
        uVar25 = NEON_fmadd(local_1a0._4_4_,local_1a0._4_4_,(float)local_1a0 * (float)local_1a0);
        fVar51 = (float)NEON_fmadd((float)uStack_198,(float)uStack_198,uVar25);
        if (1.192093e-07 < fVar51) {
          fVar51 = 1.0 / fVar51;
          fVar17 = fVar51 * (float)uStack_198;
          fVar22 = fVar51 * (float)local_1a0;
          fVar51 = fVar51 * local_1a0._4_4_;
          if (ABS(fVar17) <= 0.7071068) {
            fVar27 = (float)NEON_fmadd(fVar51,fVar51,fVar22 * fVar22);
            fVar29 = 0.0;
            fVar30 = (1.0 / SQRT(fVar27)) * -fVar51;
            fVar27 = (1.0 / SQRT(fVar27)) * fVar22;
          }
          else {
            fVar30 = 0.0;
            fVar29 = (float)NEON_fmadd(fVar51,fVar51,fVar17 * fVar17);
            fVar27 = (1.0 / SQRT(fVar29)) * -fVar17;
            fVar29 = (1.0 / SQRT(fVar29)) * fVar51;
          }
          fVar34 = (float)(**(code **)(*plVar16 + 0x20))(plVar16);
          fVar36 = (float)(**(code **)(*plVar15 + 0x20))(plVar15);
          if (fVar36 <= fVar34) {
            uStack_1e8 = uStack_e8;
            local_1f0 = local_f0;
            uStack_1f8 = (undefined4)uStack_f8;
            uStack_1f4 = (undefined4)(uStack_f8 >> 0x20);
            local_200 = (undefined4)local_100;
            uStack_1fc = (undefined4)((ulong)local_100 >> 0x20);
            fVar38 = (float)NEON_fminnm(gContactBreakingThreshold / fVar36,0x3ec90fdb);
            uStack_1d8 = uStack_d8;
            local_1e0 = local_e0;
            uStack_1c8 = uStack_c8;
            local_1d0 = local_d0;
          }
          else {
            uStack_1e8 = uStack_128;
            local_1f0 = local_130;
            uStack_1f8 = (undefined4)uStack_138;
            uStack_1f4 = (undefined4)(uStack_138 >> 0x20);
            local_200 = (undefined4)local_140;
            uStack_1fc = (undefined4)((ulong)local_140 >> 0x20);
            fVar38 = (float)NEON_fminnm(gContactBreakingThreshold / fVar34,0x3ec90fdb);
            uStack_1d8 = uStack_118;
            local_1e0 = local_120;
            uStack_1c8 = uStack_108;
            local_1d0 = local_110;
          }
          sincosf(fVar38 * 0.5,&fStack_31c,&local_320);
          iVar7 = *(int *)(this + 0x34);
          if (0 < iVar7) {
            uVar25 = NEON_fmadd(fVar27,fVar27,fVar30 * fVar30);
            fVar38 = (float)NEON_fmadd(fVar29,fVar29,uVar25);
            if (1.192093e-07 < fVar38) {
              iVar14 = 0;
              fStack_31c = fStack_31c / SQRT(fVar38);
              uVar25 = NEON_fmadd(fVar51,fVar51,fVar22 * fVar22);
              fVar38 = (float)NEON_fmadd(fVar17,fVar17,uVar25);
              fVar30 = fStack_31c * fVar30;
              fVar27 = fStack_31c * fVar27;
              fVar29 = fStack_31c * fVar29;
              do {
                sincosf(((float)iVar14 * 3.141593) / (float)iVar7,&local_324,&local_328);
                fVar42 = local_324 / SQRT(fVar38);
                fVar44 = fVar42 * fVar22;
                fVar40 = fVar42 * fVar51;
                fVar42 = fVar42 * fVar17;
                fVar35 = (float)NEON_fmadd(fVar42,local_320,fVar44 * fVar27);
                uVar25 = NEON_fmadd(fVar40,fVar27,local_328 * local_320);
                fVar47 = (float)NEON_fmadd(fVar44,local_320,fVar40 * fVar29);
                fVar28 = (float)NEON_fmadd(fVar40,local_320,fVar42 * fVar30);
                fVar26 = (float)NEON_fmadd(fVar44,fVar29,local_328 * fVar27);
                fVar49 = (float)NEON_fmadd(fVar42,fVar27,local_328 * fVar30);
                fVar32 = (float)NEON_fmadd(fVar40,fVar30,local_328 * fVar29);
                uVar25 = NEON_fmadd(fVar42,fVar29,uVar25);
                fVar26 = fVar26 - fVar28;
                fVar49 = fVar49 - fVar47;
                fVar32 = fVar32 - fVar35;
                fVar47 = (float)NEON_fmadd(fVar44,fVar30,uVar25);
                uVar46 = NEON_fmadd(fVar32,fVar44,fVar26 * local_328);
                uVar50 = NEON_fmadd(fVar26,fVar40,fVar32 * fVar42);
                uVar25 = NEON_fmadd(fVar49,local_328,fVar47 * fVar44);
                uVar48 = NEON_fmadd(fVar32,local_328,fVar47 * fVar42);
                fVar35 = (float)NEON_fmadd(fVar47,fVar40,uVar46);
                uVar46 = NEON_fmadd(fVar49,fVar44,uVar50);
                fVar28 = (float)NEON_fmadd(fVar26,fVar42,uVar25);
                uVar25 = NEON_fmadd(fVar49,fVar40,uVar48);
                fVar41 = (float)NEON_fmsub(fVar49,fVar42,fVar35);
                fVar47 = (float)NEON_fnmsub(fVar47,local_328,uVar46);
                fVar39 = (float)NEON_fmsub(fVar32,fVar40,fVar28);
                fVar44 = (float)NEON_fmsub(fVar26,fVar44,uVar25);
                uVar25 = NEON_fmadd(fVar41,fVar41,fVar39 * fVar39);
                uVar25 = NEON_fmadd(fVar44,fVar44,uVar25);
                fVar26 = (float)NEON_fmadd(fVar47,fVar47,uVar25);
                if (fVar34 < fVar36) {
                  puVar8 = *(undefined8 **)(param_1 + 0x18);
                  fVar26 = 2.0 / fVar26;
                  fVar42 = (float)NEON_fnmadd(-fVar49,fVar42,-fVar35);
                  fVar40 = (float)NEON_fnmadd(-fVar32,fVar40,-fVar28);
                  fVar37 = *(float *)(puVar8 + 1);
                  fVar28 = fVar26 * fVar41;
                  fVar33 = fVar26 * fVar44;
                  fVar44 = (float)NEON_fmsub(fVar33,fVar44,0x3f800000);
                  fVar49 = fVar26 * fVar39 * fVar47;
                  fVar40 = fVar26 * fVar39 * fVar40;
                  fVar31 = fVar44 + fVar28 * fVar42;
                  fVar43 = fVar28 * fVar39 - fVar33 * fVar47;
                  fVar35 = fVar28 * fVar39 + fVar33 * fVar47;
                  fVar45 = fVar33 * fVar39 + fVar28 * fVar47;
                  fVar47 = fVar33 * fVar39 - fVar28 * fVar47;
                  fVar44 = fVar44 + fVar40;
                  fVar39 = fVar33 * fVar41 - fVar49;
                  fVar26 = (float)*puVar8;
                  fVar32 = (float)((ulong)*puVar8 >> 0x20);
                  fVar49 = fVar33 * fVar41 + fVar49;
                  uVar46 = *(undefined4 *)(puVar8 + 3);
                  fVar41 = (float)puVar8[2];
                  fVar33 = (float)((ulong)puVar8[2] >> 0x20);
                  fVar40 = fVar28 * fVar42 + 1.0 + fVar40;
                  uVar48 = NEON_fmadd(uVar46,fVar43,fVar37 * fVar31);
                  uVar25 = NEON_fmadd(uVar46,fVar44,fVar37 * fVar35);
                  uVar46 = NEON_fmadd(uVar46,fVar49,fVar37 * fVar47);
                  uVar50 = *(undefined4 *)(puVar8 + 5);
                  fVar42 = (float)puVar8[4];
                  fVar28 = (float)((ulong)puVar8[4] >> 0x20);
                  puVar8 = *(undefined8 **)(param_2 + 0x18);
                  uVar21 = NEON_fmadd(uVar50,fVar45,uVar48);
                  uVar20 = NEON_fmadd(uVar50,fVar39,uVar25);
                  local_120 = CONCAT44(fVar32 * fVar47 + fVar33 * fVar49 + fVar28 * fVar40,
                                       fVar26 * fVar47 + fVar41 * fVar49 + fVar42 * fVar40);
                  uVar18 = NEON_fmadd(uVar50,fVar40,uVar46);
                  local_140 = CONCAT44(fVar32 * fVar31 + fVar33 * fVar43 + fVar28 * fVar45,
                                       fVar26 * fVar31 + fVar41 * fVar43 + fVar42 * fVar45);
                  local_130 = (undefined8 *)
                              CONCAT44(fVar32 * fVar35 + fVar33 * fVar44 + fVar28 * fVar39,
                                       fVar26 * fVar35 + fVar41 * fVar44 + fVar42 * fVar39);
                  uStack_138 = (ulong)uVar21;
                  uStack_128 = (ulong)uVar20;
                  uStack_118 = (ulong)uVar18;
                  uStack_f8 = puVar8[1];
                  local_100 = *puVar8;
                  uStack_c8 = puVar8[7];
                  local_d0 = puVar8[6];
                }
                else {
                  puVar8 = *(undefined8 **)(param_1 + 0x18);
                  fVar26 = 2.0 / fVar26;
                  fVar42 = (float)NEON_fnmadd(-fVar49,fVar42,-fVar35);
                  uStack_138 = puVar8[1];
                  local_140 = *puVar8;
                  uStack_128 = puVar8[3];
                  local_130 = (undefined8 *)puVar8[2];
                  fVar40 = (float)NEON_fnmadd(-fVar32,fVar40,-fVar28);
                  uStack_118 = puVar8[5];
                  local_120 = puVar8[4];
                  uStack_108 = puVar8[7];
                  local_110 = puVar8[6];
                  fVar28 = fVar26 * fVar41;
                  fVar32 = fVar26 * fVar44;
                  puVar8 = *(undefined8 **)(param_2 + 0x18);
                  fVar44 = (float)NEON_fmsub(fVar32,fVar44,0x3f800000);
                  fVar49 = fVar26 * fVar39 * fVar47;
                  fVar40 = fVar26 * fVar39 * fVar40;
                  fVar33 = fVar44 + fVar28 * fVar42;
                  fVar43 = fVar28 * fVar39 - fVar32 * fVar47;
                  fVar35 = fVar28 * fVar39 + fVar32 * fVar47;
                  fVar45 = fVar32 * fVar39 + fVar28 * fVar47;
                  fVar47 = fVar32 * fVar39 - fVar28 * fVar47;
                  fVar44 = fVar44 + fVar40;
                  fVar37 = *(float *)(puVar8 + 1);
                  fVar39 = fVar32 * fVar41 - fVar49;
                  fVar49 = fVar32 * fVar41 + fVar49;
                  fVar26 = (float)*puVar8;
                  fVar32 = (float)((ulong)*puVar8 >> 0x20);
                  uVar46 = *(undefined4 *)(puVar8 + 3);
                  fVar41 = (float)puVar8[2];
                  fVar31 = (float)((ulong)puVar8[2] >> 0x20);
                  fVar40 = fVar28 * fVar42 + 1.0 + fVar40;
                  uVar48 = NEON_fmadd(uVar46,fVar43,fVar37 * fVar33);
                  uVar25 = NEON_fmadd(uVar46,fVar44,fVar37 * fVar35);
                  uVar46 = NEON_fmadd(uVar46,fVar49,fVar37 * fVar47);
                  uVar50 = *(undefined4 *)(puVar8 + 5);
                  fVar42 = (float)puVar8[4];
                  fVar28 = (float)((ulong)puVar8[4] >> 0x20);
                  uVar21 = NEON_fmadd(uVar50,fVar45,uVar48);
                  uVar20 = NEON_fmadd(uVar50,fVar39,uVar25);
                  local_e0 = CONCAT44(fVar32 * fVar47 + fVar31 * fVar49 + fVar28 * fVar40,
                                      fVar26 * fVar47 + fVar41 * fVar49 + fVar42 * fVar40);
                  uVar18 = NEON_fmadd(uVar50,fVar40,uVar46);
                  local_100 = CONCAT44(fVar32 * fVar33 + fVar31 * fVar43 + fVar28 * fVar45,
                                       fVar26 * fVar33 + fVar41 * fVar43 + fVar42 * fVar45);
                  local_f0 = (undefined8 *)
                             CONCAT44(fVar32 * fVar35 + fVar31 * fVar44 + fVar28 * fVar39,
                                      fVar26 * fVar35 + fVar41 * fVar44 + fVar42 * fVar39);
                  uStack_f8 = (ulong)uVar21;
                  uStack_e8 = (ulong)uVar20;
                  uStack_d8 = (ulong)uVar18;
                }
                uStack_2c8 = uStack_138;
                local_2d0 = local_140;
                uStack_2b8 = uStack_128;
                local_2c0 = local_130;
                uStack_2a8 = uStack_118;
                local_2b0 = local_120;
                uStack_298 = uStack_108;
                local_2a0 = local_110;
                uStack_288 = uStack_f8;
                local_290 = local_100;
                uStack_278 = uStack_e8;
                local_280 = local_f0;
                uStack_248 = CONCAT44(uStack_1f4,uStack_1f8);
                local_250 = CONCAT44(uStack_1fc,local_200);
                uStack_268 = uStack_d8;
                local_270 = local_e0;
                uStack_258 = uStack_c8;
                local_260 = local_d0;
                uStack_238 = uStack_1e8;
                local_240 = local_1f0;
                uStack_228 = uStack_1d8;
                local_230 = local_1e0;
                local_208 = *(btIDebugDraw **)(param_3 + 0x18);
                uStack_218 = uStack_1c8;
                local_220 = local_1d0;
                local_310 = &PTR__Result_01019b78;
                local_2d8 = param_4;
                local_210 = fVar34 < fVar36;
                btGjkPairDetector::getClosestPointsNonVirtual
                          ((btGjkPairDetector *)&local_1a8,(ClosestPointInput *)&local_140,
                           (Result *)&local_310,local_208,true);
                iVar7 = *(int *)(this + 0x34);
                iVar14 = iVar14 + 1;
              } while (iVar14 < iVar7);
            }
          }
        }
      }
    }
    if (this[0x20] == (btConvexConvexAlgorithm)0x0) goto LAB_00f50ecc;
LAB_00f50e98:
    pbVar4 = *(btPersistentManifold **)(param_4 + 8);
    iVar7 = *(int *)(pbVar4 + 0x318);
  }
  if (iVar7 != 0) {
    lVar10 = *(long *)(pbVar4 + 0x308);
    lVar11 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
    if (*(long *)(pbVar4 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
      lVar10 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
      lVar11 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
    }
    btPersistentManifold::refreshContactPoints
              (pbVar4,(btTransform *)(lVar10 + 8),(btTransform *)(lVar11 + 8));
  }
LAB_00f50ecc:
  if (*(long *)(lVar2 + 0x28) != local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


