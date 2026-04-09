// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertContact
// Entry Point: 00f2f090
// Size: 4852 bytes
// Signature: undefined __thiscall convertContact(btSequentialImpulseConstraintSolver * this, btPersistentManifold * param_1, btContactSolverInfo * param_2)


/* btSequentialImpulseConstraintSolver::convertContact(btPersistentManifold*, btContactSolverInfo
   const&) */

void __thiscall
btSequentialImpulseConstraintSolver::convertContact
          (btSequentialImpulseConstraintSolver *this,btPersistentManifold *param_1,
          btContactSolverInfo *param_2)

{
  btManifoldPoint *pbVar1;
  btCollisionObject *pbVar2;
  btCollisionObject *pbVar3;
  btManifoldPoint *pbVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  btSolverConstraint *pbVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  btPersistentManifold *pbVar17;
  undefined4 *puVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  long lVar24;
  float *pfVar25;
  long lVar26;
  long lVar27;
  btCollisionObject *pbVar28;
  btCollisionObject *pbVar29;
  ulong *puVar30;
  float *pfVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  double dVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar43;
  undefined8 uVar41;
  ulong uVar42;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  float fVar65;
  ulong uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined8 *puVar69;
  float local_104;
  ulong local_100;
  float local_f8;
  undefined4 local_f4;
  ulong local_f0;
  float local_e8;
  undefined4 local_e4;
  ulong local_e0;
  float local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  pbVar28 = *(btCollisionObject **)(param_1 + 0x308);
  pbVar29 = *(btCollisionObject **)(param_1 + 0x310);
  iVar7 = getOrInitSolverBody(this,pbVar28,*(float *)(param_2 + 0xc));
  iVar8 = getOrInitSolverBody(this,pbVar29,*(float *)(param_2 + 0xc));
  lVar19 = *(long *)(this + 0x18);
  lVar24 = (long)iVar8;
  lVar15 = lVar19 + (long)iVar7 * 0xf8;
  uVar32 = NEON_fmadd(*(undefined4 *)(lVar15 + 0x84),*(undefined4 *)(lVar15 + 0x84),
                      *(float *)(lVar15 + 0x80) * *(float *)(lVar15 + 0x80));
  fVar33 = (float)NEON_fmadd(*(undefined4 *)(lVar15 + 0x88),*(undefined4 *)(lVar15 + 0x88),uVar32);
  if (fVar33 < 1.421085e-14) {
    lVar15 = lVar19 + lVar24 * 0xf8;
    uVar32 = NEON_fmadd(*(undefined4 *)(lVar15 + 0x84),*(undefined4 *)(lVar15 + 0x84),
                        *(float *)(lVar15 + 0x80) * *(float *)(lVar15 + 0x80));
    fVar33 = (float)NEON_fmadd(*(undefined4 *)(lVar15 + 0x88),*(undefined4 *)(lVar15 + 0x88),uVar32)
    ;
    if (fVar33 < 1.421085e-14) goto LAB_00f3033c;
  }
  iVar12 = *(int *)(param_1 + 0x318);
  if (0 < iVar12) {
    lVar15 = 0;
    lVar27 = lVar19 + (long)iVar7 * 0xf8;
    lVar26 = lVar19 + lVar24 * 0xf8;
    lVar24 = lVar19 + lVar24 * 0xf8;
    lVar19 = lVar19 + (long)iVar7 * 0xf8;
    bVar6 = true;
    do {
      if (*(float *)(param_1 + lVar15 * 0xc0 + 0x58) <= *(float *)(param_1 + 800)) {
        uVar14 = *(uint *)(this + 0x2c);
        pbVar4 = (btManifoldPoint *)(ulong)uVar14;
        uVar13 = uVar14;
        if (uVar14 == *(uint *)(this + 0x30)) {
          iVar12 = uVar14 << 1;
          if (uVar14 == 0) {
            iVar12 = 1;
          }
          if ((int)uVar14 < iVar12) {
            if (iVar12 == 0) {
              lVar9 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar9 = (*(code *)PTR_FUN_01048e38)((long)iVar12 * 0xa0,0x10);
              uVar13 = *(uint *)(this + 0x2c);
            }
            if (0 < (int)uVar13) {
              lVar20 = 0;
              do {
                puVar11 = (undefined8 *)(lVar9 + lVar20);
                puVar16 = (undefined8 *)(*(long *)(this + 0x38) + lVar20);
                lVar20 = lVar20 + 0xa0;
                uVar56 = *puVar16;
                uVar47 = puVar16[3];
                uVar41 = puVar16[2];
                puVar11[1] = puVar16[1];
                *puVar11 = uVar56;
                puVar11[3] = uVar47;
                puVar11[2] = uVar41;
                uVar56 = puVar16[8];
                uVar47 = puVar16[0xb];
                uVar41 = puVar16[10];
                uVar49 = puVar16[5];
                uVar46 = puVar16[4];
                uVar44 = puVar16[7];
                uVar40 = puVar16[6];
                puVar11[9] = puVar16[9];
                puVar11[8] = uVar56;
                puVar11[0xb] = uVar47;
                puVar11[10] = uVar41;
                puVar11[5] = uVar49;
                puVar11[4] = uVar46;
                puVar11[7] = uVar44;
                puVar11[6] = uVar40;
                uVar56 = puVar16[0x10];
                uVar47 = puVar16[0x13];
                uVar41 = puVar16[0x12];
                uVar49 = puVar16[0xd];
                uVar46 = puVar16[0xc];
                uVar44 = puVar16[0xf];
                uVar40 = puVar16[0xe];
                puVar11[0x11] = puVar16[0x11];
                puVar11[0x10] = uVar56;
                puVar11[0x13] = uVar47;
                puVar11[0x12] = uVar41;
                puVar11[0xd] = uVar49;
                puVar11[0xc] = uVar46;
                puVar11[0xf] = uVar44;
                puVar11[0xe] = uVar40;
              } while ((ulong)uVar13 * 0xa0 - lVar20 != 0);
            }
            if ((*(long *)(this + 0x38) != 0) &&
               (this[0x40] != (btSequentialImpulseConstraintSolver)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            *(long *)(this + 0x38) = lVar9;
            this[0x40] = (btSequentialImpulseConstraintSolver)0x1;
            uVar13 = *(uint *)(this + 0x2c);
            *(int *)(this + 0x30) = iVar12;
          }
        }
        lVar9 = *(long *)(this + 0x38);
        pbVar1 = (btManifoldPoint *)(param_1 + lVar15 * 0xc0 + 8);
        pbVar10 = (btSolverConstraint *)(lVar9 + (long)(int)uVar14 * 0xa0);
        *(uint *)(this + 0x2c) = uVar13 + 1;
        uVar14 = *(uint *)(pbVar28 + 0x100);
        fVar65 = 0.0;
        fVar33 = 0.0;
        uVar13 = *(uint *)(pbVar29 + 0x100);
        *(int *)(pbVar10 + 0x98) = iVar7;
        *(int *)(pbVar10 + 0x9c) = iVar8;
        *(btManifoldPoint **)(pbVar10 + 0x88) = pbVar1;
        fVar38 = 0.0;
        pbVar2 = (btCollisionObject *)0x0;
        if ((uVar14 & 2) != 0) {
          pbVar2 = pbVar28;
        }
        fVar50 = 0.0;
        fVar37 = (float)*(undefined8 *)(param_1 + lVar15 * 0xc0 + 0x38) -
                 (float)*(undefined8 *)(pbVar28 + 0x38);
        fVar43 = (float)((ulong)*(undefined8 *)(param_1 + lVar15 * 0xc0 + 0x38) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pbVar28 + 0x38) >> 0x20);
        local_c0 = CONCAT44(fVar43,fVar37);
        pbVar3 = (btCollisionObject *)0x0;
        if ((uVar13 & 2) != 0) {
          pbVar3 = pbVar29;
        }
        local_b8 = *(float *)(param_1 + lVar15 * 0xc0 + 0x40) - *(float *)(pbVar28 + 0x40);
        local_b4 = 0;
        fVar34 = (float)*(undefined8 *)(param_1 + lVar15 * 0xc0 + 0x28) -
                 (float)*(undefined8 *)(pbVar29 + 0x38);
        fVar36 = (float)((ulong)*(undefined8 *)(param_1 + lVar15 * 0xc0 + 0x28) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pbVar29 + 0x38) >> 0x20);
        local_d0 = CONCAT44(fVar36,fVar34);
        local_c8 = *(float *)(param_1 + lVar15 * 0xc0 + 0x30) - *(float *)(pbVar29 + 0x40);
        fVar58 = 0.0;
        fVar54 = 0.0;
        local_c4 = 0;
        if (*(long *)(lVar27 + 0xf0) != 0) {
          fVar50 = (float)*(undefined8 *)(lVar19 + 0xe0) + (float)*(undefined8 *)(lVar19 + 0xc0);
          fVar52 = (float)((ulong)*(undefined8 *)(lVar19 + 0xe0) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20);
          fVar54 = *(float *)(lVar27 + 0xe8) + *(float *)(lVar27 + 200);
          uVar47 = NEON_rev64(CONCAT44(fVar52 * local_b8,fVar50 * local_b8),4);
          uVar41 = NEON_rev64(local_c0,4);
          uVar56 = NEON_rev64(CONCAT44(fVar43 * fVar54,fVar37 * fVar54),4);
          fVar58 = ((float)*(undefined8 *)(lVar19 + 0xd0) + (float)*(undefined8 *)(lVar19 + 0xb0) +
                   (float)uVar47) - (float)uVar56;
          fVar54 = (((float)((ulong)*(undefined8 *)(lVar19 + 0xd0) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar19 + 0xb0) >> 0x20)) -
                   (float)((ulong)uVar47 >> 0x20)) + (float)((ulong)uVar56 >> 0x20);
          fVar50 = (*(float *)(lVar27 + 0xd8) + *(float *)(lVar27 + 0xb8) + fVar50 * (float)uVar41)
                   - fVar52 * (float)((ulong)uVar41 >> 0x20);
        }
        if (*(long *)(lVar26 + 0xf0) != 0) {
          fVar38 = (float)*(undefined8 *)(lVar24 + 0xe0) + (float)*(undefined8 *)(lVar24 + 0xc0);
          fVar37 = (float)((ulong)*(undefined8 *)(lVar24 + 0xe0) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20);
          fVar33 = *(float *)(lVar26 + 0xe8) + *(float *)(lVar26 + 200);
          uVar47 = NEON_rev64(CONCAT44(fVar37 * local_c8,fVar38 * local_c8),4);
          uVar41 = NEON_rev64(local_d0,4);
          uVar56 = NEON_rev64(CONCAT44(fVar36 * fVar33,fVar34 * fVar33),4);
          fVar65 = ((float)*(undefined8 *)(lVar24 + 0xd0) + (float)*(undefined8 *)(lVar24 + 0xb0) +
                   (float)uVar47) - (float)uVar56;
          fVar33 = (((float)((ulong)*(undefined8 *)(lVar24 + 0xd0) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar24 + 0xb0) >> 0x20)) -
                   (float)((ulong)uVar47 >> 0x20)) + (float)((ulong)uVar56 >> 0x20);
          fVar38 = (*(float *)(lVar26 + 0xd8) + *(float *)(lVar26 + 0xb8) + fVar38 * (float)uVar41)
                   - fVar37 * (float)((ulong)uVar41 >> 0x20);
        }
        pfVar23 = &local_104;
        puVar11 = &local_c0;
        pfVar21 = (float *)(param_1 + lVar15 * 0xc0 + 0x4c);
        fVar43 = *pfVar21;
        pfVar22 = (float *)(param_1 + lVar15 * 0xc0 + 0x50);
        fVar34 = *pfVar22;
        puVar16 = (undefined8 *)(param_1 + lVar15 * 0xc0 + 0x48);
        fVar36 = *(float *)puVar16;
        puVar69 = &local_d0;
        setupContactConstraint
                  (this,pbVar10,iVar7,iVar8,pbVar1,param_2,pfVar23,(btVector3 *)puVar11,
                   (btVector3 *)puVar69);
        uVar41 = 0;
        local_d8 = 0.0;
        fVar37 = 0.0;
        uVar47 = 0;
        *(undefined4 *)(lVar9 + (long)(int)uVar14 * 0xa0 + 0x94) = *(undefined4 *)(this + 0x6c);
        if ((uVar14 >> 1 & 1) != 0) {
          uVar47 = *(undefined8 *)(pbVar2 + 0x18c);
          fVar37 = *(float *)(pbVar2 + 0x194);
        }
        if ((uVar13 >> 1 & 1) != 0) {
          uVar41 = *(undefined8 *)(pbVar3 + 0x18c);
          local_d8 = *(float *)(pbVar3 + 0x194);
        }
        fVar45 = (float)uVar41 - (float)uVar47;
        fVar52 = (float)((ulong)uVar41 >> 0x20) - (float)((ulong)uVar47 >> 0x20);
        local_e0 = CONCAT44(fVar52,fVar45);
        local_d8 = local_d8 - fVar37;
        local_d4 = 0;
        if ((0.0 < *(float *)(param_1 + lVar15 * 0xc0 + 0x60)) && (bVar6)) {
          fVar37 = (float)NEON_fmadd(local_d8,local_d8,fVar45 * fVar45 + fVar52 * fVar52);
          if (SQRT(fVar37) <= *(float *)(param_2 + 0x50)) {
            addRollingFrictionConstraint
                      ((btVector3 *)this,(int)puVar16,iVar7,iVar8,pbVar4,(btVector3 *)pbVar1,
                       (btVector3 *)pfVar23,(btCollisionObject *)puVar11,
                       (btCollisionObject *)puVar69,local_d8,0.0,0.0);
            fVar37 = *pfVar22;
            if (ABS(fVar37) <= 0.7071068) {
              fVar52 = *(float *)puVar16;
              local_e8 = 0.0;
              fVar45 = *pfVar21;
              local_f8 = (float)NEON_fmadd(fVar45,fVar45,fVar52 * fVar52);
              local_f8 = SQRT(local_f8);
              fVar52 = (1.0 / local_f8) * fVar52;
              fVar39 = (1.0 / local_f8) * -fVar45;
              uVar42 = (ulong)(uint)fVar39;
              fVar45 = fVar52 * -fVar37;
              fVar37 = fVar39 * fVar37;
              local_f0 = CONCAT44(fVar52,fVar39);
            }
            else {
              local_e8 = *pfVar21;
              fVar45 = (float)NEON_fmadd(local_e8,local_e8,fVar37 * fVar37);
              fVar45 = SQRT(fVar45);
              fVar52 = (1.0 / fVar45) * -fVar37;
              local_e8 = (1.0 / fVar45) * local_e8;
              local_f8 = fVar52 * *(float *)puVar16;
              local_f0 = (ulong)(uint)fVar52 << 0x20;
              fVar37 = local_e8 * -*(float *)puVar16;
              uVar42 = 0;
            }
            uVar66 = (ulong)(uint)fVar45;
            local_100 = CONCAT44(fVar37,fVar45);
            uVar14 = *(uint *)(pbVar28 + 0xb8);
            if ((uVar14 >> 1 & 1) == 0) {
              uVar13 = *(uint *)(pbVar29 + 0xb8);
              if ((uVar13 >> 1 & 1) == 0) goto LAB_00f2f8d0;
LAB_00f30238:
              local_e4 = 0;
              fVar39 = (float)uVar42;
              fVar53 = (float)*(undefined8 *)(pbVar29 + 0xc);
              fVar48 = (float)((ulong)*(undefined8 *)(pbVar29 + 0xc) >> 0x20);
              fVar55 = (float)*(undefined8 *)(pbVar29 + 0x1c);
              fVar57 = (float)((ulong)*(undefined8 *)(pbVar29 + 0x1c) >> 0x20);
              uVar32 = NEON_fmadd(fVar52,*(float *)(pbVar29 + 0x18),fVar39 * *(float *)(pbVar29 + 8)
                                 );
              fVar60 = (float)*(undefined8 *)(pbVar29 + 0x2c);
              fVar61 = (float)((ulong)*(undefined8 *)(pbVar29 + 0x2c) >> 0x20);
              fVar62 = (float)*(undefined8 *)(pbVar29 + 0xac) *
                       (fVar53 * fVar39 + fVar55 * fVar52 + fVar60 * local_e8);
              fVar63 = (float)((ulong)*(undefined8 *)(pbVar29 + 0xac) >> 0x20) *
                       (fVar48 * fVar39 + fVar57 * fVar52 + fVar61 * local_e8);
              fVar39 = (float)NEON_fmadd(local_e8,*(undefined4 *)(pbVar29 + 0x28),uVar32);
              fVar39 = *(float *)(pbVar29 + 0xa8) * fVar39;
              local_e8 = (float)NEON_fmadd(fVar39,*(undefined4 *)(pbVar29 + 0x28),fVar62 * fVar60);
              fVar52 = fVar62 * fVar55 + *(float *)(pbVar29 + 0x18) * fVar39 + fVar63 * fVar57;
              uVar42 = CONCAT44(fVar52,fVar62 * fVar53 + *(float *)(pbVar29 + 8) * fVar39 +
                                       fVar63 * fVar48);
              local_e8 = local_e8 + fVar63 * fVar61;
              local_f0 = uVar42;
              if ((uVar14 >> 1 & 1) != 0) goto LAB_00f302b8;
LAB_00f2f8d4:
              fVar39 = (float)uVar42;
            }
            else {
              local_e4 = 0;
              fVar39 = (float)uVar42;
              fVar53 = (float)*(undefined8 *)(pbVar28 + 0xc);
              fVar48 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xc) >> 0x20);
              fVar55 = (float)*(undefined8 *)(pbVar28 + 0x1c);
              fVar57 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x1c) >> 0x20);
              uVar32 = NEON_fmadd(fVar52,*(float *)(pbVar28 + 0x18),fVar39 * *(float *)(pbVar28 + 8)
                                 );
              fVar60 = (float)*(undefined8 *)(pbVar28 + 0x2c);
              fVar61 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x2c) >> 0x20);
              fVar62 = (float)*(undefined8 *)(pbVar28 + 0xac) *
                       (fVar53 * fVar39 + fVar55 * fVar52 + fVar60 * local_e8);
              fVar63 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xac) >> 0x20) *
                       (fVar48 * fVar39 + fVar57 * fVar52 + fVar61 * local_e8);
              fVar39 = (float)NEON_fmadd(local_e8,*(undefined4 *)(pbVar28 + 0x28),uVar32);
              fVar39 = *(float *)(pbVar28 + 0xa8) * fVar39;
              local_e8 = (float)NEON_fmadd(fVar39,*(undefined4 *)(pbVar28 + 0x28),fVar62 * fVar60);
              fVar52 = fVar62 * fVar55 + *(float *)(pbVar28 + 0x18) * fVar39 + fVar63 * fVar57;
              uVar42 = CONCAT44(fVar52,fVar62 * fVar53 + *(float *)(pbVar28 + 8) * fVar39 +
                                       fVar63 * fVar48);
              local_e8 = local_e8 + fVar63 * fVar61;
              uVar13 = *(uint *)(pbVar29 + 0xb8);
              local_f0 = uVar42;
              if ((uVar13 >> 1 & 1) != 0) goto LAB_00f30238;
LAB_00f2f8d0:
              if ((uVar14 >> 1 & 1) == 0) goto LAB_00f2f8d4;
LAB_00f302b8:
              fVar39 = (float)uVar42;
              local_f4 = 0;
              fVar62 = (float)*(undefined8 *)(pbVar28 + 0xc);
              fVar63 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xc) >> 0x20);
              fVar48 = (float)*(undefined8 *)(pbVar28 + 0x1c);
              fVar55 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x1c) >> 0x20);
              uVar32 = NEON_fmadd(fVar37,*(float *)(pbVar28 + 0x18),fVar45 * *(float *)(pbVar28 + 8)
                                 );
              fVar57 = (float)*(undefined8 *)(pbVar28 + 0x2c);
              fVar60 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x2c) >> 0x20);
              fVar53 = (float)*(undefined8 *)(pbVar28 + 0xac) *
                       (fVar62 * fVar45 + fVar48 * fVar37 + fVar57 * local_f8);
              fVar45 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xac) >> 0x20) *
                       (fVar63 * fVar45 + fVar55 * fVar37 + fVar60 * local_f8);
              fVar61 = (float)NEON_fmadd(*(undefined4 *)(pbVar28 + 0x28),local_f8,uVar32);
              fVar61 = *(float *)(pbVar28 + 0xa8) * fVar61;
              local_f8 = (float)NEON_fmadd(fVar61,*(undefined4 *)(pbVar28 + 0x28),fVar53 * fVar57);
              local_f8 = local_f8 + fVar45 * fVar60;
              fVar37 = fVar53 * fVar48 + *(float *)(pbVar28 + 0x18) * fVar61 + fVar45 * fVar55;
              uVar66 = CONCAT44(fVar37,fVar53 * fVar62 + *(float *)(pbVar28 + 8) * fVar61 +
                                       fVar45 * fVar63);
              local_100 = uVar66;
            }
            if ((uVar13 >> 1 & 1) != 0) {
              local_f4 = 0;
              fVar53 = (float)uVar66;
              fVar45 = (float)*(undefined8 *)(pbVar29 + 0xc);
              fVar62 = (float)((ulong)*(undefined8 *)(pbVar29 + 0xc) >> 0x20);
              fVar48 = (float)*(undefined8 *)(pbVar29 + 0x1c);
              fVar55 = (float)((ulong)*(undefined8 *)(pbVar29 + 0x1c) >> 0x20);
              uVar32 = NEON_fmadd(fVar37,*(float *)(pbVar29 + 0x18),fVar53 * *(float *)(pbVar29 + 8)
                                 );
              fVar57 = (float)*(undefined8 *)(pbVar29 + 0x2c);
              fVar60 = (float)((ulong)*(undefined8 *)(pbVar29 + 0x2c) >> 0x20);
              fVar63 = (float)*(undefined8 *)(pbVar29 + 0xac) *
                       (fVar45 * fVar53 + fVar48 * fVar37 + fVar57 * local_f8);
              fVar53 = (float)((ulong)*(undefined8 *)(pbVar29 + 0xac) >> 0x20) *
                       (fVar62 * fVar53 + fVar55 * fVar37 + fVar60 * local_f8);
              fVar61 = (float)NEON_fmadd(local_f8,*(undefined4 *)(pbVar29 + 0x28),uVar32);
              fVar61 = *(float *)(pbVar29 + 0xa8) * fVar61;
              local_f8 = (float)NEON_fmadd(fVar61,*(undefined4 *)(pbVar29 + 0x28),fVar63 * fVar57);
              local_f8 = local_f8 + fVar53 * fVar60;
              fVar37 = fVar63 * fVar48 + *(float *)(pbVar29 + 0x18) * fVar61 + fVar53 * fVar55;
              uVar66 = CONCAT44(fVar37,fVar63 * fVar45 + *(float *)(pbVar29 + 8) * fVar61 +
                                       fVar53 * fVar62);
              local_100 = uVar66;
            }
            fVar45 = local_f8;
            uVar32 = NEON_fmadd(fVar52,fVar52,fVar39 * fVar39);
            fVar52 = (float)NEON_fmadd(local_e8,local_e8,uVar32);
            if (0.001 < (double)SQRT(fVar52)) {
              addRollingFrictionConstraint
                        ((btVector3 *)this,(int)&stack0xffffffffffffffa0 + -0x90,iVar7,iVar8,pbVar4,
                         (btVector3 *)pbVar1,(btVector3 *)pfVar23,(btCollisionObject *)puVar11,
                         (btCollisionObject *)puVar69,SUB84((double)SQRT(fVar52),0),0.0,0.0);
            }
            uVar32 = NEON_fmadd(fVar37,fVar37,(float)uVar66 * (float)uVar66);
            fVar37 = (float)NEON_fmadd(fVar45,fVar45,uVar32);
            dVar35 = (double)SQRT(fVar37);
            if (0.001 < dVar35) {
              iVar12 = -0xa0;
              goto LAB_00f2f9d0;
            }
          }
          else {
            fVar37 = 1.0 / SQRT(fVar37);
            fVar45 = fVar37 * fVar45;
            uVar42 = (ulong)(uint)fVar45;
            fVar52 = fVar37 * fVar52;
            local_d8 = fVar37 * local_d8;
            local_e0 = CONCAT44(fVar52,fVar45);
            if (((byte)pbVar28[0xb8] >> 1 & 1) != 0) {
              fVar62 = (float)*(undefined8 *)(pbVar28 + 0xc);
              fVar63 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xc) >> 0x20);
              fVar53 = (float)*(undefined8 *)(pbVar28 + 0x1c);
              fVar48 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x1c) >> 0x20);
              uVar32 = NEON_fmadd(*(float *)(pbVar28 + 0x18),fVar52,*(float *)(pbVar28 + 8) * fVar45
                                 );
              fVar55 = (float)*(undefined8 *)(pbVar28 + 0x2c);
              fVar57 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x2c) >> 0x20);
              fVar39 = (float)*(undefined8 *)(pbVar28 + 0xac) *
                       (fVar62 * fVar45 + fVar53 * fVar52 + fVar55 * local_d8);
              fVar45 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xac) >> 0x20) *
                       (fVar63 * fVar45 + fVar48 * fVar52 + fVar57 * local_d8);
              fVar37 = (float)NEON_fmadd(*(undefined4 *)(pbVar28 + 0x28),local_d8,uVar32);
              fVar37 = *(float *)(pbVar28 + 0xa8) * fVar37;
              local_d8 = (float)NEON_fmadd(fVar37,*(undefined4 *)(pbVar28 + 0x28),fVar39 * fVar55);
              fVar52 = fVar39 * fVar53 + *(float *)(pbVar28 + 0x18) * fVar37 + fVar45 * fVar48;
              uVar42 = CONCAT44(fVar52,fVar39 * fVar62 + *(float *)(pbVar28 + 8) * fVar37 +
                                       fVar45 * fVar63);
              local_d8 = local_d8 + fVar45 * fVar57;
              local_e0 = uVar42;
            }
            if (((byte)pbVar29[0xb8] >> 1 & 1) != 0) {
              fVar37 = (float)uVar42;
              fVar62 = (float)*(undefined8 *)(pbVar29 + 0xc);
              fVar63 = (float)((ulong)*(undefined8 *)(pbVar29 + 0xc) >> 0x20);
              fVar53 = (float)*(undefined8 *)(pbVar29 + 0x1c);
              fVar48 = (float)((ulong)*(undefined8 *)(pbVar29 + 0x1c) >> 0x20);
              uVar32 = NEON_fmadd(fVar52,*(float *)(pbVar29 + 0x18),fVar37 * *(float *)(pbVar29 + 8)
                                 );
              fVar55 = (float)*(undefined8 *)(pbVar29 + 0x2c);
              fVar57 = (float)((ulong)*(undefined8 *)(pbVar29 + 0x2c) >> 0x20);
              fVar45 = (float)*(undefined8 *)(pbVar29 + 0xac) *
                       (fVar62 * fVar37 + fVar53 * fVar52 + fVar55 * local_d8);
              fVar39 = (float)((ulong)*(undefined8 *)(pbVar29 + 0xac) >> 0x20) *
                       (fVar63 * fVar37 + fVar48 * fVar52 + fVar57 * local_d8);
              fVar37 = (float)NEON_fmadd(local_d8,*(undefined4 *)(pbVar29 + 0x28),uVar32);
              fVar37 = *(float *)(pbVar29 + 0xa8) * fVar37;
              local_d8 = (float)NEON_fmadd(fVar37,*(undefined4 *)(pbVar29 + 0x28),fVar45 * fVar55);
              fVar52 = fVar45 * fVar53 + *(float *)(pbVar29 + 0x18) * fVar37 + fVar39 * fVar48;
              uVar42 = CONCAT44(fVar52,fVar45 * fVar62 + *(float *)(pbVar29 + 8) * fVar37 +
                                       fVar39 * fVar63);
              local_d8 = local_d8 + fVar39 * fVar57;
              local_e0 = uVar42;
            }
            local_d4 = 0;
            uVar32 = NEON_fmadd(fVar52,fVar52,(float)uVar42 * (float)uVar42);
            fVar37 = (float)NEON_fmadd(local_d8,local_d8,uVar32);
            dVar35 = (double)SQRT(fVar37);
            if (0.001 < dVar35) {
              iVar12 = -0x80;
LAB_00f2f9d0:
              addRollingFrictionConstraint
                        ((btVector3 *)this,(int)&stack0xffffffffffffffa0 + iVar12,iVar7,iVar8,pbVar4
                         ,(btVector3 *)pbVar1,(btVector3 *)pfVar23,(btCollisionObject *)puVar11,
                         (btCollisionObject *)puVar69,SUB84(dVar35,0),0.0,0.0);
            }
          }
          bVar6 = false;
        }
        fVar37 = local_104;
        if ((((byte)param_2[0x40] >> 5 & 1) == 0) ||
           (param_1[lVar15 * 0xc0 + 0x80] == (btPersistentManifold)0x0)) {
          fVar52 = (float)NEON_fmadd(fVar34,fVar50 - fVar38,
                                     fVar36 * (fVar58 - fVar65) + fVar43 * (fVar54 - fVar33));
          fVar43 = *pfVar22;
          fVar36 = (float)*puVar16;
          fVar34 = (float)((ulong)*puVar16 >> 0x20);
          fVar65 = (fVar58 - fVar65) - fVar36 * fVar52;
          fVar33 = (fVar54 - fVar33) - fVar34 * fVar52;
          fVar38 = (float)NEON_fmsub(fVar43,fVar52,fVar50 - fVar38);
          puVar30 = (ulong *)(param_1 + lVar15 * 0xc0 + 0xa8);
          *puVar30 = CONCAT44(fVar33,fVar65);
          pfVar23 = (float *)(param_1 + lVar15 * 0xc0 + 0xac);
          pfVar25 = (float *)(param_1 + lVar15 * 0xc0 + 0xb0);
          *pfVar25 = fVar38;
          puVar18 = (undefined4 *)(param_1 + lVar15 * 0xc0 + 0xb4);
          *puVar18 = 0;
          if ((((byte)param_2[0x40] >> 6 & 1) != 0) ||
             (fVar50 = (float)NEON_fmadd(fVar38,fVar38,fVar65 * fVar65 + fVar33 * fVar33),
             fVar50 <= 1.192093e-07)) {
            if (ABS(fVar43) <= 0.7071068) {
              *pfVar25 = 0.0;
              fVar50 = SQRT(fVar36 * fVar36 + fVar34 * fVar34);
              fVar38 = (1.0 / fVar50) * fVar36;
              fVar65 = (1.0 / fVar50) * -fVar34;
              uVar42 = (ulong)(uint)fVar65;
              fVar33 = fVar38 * -fVar43;
              fVar43 = fVar65 * fVar43;
              fVar34 = 0.0;
              *(float *)puVar30 = fVar65;
              *pfVar23 = fVar38;
            }
            else {
              *(undefined4 *)puVar30 = 0;
              fVar33 = (float)NEON_fmadd(fVar43,fVar43,fVar34 * fVar34);
              fVar33 = SQRT(fVar33);
              fVar34 = (1.0 / fVar33) * fVar34;
              fVar38 = (1.0 / fVar33) * -fVar43;
              fVar43 = fVar34 * -fVar36;
              fVar50 = fVar38 * fVar36;
              uVar42 = 0;
              *pfVar23 = fVar38;
              *pfVar25 = fVar34;
            }
            pfVar21 = (float *)(param_1 + lVar15 * 0xc0 + 0xb8);
            pfVar31 = (float *)(param_1 + lVar15 * 0xc0 + 0xbc);
            *pfVar31 = fVar43;
            *pfVar21 = fVar33;
            pfVar22 = (float *)(param_1 + lVar15 * 0xc0 + 0xc0);
            *pfVar22 = fVar50;
            if (((byte)pbVar28[0xb8] & 1) != 0) {
              fVar45 = *(float *)(pbVar28 + 8);
              fVar33 = (float)uVar42;
              fVar36 = (float)*(undefined8 *)(pbVar28 + 0xc);
              fVar54 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xc) >> 0x20);
              fVar63 = *(float *)(pbVar28 + 0x18);
              fVar58 = (float)*(undefined8 *)(pbVar28 + 0x1c);
              fVar52 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x1c) >> 0x20);
              uVar32 = NEON_fmadd(fVar38,fVar63,fVar33 * fVar45);
              fVar39 = (float)*(undefined8 *)(pbVar28 + 0x2c);
              fVar62 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x2c) >> 0x20);
              fVar43 = (float)*(undefined8 *)(pbVar28 + 0xac) *
                       (fVar36 * fVar33 + fVar58 * fVar38 + fVar39 * fVar34);
              fVar50 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xac) >> 0x20) *
                       (fVar54 * fVar33 + fVar52 * fVar38 + fVar62 * fVar34);
              uVar51 = *(undefined4 *)(pbVar28 + 0x28);
              fVar33 = (float)NEON_fmadd(fVar34,uVar51,uVar32);
              fVar65 = *(float *)(pbVar28 + 0xa8);
              *puVar18 = 0;
              fVar65 = fVar65 * fVar33;
              fVar34 = (float)NEON_fmadd(fVar65,uVar51,fVar43 * fVar39);
              fVar38 = fVar43 * fVar58 + fVar63 * fVar65 + fVar50 * fVar52;
              uVar42 = CONCAT44(fVar38,fVar43 * fVar36 + fVar45 * fVar65 + fVar50 * fVar54);
              fVar34 = fVar34 + fVar50 * fVar62;
              *puVar30 = uVar42;
              *pfVar25 = fVar34;
            }
            if (((byte)pbVar29[0xb8] & 1) != 0) {
              fVar43 = *(float *)(pbVar29 + 8);
              fVar50 = *(float *)(pbVar29 + 0xc);
              fVar54 = *(float *)(pbVar29 + 0x18);
              uVar59 = *(undefined4 *)(pbVar29 + 0x1c);
              fVar58 = *(float *)(pbVar29 + 0x10);
              fVar52 = *(float *)(pbVar29 + 0x28);
              uVar67 = *(undefined4 *)(pbVar29 + 0x2c);
              fVar33 = (float)uVar42;
              uVar68 = *(undefined4 *)(pbVar29 + 0x20);
              uVar51 = NEON_fmadd(fVar38,fVar54,fVar33 * fVar43);
              uVar64 = NEON_fmadd(uVar59,fVar38,fVar50 * fVar33);
              uVar32 = NEON_fmadd(uVar68,fVar38,fVar58 * fVar33);
              fVar36 = (float)NEON_fmadd(fVar34,fVar52,uVar51);
              fVar65 = (float)NEON_fmadd(uVar67,fVar34,uVar64);
              fVar36 = *(float *)(pbVar29 + 0xa8) * fVar36;
              uVar64 = *(undefined4 *)(pbVar29 + 0x30);
              fVar33 = (float)NEON_fmadd(uVar64,fVar34,uVar32);
              fVar65 = *(float *)(pbVar29 + 0xac) * fVar65;
              fVar38 = *(float *)(pbVar29 + 0xb0);
              *puVar18 = 0;
              fVar38 = fVar38 * fVar33;
              uVar51 = NEON_fmadd(fVar65,fVar50,fVar36 * fVar43);
              uVar59 = NEON_fmadd(fVar65,uVar59,fVar36 * fVar54);
              uVar32 = NEON_fmadd(fVar65,uVar67,fVar36 * fVar52);
              uVar51 = NEON_fmadd(fVar38,fVar58,uVar51);
              fVar65 = (float)NEON_fmadd(fVar38,uVar68,uVar59);
              fVar33 = (float)NEON_fmadd(fVar38,uVar64,uVar32);
              *(undefined4 *)puVar30 = uVar51;
              *pfVar23 = fVar65;
              *pfVar25 = fVar33;
            }
            addFrictionConstraint
                      ((btVector3 *)this,(int)puVar30,iVar7,iVar8,pbVar4,(btVector3 *)pbVar1,
                       (btVector3 *)&local_c0,(btCollisionObject *)&local_d0,
                       (btCollisionObject *)puVar69,local_104,0.0,0.0);
            uVar14 = *(uint *)(param_2 + 0x40);
            if ((uVar14 >> 4 & 1) != 0) {
              if (((byte)pbVar28[0xb8] & 1) != 0) {
                fVar65 = *(float *)(pbVar28 + 8);
                fVar50 = *(float *)(pbVar28 + 0xc);
                fVar33 = *pfVar21;
                fVar36 = *(float *)(pbVar28 + 0x18);
                uVar59 = *(undefined4 *)(pbVar28 + 0x1c);
                fVar38 = *pfVar31;
                fVar58 = *(float *)(pbVar28 + 0x10);
                fVar52 = *(float *)(pbVar28 + 0x28);
                uVar67 = *(undefined4 *)(pbVar28 + 0x2c);
                uVar68 = *(undefined4 *)(pbVar28 + 0x20);
                uVar51 = NEON_fmadd(fVar38,fVar36,fVar33 * fVar65);
                fVar54 = *pfVar22;
                uVar64 = NEON_fmadd(uVar59,fVar38,fVar50 * fVar33);
                uVar32 = NEON_fmadd(uVar68,fVar38,fVar58 * fVar33);
                fVar34 = (float)NEON_fmadd(fVar54,fVar52,uVar51);
                fVar43 = (float)NEON_fmadd(uVar67,fVar54,uVar64);
                fVar34 = *(float *)(pbVar28 + 0xa8) * fVar34;
                uVar64 = *(undefined4 *)(pbVar28 + 0x30);
                fVar43 = *(float *)(pbVar28 + 0xac) * fVar43;
                fVar33 = (float)NEON_fmadd(uVar64,fVar54,uVar32);
                fVar38 = *(float *)(pbVar28 + 0xb0);
                *(undefined4 *)(param_1 + lVar15 * 0xc0 + 0xc4) = 0;
                fVar38 = fVar38 * fVar33;
                uVar32 = NEON_fmadd(fVar43,fVar50,fVar34 * fVar65);
                uVar59 = NEON_fmadd(fVar43,uVar59,fVar34 * fVar36);
                uVar51 = NEON_fmadd(fVar43,uVar67,fVar34 * fVar52);
                fVar65 = (float)NEON_fmadd(fVar38,fVar58,uVar32);
                fVar43 = (float)NEON_fmadd(fVar38,uVar68,uVar59);
                fVar33 = (float)NEON_fmadd(fVar38,uVar64,uVar51);
                *pfVar21 = fVar65;
                *pfVar31 = fVar43;
                *pfVar22 = fVar33;
              }
              if (((byte)pbVar29[0xb8] & 1) != 0) {
                fVar65 = *(float *)(pbVar29 + 8);
                fVar50 = *(float *)(pbVar29 + 0xc);
                fVar33 = *pfVar21;
                fVar36 = *(float *)(pbVar29 + 0x18);
                uVar59 = *(undefined4 *)(pbVar29 + 0x1c);
                fVar38 = *pfVar31;
                fVar58 = *(float *)(pbVar29 + 0x10);
                fVar52 = *(float *)(pbVar29 + 0x28);
                uVar67 = *(undefined4 *)(pbVar29 + 0x2c);
                uVar68 = *(undefined4 *)(pbVar29 + 0x20);
                uVar51 = NEON_fmadd(fVar38,fVar36,fVar33 * fVar65);
                fVar54 = *pfVar22;
                uVar64 = NEON_fmadd(uVar59,fVar38,fVar50 * fVar33);
                uVar32 = NEON_fmadd(uVar68,fVar38,fVar58 * fVar33);
                fVar34 = (float)NEON_fmadd(fVar54,fVar52,uVar51);
                fVar43 = (float)NEON_fmadd(uVar67,fVar54,uVar64);
                fVar34 = *(float *)(pbVar29 + 0xa8) * fVar34;
                uVar64 = *(undefined4 *)(pbVar29 + 0x30);
                fVar43 = *(float *)(pbVar29 + 0xac) * fVar43;
                fVar33 = (float)NEON_fmadd(uVar64,fVar54,uVar32);
                fVar38 = *(float *)(pbVar29 + 0xb0);
                *(undefined4 *)(param_1 + lVar15 * 0xc0 + 0xc4) = 0;
                fVar38 = fVar38 * fVar33;
                uVar59 = NEON_fmadd(fVar43,uVar59,fVar34 * fVar36);
                uVar32 = NEON_fmadd(fVar43,fVar50,fVar34 * fVar65);
                uVar51 = NEON_fmadd(fVar43,uVar67,fVar34 * fVar52);
                fVar43 = (float)NEON_fmadd(fVar38,uVar68,uVar59);
                fVar65 = (float)NEON_fmadd(fVar38,fVar58,uVar32);
                fVar33 = (float)NEON_fmadd(fVar38,uVar64,uVar51);
                *pfVar31 = fVar43;
                *pfVar21 = fVar65;
                *pfVar22 = fVar33;
              }
              addFrictionConstraint
                        ((btVector3 *)this,(int)pfVar21,iVar7,iVar8,pbVar4,(btVector3 *)pbVar1,
                         (btVector3 *)&local_c0,(btCollisionObject *)&local_d0,
                         (btCollisionObject *)puVar69,fVar37,0.0,0.0);
              uVar14 = *(uint *)(param_2 + 0x40);
            }
            if (((uVar14 ^ 0xffffffff) & 0x50) == 0) {
              param_1[lVar15 * 0xc0 + 0x80] = (btPersistentManifold)0x1;
            }
          }
          else {
            fVar43 = 1.0 / SQRT(fVar50);
            fVar65 = fVar65 * fVar43;
            fVar33 = fVar33 * fVar43;
            uVar42 = CONCAT44(fVar33,fVar65);
            fVar43 = fVar43 * fVar38;
            *puVar30 = uVar42;
            *pfVar25 = fVar43;
            if (((byte)pbVar28[0xb8] & 1) != 0) {
              fVar52 = *(float *)(pbVar28 + 8);
              fVar34 = (float)*(undefined8 *)(pbVar28 + 0xc);
              fVar36 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xc) >> 0x20);
              fVar62 = *(float *)(pbVar28 + 0x18);
              fVar54 = (float)*(undefined8 *)(pbVar28 + 0x1c);
              fVar58 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x1c) >> 0x20);
              fVar45 = (float)*(undefined8 *)(pbVar28 + 0x2c);
              fVar39 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x2c) >> 0x20);
              uVar32 = NEON_fmadd(fVar62,fVar33,fVar52 * fVar65);
              fVar50 = (float)*(undefined8 *)(pbVar28 + 0xac) *
                       (fVar34 * fVar65 + fVar54 * fVar33 + fVar45 * fVar43);
              fVar65 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xac) >> 0x20) *
                       (fVar36 * fVar65 + fVar58 * fVar33 + fVar39 * fVar43);
              uVar51 = *(undefined4 *)(pbVar28 + 0x28);
              fVar33 = (float)NEON_fmadd(uVar51,fVar43,uVar32);
              fVar38 = *(float *)(pbVar28 + 0xa8);
              *puVar18 = 0;
              fVar38 = fVar38 * fVar33;
              fVar43 = (float)NEON_fmadd(fVar38,uVar51,fVar50 * fVar45);
              fVar33 = fVar50 * fVar54 + fVar62 * fVar38 + fVar65 * fVar58;
              uVar42 = CONCAT44(fVar33,fVar50 * fVar34 + fVar52 * fVar38 + fVar65 * fVar36);
              fVar43 = fVar43 + fVar65 * fVar39;
              *puVar30 = uVar42;
              *pfVar25 = fVar43;
            }
            if (((byte)pbVar29[0xb8] & 1) != 0) {
              fVar50 = *(float *)(pbVar29 + 8);
              fVar34 = *(float *)(pbVar29 + 0xc);
              fVar54 = *(float *)(pbVar29 + 0x18);
              uVar59 = *(undefined4 *)(pbVar29 + 0x1c);
              fVar58 = *(float *)(pbVar29 + 0x10);
              fVar52 = *(float *)(pbVar29 + 0x28);
              uVar67 = *(undefined4 *)(pbVar29 + 0x2c);
              fVar38 = (float)uVar42;
              uVar68 = *(undefined4 *)(pbVar29 + 0x20);
              uVar51 = NEON_fmadd(fVar33,fVar54,fVar38 * fVar50);
              uVar64 = NEON_fmadd(uVar59,fVar33,fVar34 * fVar38);
              uVar32 = NEON_fmadd(uVar68,fVar33,fVar58 * fVar38);
              fVar36 = (float)NEON_fmadd(fVar43,fVar52,uVar51);
              fVar65 = (float)NEON_fmadd(uVar67,fVar43,uVar64);
              fVar36 = *(float *)(pbVar29 + 0xa8) * fVar36;
              uVar64 = *(undefined4 *)(pbVar29 + 0x30);
              fVar33 = (float)NEON_fmadd(uVar64,fVar43,uVar32);
              fVar65 = *(float *)(pbVar29 + 0xac) * fVar65;
              fVar38 = *(float *)(pbVar29 + 0xb0);
              *puVar18 = 0;
              fVar38 = fVar38 * fVar33;
              uVar51 = NEON_fmadd(fVar65,fVar34,fVar36 * fVar50);
              uVar59 = NEON_fmadd(fVar65,uVar59,fVar36 * fVar54);
              uVar32 = NEON_fmadd(fVar65,uVar67,fVar36 * fVar52);
              uVar51 = NEON_fmadd(fVar38,fVar58,uVar51);
              fVar65 = (float)NEON_fmadd(fVar38,uVar68,uVar59);
              fVar33 = (float)NEON_fmadd(fVar38,uVar64,uVar32);
              *(undefined4 *)puVar30 = uVar51;
              *pfVar23 = fVar65;
              *pfVar25 = fVar33;
            }
            addFrictionConstraint
                      ((btVector3 *)this,(int)puVar30,iVar7,iVar8,pbVar4,(btVector3 *)pbVar1,
                       (btVector3 *)&local_c0,(btCollisionObject *)&local_d0,
                       (btCollisionObject *)puVar69,local_104,0.0,0.0);
            if (((byte)param_2[0x40] >> 4 & 1) != 0) {
              fVar65 = (float)NEON_fnmsub(*pfVar22,*pfVar23,*pfVar21 * *pfVar25);
              fVar33 = (float)NEON_fnmsub(*(float *)puVar16,*pfVar25,*(float *)puVar30 * *pfVar22);
              fVar43 = (float)NEON_fnmsub(*(float *)puVar30,*pfVar21,*(float *)puVar16 * *pfVar23);
              uVar32 = NEON_fmadd(fVar33,fVar33,fVar65 * fVar65);
              fVar38 = (float)NEON_fmadd(fVar43,fVar43,uVar32);
              fVar38 = 1.0 / SQRT(fVar38);
              fVar65 = fVar38 * fVar65;
              uVar42 = (ulong)(uint)fVar65;
              fVar33 = fVar38 * fVar33;
              fVar38 = fVar38 * fVar43;
              puVar30 = (ulong *)(param_1 + lVar15 * 0xc0 + 0xb8);
              *(float *)puVar30 = fVar65;
              *(float *)(param_1 + lVar15 * 0xc0 + 0xbc) = fVar33;
              pfVar23 = (float *)(param_1 + lVar15 * 0xc0 + 0xc0);
              *pfVar23 = fVar38;
              puVar18 = (undefined4 *)(param_1 + lVar15 * 0xc0 + 0xc4);
              *puVar18 = 0;
              if (((byte)pbVar28[0xb8] & 1) != 0) {
                fVar52 = *(float *)(pbVar28 + 8);
                fVar34 = (float)*(undefined8 *)(pbVar28 + 0xc);
                fVar36 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xc) >> 0x20);
                fVar62 = *(float *)(pbVar28 + 0x18);
                fVar54 = (float)*(undefined8 *)(pbVar28 + 0x1c);
                fVar58 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x1c) >> 0x20);
                uVar32 = NEON_fmadd(fVar62,fVar33,fVar52 * fVar65);
                fVar45 = (float)*(undefined8 *)(pbVar28 + 0x2c);
                fVar39 = (float)((ulong)*(undefined8 *)(pbVar28 + 0x2c) >> 0x20);
                fVar43 = (float)*(undefined8 *)(pbVar28 + 0xac) *
                         (fVar34 * fVar65 + fVar54 * fVar33 + fVar45 * fVar38);
                fVar50 = (float)((ulong)*(undefined8 *)(pbVar28 + 0xac) >> 0x20) *
                         (fVar36 * fVar65 + fVar58 * fVar33 + fVar39 * fVar38);
                uVar51 = *(undefined4 *)(pbVar28 + 0x28);
                fVar33 = (float)NEON_fmadd(uVar51,fVar38,uVar32);
                fVar65 = *(float *)(pbVar28 + 0xa8);
                *puVar18 = 0;
                fVar65 = fVar65 * fVar33;
                fVar38 = (float)NEON_fmadd(fVar65,uVar51,fVar43 * fVar45);
                fVar33 = fVar43 * fVar54 + fVar62 * fVar65 + fVar50 * fVar58;
                uVar42 = CONCAT44(fVar33,fVar43 * fVar34 + fVar52 * fVar65 + fVar50 * fVar36);
                fVar38 = fVar38 + fVar50 * fVar39;
                *puVar30 = uVar42;
                *pfVar23 = fVar38;
              }
              if (((byte)pbVar29[0xb8] & 1) != 0) {
                fVar43 = *(float *)(pbVar29 + 8);
                fVar50 = *(float *)(pbVar29 + 0xc);
                fVar36 = *(float *)(pbVar29 + 0x18);
                uVar59 = *(undefined4 *)(pbVar29 + 0x1c);
                fVar54 = *(float *)(pbVar29 + 0x10);
                fVar58 = *(float *)(pbVar29 + 0x28);
                uVar67 = *(undefined4 *)(pbVar29 + 0x2c);
                fVar65 = (float)uVar42;
                uVar68 = *(undefined4 *)(pbVar29 + 0x20);
                uVar51 = NEON_fmadd(fVar33,fVar36,fVar65 * fVar43);
                uVar64 = NEON_fmadd(uVar59,fVar33,fVar50 * fVar65);
                uVar32 = NEON_fmadd(uVar68,fVar33,fVar54 * fVar65);
                fVar34 = (float)NEON_fmadd(fVar38,fVar58,uVar51);
                fVar65 = (float)NEON_fmadd(uVar67,fVar38,uVar64);
                fVar34 = *(float *)(pbVar29 + 0xa8) * fVar34;
                uVar64 = *(undefined4 *)(pbVar29 + 0x30);
                fVar33 = (float)NEON_fmadd(uVar64,fVar38,uVar32);
                fVar65 = *(float *)(pbVar29 + 0xac) * fVar65;
                fVar38 = *(float *)(pbVar29 + 0xb0);
                *puVar18 = 0;
                fVar38 = fVar38 * fVar33;
                uVar51 = NEON_fmadd(fVar65,fVar50,fVar34 * fVar43);
                uVar59 = NEON_fmadd(fVar65,uVar59,fVar34 * fVar36);
                uVar32 = NEON_fmadd(fVar65,uVar67,fVar34 * fVar58);
                fVar65 = (float)NEON_fmadd(fVar38,fVar54,uVar51);
                fVar43 = (float)NEON_fmadd(fVar38,uVar68,uVar59);
                fVar33 = (float)NEON_fmadd(fVar38,uVar64,uVar32);
                *(float *)puVar30 = fVar65;
                *(float *)(param_1 + lVar15 * 0xc0 + 0xbc) = fVar43;
                *pfVar23 = fVar33;
              }
              fVar33 = 0.0;
              fVar38 = 0.0;
              goto LAB_00f2f25c;
            }
          }
        }
        else {
          pbVar17 = param_1 + lVar15 * 0xc0;
          addFrictionConstraint
                    ((btVector3 *)this,(int)pbVar17 + 0xa8,iVar7,iVar8,pbVar4,(btVector3 *)pbVar1,
                     (btVector3 *)&local_c0,(btCollisionObject *)&local_d0,
                     (btCollisionObject *)puVar69,local_104,*(float *)(pbVar17 + 0x90),
                     *(float *)(pbVar17 + 0x98));
          if (((byte)param_2[0x40] >> 4 & 1) != 0) {
            puVar30 = (ulong *)(param_1 + lVar15 * 0xc0 + 0xb8);
            fVar33 = *(float *)(param_1 + lVar15 * 0xc0 + 0x94);
            fVar38 = *(float *)(param_1 + lVar15 * 0xc0 + 0x9c);
LAB_00f2f25c:
            addFrictionConstraint
                      ((btVector3 *)this,(int)puVar30,iVar7,iVar8,pbVar4,(btVector3 *)pbVar1,
                       (btVector3 *)&local_c0,(btCollisionObject *)&local_d0,
                       (btCollisionObject *)puVar69,fVar37,fVar33,fVar38);
          }
        }
        setFrictionConstraintImpulse(this,pbVar10,iVar7,iVar8,pbVar1,param_2);
        iVar12 = *(int *)(param_1 + 0x318);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar12);
  }
LAB_00f3033c:
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


