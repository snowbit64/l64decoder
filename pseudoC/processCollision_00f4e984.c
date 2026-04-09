// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f4e984
// Size: 3524 bytes
// Signature: undefined __thiscall processCollision(btCompoundCompoundCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btCompoundCompoundCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btCompoundCompoundCollisionAlgorithm::processCollision
          (btCompoundCompoundCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined **ppuVar5;
  bool bVar6;
  long *plVar7;
  btPersistentManifold *this_00;
  int iVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  ulong uVar42;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  long *local_1b8;
  undefined8 local_178;
  int local_170;
  btCollisionObjectWrapper *local_168;
  undefined8 local_160;
  undefined8 local_158;
  btDispatcherInfo *pbStack_150;
  btManifoldResult *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  float fStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  lVar24 = *(long *)(param_1 + 8);
  lVar14 = *(long *)(param_2 + 8);
  plVar22 = *(long **)(lVar24 + 0x60);
  plVar15 = *(long **)(lVar14 + 0x60);
  if ((*(int *)(lVar24 + 0x68) != *(int *)(this + 0x70)) ||
     (*(int *)(lVar14 + 0x68) != *(int *)(this + 0x74))) {
    lVar18 = *(long *)(this + 0x48);
    uVar10 = *(uint *)(lVar18 + 0xc);
    if (0 < (int)uVar10) {
      lVar17 = 0;
      do {
        puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x18) + lVar17 + 8);
        if (puVar20 != (undefined8 *)0x0) {
          (**(code **)*puVar20)(puVar20);
          (**(code **)(**(long **)(this + 8) + 0x78))(*(long **)(this + 8),puVar20);
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar10 * 0x10 - lVar17 != 0);
    }
    btHashedSimplePairCache::removeAllPairs();
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(lVar24 + 0x68);
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(lVar14 + 0x68);
  }
  lVar18 = *(long *)(this + 0x48);
  local_168 = (btCollisionObjectWrapper *)0x0;
  local_178 = (undefined **)(ulong)(uint)local_178;
  local_170 = 0;
  local_160 = (btCollisionObjectWrapper *)CONCAT71(local_160._1_7_,1);
  iVar8 = *(int *)(lVar18 + 0xc);
  if (0 < iVar8) {
    lVar17 = 0;
    do {
      plVar7 = *(long **)(*(long *)(lVar18 + 0x18) + lVar17 * 0x10 + 8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_178);
        iVar8 = local_178._4_4_;
        if (0 < local_178._4_4_) {
          lVar26 = 0;
          do {
            this_00 = *(btPersistentManifold **)((long)local_168 + lVar26 * 8);
            if (*(int *)(this_00 + 0x318) != 0) {
              *(btPersistentManifold **)(param_4 + 8) = this_00;
              lVar13 = *(long *)(this_00 + 0x308);
              lVar3 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
              if (*(long *)(this_00 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
                lVar13 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
                lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
              }
              btPersistentManifold::refreshContactPoints
                        (this_00,(btTransform *)(lVar13 + 8),(btTransform *)(lVar3 + 8));
              *(undefined8 *)(param_4 + 8) = 0;
              iVar8 = local_178._4_4_;
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar8);
        }
        if (iVar8 < 0) {
          if (local_170 < 0) {
            if ((local_168 != (btCollisionObjectWrapper *)0x0) && ((char)local_160 != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            local_160 = (btCollisionObjectWrapper *)CONCAT71(local_160._1_7_,1);
            local_168 = (btCollisionObjectWrapper *)0x0;
            local_170 = 0;
          }
          lVar26 = (long)iVar8;
          do {
            *(undefined8 *)((long)local_168 + lVar26 * 8) = 0;
            bVar6 = lVar26 != -1;
            lVar26 = lVar26 + 1;
          } while (bVar6);
        }
        iVar8 = *(int *)(lVar18 + 0xc);
        local_178 = (undefined **)((ulong)local_178 & 0xffffffff);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar8);
    if ((local_168 != (btCollisionObjectWrapper *)0x0) && ((char)local_160 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  local_170 = 0;
  local_158 = *(undefined8 *)(this + 8);
  uStack_140 = *(undefined8 *)(this + 0x48);
  local_138 = *(undefined8 *)(this + 0x38);
  local_178 = &PTR__ICollide_010199e8;
  puVar20 = *(undefined8 **)(param_1 + 0x18);
  pfVar11 = *(float **)(param_2 + 0x18);
  fVar30 = *pfVar11;
  fVar34 = pfVar11[1];
  fVar38 = *(float *)(puVar20 + 1);
  fVar40 = pfVar11[4];
  fVar44 = pfVar11[5];
  fVar59 = (float)*puVar20;
  fVar60 = (float)((ulong)*puVar20 >> 0x20);
  fVar53 = pfVar11[0xc] - *(float *)(puVar20 + 6);
  fVar36 = pfVar11[2];
  fVar55 = pfVar11[0xd] - *(float *)((long)puVar20 + 0x34);
  uVar56 = *(undefined4 *)(puVar20 + 3);
  fVar28 = (float)puVar20[2];
  fVar33 = (float)((ulong)puVar20[2] >> 0x20);
  uVar31 = NEON_fmadd(fVar40,uVar56,fVar30 * fVar38);
  fVar54 = pfVar11[8];
  fVar41 = pfVar11[9];
  uVar35 = NEON_fmadd(fVar44,uVar56,fVar34 * fVar38);
  fVar52 = pfVar11[6];
  uVar57 = *(undefined4 *)(puVar20 + 5);
  uVar37 = NEON_fmadd(fVar52,uVar56,fVar36 * fVar38);
  uVar56 = NEON_fmadd(fVar55,uVar56,fVar53 * fVar38);
  fVar39 = (float)NEON_fmadd(fVar54,uVar57,uVar31);
  fVar32 = (float)NEON_fmadd(fVar41,uVar57,uVar35);
  fVar38 = pfVar11[0xe] - *(float *)(puVar20 + 7);
  fVar45 = pfVar11[10];
  fVar43 = (float)puVar20[4];
  fVar46 = (float)((ulong)puVar20[4] >> 0x20);
  fVar58 = fVar59 * fVar30 + fVar28 * fVar40 + fVar43 * fVar54;
  fVar40 = fVar60 * fVar30 + fVar33 * fVar40 + fVar46 * fVar54;
  fVar54 = fVar59 * fVar34 + fVar28 * fVar44 + fVar43 * fVar41;
  fVar34 = fVar60 * fVar34 + fVar33 * fVar44 + fVar46 * fVar41;
  fVar41 = fVar59 * fVar36 + fVar28 * fVar52 + fVar43 * fVar45;
  fVar36 = fVar60 * fVar36 + fVar33 * fVar52 + fVar46 * fVar45;
  fVar30 = (float)NEON_fmadd(fVar45,uVar57,uVar37);
  fVar59 = fVar59 * fVar53 + fVar28 * fVar55 + fVar43 * fVar38;
  fVar60 = fVar60 * fVar53 + fVar33 * fVar55 + fVar46 * fVar38;
  uVar56 = NEON_fmadd(fVar38,uVar57,uVar56);
  local_168 = param_1;
  local_160 = param_2;
  pbStack_150 = param_3;
  local_148 = param_4;
  if ((plVar22 == (long *)0x0) || (plVar15 == (long *)0x0)) {
    ppuVar5 = local_178;
    if (0 < (int)*(uint *)(lVar14 + 0x24)) {
      uVar29 = *(undefined8 *)(lVar24 + 0x40);
      fVar28 = *(float *)(lVar24 + 0x48);
      lVar18 = *(long *)(lVar24 + 0x30);
      uVar49 = *(undefined8 *)(lVar24 + 0x50);
      uVar10 = *(uint *)(lVar24 + 0x24);
      lVar17 = *(long *)(lVar14 + 0x30);
      fVar38 = *(float *)(lVar24 + 0x58);
      uVar16 = (ulong)*(uint *)(lVar14 + 0x24);
      local_178 = &PTR__ICollide_010199e8;
      do {
        uVar27 = uVar16 - 1;
        lVar26 = lVar17 + (uVar27 & 0xffffffff) * 0x58;
        plVar15 = *(long **)(lVar26 + 0x40);
        (**(code **)(*plVar15 + 0x10))(plVar15,lVar26,&local_130,&local_c0);
        if (0 < (int)uVar10) {
          fVar33 = (local_c0 - (float)local_130) * 0.5;
          fVar45 = (local_bc - local_130._4_4_) * 0.5;
          fVar44 = ((float)local_130 + local_c0) * 0.5;
          fVar52 = (local_130._4_4_ + local_bc) * 0.5;
          fVar53 = (local_b8 - fStack_128) * 0.5;
          fVar43 = (fStack_128 + local_b8) * 0.5;
          fVar46 = fVar59 + fVar58 * fVar44 + fVar54 * fVar52 + fVar41 * fVar43;
          fVar55 = fVar60 + fVar40 * fVar44 + fVar34 * fVar52 + fVar36 * fVar43;
          fVar47 = ABS(fVar58) * fVar33 + ABS(fVar54) * fVar45 + ABS(fVar41) * fVar53;
          fVar48 = ABS(fVar40) * fVar33 + ABS(fVar34) * fVar45 + ABS(fVar36) * fVar53;
          uVar50 = CONCAT44(fVar55 + fVar48,fVar46 + fVar47);
          uVar21 = NEON_fcmgt(uVar29,uVar50,4);
          if ((uVar21 & 1) == 0) {
            uVar51 = CONCAT44(fVar55 - fVar48,fVar46 - fVar47);
            uVar23 = NEON_fcmgt(uVar51,uVar49,4);
            if ((((uVar23 & 1) == 0) && ((uVar21 & 0x100000000) == 0)) &&
               ((uVar23 & 0x100000000) == 0)) {
              uVar31 = NEON_fmadd(fVar44,fVar39,uVar56);
              uVar31 = NEON_fmadd(fVar52,fVar32,uVar31);
              uVar35 = NEON_fmadd(fVar45,ABS(fVar32),fVar33 * ABS(fVar39));
              fVar33 = (float)NEON_fmadd(fVar43,fVar30,uVar31);
              fVar44 = (float)NEON_fmadd(fVar53,ABS(fVar30),uVar35);
              if ((fVar28 <= fVar33 + fVar44) && (uVar21 = (ulong)uVar10, fVar33 - fVar44 <= fVar38)
                 ) {
                do {
                  lVar26 = lVar18 + (uVar21 - 1 & 0xffffffff) * 0x58;
                  plVar15 = *(long **)(lVar26 + 0x40);
                  (**(code **)(*plVar15 + 0x10))(plVar15,lVar26,&local_d0,&local_e0);
                  uVar23 = NEON_fcmge(uVar50,CONCAT44(fStack_cc,local_d0),4);
                  if (((((uVar23 & 1) != 0) &&
                       ((uVar42 = NEON_fcmge(CONCAT44(fStack_dc,local_e0),uVar51,4),
                        (uVar42 & 1) != 0 && ((uVar23 & 0x100000000) != 0)))) &&
                      ((uVar42 & 0x100000000) != 0)) &&
                     ((local_c8 <= fVar33 + fVar44 && (fVar33 - fVar44 <= local_d8)))) {
                    btCompoundCompoundLeafCallback::Process
                              ((btCompoundCompoundLeafCallback *)&local_178,(int)uVar21 + -1,
                               (int)uVar27);
                  }
                  bVar6 = 1 < (long)uVar21;
                  uVar21 = uVar21 - 1;
                } while (bVar6);
              }
            }
          }
        }
        bVar6 = 1 < (long)uVar16;
        uVar16 = uVar27;
        ppuVar5 = local_178;
      } while (bVar6);
    }
  }
  else {
    lVar18 = *plVar22;
    ppuVar5 = &PTR__ICollide_010199e8;
    if ((lVar18 != 0) && (lVar17 = *plVar15, ppuVar5 = local_178, lVar17 != 0)) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      local_178 = &PTR__ICollide_010199e8;
      plVar15 = (long *)(*(code *)PTR_FUN_01048e38)(0x800,0x10);
      uVar21 = 1;
      iVar8 = 0x7c;
      uVar27 = 0x80;
      uVar16 = 0x80;
      *plVar15 = lVar18;
      plVar15[1] = lVar17;
      do {
        iVar19 = (int)uVar21;
        uVar23 = (long)iVar19 - 1;
        pfVar11 = (float *)(plVar15 + uVar23 * 2)[1];
        puVar20 = (undefined8 *)plVar15[uVar23 * 2];
        fVar38 = (pfVar11[4] - *pfVar11) * 0.5;
        fVar33 = (pfVar11[5] - pfVar11[1]) * 0.5;
        fVar28 = (*pfVar11 + pfVar11[4]) * 0.5;
        fVar44 = (pfVar11[1] + pfVar11[5]) * 0.5;
        fVar45 = (pfVar11[6] - pfVar11[2]) * 0.5;
        fVar52 = (pfVar11[2] + pfVar11[6]) * 0.5;
        fVar53 = fVar59 + fVar58 * fVar28 + fVar54 * fVar44 + fVar41 * fVar52;
        fVar43 = fVar60 + fVar40 * fVar28 + fVar34 * fVar44 + fVar36 * fVar52;
        fVar46 = ABS(fVar58) * fVar38 + ABS(fVar54) * fVar33 + ABS(fVar41) * fVar45;
        fVar55 = ABS(fVar40) * fVar38 + ABS(fVar34) * fVar33 + ABS(fVar36) * fVar45;
        uVar21 = NEON_fcmgt(*puVar20,CONCAT44(fVar43 + fVar55,fVar53 + fVar46),4);
        if (((((uVar21 & 1) == 0) &&
             (uVar42 = NEON_fcmgt(CONCAT44(fVar43 - fVar55,fVar53 - fVar46),puVar20[2],4),
             (uVar42 & 1) == 0)) && ((uVar21 & 0x100000000) == 0)) && ((uVar42 & 0x100000000) == 0))
        {
          uVar31 = NEON_fmadd(fVar28,fVar39,uVar56);
          uVar35 = NEON_fmadd(fVar33,ABS(fVar32),fVar38 * ABS(fVar39));
          uVar31 = NEON_fmadd(fVar44,fVar32,uVar31);
          fVar38 = (float)NEON_fmadd(fVar52,fVar30,uVar31);
          fVar28 = (float)NEON_fmadd(fVar45,ABS(fVar30),uVar35);
          if ((*(float *)(puVar20 + 1) <= fVar38 + fVar28) &&
             (fVar38 - fVar28 <= *(float *)(puVar20 + 3))) {
            iVar25 = (int)uVar27;
            if (iVar8 < (int)uVar23) {
              uVar10 = iVar25 * 2;
              uVar21 = (ulong)uVar10;
              local_1b8 = plVar15;
              if (0 < iVar25 != SBORROW4(iVar25,uVar10)) {
                if ((int)uVar16 < (int)uVar10) {
                  if (iVar25 == 0) {
                    local_1b8 = (long *)0x0;
                  }
                  else {
                    gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    local_1b8 = (long *)(*(code *)PTR_FUN_01048e38)
                                                  (-(ulong)(uVar10 >> 0x1f) & 0xfffffff000000000 |
                                                   uVar21 << 4,0x10);
                    uVar16 = uVar27;
                    plVar22 = local_1b8;
                    plVar7 = plVar15;
                    if (0 < iVar25) {
                      do {
                        lVar18 = *plVar7;
                        uVar16 = uVar16 - 1;
                        plVar22[1] = plVar7[1];
                        *plVar22 = lVar18;
                        plVar22 = plVar22 + 2;
                        plVar7 = plVar7 + 2;
                      } while (uVar16 != 0);
                    }
                  }
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)(plVar15);
                  uVar16 = uVar21;
                }
                lVar18 = (long)(int)uVar10 - (long)iVar25;
                uVar27 = -(uVar27 >> 0x1f) & 0xfffffff000000000 | uVar27 << 4;
                do {
                  lVar18 = lVar18 + -1;
                  ((undefined8 *)((long)local_1b8 + uVar27))[1] = CONCAT44(uStack_124,fStack_128);
                  *(undefined8 *)((long)local_1b8 + uVar27) = local_130;
                  uVar27 = uVar27 + 0x10;
                } while (lVar18 != 0);
              }
              iVar8 = uVar10 - 4;
              uVar27 = uVar21;
              plVar15 = local_1b8;
            }
            if (puVar20[6] == 0) {
              if (*(long *)(pfVar11 + 0xc) != 0) {
                lVar18 = *(long *)(pfVar11 + 10);
                plVar15[uVar23 * 2] = (long)puVar20;
                (plVar15 + uVar23 * 2)[1] = lVar18;
                pfVar11 = *(float **)(pfVar11 + 0xc);
                goto LAB_00f4efc8;
              }
              uVar21 = (*(code *)local_178[2])(&local_178,puVar20,pfVar11);
              if ((uVar21 & 1) == 0) break;
            }
            else {
              if (*(long *)(pfVar11 + 0xc) == 0) {
                plVar15[uVar23 * 2] = puVar20[5];
                (plVar15 + uVar23 * 2)[1] = (long)pfVar11;
                puVar20 = (undefined8 *)puVar20[6];
LAB_00f4efc8:
                iVar9 = 1;
                iVar25 = iVar19;
              }
              else {
                lVar18 = *(long *)(pfVar11 + 10);
                plVar15[uVar23 * 2] = puVar20[5];
                (plVar15 + uVar23 * 2)[1] = lVar18;
                plVar22 = plVar15 + (long)iVar19 * 2;
                lVar18 = *(long *)(pfVar11 + 10);
                *plVar22 = puVar20[6];
                plVar22[1] = lVar18;
                lVar18 = *(long *)(pfVar11 + 0xc);
                plVar22[2] = puVar20[5];
                plVar22[3] = lVar18;
                puVar20 = (undefined8 *)puVar20[6];
                iVar9 = 3;
                pfVar11 = *(float **)(pfVar11 + 0xc);
                iVar25 = iVar19 + 2;
              }
              uVar23 = (ulong)(uint)(iVar9 + iVar19);
              plVar15[(long)iVar25 * 2] = (long)puVar20;
              (plVar15 + (long)iVar25 * 2)[1] = (long)pfVar11;
            }
          }
        }
        uVar21 = uVar23 & 0xffffffff;
      } while ((int)uVar23 != 0);
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)(plVar15);
      ppuVar5 = local_178;
    }
  }
  local_178 = ppuVar5;
  lVar18 = *(long *)(this + 0x48);
  if (0 < *(int *)(lVar18 + 0xc)) {
    lVar17 = 0;
    do {
      puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x18) + lVar17 * 0x10 + 8);
      if (puVar20 != (undefined8 *)0x0) {
        lVar26 = lVar17 * 0x10;
        pfVar11 = *(float **)(param_1 + 0x18);
        fVar60 = *pfVar11;
        fVar38 = pfVar11[1];
        fVar34 = pfVar11[4];
        fVar30 = pfVar11[5];
        fVar32 = pfVar11[8];
        fVar33 = pfVar11[9];
        puVar12 = (undefined8 *)
                  (*(long *)(lVar24 + 0x30) +
                  (long)*(int *)(*(long *)(lVar18 + 0x18) + lVar26) * 0x58);
        fVar59 = pfVar11[2];
        fVar41 = *(float *)(puVar12 + 1);
        fVar39 = (float)*puVar12;
        fVar40 = (float)((ulong)*puVar12 >> 0x20);
        uVar35 = *(undefined4 *)(puVar12 + 3);
        fVar54 = *(float *)(puVar12 + 6);
        fVar36 = *(float *)((long)puVar12 + 0x34);
        fVar45 = (float)puVar12[2];
        fVar53 = (float)((ulong)puVar12[2] >> 0x20);
        uVar56 = NEON_fmadd(fVar54,fVar32,pfVar11[0xe]);
        uVar37 = NEON_fmadd(uVar35,fVar38,fVar41 * fVar60);
        uVar57 = NEON_fmadd(uVar35,fVar30,fVar41 * fVar34);
        uVar31 = *(undefined4 *)(puVar12 + 5);
        fVar28 = pfVar11[6];
        uVar35 = NEON_fmadd(uVar35,fVar33,fVar41 * fVar32);
        fVar41 = (float)puVar12[4];
        fVar44 = (float)((ulong)puVar12[4] >> 0x20);
        local_130 = CONCAT44(fVar40 * fVar60 + fVar53 * fVar38 + fVar44 * fVar59,
                             fVar39 * fVar60 + fVar45 * fVar38 + fVar41 * fVar59);
        uVar56 = NEON_fmadd(fVar36,fVar33,uVar56);
        fStack_128 = (float)NEON_fmadd(uVar31,fVar59,uVar37);
        fVar52 = *(float *)(puVar12 + 7);
        fVar43 = pfVar11[10];
        local_118 = NEON_fmadd(uVar31,fVar28,uVar57);
        uStack_124 = 0;
        local_110 = CONCAT44(fVar40 * fVar32 + fVar53 * fVar33 + fVar44 * fVar43,
                             fVar39 * fVar32 + fVar45 * fVar33 + fVar41 * fVar43);
        local_108 = NEON_fmadd(uVar31,fVar43,uVar35);
        local_100 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + 0xc) >> 0x20) +
                             fVar34 * fVar54 + fVar30 * fVar36 + fVar28 * fVar52,
                             (float)*(undefined8 *)(pfVar11 + 0xc) + fVar60 * fVar54 +
                             fVar38 * fVar36 + fVar59 * fVar52);
        local_f8 = NEON_fmadd(fVar52,fVar43,uVar56);
        local_120 = CONCAT44(fVar40 * fVar34 + fVar53 * fVar30 + fVar44 * fVar28,
                             fVar39 * fVar34 + fVar45 * fVar30 + fVar41 * fVar28);
        local_114 = 0;
        local_104 = 0;
        local_f4 = 0;
        (**(code **)(*(long *)puVar12[8] + 0x10))((long *)puVar12[8],&local_130,&local_c0,&local_d0)
        ;
        pfVar11 = *(float **)(param_2 + 0x18);
        fVar60 = *pfVar11;
        fVar38 = pfVar11[1];
        fVar32 = pfVar11[4];
        fVar28 = pfVar11[5];
        fVar30 = pfVar11[8];
        fVar33 = pfVar11[9];
        puVar12 = (undefined8 *)
                  (*(long *)(lVar14 + 0x30) +
                  (long)*(int *)(*(long *)(lVar18 + 0x18) + lVar26 + 4) * 0x58);
        fVar59 = pfVar11[2];
        fVar43 = pfVar11[6];
        fVar40 = *(float *)(puVar12 + 1);
        fVar36 = (float)*puVar12;
        fVar39 = (float)((ulong)*puVar12 >> 0x20);
        uVar35 = *(undefined4 *)(puVar12 + 3);
        fVar54 = *(float *)(puVar12 + 6);
        fVar34 = *(float *)((long)puVar12 + 0x34);
        fVar41 = (float)puVar12[2];
        fVar44 = (float)((ulong)puVar12[2] >> 0x20);
        uVar37 = NEON_fmadd(uVar35,fVar28,fVar40 * fVar32);
        uVar56 = NEON_fmadd(fVar54,fVar30,pfVar11[0xe]);
        uVar31 = NEON_fmadd(uVar35,fVar38,fVar40 * fVar60);
        uVar57 = *(undefined4 *)(puVar12 + 5);
        uVar35 = NEON_fmadd(uVar35,fVar33,fVar40 * fVar30);
        fVar40 = (float)puVar12[4];
        fVar45 = (float)((ulong)puVar12[4] >> 0x20);
        fVar52 = *(float *)(puVar12 + 7);
        uVar56 = NEON_fmadd(fVar34,fVar33,uVar56);
        fVar53 = pfVar11[10];
        fStack_128 = (float)NEON_fmadd(uVar57,fVar59,uVar31);
        local_120 = CONCAT44(fVar39 * fVar32 + fVar44 * fVar28 + fVar45 * fVar43,
                             fVar36 * fVar32 + fVar41 * fVar28 + fVar40 * fVar43);
        local_118 = NEON_fmadd(uVar57,fVar43,uVar37);
        local_110 = CONCAT44(fVar39 * fVar30 + fVar44 * fVar33 + fVar45 * fVar53,
                             fVar36 * fVar30 + fVar41 * fVar33 + fVar40 * fVar53);
        local_108 = NEON_fmadd(uVar57,fVar53,uVar35);
        local_f8 = NEON_fmadd(fVar52,fVar53,uVar56);
        local_100 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + 0xc) >> 0x20) +
                             fVar32 * fVar54 + fVar28 * fVar34 + fVar43 * fVar52,
                             (float)*(undefined8 *)(pfVar11 + 0xc) + fVar60 * fVar54 +
                             fVar38 * fVar34 + fVar59 * fVar52);
        uStack_124 = 0;
        local_130 = CONCAT44(fVar39 * fVar60 + fVar44 * fVar38 + fVar45 * fVar59,
                             fVar36 * fVar60 + fVar41 * fVar38 + fVar40 * fVar59);
        local_114 = 0;
        local_104 = 0;
        local_f4 = 0;
        (**(code **)(*(long *)puVar12[8] + 0x10))((long *)puVar12[8],&local_130,&local_e0,&local_f0)
        ;
        bVar4 = 0;
        if (local_c0 <= local_f0) {
          if (local_e0 <= local_d0) {
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
          }
        }
        if ((local_e8 < local_b8) || (local_c8 < local_d8)) {
          bVar4 = 0;
        }
        if ((local_ec < local_bc) || (!(bool)(bVar4 & fStack_dc <= fStack_cc))) {
          (**(code **)*puVar20)(puVar20);
          (**(code **)(**(long **)(this + 8) + 0x78))(*(long **)(this + 8),puVar20);
          uVar10 = *(uint *)(this + 0x54);
          uVar49 = *(undefined8 *)(*(long *)(lVar18 + 0x18) + lVar26);
          if (uVar10 == *(uint *)(this + 0x58)) {
            uVar1 = uVar10 << 1;
            if (uVar10 == 0) {
              uVar1 = 1;
            }
            if ((int)uVar10 < (int)uVar1) {
              if (uVar1 == 0) {
                lVar26 = 0;
              }
              else {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                lVar26 = (*(code *)PTR_FUN_01048e38)
                                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4
                                    ,0x10);
                uVar10 = *(uint *)(this + 0x54);
              }
              if (0 < (int)uVar10) {
                lVar13 = 0;
                do {
                  uVar29 = *(undefined8 *)(*(long *)(this + 0x60) + lVar13);
                  ((undefined8 *)(lVar26 + lVar13))[1] =
                       ((undefined8 *)(*(long *)(this + 0x60) + lVar13))[1];
                  *(undefined8 *)(lVar26 + lVar13) = uVar29;
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)uVar10 * 0x10 - lVar13 != 0);
              }
              if ((*(long *)(this + 0x60) != 0) &&
                 (this[0x68] != (btCompoundCompoundCollisionAlgorithm)0x0)) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
              *(long *)(this + 0x60) = lVar26;
              *(uint *)(this + 0x58) = uVar1;
              this[0x68] = (btCompoundCompoundCollisionAlgorithm)0x1;
              uVar10 = *(uint *)(this + 0x54);
            }
          }
          puVar20 = (undefined8 *)(*(long *)(this + 0x60) + (long)(int)uVar10 * 0x10);
          *puVar20 = uVar49;
          puVar20[1] = 0;
          *(int *)(this + 0x54) = *(int *)(this + 0x54) + 1;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar18 + 0xc));
  }
  if (0 < *(int *)(this + 0x54)) {
    lVar24 = 0;
    lVar14 = 0;
    do {
      (**(code **)(**(long **)(this + 0x48) + 0x10))
                (*(long **)(this + 0x48),*(undefined4 *)(*(long *)(this + 0x60) + lVar24),
                 ((undefined4 *)(*(long *)(this + 0x60) + lVar24))[1]);
      lVar14 = lVar14 + 1;
      lVar24 = lVar24 + 0x10;
    } while (lVar14 < *(int *)(this + 0x54));
  }
  if ((*(long *)(this + 0x60) != 0) && (this[0x68] != (btCompoundCompoundCollisionAlgorithm)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x68] = (btCompoundCompoundCollisionAlgorithm)0x1;
  if (*(long *)(lVar2 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


