// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f4d8f0
// Size: 1556 bytes
// Signature: undefined __thiscall processCollision(btCompoundCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btCompoundCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btCompoundCollisionAlgorithm::processCollision
          (btCompoundCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  btCollisionObjectWrapper *pbVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  long *plVar9;
  btPersistentManifold *this_00;
  ulong uVar10;
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  btDbvtNode **this_01;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined **local_150;
  btCollisionObjectWrapper *pbStack_148;
  btCollisionObjectWrapper *local_140;
  undefined8 uStack_138;
  btDispatcherInfo *local_130;
  btManifoldResult *pbStack_128;
  long **local_120;
  undefined8 uStack_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_100;
  ulong uStack_f8;
  float fStack_d8;
  float local_d4;
  int iStack_d0;
  undefined4 local_cc;
  long local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_88;
  float local_84;
  float local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  pbVar1 = param_2;
  pbVar5 = param_1;
  if (this[0x30] != (btCompoundCollisionAlgorithm)0x0) {
    pbVar1 = param_1;
    pbVar5 = param_2;
  }
  lVar16 = *(long *)(pbVar5 + 8);
  if (*(int *)(lVar16 + 0x68) != *(int *)(this + 0x44)) {
    uVar3 = *(uint *)(this + 0x14);
    if (0 < (int)uVar3) {
      lVar15 = 0;
      do {
        if (*(undefined8 **)(*(long *)(this + 0x20) + lVar15) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(*(long *)(this + 0x20) + lVar15))();
          (**(code **)(**(long **)(this + 8) + 0x78))
                    (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x20) + lVar15));
        }
        lVar15 = lVar15 + 8;
      } while ((ulong)uVar3 * 8 - lVar15 != 0);
    }
    preallocateChildAlgorithms(this,param_1,param_2);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(lVar16 + 0x68);
  }
  iVar11 = *(int *)(this + 0x14);
  if (iVar11 != 0) {
    uStack_138 = *(undefined8 *)(this + 8);
    local_c0 = CONCAT31(local_c0._1_3_,1);
    this_01 = *(btDbvtNode ***)(lVar16 + 0x60);
    local_c8 = 0;
    local_150 = &PTR__ICollide_01019920;
    local_120 = *(long ***)(this + 0x20);
    uStack_118 = *(undefined8 *)(this + 0x38);
    local_d4 = 0.0;
    iStack_d0 = 0;
    pbStack_148 = pbVar5;
    local_140 = pbVar1;
    local_130 = param_3;
    pbStack_128 = param_4;
    if (0 < iVar11) {
      lVar15 = 0;
      plVar9 = *local_120;
      while( true ) {
        if (plVar9 != (long *)0x0) {
          local_d4 = 0.0;
          (**(code **)(*plVar9 + 0x20))(plVar9,&fStack_d8);
          iVar11 = (int)local_d4;
          if (0 < (int)local_d4) {
            lVar17 = 0;
            do {
              this_00 = *(btPersistentManifold **)(local_c8 + lVar17 * 8);
              if (*(int *)(this_00 + 0x318) != 0) {
                *(btPersistentManifold **)(param_4 + 8) = this_00;
                lVar2 = *(long *)(this_00 + 0x308);
                lVar6 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
                if (*(long *)(this_00 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
                  lVar2 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
                  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
                }
                btPersistentManifold::refreshContactPoints
                          (this_00,(btTransform *)(lVar2 + 8),(btTransform *)(lVar6 + 8));
                *(undefined8 *)(param_4 + 8) = 0;
                iVar11 = (int)local_d4;
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 < iVar11);
          }
          if (iVar11 < 0) {
            if (iStack_d0 < 0) {
              if ((local_c8 != 0) && ((char)local_c0 != '\0')) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
              local_c0 = CONCAT31(local_c0._1_3_,1);
              local_c8 = 0;
              iStack_d0 = 0;
            }
            lVar17 = (long)iVar11;
            do {
              *(undefined8 *)(local_c8 + lVar17 * 8) = 0;
              bVar8 = lVar17 != -1;
              lVar17 = lVar17 + 1;
            } while (bVar8);
          }
          iVar11 = *(int *)(this + 0x14);
        }
        local_d4 = 0.0;
        lVar15 = lVar15 + 1;
        if (iVar11 <= lVar15) break;
        plVar9 = *(long **)(*(long *)(this + 0x20) + lVar15 * 8);
      }
      if ((local_c8 != 0) && ((char)local_c0 != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    if (this_01 == (btDbvtNode **)0x0) {
      uVar3 = *(uint *)(this + 0x14);
      if ((int)uVar3 < 1) goto LAB_00f4decc;
      lVar15 = 0x40;
      uVar14 = 1;
      do {
        uVar10 = btCompoundLeafCallback::ProcessChildShape
                           ((btCompoundLeafCallback *)&local_150,
                            *(btCollisionShape **)(*(long *)(lVar16 + 0x30) + lVar15),
                            (int)uVar14 + -1);
        if ((uVar10 & 1) == 0) break;
        bVar8 = uVar14 < uVar3;
        lVar15 = lVar15 + 0x58;
        uVar14 = uVar14 + 1;
      } while (bVar8);
    }
    else {
      pfVar12 = *(float **)(pbVar5 + 0x18);
      puVar13 = *(undefined8 **)(pbVar1 + 0x18);
      fVar18 = *pfVar12;
      fVar19 = pfVar12[1];
      fVar38 = pfVar12[2];
      fVar25 = pfVar12[4];
      fVar27 = pfVar12[5];
      fVar21 = (float)*puVar13;
      fVar22 = (float)((ulong)*puVar13 >> 0x20);
      fVar39 = pfVar12[6];
      fVar23 = *(float *)(puVar13 + 1);
      local_cc = 0;
      fVar34 = pfVar12[8];
      fVar35 = pfVar12[9];
      fVar28 = (float)puVar13[2];
      fVar30 = (float)((ulong)puVar13[2] >> 0x20);
      fVar40 = *(float *)(puVar13 + 6) - pfVar12[0xc];
      fVar29 = pfVar12[10];
      fVar41 = *(float *)((long)puVar13 + 0x34) - pfVar12[0xd];
      uVar32 = *(undefined4 *)(puVar13 + 3);
      fVar33 = (float)puVar13[4];
      fVar37 = (float)((ulong)puVar13[4] >> 0x20);
      fStack_d8 = fVar21 * fVar18 + fVar28 * fVar25 + fVar33 * fVar34;
      local_d4 = fVar22 * fVar18 + fVar30 * fVar25 + fVar37 * fVar34;
      local_b8 = CONCAT44(fVar22 * fVar38 + fVar30 * fVar39 + fVar37 * fVar29,
                          fVar21 * fVar38 + fVar28 * fVar39 + fVar33 * fVar29);
      uVar31 = NEON_fmadd(uVar32,fVar25,fVar23 * fVar18);
      uVar36 = NEON_fmadd(uVar32,fVar27,fVar23 * fVar19);
      uVar24 = NEON_fmadd(uVar32,fVar39,fVar23 * fVar38);
      uVar32 = NEON_fmadd(fVar41,fVar25,fVar40 * fVar18);
      uVar20 = NEON_fmadd(fVar41,fVar27,fVar40 * fVar19);
      uVar26 = NEON_fmadd(fVar41,fVar39,fVar40 * fVar38);
      uVar42 = *(undefined4 *)(puVar13 + 5);
      fVar18 = *(float *)(puVar13 + 7) - pfVar12[0xe];
      iStack_d0 = NEON_fmadd(uVar42,fVar34,uVar31);
      local_c0 = NEON_fmadd(uVar42,fVar35,uVar36);
      local_b0 = NEON_fmadd(uVar42,fVar29,uVar24);
      local_c8 = CONCAT44(fVar22 * fVar19 + fVar30 * fVar27 + fVar37 * fVar35,
                          fVar21 * fVar19 + fVar28 * fVar27 + fVar33 * fVar35);
      local_bc = 0;
      uVar32 = NEON_fmadd(fVar18,fVar34,uVar32);
      uVar20 = NEON_fmadd(fVar18,fVar35,uVar20);
      local_a0 = NEON_fmadd(fVar18,fVar29,uVar26);
      local_ac = 0;
      local_a8 = CONCAT44(uVar20,uVar32);
      local_9c = 0;
      (**(code **)(**(long **)(pbVar1 + 8) + 0x10))
                (*(long **)(pbVar1 + 8),&fStack_d8,&local_88,&local_98);
      uStack_f8 = (ulong)(uint)local_80;
      local_100 = CONCAT44(local_84,local_88);
      btDbvt::collideTV((btDbvt *)this_01,*this_01,(btDbvtAabbMm *)&local_100,(ICollide *)&local_150
                       );
    }
    uVar3 = *(uint *)(this + 0x14);
    if (0 < (int)uVar3) {
      lVar17 = 0;
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(this + 0x20) + lVar17) != 0) {
          pfVar12 = *(float **)(pbVar5 + 0x18);
          puVar13 = (undefined8 *)(*(long *)(lVar16 + 0x30) + lVar15);
          fVar21 = *pfVar12;
          fVar19 = pfVar12[1];
          fVar27 = pfVar12[4];
          fVar28 = pfVar12[5];
          fVar33 = pfVar12[8];
          fVar37 = pfVar12[9];
          fVar25 = *(float *)(puVar13 + 1);
          fVar22 = (float)*puVar13;
          fVar23 = (float)((ulong)*puVar13 >> 0x20);
          fVar18 = pfVar12[2];
          uVar20 = *(undefined4 *)(puVar13 + 3);
          fVar30 = (float)puVar13[2];
          fVar35 = (float)((ulong)puVar13[2] >> 0x20);
          fVar38 = pfVar12[6];
          uVar32 = NEON_fmadd(uVar20,fVar19,fVar25 * fVar21);
          fVar34 = pfVar12[10];
          uVar24 = NEON_fmadd(uVar20,fVar28,fVar25 * fVar27);
          fVar39 = (float)puVar13[4];
          fVar41 = (float)((ulong)puVar13[4] >> 0x20);
          fStack_d8 = fVar22 * fVar21 + fVar30 * fVar19 + fVar39 * fVar18;
          local_d4 = fVar23 * fVar21 + fVar35 * fVar19 + fVar41 * fVar18;
          local_b8 = CONCAT44(fVar23 * fVar33 + fVar35 * fVar37 + fVar41 * fVar34,
                              fVar22 * fVar33 + fVar30 * fVar37 + fVar39 * fVar34);
          uVar26 = *(undefined4 *)(puVar13 + 5);
          fVar40 = *(float *)(puVar13 + 6);
          fVar29 = *(float *)((long)puVar13 + 0x34);
          uVar20 = NEON_fmadd(uVar20,fVar37,fVar25 * fVar33);
          iStack_d0 = NEON_fmadd(uVar26,fVar18,uVar32);
          local_c0 = NEON_fmadd(uVar26,fVar38,uVar24);
          uVar32 = NEON_fmadd(fVar40,fVar33,pfVar12[0xe]);
          fVar25 = *(float *)(puVar13 + 7);
          local_cc = 0;
          uVar32 = NEON_fmadd(fVar29,fVar37,uVar32);
          local_b0 = NEON_fmadd(uVar26,fVar34,uVar20);
          local_c8 = CONCAT44(fVar23 * fVar27 + fVar35 * fVar28 + fVar41 * fVar38,
                              fVar22 * fVar27 + fVar30 * fVar28 + fVar39 * fVar38);
          local_bc = 0;
          local_a8 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar12 + 0xc) >> 0x20) +
                              fVar27 * fVar40 + fVar28 * fVar29 + fVar38 * fVar25,
                              (float)*(undefined8 *)(pfVar12 + 0xc) + fVar21 * fVar40 +
                              fVar19 * fVar29 + fVar18 * fVar25);
          local_a0 = NEON_fmadd(fVar25,fVar34,uVar32);
          local_ac = 0;
          local_9c = 0;
          (**(code **)(*(long *)puVar13[8] + 0x10))
                    ((long *)puVar13[8],&fStack_d8,&local_100,&local_88);
          (**(code **)(**(long **)(pbVar1 + 8) + 0x10))
                    (*(long **)(pbVar1 + 8),*(undefined8 *)(pbVar1 + 0x18),&local_98,&local_110);
          bVar7 = 0;
          if ((float)local_100 <= local_110) {
            if (local_98 <= local_88) {
              bVar7 = 1;
            }
            else {
              bVar7 = 0;
            }
          }
          if ((local_108 < (float)uStack_f8) || (local_80 < fStack_90)) {
            bVar7 = 0;
          }
          if ((local_10c < local_100._4_4_) || (!(bool)(bVar7 & fStack_94 <= local_84))) {
            (**(code **)**(undefined8 **)(*(long *)(this + 0x20) + lVar17))();
            (**(code **)(**(long **)(this + 8) + 0x78))
                      (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x20) + lVar17));
            *(undefined8 *)(*(long *)(this + 0x20) + lVar17) = 0;
          }
        }
        lVar15 = lVar15 + 0x58;
        lVar17 = lVar17 + 8;
      } while ((ulong)uVar3 * 0x58 - lVar15 != 0);
    }
  }
LAB_00f4decc:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


