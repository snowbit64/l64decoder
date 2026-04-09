// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveGroupCacheFriendlySetup
// Entry Point: 00f2ceb4
// Size: 5400 bytes
// Signature: undefined __cdecl solveGroupCacheFriendlySetup(btCollisionObject * * param_1, int param_2, btPersistentManifold * * param_3, int param_4, btTypedConstraint * * param_5, int param_6, btContactSolverInfo * param_7, btIDebugDraw * param_8)


/* btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySetup(btCollisionObject**, int,
   btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*)
    */

undefined  [16]
btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySetup
          (btCollisionObject **param_1,int param_2,btPersistentManifold **param_3,int param_4,
          btTypedConstraint **param_5,int param_6,btContactSolverInfo *param_7,btIDebugDraw *param_8
          )

{
  btCollisionObject **ppbVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  btCollisionObject *pbVar13;
  btCollisionObject *pbVar14;
  btCollisionObject **ppbVar15;
  long **pplVar16;
  float *pfVar17;
  int iVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  btCollisionObject **ppbVar24;
  btCollisionObject *pbVar25;
  ulong uVar26;
  undefined4 *puVar27;
  long lVar28;
  undefined4 *puVar29;
  int *piVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  ulong uVar33;
  long **pplVar34;
  btCollisionObject *pbVar35;
  ulong uVar36;
  long *plVar37;
  ulong uVar38;
  btRigidBody *this;
  float fVar39;
  float fVar40;
  float fVar41;
  ulong in_d1;
  undefined8 uVar42;
  float fVar43;
  undefined8 in_d2;
  undefined8 uVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  timeval local_190;
  btCollisionObject *local_180;
  btCollisionObject *pbStack_178;
  btCollisionObject *local_170;
  undefined8 uStack_168;
  btCollisionObject *local_160;
  undefined4 *puStack_158;
  btCollisionObject *local_150;
  btCollisionObject *pbStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  
  pplVar16 = (long **)(ulong)(uint)param_6;
  ppbVar15 = (btCollisionObject **)(ulong)(uint)param_2;
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  uVar38 = (ulong)param_3 & 0xffffffff;
  *(undefined4 *)((long)param_1 + 300) = 0xffffffff;
  CProfileManager::Start_Profile("solveGroupCacheFriendlySetup");
  iVar9 = (int)param_3;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (0 < iVar9) {
    if (iVar9 == 1) {
      uVar23 = 0;
    }
    else {
      uVar23 = (ulong)param_3 & 0xfffffffe;
      ppbVar24 = ppbVar15 + 1;
      uVar36 = uVar23;
      do {
        ppbVar1 = ppbVar24 + -1;
        pbVar13 = *ppbVar24;
        uVar36 = uVar36 - 2;
        ppbVar24 = ppbVar24 + 2;
        *(undefined4 *)(*ppbVar1 + 0xe8) = 0xffffffff;
        *(undefined4 *)(pbVar13 + 0xe8) = 0xffffffff;
      } while (uVar36 != 0);
      if (uVar23 == uVar38) goto LAB_00f2cf8c;
    }
    lVar19 = uVar38 - uVar23;
    ppbVar24 = ppbVar15 + uVar23;
    do {
      lVar19 = lVar19 + -1;
      *(undefined4 *)(*ppbVar24 + 0xe8) = 0xffffffff;
      ppbVar24 = ppbVar24 + 1;
    } while (lVar19 != 0);
  }
LAB_00f2cf8c:
  iVar45 = *(int *)(param_1 + 2);
  if (iVar45 <= iVar9) {
    iVar45 = iVar9 + 1;
    if (iVar45 == 0) {
      pbVar13 = (btCollisionObject *)0x0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      pbVar13 = (btCollisionObject *)(*(code *)PTR_FUN_01048e38)((long)iVar45 * 0xf8,0x10);
    }
    uVar12 = *(uint *)((long)param_1 + 0xc);
    if (0 < (int)uVar12) {
      lVar19 = 0;
      do {
        puVar20 = (undefined8 *)(pbVar13 + lVar19);
        puVar31 = (undefined8 *)(param_1[3] + lVar19);
        lVar19 = lVar19 + 0xf8;
        uVar32 = *puVar31;
        puVar20[1] = puVar31[1];
        *puVar20 = uVar32;
        uVar32 = puVar31[2];
        puVar20[3] = puVar31[3];
        puVar20[2] = uVar32;
        uVar32 = puVar31[4];
        puVar20[5] = puVar31[5];
        puVar20[4] = uVar32;
        uVar32 = puVar31[6];
        puVar20[7] = puVar31[7];
        puVar20[6] = uVar32;
        uVar53 = puVar31[0x14];
        uVar50 = puVar31[0x17];
        uVar32 = puVar31[0x16];
        uVar42 = puVar31[0x11];
        uVar64 = puVar31[0x10];
        uVar49 = puVar31[0x13];
        uVar44 = puVar31[0x12];
        puVar20[0x15] = puVar31[0x15];
        puVar20[0x14] = uVar53;
        puVar20[0x17] = uVar50;
        puVar20[0x16] = uVar32;
        puVar20[0x11] = uVar42;
        puVar20[0x10] = uVar64;
        puVar20[0x13] = uVar49;
        puVar20[0x12] = uVar44;
        uVar44 = puVar31[0x1a];
        uVar53 = puVar31[0x1d];
        uVar50 = puVar31[0x1c];
        uVar32 = puVar31[0x1e];
        uVar42 = puVar31[0x19];
        uVar64 = puVar31[0x18];
        puVar20[0x1b] = puVar31[0x1b];
        puVar20[0x1a] = uVar44;
        puVar20[0x1d] = uVar53;
        puVar20[0x1c] = uVar50;
        puVar20[0x1e] = uVar32;
        puVar20[0x19] = uVar42;
        puVar20[0x18] = uVar64;
        in_d1 = puVar31[0xc];
        uVar50 = puVar31[0xf];
        uVar32 = puVar31[0xe];
        uVar42 = puVar31[9];
        uVar64 = puVar31[8];
        uVar53 = puVar31[0xb];
        in_d2 = puVar31[10];
        puVar20[0xd] = puVar31[0xd];
        puVar20[0xc] = in_d1;
        puVar20[0xf] = uVar50;
        puVar20[0xe] = uVar32;
        puVar20[9] = uVar42;
        puVar20[8] = uVar64;
        puVar20[0xb] = uVar53;
        puVar20[10] = in_d2;
      } while ((ulong)uVar12 * 0xf8 - lVar19 != 0);
    }
    if ((param_1[3] != (btCollisionObject *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    param_1[3] = pbVar13;
    *(int *)(param_1 + 2) = iVar45;
    *(undefined *)(param_1 + 4) = 1;
  }
  lVar19 = (long)*(int *)((long)param_1 + 0xc);
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  puStack_158 = (undefined4 *)0x0;
  local_160 = (btCollisionObject *)0x0;
  pbStack_148 = (btCollisionObject *)0x0;
  local_150 = (btCollisionObject *)0x0;
  pbStack_178 = (btCollisionObject *)0x0;
  local_180 = (btCollisionObject *)0x0;
  uStack_168 = 0;
  local_170 = (btCollisionObject *)0x0;
  local_190.tv_usec = 0;
  local_190.tv_sec = 0;
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (iVar45 < 0) {
      if ((param_1[3] != (btCollisionObject *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      param_1[3] = (btCollisionObject *)0x0;
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined *)(param_1 + 4) = 1;
    }
    lVar28 = lVar19 * 0xf8;
    do {
      bVar8 = lVar19 != -1;
      lVar19 = lVar19 + 1;
      puVar20 = (undefined8 *)(param_1[3] + lVar28);
      lVar28 = lVar28 + 0xf8;
      *puVar20 = 0;
      puVar20[1] = 0;
      puVar20[3] = pbStack_178;
      puVar20[2] = local_180;
      puVar20[5] = uStack_168;
      puVar20[4] = local_170;
      puVar20[7] = puStack_158;
      puVar20[6] = local_160;
      puVar20[0x19] = uStack_c8;
      puVar20[0x18] = local_d0;
      puVar20[0x1b] = uStack_b8;
      puVar20[0x1a] = local_c0;
      puVar20[0x1d] = uStack_a8;
      puVar20[0x1c] = local_b0;
      puVar20[0x1e] = local_a0;
      puVar20[0x11] = uStack_108;
      puVar20[0x10] = local_110;
      puVar20[0x13] = uStack_f8;
      puVar20[0x12] = local_100;
      puVar20[0x15] = uStack_e8;
      puVar20[0x14] = local_f0;
      puVar20[0x17] = uStack_d8;
      puVar20[0x16] = local_e0;
      puVar20[9] = pbStack_148;
      puVar20[8] = local_150;
      puVar20[0xb] = uStack_138;
      puVar20[10] = local_140;
      puVar20[0xd] = uStack_128;
      puVar20[0xc] = local_130;
      puVar20[0xf] = uStack_118;
      puVar20[0xe] = local_120;
    } while (bVar8);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (0 < iVar9) {
    uVar32 = NEON_fmov(0x3f800000,4);
    do {
      iVar9 = getOrInitSolverBody((btSequentialImpulseConstraintSolver *)param_1,*ppbVar15,
                                  *(float *)(param_8 + 0xc));
      fVar39 = (float)in_d1;
      this = (btRigidBody *)*ppbVar15;
      if (((((byte)this[0x100] >> 1 & 1) != 0) && (this != (btRigidBody *)0x0)) &&
         (*(float *)(this + 0x19c) != 0.0)) {
        uVar12 = *(uint *)(this + 0x250);
        lVar19 = (long)iVar9;
        pbVar13 = param_1[3];
        if ((uVar12 >> 1 & 1) == 0) {
          if ((uVar12 >> 2 & 1) == 0) goto LAB_00f2d234;
LAB_00f2d3fc:
          fVar41 = (float)btRigidBody::computeGyroscopicImpulseImplicit_World
                                    (this,*(float *)(param_8 + 0xc));
          fVar40 = *(float *)(pbVar13 + lVar19 * 0xf8 + 0xe8) + (float)in_d2;
          in_d1 = (ulong)(uint)fVar40;
          *(ulong *)(pbVar13 + lVar19 * 0xf8 + 0xe0) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(pbVar13 + lVar19 * 0xf8 + 0xe0) >>
                                        0x20),
                        fVar41 + (float)*(undefined8 *)(pbVar13 + lVar19 * 0xf8 + 0xe0));
          *(float *)(pbVar13 + lVar19 * 0xf8 + 0xe8) = fVar40;
        }
        else {
          uVar50 = *(undefined8 *)(this + 0x1d0);
          fVar55 = *(float *)(this + 0x1d8);
          fVar39 = (float)uVar32 / (float)uVar50;
          fVar46 = (float)((ulong)uVar32 >> 0x20) / (float)((ulong)uVar50 >> 0x20);
          uVar50 = NEON_fcmeq(uVar50,0,4);
          fVar47 = *(float *)(this + 0x18);
          fVar41 = *(float *)(this + 0x1c);
          uVar53 = *(undefined8 *)(this + 0x28);
          fVar60 = *(float *)(this + 0x30);
          fVar40 = (float)*(undefined8 *)(this + 8);
          fVar56 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
          fVar59 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((ulong)uVar50 >> 0x18),
                                   CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                            ~(byte)((ulong)uVar50 >> 0x10),
                                            CONCAT11((byte)((uint)fVar39 >> 8) &
                                                     ~(byte)((ulong)uVar50 >> 8),
                                                     SUB41(fVar39,0) & ~(byte)uVar50)));
          fVar43 = *(float *)(this + 0x20);
          fVar48 = *(float *)(this + 0x10);
          fVar62 = fVar47 * fVar59;
          fVar58 = fVar40 * fVar59;
          fVar57 = (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((ulong)uVar50 >> 0x38),
                                    CONCAT16((byte)((uint)fVar46 >> 0x10) &
                                             ~(byte)((ulong)uVar50 >> 0x30),
                                             CONCAT15((byte)((uint)fVar46 >> 8) &
                                                      ~(byte)((ulong)uVar50 >> 0x28),
                                                      CONCAT14(SUB41(fVar46,0) &
                                                               ~(byte)((ulong)uVar50 >> 0x20),fVar59
                                                              )))) >> 0x20);
          fVar46 = fVar41 * fVar57;
          fVar52 = fVar56 * fVar57;
          fVar54 = (float)uVar53;
          fVar59 = fVar54 * fVar59;
          fVar51 = (float)((ulong)uVar53 >> 0x20);
          fVar57 = fVar51 * fVar57;
          fVar39 = 1.0 / fVar55;
          if (fVar55 == 0.0) {
            fVar39 = fVar55;
          }
          fVar68 = fVar43 * fVar39;
          fVar69 = fVar48 * fVar39;
          fVar39 = fVar60 * fVar39;
          uVar53 = NEON_rev64(uVar53,4);
          uVar64 = *(undefined8 *)(this + 0x18c);
          fVar66 = *(float *)(this + 0x194);
          uVar50 = NEON_rev64(uVar64,4);
          fVar65 = (float)uVar64;
          fVar55 = (float)NEON_fmadd(fVar39,fVar43,fVar47 * fVar59 + fVar41 * fVar57);
          fVar67 = (float)((ulong)uVar64 >> 0x20);
          fVar63 = (float)((ulong)uVar50 >> 0x20);
          fVar46 = fVar65 * (fVar62 * fVar40 + fVar56 * fVar46 + fVar48 * fVar68) +
                   (fVar62 * fVar47 + fVar41 * fVar46 + fVar43 * fVar68) * (float)uVar50 +
                   ((float)uVar53 * fVar46 + fVar62 * fVar54 + fVar68 * fVar60) * fVar66;
          fVar43 = fVar67 * (fVar47 * fVar58 + fVar52 * fVar41 + fVar69 * fVar43) +
                   (fVar58 * fVar40 + fVar56 * fVar52 + fVar48 * fVar69) * fVar63 +
                   ((float)((ulong)uVar53 >> 0x20) * fVar58 + fVar52 * fVar51 + fVar69 * fVar60) *
                   fVar66;
          fVar40 = (fVar57 * fVar56 + fVar59 * fVar40 + fVar48 * fVar39) * fVar65 + fVar55 * fVar67
                   + (fVar57 * fVar51 + fVar59 * fVar54 + fVar60 * fVar39) * fVar66;
          fVar41 = -(fVar46 * fVar66) + fVar40 * fVar67;
          fVar39 = -(fVar43 * (float)uVar50) + fVar65 * fVar46;
          fVar40 = -(fVar40 * fVar63) + fVar66 * fVar43;
          fVar46 = (float)NEON_fmadd(fVar41,fVar41,fVar39 * fVar39);
          fVar43 = *(float *)(param_8 + 0x4c);
          fVar46 = fVar46 + fVar40 * fVar40;
          if (fVar43 * fVar43 < fVar46) {
            fVar43 = fVar43 / SQRT(fVar46);
            fVar41 = fVar43 * fVar41;
            fVar39 = fVar39 * fVar43;
            fVar40 = fVar40 * fVar43;
          }
          fVar43 = (float)*(undefined8 *)(this + 0x14c) * fVar41 +
                   (float)*(undefined8 *)(this + 0x15c) * fVar40 +
                   (float)*(undefined8 *)(this + 0x16c) * fVar39;
          fVar46 = (float)((ulong)*(undefined8 *)(this + 0x14c) >> 0x20) * fVar41 +
                   (float)((ulong)*(undefined8 *)(this + 0x15c) >> 0x20) * fVar40 +
                   (float)((ulong)*(undefined8 *)(this + 0x16c) >> 0x20) * fVar39;
          in_d2 = CONCAT44(fVar46,fVar43);
          fVar47 = *(float *)(param_8 + 0xc);
          fVar39 = (float)NEON_fmsub(*(float *)(this + 0x154) * fVar41 +
                                     *(float *)(this + 0x164) * fVar40 +
                                     *(float *)(this + 0x174) * fVar39,fVar47,
                                     *(undefined4 *)(pbVar13 + lVar19 * 0xf8 + 0xe8));
          in_d1 = (ulong)(uint)fVar39;
          *(ulong *)(pbVar13 + lVar19 * 0xf8 + 0xe0) =
               CONCAT44((float)((ulong)*(undefined8 *)(pbVar13 + lVar19 * 0xf8 + 0xe0) >> 0x20) -
                        fVar46 * fVar47,
                        (float)*(undefined8 *)(pbVar13 + lVar19 * 0xf8 + 0xe0) - fVar43 * fVar47);
          *(float *)(pbVar13 + lVar19 * 0xf8 + 0xe8) = fVar39;
          uVar12 = *(uint *)(this + 0x250);
          if ((uVar12 >> 2 & 1) != 0) goto LAB_00f2d3fc;
LAB_00f2d234:
          fVar40 = (float)in_d1;
        }
        if ((uVar12 >> 3 & 1) != 0) {
          fVar39 = (float)btRigidBody::computeGyroscopicImpulseImplicit_Body
                                    (this,*(float *)(param_8 + 0xc));
          fVar41 = *(float *)(pbVar13 + lVar19 * 0xf8 + 0xe8) + (float)in_d2;
          in_d1 = (ulong)(uint)fVar41;
          *(ulong *)(pbVar13 + lVar19 * 0xf8 + 0xe0) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(pbVar13 + lVar19 * 0xf8 + 0xe0) >>
                                        0x20),
                        fVar39 + (float)*(undefined8 *)(pbVar13 + lVar19 * 0xf8 + 0xe0));
          *(float *)(pbVar13 + lVar19 * 0xf8 + 0xe8) = fVar41;
        }
      }
      uVar38 = uVar38 - 1;
      ppbVar15 = ppbVar15 + 1;
    } while (uVar38 != 0);
  }
  iVar9 = (int)param_7;
  if (0 < iVar9) {
    uVar38 = (ulong)param_7 & 0xffffffff;
    pplVar34 = pplVar16;
    do {
      plVar37 = *pplVar34;
      (**(code **)(*plVar37 + 0x10))(plVar37);
      uVar38 = uVar38 - 1;
      *(undefined4 *)(plVar37 + 7) = 0;
      pplVar34 = pplVar34 + 1;
    } while (uVar38 != 0);
  }
  uVar12 = *(uint *)((long)param_1 + 0x10c);
  if (((int)uVar12 < iVar9) && (*(int *)(param_1 + 0x22) < iVar9)) {
    if (iVar9 == 0) {
      pbVar13 = (btCollisionObject *)0x0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      pbVar13 = (btCollisionObject *)
                (*(code *)PTR_FUN_01048e38)
                          (-(((ulong)param_7 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 |
                           ((ulong)param_7 & 0xffffffff) << 3,0x10);
      uVar12 = *(uint *)((long)param_1 + 0x10c);
    }
    if (0 < (int)uVar12) {
      lVar19 = 0;
      do {
        *(undefined8 *)(pbVar13 + lVar19) = *(undefined8 *)(param_1[0x23] + lVar19);
        lVar19 = lVar19 + 8;
      } while ((ulong)uVar12 * 8 - lVar19 != 0);
    }
    if ((param_1[0x23] != (btCollisionObject *)0x0) && (*(char *)(param_1 + 0x24) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    param_1[0x23] = pbVar13;
    *(int *)(param_1 + 0x22) = iVar9;
    *(undefined *)(param_1 + 0x24) = 1;
  }
  *(int *)((long)param_1 + 0x10c) = iVar9;
  if (iVar9 < 1) {
    iVar45 = 0;
  }
  else {
    lVar19 = 0;
    iVar45 = 0;
    do {
      plVar37 = *(long **)((long)pplVar16 + lVar19);
      pbVar13 = param_1[0x23];
      puVar20 = (undefined8 *)plVar37[8];
      if (puVar20 != (undefined8 *)0x0) {
        puVar20[5] = 0;
        puVar20[4] = 0;
        puVar20[7] = 0;
        puVar20[6] = 0;
        puVar20[1] = 0;
        *puVar20 = 0;
        puVar20[3] = 0;
        puVar20[2] = 0;
        plVar37 = *(long **)((long)pplVar16 + lVar19);
      }
      if (*(char *)((long)plVar37 + 0x1c) == '\0') {
        *(undefined8 *)(pbVar13 + lVar19) = 0;
        iVar18 = 0;
      }
      else {
        (**(code **)(*plVar37 + 0x20))(plVar37,pbVar13 + lVar19);
        iVar18 = *(int *)(pbVar13 + lVar19);
      }
      iVar45 = iVar18 + iVar45;
      lVar19 = lVar19 + 8;
    } while (((ulong)param_7 & 0xffffffff) * 8 - lVar19 != 0);
  }
  uVar12 = *(uint *)((long)param_1 + 0x4c);
  if (((int)uVar12 < iVar45) && (*(int *)(param_1 + 10) < iVar45)) {
    if (iVar45 == 0) {
      pbVar13 = (btCollisionObject *)0x0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      pbVar13 = (btCollisionObject *)(*(code *)PTR_FUN_01048e38)((long)iVar45 * 0xa0,0x10);
      uVar12 = *(uint *)((long)param_1 + 0x4c);
    }
    if (0 < (int)uVar12) {
      lVar19 = 0;
      do {
        puVar20 = (undefined8 *)(pbVar13 + lVar19);
        puVar31 = (undefined8 *)(param_1[0xb] + lVar19);
        lVar19 = lVar19 + 0xa0;
        uVar53 = *puVar31;
        uVar50 = puVar31[3];
        uVar32 = puVar31[2];
        puVar20[1] = puVar31[1];
        *puVar20 = uVar53;
        puVar20[3] = uVar50;
        puVar20[2] = uVar32;
        uVar53 = puVar31[8];
        uVar50 = puVar31[0xb];
        uVar32 = puVar31[10];
        uVar49 = puVar31[5];
        uVar44 = puVar31[4];
        uVar42 = puVar31[7];
        uVar64 = puVar31[6];
        puVar20[9] = puVar31[9];
        puVar20[8] = uVar53;
        puVar20[0xb] = uVar50;
        puVar20[10] = uVar32;
        puVar20[5] = uVar49;
        puVar20[4] = uVar44;
        puVar20[7] = uVar42;
        puVar20[6] = uVar64;
        uVar53 = puVar31[0x10];
        uVar50 = puVar31[0x13];
        uVar32 = puVar31[0x12];
        uVar49 = puVar31[0xd];
        uVar44 = puVar31[0xc];
        uVar42 = puVar31[0xf];
        uVar64 = puVar31[0xe];
        puVar20[0x11] = puVar31[0x11];
        puVar20[0x10] = uVar53;
        puVar20[0x13] = uVar50;
        puVar20[0x12] = uVar32;
        puVar20[0xd] = uVar49;
        puVar20[0xc] = uVar44;
        puVar20[0xf] = uVar42;
        puVar20[0xe] = uVar64;
      } while ((ulong)uVar12 * 0xa0 - lVar19 != 0);
    }
    if ((param_1[0xb] != (btCollisionObject *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    param_1[0xb] = pbVar13;
    *(int *)(param_1 + 10) = iVar45;
    *(undefined *)(param_1 + 0xc) = 1;
  }
  *(int *)((long)param_1 + 0x4c) = iVar45;
  if (0 < iVar9) {
    uVar38 = 0;
    iVar9 = 0;
    pbVar13 = param_1[0x23];
    do {
      piVar2 = (int *)(pbVar13 + uVar38 * 8);
      iVar45 = *piVar2;
      if (iVar45 != 0) {
        plVar37 = pplVar16[uVar38];
        pbVar35 = param_1[0xb];
        pbVar13 = (btCollisionObject *)plVar37[5];
        pbVar14 = (btCollisionObject *)plVar37[6];
        iVar10 = getOrInitSolverBody((btSequentialImpulseConstraintSolver *)param_1,pbVar13,
                                     *(float *)(param_8 + 0xc));
        iVar11 = getOrInitSolverBody((btSequentialImpulseConstraintSolver *)param_1,pbVar14,
                                     *(float *)(param_8 + 0xc));
        iVar18 = *(int *)(param_8 + 0x14);
        iVar45 = *(int *)(plVar37 + 4);
        if (*(int *)(plVar37 + 4) < 1) {
          iVar45 = iVar18;
        }
        if (*(int *)(param_1 + 0x25) < iVar45) {
          *(int *)(param_1 + 0x25) = iVar45;
        }
        lVar19 = (long)iVar9;
        pbVar25 = param_1[3];
        if (0 < *piVar2) {
          lVar28 = 0;
          piVar30 = (int *)(pbVar35 + lVar19 * 0xa0 + 0x9c);
          do {
            *(undefined8 *)(piVar30 + -9) = 0;
            *(undefined8 *)(piVar30 + -0xb) = 0;
            lVar28 = lVar28 + 1;
            *(undefined8 *)(piVar30 + -0xd) = 0;
            *(undefined8 *)(piVar30 + -0xf) = 0;
            *(undefined8 *)(piVar30 + -1) = 0;
            *(undefined8 *)(piVar30 + -3) = 0;
            *(undefined8 *)(piVar30 + -5) = 0;
            *(undefined8 *)(piVar30 + -7) = 0;
            *(undefined8 *)(piVar30 + -0x11) = 0;
            *(undefined8 *)(piVar30 + -0x13) = 0;
            *(undefined8 *)(piVar30 + -0x15) = 0;
            *(undefined8 *)(piVar30 + -0x17) = 0;
            *(undefined8 *)(piVar30 + -0x19) = 0;
            *(undefined8 *)(piVar30 + -0x1b) = 0;
            *(undefined8 *)(piVar30 + -0x1d) = 0;
            *(undefined8 *)(piVar30 + -0x1f) = 0;
            *(undefined8 *)(piVar30 + -0x21) = 0;
            *(undefined8 *)(piVar30 + -0x23) = 0;
            *(undefined8 *)(piVar30 + -0x25) = 0;
            *(undefined8 *)(piVar30 + -0x27) = 0;
            *(undefined8 *)(piVar30 + -9) = 0x7f7fffffff7fffff;
            *(undefined8 *)(piVar30 + -0xf) = 0;
            piVar30[-1] = iVar10;
            *piVar30 = iVar11;
            piVar30[-3] = iVar45;
            piVar30 = piVar30 + 0x28;
          } while (lVar28 < *piVar2);
          iVar18 = *(int *)(param_8 + 0x14);
        }
        *(undefined8 *)(pbVar25 + (long)iVar10 * 0xf8 + 0x48) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar10 * 0xf8 + 0x40) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar10 * 0xf8 + 0x58) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar10 * 0xf8 + 0x50) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar10 * 0xf8 + 0x98) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar10 * 0xf8 + 0x90) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar10 * 0xf8 + 0xa8) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar10 * 0xf8 + 0xa0) = 0;
        local_180 = pbVar35 + (long)iVar9 * 0xa0;
        *(undefined8 *)(pbVar25 + (long)iVar11 * 0xf8 + 0x48) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar11 * 0xf8 + 0x40) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar11 * 0xf8 + 0x58) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar11 * 0xf8 + 0x50) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar11 * 0xf8 + 0x98) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar11 * 0xf8 + 0x90) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar11 * 0xf8 + 0xa8) = 0;
        *(undefined8 *)(pbVar25 + (long)iVar11 * 0xf8 + 0xa0) = 0;
        local_190.tv_sec = CONCAT44(*(undefined4 *)(param_8 + 0x20),1.0 / *(float *)(param_8 + 0xc))
        ;
        puStack_158 = (undefined4 *)(pbVar35 + lVar19 * 0xa0 + 0x74);
        *puStack_158 = *(undefined4 *)(param_8 + 0x28);
        local_190.tv_usec = (__suseconds_t)(pbVar35 + lVar19 * 0xa0 + 0x10);
        pbStack_178 = pbVar35 + lVar19 * 0xa0 + 0x30;
        uStack_168 = CONCAT44(uStack_168._4_4_,0x28);
        local_170 = pbVar35 + lVar19 * 0xa0 + 0x20;
        local_160 = pbVar35 + lVar19 * 0xa0 + 0x70;
        local_150 = pbVar35 + lVar19 * 0xa0 + 0x78;
        pbStack_148 = pbVar35 + lVar19 * 0xa0 + 0x7c;
        uStack_138 = CONCAT44(*(undefined4 *)(param_8 + 4),iVar18);
        (**(code **)(*pplVar16[uVar38] + 0x28))(pplVar16[uVar38],&local_190);
        if (0 < *piVar2) {
          lVar28 = 0;
          pfVar17 = (float *)(pbVar35 + lVar19 * 0xa0 + 0x48);
          do {
            fVar39 = *(float *)(pplVar16[uVar38] + 3);
            if (fVar39 <= pfVar17[0xd]) {
              pfVar17[0xd] = fVar39;
            }
            if (pfVar17[0xc] <= -fVar39) {
              pfVar17[0xc] = -fVar39;
            }
            *(long **)(pfVar17 + 0x10) = plVar37;
            lVar19 = plVar37[5];
            fVar40 = (float)((ulong)*(undefined8 *)(pfVar17 + -0x12) >> 0x20);
            fVar46 = *(float *)(lVar19 + 0x14c);
            fVar39 = (float)*(undefined8 *)(pfVar17 + -0x12);
            fVar52 = *(float *)(lVar19 + 0x154);
            fVar48 = *(float *)(lVar19 + 0x160);
            uVar32 = *(undefined8 *)(lVar19 + 0x278);
            fVar54 = *(float *)(lVar19 + 0x164);
            uVar50 = NEON_rev64(CONCAT44(*(float *)(lVar19 + 0x150) * fVar40,
                                         *(float *)(lVar19 + 0x15c) * fVar39),4);
            fVar41 = pfVar17[-0x10];
            fVar43 = (float)NEON_fmadd(*(undefined4 *)(lVar19 + 0x174),fVar41,
                                       *(float *)(lVar19 + 0x16c) * fVar39 +
                                       *(float *)(lVar19 + 0x170) * fVar40);
            fVar47 = *(float *)(lVar19 + 0x280);
            pfVar17[1] = 0.0;
            *pfVar17 = fVar47 * fVar43;
            *(ulong *)(pfVar17 + -2) =
                 CONCAT44((float)((ulong)uVar32 >> 0x20) *
                          ((float)((ulong)uVar50 >> 0x20) + fVar40 * fVar48 + fVar54 * fVar41),
                          (float)uVar32 * ((float)uVar50 + fVar39 * fVar46 + fVar52 * fVar41));
            lVar19 = plVar37[6];
            fVar52 = *(float *)(lVar19 + 0x14c);
            fVar43 = (float)*(undefined8 *)(pfVar17 + -10);
            fVar55 = *(float *)(lVar19 + 0x154);
            fVar51 = *(float *)(lVar19 + 0x160);
            fVar46 = (float)((ulong)*(undefined8 *)(pfVar17 + -10) >> 0x20);
            uVar32 = *(undefined8 *)(lVar19 + 0x278);
            fVar56 = *(float *)(lVar19 + 0x164);
            uVar50 = NEON_rev64(CONCAT44(*(float *)(lVar19 + 0x150) * fVar46,
                                         *(float *)(lVar19 + 0x15c) * fVar43),4);
            fVar47 = pfVar17[-8];
            fVar48 = (float)NEON_fmadd(*(undefined4 *)(lVar19 + 0x174),fVar47,
                                       *(float *)(lVar19 + 0x16c) * fVar43 +
                                       *(float *)(lVar19 + 0x170) * fVar46);
            fVar54 = *(float *)(lVar19 + 0x280);
            pfVar17[5] = 0.0;
            pfVar17[4] = fVar54 * fVar48;
            fVar54 = pfVar17[-0xe];
            fVar48 = pfVar17[-0xd];
            *(ulong *)(pfVar17 + 2) =
                 CONCAT44((float)((ulong)uVar32 >> 0x20) *
                          ((float)((ulong)uVar50 >> 0x20) + fVar46 * fVar51 + fVar56 * fVar47),
                          (float)uVar32 * ((float)uVar50 + fVar43 * fVar52 + fVar55 * fVar47));
            fVar52 = pfVar17[-0xc];
            uVar32 = NEON_rev64(CONCAT44(*(float *)(pbVar13 + 0x160) * fVar40,
                                         *(float *)(pbVar13 + 0x16c) * fVar39),4);
            uVar61 = NEON_fmadd(fVar48,fVar48,fVar54 * fVar54);
            uVar61 = NEON_fmadd(fVar52,fVar52,uVar61);
            uVar50 = NEON_rev64(CONCAT44(*(float *)(pbVar14 + 0x160) * fVar46,
                                         *(float *)(pbVar14 + 0x16c) * fVar43),4);
            fVar59 = (float)NEON_fmadd(*(undefined4 *)(pbVar13 + 0x154),fVar41,
                                       (float)*(undefined8 *)(pbVar13 + 0x14c) * fVar39 +
                                       (float)((ulong)*(undefined8 *)(pbVar13 + 0x14c) >> 0x20) *
                                       fVar40);
            fVar55 = pfVar17[-6];
            fVar51 = pfVar17[-5];
            fVar56 = pfVar17[-4];
            fVar62 = (float)NEON_fmadd(uVar61,*(undefined4 *)(pbVar13 + 0x19c),
                                       ((float)uVar32 + fVar39 * *(float *)(pbVar13 + 0x15c) +
                                       *(float *)(pbVar13 + 0x164) * fVar41) * fVar40);
            uVar61 = NEON_fmadd(fVar51,fVar51,fVar55 * fVar55);
            uVar61 = NEON_fmadd(fVar56,fVar56,uVar61);
            fVar57 = (float)NEON_fmadd(*(undefined4 *)(pbVar14 + 0x154),fVar47,
                                       (float)*(undefined8 *)(pbVar14 + 0x14c) * fVar43 +
                                       (float)((ulong)*(undefined8 *)(pbVar14 + 0x14c) >> 0x20) *
                                       fVar46);
            fVar59 = (float)NEON_fmadd(uVar61,*(undefined4 *)(pbVar14 + 0x19c),
                                       fVar62 + fVar59 * fVar39 +
                                       ((float)((ulong)uVar32 >> 0x20) +
                                        fVar40 * *(float *)(pbVar13 + 0x170) +
                                       *(float *)(pbVar13 + 0x174) * fVar41) * fVar41);
            fVar62 = 0.0;
            fVar57 = fVar59 + fVar57 * fVar43 +
                     ((float)uVar50 + fVar43 * *(float *)(pbVar14 + 0x15c) +
                     *(float *)(pbVar14 + 0x164) * fVar47) * fVar46 +
                     ((float)((ulong)uVar50 >> 0x20) + fVar46 * *(float *)(pbVar14 + 0x170) +
                     *(float *)(pbVar14 + 0x174) * fVar47) * fVar47;
            fVar59 = 0.0;
            if (1.192093e-07 < ABS(fVar57)) {
              fVar59 = 1.0 / (pfVar17[0xb] + fVar57);
            }
            pfVar17[9] = fVar59;
            fVar63 = 0.0;
            fVar66 = 0.0;
            fVar58 = 0.0;
            fVar60 = 0.0;
            pfVar17[0xb] = pfVar17[0xb] * fVar59;
            fVar57 = 0.0;
            if (*(long *)(pbVar25 + (long)iVar10 * 0xf8 + 0xf0) != 0) {
              fVar66 = *(float *)(pbVar25 + (long)iVar10 * 0xf8 + 0xd0);
              fVar63 = *(float *)(pbVar25 + (long)iVar10 * 0xf8 + 0xd4);
              fVar62 = *(float *)(pbVar25 + (long)iVar10 * 0xf8 + 0xd8);
              fVar57 = *(float *)(pbVar25 + (long)iVar10 * 0xf8 + 0xe0);
              fVar58 = *(float *)(pbVar25 + (long)iVar10 * 0xf8 + 0xe4);
              fVar60 = *(float *)(pbVar25 + (long)iVar10 * 0xf8 + 0xe8);
            }
            if (*(long *)(pbVar25 + (long)iVar11 * 0xf8 + 0xf0) == 0) {
              fVar65 = 0.0;
              fVar67 = 0.0;
              fVar70 = 0.0;
              fVar68 = 0.0;
              fVar69 = 0.0;
              fVar71 = 0.0;
            }
            else {
              fVar70 = *(float *)(pbVar25 + (long)iVar11 * 0xf8 + 0xd0);
              fVar67 = *(float *)(pbVar25 + (long)iVar11 * 0xf8 + 0xd4);
              fVar65 = *(float *)(pbVar25 + (long)iVar11 * 0xf8 + 0xd8);
              fVar68 = *(float *)(pbVar25 + (long)iVar11 * 0xf8 + 0xe0);
              fVar69 = *(float *)(pbVar25 + (long)iVar11 * 0xf8 + 0xe4);
              fVar71 = *(float *)(pbVar25 + (long)iVar11 * 0xf8 + 0xe8);
            }
            lVar28 = lVar28 + 1;
            uVar61 = NEON_fmadd(*(float *)(pbVar13 + 0x180) + fVar63,fVar48,
                                (*(float *)(pbVar13 + 0x17c) + fVar66) * fVar54);
            uVar61 = NEON_fmadd(*(float *)(pbVar13 + 0x184) + fVar62,fVar52,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar13 + 0x18c) + fVar57,fVar39,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar13 + 400) + fVar58,fVar40,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar13 + 0x194) + fVar60,fVar41,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar14 + 0x17c) + fVar70,fVar55,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar14 + 0x180) + fVar67,fVar51,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar14 + 0x184) + fVar65,fVar56,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar14 + 0x18c) + fVar68,fVar43,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar14 + 400) + fVar69,fVar46,uVar61);
            uVar61 = NEON_fmadd(*(float *)(pbVar14 + 0x194) + fVar71,fVar47,uVar61);
            pfVar17[7] = 0.0;
            fVar39 = (float)NEON_fmsub(uVar61,uStack_138._4_4_,pfVar17[10]);
            pfVar17[10] = fVar39 * fVar59;
            pfVar17 = pfVar17 + 0x28;
          } while (lVar28 < *piVar2);
        }
        pbVar13 = param_1[0x23];
        iVar45 = *(int *)(pbVar13 + uVar38 * 8);
      }
      iVar9 = iVar45 + iVar9;
      uVar38 = uVar38 + 1;
    } while (uVar38 != ((ulong)param_7 & 0xffffffff));
  }
  pbVar13 = (btCollisionObject *)
            (**(code **)(*param_1 + 0x38))(param_1,param_4,(int)param_5,param_8);
  uVar12 = *(uint *)((long)param_1 + 0x4c);
  uVar23 = (ulong)uVar12;
  uVar22 = *(uint *)((long)param_1 + 0xcc);
  uVar3 = *(uint *)((long)param_1 + 0x2c);
  uVar36 = (ulong)uVar3;
  uVar4 = *(uint *)((long)param_1 + 0x6c);
  uVar38 = (ulong)uVar4;
  if (((int)uVar22 < (int)uVar12) && (*(int *)(param_1 + 0x1a) < (int)uVar12)) {
    if (uVar12 == 0) {
      pbVar14 = (btCollisionObject *)0x0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      pbVar14 = (btCollisionObject *)(*(code *)PTR_FUN_01048e38)((long)(int)uVar12 << 2,0x10);
      uVar22 = *(uint *)((long)param_1 + 0xcc);
    }
    pbVar13 = param_1[0x1b];
    if ((int)uVar22 < 1) {
      if (pbVar13 != (btCollisionObject *)0x0) goto LAB_00f2ddb8;
    }
    else {
      uVar21 = (ulong)uVar22;
      if ((uVar22 < 8) || ((pbVar14 < pbVar13 + uVar21 * 4 && (pbVar13 < pbVar14 + uVar21 * 4)))) {
        uVar26 = 0;
      }
      else {
        uVar26 = uVar21 & 0xfffffff8;
        puVar20 = (undefined8 *)(pbVar13 + 0x10);
        puVar31 = (undefined8 *)(pbVar14 + 0x10);
        uVar33 = uVar26;
        do {
          puVar6 = puVar20 + -1;
          uVar32 = puVar20[-2];
          uVar53 = puVar20[1];
          uVar50 = *puVar20;
          uVar33 = uVar33 - 8;
          puVar20 = puVar20 + 4;
          puVar31[-1] = *puVar6;
          puVar31[-2] = uVar32;
          puVar31[1] = uVar53;
          *puVar31 = uVar50;
          puVar31 = puVar31 + 4;
        } while (uVar33 != 0);
        if (uVar26 == uVar21) goto LAB_00f2ddb8;
      }
      lVar19 = uVar21 - uVar26;
      puVar27 = (undefined4 *)(pbVar13 + uVar26 * 4);
      puVar29 = (undefined4 *)(pbVar14 + uVar26 * 4);
      do {
        lVar19 = lVar19 + -1;
        *puVar29 = *puVar27;
        puVar27 = puVar27 + 1;
        puVar29 = puVar29 + 1;
      } while (lVar19 != 0);
LAB_00f2ddb8:
      if (*(char *)(param_1 + 0x1c) != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        pbVar13 = (btCollisionObject *)(*(code *)PTR_FUN_01048e40)();
      }
    }
    param_1[0x1b] = pbVar14;
    *(undefined *)(param_1 + 0x1c) = 1;
    *(uint *)(param_1 + 0x1a) = uVar12;
  }
  *(uint *)((long)param_1 + 0xcc) = uVar12;
  lVar19 = (long)(int)uVar3;
  if (((byte)param_8[0x40] >> 4 & 1) == 0) {
    uVar22 = *(uint *)((long)param_1 + 0xac);
    if (((int)uVar22 < (int)uVar3) && (*(int *)(param_1 + 0x16) < (int)uVar3)) {
      if (uVar3 == 0) {
        pbVar14 = (btCollisionObject *)0x0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        pbVar14 = (btCollisionObject *)(*(code *)PTR_FUN_01048e38)(lVar19 << 2,0x10);
        uVar22 = *(uint *)((long)param_1 + 0xac);
      }
      pbVar13 = param_1[0x17];
      if ((int)uVar22 < 1) {
        if (pbVar13 != (btCollisionObject *)0x0) goto LAB_00f2dfbc;
      }
      else {
        uVar21 = (ulong)uVar22;
        if ((uVar22 < 8) || ((pbVar14 < pbVar13 + uVar21 * 4 && (pbVar13 < pbVar14 + uVar21 * 4))))
        {
          uVar26 = 0;
        }
        else {
          uVar26 = uVar21 & 0xfffffff8;
          puVar20 = (undefined8 *)(pbVar13 + 0x10);
          puVar31 = (undefined8 *)(pbVar14 + 0x10);
          uVar33 = uVar26;
          do {
            puVar6 = puVar20 + -1;
            uVar32 = puVar20[-2];
            uVar53 = puVar20[1];
            uVar50 = *puVar20;
            uVar33 = uVar33 - 8;
            puVar20 = puVar20 + 4;
            puVar31[-1] = *puVar6;
            puVar31[-2] = uVar32;
            puVar31[1] = uVar53;
            *puVar31 = uVar50;
            puVar31 = puVar31 + 4;
          } while (uVar33 != 0);
          if (uVar26 == uVar21) goto LAB_00f2dfbc;
        }
        lVar19 = uVar21 - uVar26;
        puVar27 = (undefined4 *)(pbVar13 + uVar26 * 4);
        puVar29 = (undefined4 *)(pbVar14 + uVar26 * 4);
        do {
          lVar19 = lVar19 + -1;
          *puVar29 = *puVar27;
          puVar27 = puVar27 + 1;
          puVar29 = puVar29 + 1;
        } while (lVar19 != 0);
LAB_00f2dfbc:
        if (*(char *)(param_1 + 0x18) != '\0') {
          gNumAlignedFree = gNumAlignedFree + 1;
          pbVar13 = (btCollisionObject *)(*(code *)PTR_FUN_01048e40)();
        }
      }
      param_1[0x17] = pbVar14;
      *(undefined *)(param_1 + 0x18) = 1;
      *(uint *)(param_1 + 0x16) = uVar3;
    }
    *(uint *)((long)param_1 + 0xac) = uVar3;
  }
  else {
    uVar22 = *(uint *)((long)param_1 + 0xac);
    iVar9 = (int)(lVar19 << 1);
    if (((int)uVar22 < iVar9) && (*(int *)(param_1 + 0x16) < iVar9)) {
      if (uVar3 == 0) {
        pbVar14 = (btCollisionObject *)0x0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        pbVar14 = (btCollisionObject *)(*(code *)PTR_FUN_01048e38)(lVar19 << 3,0x10);
        uVar22 = *(uint *)((long)param_1 + 0xac);
      }
      pbVar13 = param_1[0x17];
      if ((int)uVar22 < 1) {
        if (pbVar13 != (btCollisionObject *)0x0) goto LAB_00f2e034;
      }
      else {
        uVar21 = (ulong)uVar22;
        if ((uVar22 < 8) || ((pbVar14 < pbVar13 + uVar21 * 4 && (pbVar13 < pbVar14 + uVar21 * 4))))
        {
          uVar26 = 0;
        }
        else {
          uVar26 = uVar21 & 0xfffffff8;
          puVar20 = (undefined8 *)(pbVar13 + 0x10);
          puVar31 = (undefined8 *)(pbVar14 + 0x10);
          uVar33 = uVar26;
          do {
            puVar6 = puVar20 + -1;
            uVar32 = puVar20[-2];
            uVar53 = puVar20[1];
            uVar50 = *puVar20;
            uVar33 = uVar33 - 8;
            puVar20 = puVar20 + 4;
            puVar31[-1] = *puVar6;
            puVar31[-2] = uVar32;
            puVar31[1] = uVar53;
            *puVar31 = uVar50;
            puVar31 = puVar31 + 4;
          } while (uVar33 != 0);
          if (uVar26 == uVar21) goto LAB_00f2e034;
        }
        lVar19 = uVar21 - uVar26;
        puVar27 = (undefined4 *)(pbVar13 + uVar26 * 4);
        puVar29 = (undefined4 *)(pbVar14 + uVar26 * 4);
        do {
          lVar19 = lVar19 + -1;
          *puVar29 = *puVar27;
          puVar27 = puVar27 + 1;
          puVar29 = puVar29 + 1;
        } while (lVar19 != 0);
LAB_00f2e034:
        if (*(char *)(param_1 + 0x18) != '\0') {
          gNumAlignedFree = gNumAlignedFree + 1;
          pbVar13 = (btCollisionObject *)(*(code *)PTR_FUN_01048e40)();
        }
      }
      param_1[0x17] = pbVar14;
      *(undefined *)(param_1 + 0x18) = 1;
      *(int *)(param_1 + 0x16) = iVar9;
    }
    *(int *)((long)param_1 + 0xac) = iVar9;
  }
  uVar22 = *(uint *)((long)param_1 + 0xec);
  if (((int)uVar22 < (int)uVar4) && (*(int *)(param_1 + 0x1e) < (int)uVar4)) {
    if (uVar4 == 0) {
      pbVar14 = (btCollisionObject *)0x0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      pbVar14 = (btCollisionObject *)(*(code *)PTR_FUN_01048e38)((long)(int)uVar4 << 2,0x10);
      uVar22 = *(uint *)((long)param_1 + 0xec);
    }
    pbVar13 = param_1[0x1f];
    if ((int)uVar22 < 1) {
      if (pbVar13 != (btCollisionObject *)0x0) goto LAB_00f2e170;
    }
    else {
      uVar21 = (ulong)uVar22;
      if ((uVar22 < 8) || ((pbVar14 < pbVar13 + uVar21 * 4 && (pbVar13 < pbVar14 + uVar21 * 4)))) {
        uVar26 = 0;
      }
      else {
        uVar26 = uVar21 & 0xfffffff8;
        puVar20 = (undefined8 *)(pbVar13 + 0x10);
        puVar31 = (undefined8 *)(pbVar14 + 0x10);
        uVar33 = uVar26;
        do {
          puVar6 = puVar20 + -1;
          uVar32 = puVar20[-2];
          uVar53 = puVar20[1];
          uVar50 = *puVar20;
          uVar33 = uVar33 - 8;
          puVar20 = puVar20 + 4;
          puVar31[-1] = *puVar6;
          puVar31[-2] = uVar32;
          puVar31[1] = uVar53;
          *puVar31 = uVar50;
          puVar31 = puVar31 + 4;
        } while (uVar33 != 0);
        if (uVar26 == uVar21) goto LAB_00f2e170;
      }
      lVar19 = uVar21 - uVar26;
      puVar27 = (undefined4 *)(pbVar13 + uVar26 * 4);
      puVar29 = (undefined4 *)(pbVar14 + uVar26 * 4);
      do {
        lVar19 = lVar19 + -1;
        *puVar29 = *puVar27;
        puVar27 = puVar27 + 1;
        puVar29 = puVar29 + 1;
      } while (lVar19 != 0);
LAB_00f2e170:
      if (*(char *)(param_1 + 0x20) != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        pbVar13 = (btCollisionObject *)(*(code *)PTR_FUN_01048e40)();
      }
    }
    param_1[0x1f] = pbVar14;
    *(undefined *)(param_1 + 0x20) = 1;
    *(uint *)(param_1 + 0x1e) = uVar4;
  }
  *(uint *)((long)param_1 + 0xec) = uVar4;
  if (0 < (int)uVar12) {
    pbVar14 = param_1[0x1b];
    if (uVar12 < 8) {
      uVar21 = 0;
    }
    else {
      uVar21 = uVar23 & 0xfffffff8;
      uVar50 = 0x300000002;
      uVar32 = 0x100000000;
      puVar20 = (undefined8 *)(pbVar14 + 0x10);
      uVar26 = uVar21;
      do {
        iVar9 = (int)((ulong)uVar32 >> 0x20);
        iVar45 = (int)((ulong)uVar50 >> 0x20);
        uVar26 = uVar26 - 8;
        puVar20[-1] = uVar50;
        puVar20[-2] = uVar32;
        puVar20[1] = CONCAT44(iVar45 + 4,(int)uVar50 + 4);
        *puVar20 = CONCAT44(iVar9 + 4,(int)uVar32 + 4);
        puVar20 = puVar20 + 4;
        uVar32 = CONCAT44(iVar9 + 8,(int)uVar32 + 8);
        uVar50 = CONCAT44(iVar45 + 8,(int)uVar50 + 8);
      } while (uVar26 != 0);
      if (uVar21 == uVar23) goto LAB_00f2e220;
    }
    do {
      *(int *)(pbVar14 + uVar21 * 4) = (int)uVar21;
      uVar21 = uVar21 + 1;
    } while (uVar23 != uVar21);
  }
LAB_00f2e220:
  if (0 < (int)uVar3) {
    pbVar14 = param_1[0x17];
    if (uVar3 < 8) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar36 & 0xfffffff8;
      uVar50 = 0x300000002;
      uVar32 = 0x100000000;
      puVar20 = (undefined8 *)(pbVar14 + 0x10);
      uVar21 = uVar23;
      do {
        iVar9 = (int)((ulong)uVar32 >> 0x20);
        iVar45 = (int)((ulong)uVar50 >> 0x20);
        uVar21 = uVar21 - 8;
        puVar20[-1] = uVar50;
        puVar20[-2] = uVar32;
        puVar20[1] = CONCAT44(iVar45 + 4,(int)uVar50 + 4);
        *puVar20 = CONCAT44(iVar9 + 4,(int)uVar32 + 4);
        puVar20 = puVar20 + 4;
        uVar32 = CONCAT44(iVar9 + 8,(int)uVar32 + 8);
        uVar50 = CONCAT44(iVar45 + 8,(int)uVar50 + 8);
      } while (uVar21 != 0);
      if (uVar23 == uVar36) goto LAB_00f2e28c;
    }
    do {
      *(int *)(pbVar14 + uVar23 * 4) = (int)uVar23;
      uVar23 = uVar23 + 1;
    } while (uVar36 != uVar23);
  }
LAB_00f2e28c:
  if (0 < (int)uVar4) {
    pbVar14 = param_1[0x1f];
    if (uVar4 < 8) {
      uVar36 = 0;
    }
    else {
      uVar36 = uVar38 & 0xfffffff8;
      uVar50 = 0x300000002;
      uVar32 = 0x100000000;
      puVar20 = (undefined8 *)(pbVar14 + 0x10);
      uVar23 = uVar36;
      do {
        iVar9 = (int)((ulong)uVar32 >> 0x20);
        iVar45 = (int)((ulong)uVar50 >> 0x20);
        uVar23 = uVar23 - 8;
        puVar20[-1] = uVar50;
        puVar20[-2] = uVar32;
        puVar20[1] = CONCAT44(iVar45 + 4,(int)uVar50 + 4);
        *puVar20 = CONCAT44(iVar9 + 4,(int)uVar32 + 4);
        puVar20 = puVar20 + 4;
        uVar32 = CONCAT44(iVar9 + 8,(int)uVar32 + 8);
        uVar50 = CONCAT44(iVar45 + 8,(int)uVar50 + 8);
      } while (uVar23 != 0);
      if (uVar36 == uVar38) goto LAB_00f2e2f8;
    }
    do {
      *(int *)(pbVar14 + uVar36 * 4) = (int)uVar36;
      uVar36 = uVar36 + 1;
    } while (uVar38 != uVar36);
  }
LAB_00f2e2f8:
  puVar7 = CProfileManager::CurrentNode;
  piVar2 = (int *)(CProfileManager::CurrentNode + 8);
  iVar9 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar9;
  if (iVar9 == 0 && *piVar2 != 0) {
    uVar12 = gettimeofday(&local_190,(__timezone_ptr_t)0x0);
    pbVar13 = (btCollisionObject *)(ulong)uVar12;
    iVar9 = *(int *)(puVar7 + 0x18);
    uVar61 = NEON_fmadd((float)ZEXT89((btCollisionObject *)
                                      (local_190.tv_usec +
                                      ((local_190.tv_sec - *DAT_02125d68) * 1000000 -
                                      (DAT_02125d68[1] + *(long *)(puVar7 + 0x10))))),0x3a83126f,
                        *(undefined4 *)(puVar7 + 0xc));
    *(undefined4 *)(puVar7 + 0xc) = uVar61;
  }
  if (iVar9 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar5 + 0x28) == local_90) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar13);
}


