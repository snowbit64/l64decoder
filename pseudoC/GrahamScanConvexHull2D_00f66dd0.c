// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GrahamScanConvexHull2D
// Entry Point: 00f66dd0
// Size: 2556 bytes
// Signature: undefined __cdecl GrahamScanConvexHull2D(btAlignedObjectArray * param_1, btAlignedObjectArray * param_2, btVector3 * param_3)


/* GrahamScanConvexHull2D(btAlignedObjectArray<GrahamVector3>&,
   btAlignedObjectArray<GrahamVector3>&, btVector3 const&) */

void GrahamScanConvexHull2D
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2,btVector3 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined auVar3 [16];
  bool bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined auVar32 [16];
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  undefined auVar40 [16];
  float fVar44;
  float fVar45;
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  float fVar49;
  float fVar53;
  float fVar54;
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined in_q31 [16];
  undefined auVar55 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_88;
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  fVar23 = *(float *)(param_3 + 8);
  if (ABS(fVar23) <= 0.7071068) {
    fVar22 = *(float *)param_3;
    fVar19 = *(float *)(param_3 + 4);
    fVar20 = (float)NEON_fmadd(fVar19,fVar19,fVar22 * fVar22);
    fVar20 = SQRT(fVar20);
    fVar22 = (1.0 / fVar20) * fVar22;
    fVar26 = (1.0 / fVar20) * -fVar19;
    fVar19 = fVar22 * -fVar23;
    fVar23 = fVar26 * fVar23;
    fVar21 = 0.0;
  }
  else {
    fVar21 = *(float *)(param_3 + 4);
    fVar19 = (float)NEON_fmadd(fVar21,fVar21,fVar23 * fVar23);
    fVar19 = SQRT(fVar19);
    fVar21 = (1.0 / fVar19) * fVar21;
    fVar22 = (1.0 / fVar19) * -fVar23;
    fVar23 = fVar21 * -*(float *)param_3;
    fVar20 = fVar22 * *(float *)param_3;
    fVar26 = 0.0;
  }
  uVar6 = *(uint *)(param_1 + 4);
  if ((int)uVar6 < 2) {
    if (uVar6 == 1) {
      iVar17 = 0;
      uVar6 = *(uint *)(param_2 + 4);
      do {
        puVar18 = *(undefined8 **)(param_1 + 0x10);
        if (uVar6 == *(uint *)(param_2 + 8)) {
          iVar7 = uVar6 << 1;
          if (uVar6 == 0) {
            iVar7 = 1;
          }
          if ((int)uVar6 < iVar7) {
            if (iVar7 == 0) {
              lVar5 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar5 = (*(code *)PTR_FUN_01048e38)((long)iVar7 * 0x18,0x10);
              uVar6 = *(uint *)(param_2 + 4);
            }
            if (0 < (int)uVar6) {
              lVar12 = 0;
              do {
                puVar8 = (undefined8 *)(lVar5 + lVar12);
                puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar12);
                lVar12 = lVar12 + 0x18;
                uVar16 = puVar1[1];
                uVar9 = *puVar1;
                puVar8[2] = puVar1[2];
                puVar8[1] = uVar16;
                *puVar8 = uVar9;
              } while ((ulong)uVar6 * 0x18 - lVar12 != 0);
            }
            if ((*(long *)(param_2 + 0x10) != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            uVar6 = *(uint *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar5;
            *(int *)(param_2 + 8) = iVar7;
          }
        }
        iVar17 = iVar17 + 1;
        uVar16 = puVar18[1];
        uVar9 = *puVar18;
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x18);
        puVar8[2] = puVar18[2];
        puVar8[1] = uVar16;
        *puVar8 = uVar9;
        uVar6 = *(int *)(param_2 + 4) + 1;
        *(uint *)(param_2 + 4) = uVar6;
      } while (iVar17 < *(int *)(param_1 + 4));
    }
  }
  else {
    lVar12 = 0;
    lVar5 = 0;
    do {
      puVar8 = *(undefined8 **)(param_1 + 0x10);
      puVar18 = (undefined8 *)((long)puVar8 + lVar12);
      uVar27 = NEON_fmadd(*(undefined4 *)((long)puVar8 + 4),fVar22,*(float *)puVar8 * fVar26);
      uVar24 = NEON_fmadd(*(float *)((long)puVar18 + 4),fVar22,*(float *)puVar18 * fVar26);
      fVar28 = (float)NEON_fmadd(*(undefined4 *)(puVar8 + 1),fVar21,uVar27);
      fVar25 = (float)NEON_fmadd(*(float *)(puVar18 + 1),fVar21,uVar24);
      if (fVar25 < fVar28) {
        uVar16 = *puVar18;
        uVar9 = puVar18[2];
        uVar31 = puVar8[1];
        uVar30 = *puVar8;
        puVar8[1] = puVar18[1];
        *puVar8 = uVar16;
        uVar16 = puVar8[2];
        puVar8[2] = uVar9;
        puVar18 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar12);
        puVar18[1] = uVar31;
        *puVar18 = uVar30;
        puVar18[2] = uVar16;
        uVar6 = *(uint *)(param_1 + 4);
      }
      lVar5 = lVar5 + 1;
      lVar12 = lVar12 + 0x18;
    } while (lVar5 < (int)uVar6);
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar18 + 2) = 0xf149f2ca;
    if (1 < (int)uVar6) {
      fVar25 = *(float *)puVar18;
      fVar28 = *(float *)((long)puVar18 + 4);
      fVar33 = *(float *)(puVar18 + 1);
      uVar14 = (ulong)uVar6 - 1;
      if (uVar14 < 5) {
        lVar5 = 1;
      }
      else {
        uVar10 = 4;
        if ((uVar14 & 3) != 0) {
          uVar10 = uVar14 & 3;
        }
        puVar8 = puVar18 + 8;
        lVar5 = uVar14 - uVar10;
        do {
          auVar52 = *(undefined (*) [16])(puVar8 + 1);
          auVar60 = *(undefined (*) [16])(puVar8 + 3);
          auVar3 = *(undefined (*) [16])(puVar8 + -5);
          lVar5 = lVar5 + -4;
          auVar32 = *(undefined (*) [16])(puVar8 + -3);
          auVar55._4_12_ = in_q31._4_12_;
          auVar55._0_4_ = auVar60._0_4_;
          auVar57._12_4_ = in_q31._12_4_;
          auVar57._0_8_ = auVar55._0_8_;
          auVar57._8_4_ = auVar60._8_4_;
          auVar56._8_8_ = auVar57._8_8_;
          auVar56._4_4_ = auVar52._0_4_;
          auVar56._0_4_ = auVar60._0_4_;
          auVar58._0_12_ = auVar56._0_12_;
          auVar58._12_4_ = auVar52._8_4_;
          fVar36 = auVar3._0_4_;
          auVar50 = NEON_ext(auVar60,auVar58,0xc,1);
          auVar46._4_4_ = auVar3._4_4_;
          auVar46._0_4_ = auVar32._4_4_;
          auVar46._8_4_ = auVar32._12_4_;
          auVar46._12_4_ = auVar3._12_4_;
          auVar46 = NEON_ext(auVar46,auVar3,4,1);
          auVar51._4_4_ = auVar3._8_4_;
          auVar51._0_4_ = fVar36;
          auVar51._8_4_ = fVar36;
          auVar51._12_4_ = auVar3._8_4_;
          auVar51 = NEON_ext(auVar51,*(undefined (*) [16])(puVar8 + -1),0xc,1);
          fVar38 = auVar32._8_4_ - fVar25;
          fVar44 = auVar50._8_4_ - fVar25;
          fVar45 = auVar50._12_4_ - fVar25;
          fVar35 = auVar46._0_4_ - fVar28;
          fVar37 = auVar46._4_4_ - fVar28;
          fVar39 = auVar52._4_4_ - fVar28;
          fVar41 = auVar60._12_4_ - fVar28;
          fVar49 = auVar51._0_4_ - fVar33;
          fVar53 = auVar51._4_4_ - fVar33;
          fVar54 = auVar52._8_4_ - fVar33;
          auVar47._0_4_ = (fVar36 - fVar25) * fVar19 + fVar23 * fVar35 + fVar20 * fVar49;
          auVar47._4_4_ = fVar38 * fVar19 + fVar23 * fVar37 + fVar20 * fVar53;
          auVar47._8_4_ = fVar44 * fVar19 + fVar23 * fVar39 + fVar20 * fVar54;
          auVar47._12_4_ =
               fVar45 * fVar19 + fVar23 * fVar41 + fVar20 * (*(float *)(puVar8 + 5) - fVar33);
          auVar42._0_4_ = (fVar36 - fVar25) * fVar26 + fVar22 * fVar35 + fVar21 * fVar49;
          auVar42._4_4_ = fVar38 * fVar26 + fVar22 * fVar37 + fVar21 * fVar53;
          auVar42._8_4_ = fVar44 * fVar26 + fVar22 * fVar39 + fVar21 * fVar54;
          auVar42._12_4_ =
               fVar45 * fVar26 + fVar22 * fVar41 + fVar21 * (*(float *)(puVar8 + 5) - fVar33);
          auVar50._0_4_ = ABS(auVar47._0_4_);
          auVar50._4_4_ = ABS(auVar47._4_4_);
          auVar50._8_4_ = ABS(auVar47._8_4_);
          auVar50._12_4_ = ABS(auVar47._12_4_);
          auVar51 = NEON_fcmlt(auVar42,0,4);
          auVar32._0_4_ = -auVar42._0_4_;
          auVar32._4_4_ = -auVar42._4_4_;
          auVar32._8_4_ = -auVar42._8_4_;
          auVar32._12_4_ = -auVar42._12_4_;
          auVar59._0_4_ = -auVar50._0_4_;
          auVar59._4_4_ = -auVar50._4_4_;
          auVar59._8_4_ = -auVar50._8_4_;
          auVar59._12_4_ = -auVar50._12_4_;
          auVar46 = NEON_bif(auVar32,auVar42,auVar51,1);
          auVar60 = NEON_bit(auVar59,auVar50,auVar51,1);
          auVar52._8_4_ = 0x3f490fdb;
          auVar52._0_8_ = 0x3f490fdb3f490fdb;
          auVar52._12_4_ = 0x3f490fdb;
          auVar3._8_4_ = 0x4016cbe4;
          auVar3._0_8_ = 0x4016cbe44016cbe4;
          auVar3._12_4_ = 0x4016cbe4;
          auVar52 = NEON_bsl(auVar51,auVar3,auVar52,1);
          in_q31._0_4_ = (auVar60._0_4_ + auVar42._0_4_) * 0.7853982;
          in_q31._4_4_ = (auVar60._4_4_ + auVar42._4_4_) * 0.7853982;
          in_q31._8_4_ = (auVar60._8_4_ + auVar42._8_4_) * 0.7853982;
          in_q31._12_4_ = (auVar60._12_4_ + auVar42._12_4_) * 0.7853982;
          auVar43._0_4_ = auVar42._0_4_ * auVar42._0_4_ + auVar47._0_4_ * auVar47._0_4_;
          auVar43._4_4_ = auVar42._4_4_ * auVar42._4_4_ + auVar47._4_4_ * auVar47._4_4_;
          auVar43._8_4_ = auVar42._8_4_ * auVar42._8_4_ + auVar47._8_4_ * auVar47._8_4_;
          auVar43._12_4_ = auVar42._12_4_ * auVar42._12_4_ + auVar47._12_4_ * auVar47._12_4_;
          auVar60._8_4_ = 0x34000000;
          auVar60._0_8_ = 0x3400000034000000;
          auVar60._12_4_ = 0x34000000;
          auVar51 = NEON_fcmgt(auVar60,auVar43,4);
          auVar40._0_4_ = auVar52._0_4_ - in_q31._0_4_ / (auVar46._0_4_ + auVar50._0_4_);
          auVar40._4_4_ = auVar52._4_4_ - in_q31._4_4_ / (auVar46._4_4_ + auVar50._4_4_);
          auVar40._8_4_ = auVar52._8_4_ - in_q31._8_4_ / (auVar46._8_4_ + auVar50._8_4_);
          auVar40._12_4_ = auVar52._12_4_ - in_q31._12_4_ / (auVar46._12_4_ + auVar50._12_4_);
          auVar46 = NEON_fcmlt(auVar47,0,4);
          auVar48._0_4_ = -auVar40._0_4_;
          auVar48._4_4_ = -auVar40._4_4_;
          auVar48._8_4_ = -auVar40._8_4_;
          auVar48._12_4_ = -auVar40._12_4_;
          auVar46 = NEON_bit(auVar40,auVar48,auVar46,1);
          *(byte *)(puVar8 + -3) = auVar46[0] & ~auVar51[0];
          *(byte *)((long)puVar8 + -0x17) = auVar46[1] & ~auVar51[1];
          *(byte *)((long)puVar8 + -0x16) = auVar46[2] & ~auVar51[2];
          *(byte *)((long)puVar8 + -0x15) = auVar46[3] & ~auVar51[3];
          *(byte *)((long)puVar8 + 4) = auVar46[4] & ~auVar51[4];
          *(byte *)((long)puVar8 + 5) = auVar46[5] & ~auVar51[5];
          *(byte *)((long)puVar8 + 6) = auVar46[6] & ~auVar51[6];
          *(byte *)((long)puVar8 + 7) = auVar46[7] & ~auVar51[7];
          *(byte *)(puVar8 + 4) = auVar46[8] & ~auVar51[8];
          *(byte *)((long)puVar8 + 0x21) = auVar46[9] & ~auVar51[9];
          *(byte *)((long)puVar8 + 0x22) = auVar46[10] & ~auVar51[10];
          *(byte *)((long)puVar8 + 0x23) = auVar46[11] & ~auVar51[11];
          *(byte *)((long)puVar8 + 0x3c) = auVar46[12] & ~auVar51[12];
          *(byte *)((long)puVar8 + 0x3d) = auVar46[13] & ~auVar51[13];
          *(byte *)((long)puVar8 + 0x3e) = auVar46[14] & ~auVar51[14];
          *(byte *)((long)puVar8 + 0x3f) = auVar46[15] & ~auVar51[15];
          puVar8 = puVar8 + 0xc;
        } while (lVar5 != 0);
        lVar5 = (uVar14 - uVar10) + 1;
      }
      lVar12 = (ulong)uVar6 - lVar5;
      puVar8 = puVar18 + lVar5 * 3 + 1;
      do {
        fVar36 = *(float *)((long)puVar8 + -4) - fVar28;
        uVar27 = NEON_fmadd(fVar36,fVar22,(*(float *)(puVar8 + -1) - fVar25) * fVar26);
        uVar24 = NEON_fmadd(fVar36,fVar23,(*(float *)(puVar8 + -1) - fVar25) * fVar19);
        fVar37 = (float)NEON_fmadd(*(float *)puVar8 - fVar33,fVar21,uVar27);
        fVar35 = (float)NEON_fmadd(*(float *)puVar8 - fVar33,fVar20,uVar24);
        fVar39 = (float)NEON_fmadd(fVar35,fVar35,fVar37 * fVar37);
        fVar36 = 0.0;
        if (1.192093e-07 <= fVar39) {
          fVar39 = ABS(fVar35);
          bVar4 = 0.0 <= fVar37;
          fVar36 = fVar39;
          if (bVar4) {
            fVar36 = -fVar39;
          }
          fVar41 = -fVar37;
          if (bVar4) {
            fVar41 = fVar37;
          }
          fVar38 = 2.356194;
          if (bVar4) {
            fVar38 = 0.7853982;
          }
          fVar38 = fVar38 - ((fVar36 + fVar37) * 0.7853982) / (fVar41 + fVar39);
          fVar36 = -fVar38;
          if (0.0 <= fVar35) {
            fVar36 = fVar38;
          }
        }
        *(float *)(puVar8 + 1) = fVar36;
        lVar12 = lVar12 + -1;
        puVar8 = puVar8 + 3;
      } while (lVar12 != 0);
    }
    uStack_a8 = puVar18[1];
    local_b0 = *puVar18;
    btAlignedObjectArray<GrahamVector3>::quickSortInternal<btAngleCompareFunc>
              ((btAlignedObjectArray<GrahamVector3> *)param_1,(btAngleCompareFunc *)&local_b0,1,
               uVar6 - 1);
    uVar6 = *(uint *)(param_2 + 4);
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    if (uVar6 == *(uint *)(param_2 + 8)) {
      iVar17 = uVar6 << 1;
      if (uVar6 == 0) {
        iVar17 = 1;
      }
      if ((int)uVar6 < iVar17) {
        if (iVar17 == 0) {
          lVar5 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar5 = (*(code *)PTR_FUN_01048e38)((long)iVar17 * 0x18,0x10);
          uVar6 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar6) {
          lVar12 = 0;
          do {
            puVar8 = (undefined8 *)(lVar5 + lVar12);
            puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar12);
            lVar12 = lVar12 + 0x18;
            uVar16 = puVar1[1];
            uVar9 = *puVar1;
            puVar8[2] = puVar1[2];
            puVar8[1] = uVar16;
            *puVar8 = uVar9;
          } while ((ulong)uVar6 * 0x18 - lVar12 != 0);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        uVar6 = *(uint *)(param_2 + 4);
        *(long *)(param_2 + 0x10) = lVar5;
        *(int *)(param_2 + 8) = iVar17;
        param_2[0x18] = (btAlignedObjectArray)0x1;
      }
    }
    uVar16 = puVar18[1];
    uVar9 = *puVar18;
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x18);
    puVar8[2] = puVar18[2];
    puVar8[1] = uVar16;
    *puVar8 = uVar9;
    uVar6 = *(int *)(param_2 + 4) + 1;
    *(uint *)(param_2 + 4) = uVar6;
    lVar5 = *(long *)(param_1 + 0x10);
    if (uVar6 == *(uint *)(param_2 + 8)) {
      iVar17 = uVar6 * 2;
      if (uVar6 == 0) {
        iVar17 = 1;
      }
      if ((int)uVar6 < iVar17) {
        if (iVar17 == 0) {
          lVar12 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar12 = (*(code *)PTR_FUN_01048e38)((long)iVar17 * 0x18,0x10);
          uVar6 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar6) {
          lVar11 = 0;
          do {
            puVar18 = (undefined8 *)(lVar12 + lVar11);
            puVar8 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar11);
            lVar11 = lVar11 + 0x18;
            uVar16 = puVar8[1];
            uVar9 = *puVar8;
            puVar18[2] = puVar8[2];
            puVar18[1] = uVar16;
            *puVar18 = uVar9;
          } while ((ulong)uVar6 * 0x18 - lVar11 != 0);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        uVar6 = *(uint *)(param_2 + 4);
        *(long *)(param_2 + 0x10) = lVar12;
        *(int *)(param_2 + 8) = iVar17;
        param_2[0x18] = (btAlignedObjectArray)0x1;
      }
    }
    uVar16 = *(undefined8 *)(lVar5 + 0x20);
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    puVar18 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x18);
    puVar18[2] = *(undefined8 *)(lVar5 + 0x28);
    puVar18[1] = uVar16;
    *puVar18 = uVar9;
    uVar6 = *(int *)(param_2 + 4) + 1;
    *(uint *)(param_2 + 4) = uVar6;
    if (*(int *)(param_1 + 4) != 2) {
      uVar14 = 2;
      do {
        if ((int)uVar6 < 2) {
LAB_00f67708:
          if (uVar6 == 1) goto LAB_00f67710;
        }
        else {
          iVar17 = uVar6 << 1;
          fVar23 = *(float *)param_3;
          uVar24 = *(undefined4 *)(param_3 + 4);
          lVar5 = *(long *)(param_2 + 0x10);
          puVar18 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar14 * 0x18);
          uVar27 = *(undefined4 *)(param_3 + 8);
          fVar19 = *(float *)puVar18;
          fVar20 = *(float *)((long)puVar18 + 4);
          fVar22 = *(float *)(puVar18 + 1);
          uVar10 = (ulong)uVar6;
          do {
            iVar7 = (int)uVar10;
            pfVar13 = (float *)(lVar5 + (ulong)(iVar7 - 2) * 0x18);
            pfVar15 = (float *)(lVar5 + (uVar10 - 1 & 0xffffffff) * 0x18);
            fVar36 = pfVar13[1] - fVar20;
            fVar25 = pfVar13[2] - pfVar15[2];
            fVar21 = pfVar13[2] - fVar22;
            fVar35 = *pfVar13 - *pfVar15;
            fVar28 = pfVar13[1] - pfVar15[1];
            fVar33 = *pfVar13 - fVar19;
            fVar26 = (float)NEON_fnmsub(fVar21,fVar28,fVar36 * fVar25);
            uVar29 = NEON_fnmsub(fVar33,fVar25,fVar21 * fVar35);
            uVar34 = NEON_fnmsub(fVar36,fVar35,fVar33 * fVar28);
            uVar29 = NEON_fmadd(uVar29,uVar24,fVar26 * fVar23);
            fVar21 = (float)NEON_fmadd(uVar27,uVar34,uVar29);
            if (0.0 < fVar21) {
              if ((*(int *)(param_2 + 8) == iVar7) && (iVar7 < iVar17)) {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                lVar5 = (*(code *)PTR_FUN_01048e38)((long)iVar17 * 0x18,0x10);
                uVar6 = *(uint *)(param_2 + 4);
                if (0 < (int)uVar6) {
                  lVar12 = 0;
                  do {
                    puVar8 = (undefined8 *)(lVar5 + lVar12);
                    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar12);
                    lVar12 = lVar12 + 0x18;
                    uVar16 = puVar1[1];
                    uVar9 = *puVar1;
                    puVar8[2] = puVar1[2];
                    puVar8[1] = uVar16;
                    *puVar8 = uVar9;
                  } while ((ulong)uVar6 * 0x18 - lVar12 != 0);
                }
                if ((*(long *)(param_2 + 0x10) != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)
                   ) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                }
                *(long *)(param_2 + 0x10) = lVar5;
                *(int *)(param_2 + 8) = iVar17;
                param_2[0x18] = (btAlignedObjectArray)0x1;
                uVar10 = (ulong)*(uint *)(param_2 + 4);
              }
              puVar8 = (undefined8 *)(lVar5 + (long)(int)uVar10 * 0x18);
              uVar16 = puVar18[1];
              uVar9 = *puVar18;
              puVar8[2] = puVar18[2];
              puVar8[1] = uVar16;
              *puVar8 = uVar9;
              uVar6 = *(int *)(param_2 + 4) + 1;
              *(uint *)(param_2 + 4) = uVar6;
              goto LAB_00f67708;
            }
            iVar17 = iVar17 + -2;
            *(int *)(param_2 + 4) = iVar7 + -1;
            bVar4 = 2 < (long)uVar10;
            uVar10 = uVar10 - 1;
          } while (bVar4);
LAB_00f67710:
          lVar5 = *(long *)(param_1 + 0x10);
          if (*(int *)(param_2 + 8) == 1) {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar12 = (*(code *)PTR_FUN_01048e38)(0x30,0x10);
            uVar6 = *(uint *)(param_2 + 4);
            if (0 < (int)uVar6) {
              lVar11 = 0;
              do {
                puVar18 = (undefined8 *)(lVar12 + lVar11);
                puVar8 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar11);
                lVar11 = lVar11 + 0x18;
                uVar16 = puVar8[1];
                uVar9 = *puVar8;
                puVar18[2] = puVar8[2];
                puVar18[1] = uVar16;
                *puVar18 = uVar9;
              } while ((ulong)uVar6 * 0x18 - lVar11 != 0);
            }
            if ((*(long *)(param_2 + 0x10) != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            *(long *)(param_2 + 0x10) = lVar12;
            param_2[0x18] = (btAlignedObjectArray)0x1;
            iVar17 = *(int *)(param_2 + 4);
            *(undefined4 *)(param_2 + 8) = 2;
          }
          else {
            lVar12 = *(long *)(param_2 + 0x10);
            iVar17 = 1;
          }
          puVar8 = (undefined8 *)(lVar5 + uVar14 * 0x18);
          puVar18 = (undefined8 *)(lVar12 + (long)iVar17 * 0x18);
          uVar16 = puVar8[1];
          uVar9 = *puVar8;
          puVar18[2] = puVar8[2];
          puVar18[1] = uVar16;
          *puVar18 = uVar9;
          uVar6 = *(int *)(param_2 + 4) + 1;
          *(uint *)(param_2 + 4) = uVar6;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != *(uint *)(param_1 + 4));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


