// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: grahamScanConvexHull2D
// Entry Point: 00bae3dc
// Size: 2540 bytes
// Signature: undefined __cdecl grahamScanConvexHull2D(btAlignedObjectArray * param_1, btAlignedObjectArray * param_2, btVector3 * param_3)


/* Bt2PhysicsCookingUtil::grahamScanConvexHull2D(btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3>&,
   btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3>&, btVector3 const&) */

void Bt2PhysicsCookingUtil::grahamScanConvexHull2D
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2,btVector3 *param_3)

{
  bool bVar1;
  undefined (*pauVar2) [12];
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined auVar9 [12];
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float *pfVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined auVar52 [16];
  float fVar53;
  undefined in_q27 [16];
  undefined auVar54 [16];
  undefined auVar57 [16];
  undefined in_q28 [16];
  undefined auVar58 [16];
  undefined auVar62 [16];
  float fVar63;
  undefined auVar64 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_68;
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar11 = *(uint *)(param_1 + 4);
  if ((int)uVar11 < 2) {
    if (uVar11 == 1) {
      iVar21 = 0;
      uVar11 = *(uint *)(param_2 + 4);
      do {
        puVar22 = *(undefined8 **)(param_1 + 0x10);
        if (uVar11 == *(uint *)(param_2 + 8)) {
          iVar6 = uVar11 << 1;
          if (uVar11 == 0) {
            iVar6 = 1;
          }
          if ((int)uVar11 < iVar6) {
            if (iVar6 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = btAlignedAllocInternal((long)iVar6 * 0x18,0x10);
              uVar11 = *(uint *)(param_2 + 4);
            }
            if (0 < (int)uVar11) {
              lVar14 = 0;
              do {
                puVar12 = (undefined8 *)(lVar10 + lVar14);
                puVar4 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar14);
                lVar14 = lVar14 + 0x18;
                uVar20 = puVar4[1];
                uVar13 = *puVar4;
                puVar12[2] = puVar4[2];
                puVar12[1] = uVar20;
                *puVar12 = uVar13;
              } while ((ulong)uVar11 * 0x18 - lVar14 != 0);
            }
            if ((*(void **)(param_2 + 0x10) != (void *)0x0) &&
               (param_2[0x18] != (btAlignedObjectArray)0x0)) {
              btAlignedFreeInternal(*(void **)(param_2 + 0x10));
            }
            uVar11 = *(uint *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar10;
            *(int *)(param_2 + 8) = iVar6;
          }
        }
        iVar21 = iVar21 + 1;
        uVar20 = puVar22[1];
        uVar13 = *puVar22;
        puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar11 * 0x18);
        puVar12[2] = puVar22[2];
        puVar12[1] = uVar20;
        *puVar12 = uVar13;
        uVar11 = *(int *)(param_2 + 4) + 1;
        *(uint *)(param_2 + 4) = uVar11;
      } while (iVar21 < *(int *)(param_1 + 4));
    }
  }
  else {
    fVar23 = *(float *)(param_3 + 8);
    if (ABS(fVar23) <= 0.7071068) {
      fVar24 = *(float *)param_3;
      fVar23 = *(float *)(param_3 + 4);
      fVar29 = (float)NEON_fmadd(fVar24,fVar24,fVar23 * fVar23);
      fVar23 = (1.0 / SQRT(fVar29)) * -fVar23;
      fVar24 = fVar24 * (1.0 / SQRT(fVar29));
      fVar29 = 0.0;
    }
    else {
      fVar29 = *(float *)(param_3 + 4);
      fVar28 = (float)NEON_fmadd(fVar29,fVar29,fVar23 * fVar23);
      fVar24 = (1.0 / SQRT(fVar28)) * -fVar23;
      fVar29 = fVar29 * (1.0 / SQRT(fVar28));
      fVar23 = 0.0;
    }
    lVar14 = 0;
    lVar10 = 0;
    do {
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      puVar22 = (undefined8 *)((long)puVar12 + lVar14);
      uVar31 = NEON_fmadd(*(undefined4 *)puVar12,fVar23,fVar24 * *(float *)((long)puVar12 + 4));
      uVar30 = NEON_fmadd(*(undefined4 *)puVar22,fVar23,fVar24 * *(float *)((long)puVar22 + 4));
      fVar32 = (float)NEON_fmadd(*(undefined4 *)(puVar12 + 1),fVar29,uVar31);
      fVar28 = (float)NEON_fmadd(*(undefined4 *)(puVar22 + 1),fVar29,uVar30);
      if (fVar28 < fVar32) {
        uVar20 = *puVar22;
        uVar13 = puVar22[2];
        uVar25 = puVar12[1];
        uVar26 = *puVar12;
        puVar12[1] = puVar22[1];
        *puVar12 = uVar20;
        uVar20 = puVar12[2];
        puVar12[2] = uVar13;
        puVar22 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar14);
        puVar22[1] = uVar25;
        *puVar22 = uVar26;
        puVar22[2] = uVar20;
        uVar11 = *(uint *)(param_1 + 4);
      }
      lVar10 = lVar10 + 1;
      lVar14 = lVar14 + 0x18;
    } while (lVar10 < (int)uVar11);
    puVar22 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar22 + 2) = 0xf149f2ca;
    if (1 < (int)uVar11) {
      fVar28 = -fVar29;
      fVar32 = -fVar23;
      fVar33 = -fVar24;
      uVar17 = (ulong)uVar11;
      fVar34 = *(float *)puVar22;
      fVar36 = *(float *)((long)puVar22 + 4);
      fVar37 = *(float *)(puVar22 + 1);
      uVar18 = uVar17 - 1;
      if ((uVar18 < 5) ||
         ((puVar22 + 3 < param_3 + 0xc &&
          (param_3 < (btVector3 *)((long)puVar22 + uVar17 * 0x18 + -4))))) {
        lVar10 = 1;
      }
      else {
        uVar5 = 4;
        if ((uVar18 & 3) != 0) {
          uVar5 = uVar18 & 3;
        }
        puVar12 = puVar22 + 8;
        lVar14 = uVar18 - uVar5;
        lVar10 = lVar14 + 1;
        do {
          auVar9 = *(undefined (*) [12])(puVar12 + 1);
          uVar30 = (undefined4)((ulong)puVar12[-3] >> 0x20);
          puVar4 = puVar12 + 6;
          pauVar2 = (undefined (*) [12])(puVar12 + -5);
          uVar31 = (undefined4)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
          lVar14 = lVar14 + -4;
          auVar52 = *(undefined (*) [16])(puVar12 + 3);
          auVar54._4_12_ = in_q27._4_12_;
          auVar54._0_4_ = uVar30;
          auVar56._12_4_ = in_q27._12_4_;
          auVar56._0_8_ = auVar54._0_8_;
          auVar56._8_4_ = uVar30;
          auVar55._8_8_ = auVar56._8_8_;
          auVar55._4_4_ = uVar31;
          auVar55._0_4_ = uVar30;
          auVar62._0_12_ = auVar55._0_12_;
          auVar62._12_4_ = uVar31;
          auVar58._4_12_ = in_q28._4_12_;
          auVar58._0_4_ = auVar52._0_4_;
          auVar60._12_4_ = in_q28._12_4_;
          auVar60._0_8_ = auVar58._0_8_;
          auVar60._8_4_ = auVar52._8_4_;
          auVar59._8_8_ = auVar60._8_8_;
          auVar59._4_4_ = auVar9._0_4_;
          auVar59._0_4_ = auVar52._0_4_;
          auVar61._0_12_ = auVar59._0_12_;
          auVar61._12_4_ = auVar9._8_4_;
          auVar57._12_4_ = (int)((ulong)puVar12[-4] >> 0x20);
          auVar57._0_12_ = *pauVar2;
          auVar57 = NEON_ext(auVar62,auVar57,4,1);
          auVar62 = NEON_ext(auVar52,auVar61,0xc,1);
          auVar64._4_4_ = SUB124(*pauVar2,8);
          auVar64._0_4_ = SUB124(*pauVar2,0);
          auVar64._8_4_ = SUB124(*pauVar2,0);
          auVar64._12_4_ = SUB124(*pauVar2,8);
          auVar64 = NEON_ext(auVar64,*(undefined (*) [16])(puVar12 + -1),0xc,1);
          puVar3 = puVar12 + 3;
          fVar38 = auVar57._0_4_ - fVar36;
          fVar41 = auVar57._4_4_ - fVar36;
          fVar42 = (float)((ulong)*(undefined8 *)*(undefined (*) [12])(puVar12 + 1) >> 0x20) -
                   fVar36;
          fVar43 = auVar52._12_4_ - fVar36;
          fVar44 = auVar64._0_4_ - fVar37;
          fVar45 = auVar64._4_4_ - fVar37;
          fVar46 = (float)puVar12[2] - fVar37;
          fVar47 = *(float *)(puVar12 + 5) - fVar37;
          fVar48 = (float)*(undefined8 *)*pauVar2 - fVar34;
          fVar49 = (float)puVar12[-2] - fVar34;
          fVar50 = auVar62._8_4_ - fVar34;
          fVar51 = auVar62._12_4_ - fVar34;
          in_q28._0_4_ = fVar38 * fVar28 + fVar44 * fVar24;
          in_q28._4_4_ = fVar41 * fVar28 + fVar45 * fVar24;
          in_q28._8_4_ = fVar42 * fVar28 + fVar46 * fVar24;
          in_q28._12_4_ = fVar43 * fVar28 + fVar47 * fVar24;
          auVar52._0_4_ = fVar38 * fVar38 + fVar48 * fVar48 + fVar44 * fVar44;
          auVar52._4_4_ = fVar41 * fVar41 + fVar49 * fVar49 + fVar45 * fVar45;
          auVar52._8_4_ = fVar42 * fVar42 + fVar50 * fVar50 + fVar46 * fVar46;
          auVar52._12_4_ = fVar43 * fVar43 + fVar51 * fVar51 + fVar47 * fVar47;
          fVar63 = (float)*(undefined8 *)(param_3 + 4);
          in_q27._0_8_ = *(ulong *)param_3;
          in_q27._8_8_ = 0;
          fVar40 = (float)*(undefined8 *)(param_3 + 8);
          auVar57 = NEON_fsqrt(auVar52,4);
          fVar53 = (float)in_q27._0_8_;
          *(float *)(puVar12 + -3) =
               ((fVar44 * fVar32 + fVar48 * fVar29) * fVar63 + in_q28._0_4_ * fVar53 +
               (fVar48 * fVar33 + fVar38 * fVar23) * fVar40) / auVar57._0_4_;
          *(float *)puVar12 =
               ((fVar45 * fVar32 + fVar49 * fVar29) * fVar63 + in_q28._4_4_ * fVar53 +
               (fVar49 * fVar33 + fVar41 * fVar23) * fVar40) / auVar57._4_4_;
          puVar12 = puVar12 + 0xc;
          *(float *)puVar3 =
               ((fVar46 * fVar32 + fVar50 * fVar29) * fVar63 + in_q28._8_4_ * fVar53 +
               (fVar50 * fVar33 + fVar42 * fVar23) * fVar40) / auVar57._8_4_;
          *(float *)puVar4 =
               ((fVar47 * fVar32 + fVar51 * fVar29) * fVar63 + in_q28._12_4_ * fVar53 +
               (fVar51 * fVar33 + fVar43 * fVar23) * fVar40) / auVar57._12_4_;
        } while (lVar14 != 0);
      }
      lVar14 = uVar17 - lVar10;
      puVar12 = puVar22 + lVar10 * 3 + 1;
      do {
        lVar14 = lVar14 + -1;
        fVar38 = *(float *)((long)puVar12 + -4) - fVar36;
        fVar40 = *(float *)(puVar12 + -1) - fVar34;
        fVar42 = *(float *)puVar12 - fVar37;
        uVar30 = NEON_fmadd(fVar40,fVar40,fVar38 * fVar38);
        fVar43 = (float)NEON_fmadd(fVar29,fVar40,fVar42 * fVar32);
        fVar41 = (float)NEON_fmadd(fVar42,fVar42,uVar30);
        uVar31 = NEON_fmadd(fVar24,fVar42,fVar38 * fVar28);
        uVar30 = NEON_fmadd(fVar23,fVar38,fVar40 * fVar33);
        uVar31 = NEON_fmadd(uVar31,*(undefined4 *)param_3,*(float *)(param_3 + 4) * fVar43);
        fVar38 = (float)NEON_fmadd(uVar30,*(undefined4 *)(param_3 + 8),uVar31);
        *(float *)(puVar12 + 1) = fVar38 / SQRT(fVar41);
        puVar12 = puVar12 + 3;
      } while (lVar14 != 0);
    }
    uStack_88 = puVar22[1];
    local_90 = *puVar22;
    btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3>::
    quickSortInternal<Bt2PhysicsCookingUtil::GrahamScanAngleCompareFunc>
              ((btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3> *)param_1,
               (GrahamScanAngleCompareFunc *)&local_90,1,uVar11 - 1);
    puVar22 = *(undefined8 **)(param_1 + 0x10);
    uVar11 = *(uint *)(param_1 + 4);
    uVar26 = puVar22[1];
    uVar20 = *puVar22;
    uVar13 = puVar22[2];
    if (uVar11 == *(uint *)(param_1 + 8)) {
      iVar21 = uVar11 << 1;
      if (uVar11 == 0) {
        iVar21 = 1;
      }
      if ((int)uVar11 < iVar21) {
        if (iVar21 == 0) {
          puVar22 = (undefined8 *)0x0;
        }
        else {
          puVar22 = (undefined8 *)btAlignedAllocInternal((long)iVar21 * 0x18,0x10);
          uVar11 = *(uint *)(param_1 + 4);
        }
        if (0 < (int)uVar11) {
          lVar10 = 0;
          do {
            puVar12 = (undefined8 *)((long)puVar22 + lVar10);
            puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar10);
            lVar10 = lVar10 + 0x18;
            uVar27 = puVar4[1];
            uVar25 = *puVar4;
            puVar12[2] = puVar4[2];
            puVar12[1] = uVar27;
            *puVar12 = uVar25;
          } while ((ulong)uVar11 * 0x18 - lVar10 != 0);
        }
        if ((*(void **)(param_1 + 0x10) != (void *)0x0) &&
           (param_1[0x18] != (btAlignedObjectArray)0x0)) {
          btAlignedFreeInternal(*(void **)(param_1 + 0x10));
        }
        uVar11 = *(uint *)(param_1 + 4);
        *(undefined8 **)(param_1 + 0x10) = puVar22;
        *(int *)(param_1 + 8) = iVar21;
        param_1[0x18] = (btAlignedObjectArray)0x1;
      }
    }
    puVar22 = puVar22 + (long)(int)uVar11 * 3;
    puVar22[1] = uVar26;
    *puVar22 = uVar20;
    puVar22[2] = uVar13;
    puVar22 = *(undefined8 **)(param_1 + 0x10);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    uVar11 = *(uint *)(param_2 + 4);
    if (uVar11 == *(uint *)(param_2 + 8)) {
      iVar21 = uVar11 << 1;
      if (uVar11 == 0) {
        iVar21 = 1;
      }
      if ((int)uVar11 < iVar21) {
        if (iVar21 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = btAlignedAllocInternal((long)iVar21 * 0x18,0x10);
          uVar11 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar11) {
          lVar14 = 0;
          do {
            puVar12 = (undefined8 *)(lVar10 + lVar14);
            puVar4 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar14);
            lVar14 = lVar14 + 0x18;
            uVar20 = puVar4[1];
            uVar13 = *puVar4;
            puVar12[2] = puVar4[2];
            puVar12[1] = uVar20;
            *puVar12 = uVar13;
          } while ((ulong)uVar11 * 0x18 - lVar14 != 0);
        }
        if ((*(void **)(param_2 + 0x10) != (void *)0x0) &&
           (param_2[0x18] != (btAlignedObjectArray)0x0)) {
          btAlignedFreeInternal(*(void **)(param_2 + 0x10));
        }
        uVar11 = *(uint *)(param_2 + 4);
        *(long *)(param_2 + 0x10) = lVar10;
        *(int *)(param_2 + 8) = iVar21;
        param_2[0x18] = (btAlignedObjectArray)0x1;
      }
    }
    uVar20 = puVar22[1];
    uVar13 = *puVar22;
    puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar11 * 0x18);
    puVar12[2] = puVar22[2];
    puVar12[1] = uVar20;
    *puVar12 = uVar13;
    uVar11 = *(int *)(param_2 + 4) + 1;
    *(uint *)(param_2 + 4) = uVar11;
    lVar10 = *(long *)(param_1 + 0x10);
    if (uVar11 == *(uint *)(param_2 + 8)) {
      iVar21 = uVar11 * 2;
      if (uVar11 == 0) {
        iVar21 = 1;
      }
      if ((int)uVar11 < iVar21) {
        if (iVar21 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = btAlignedAllocInternal((long)iVar21 * 0x18,0x10);
          uVar11 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar11) {
          lVar16 = 0;
          do {
            puVar22 = (undefined8 *)(lVar14 + lVar16);
            puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar16);
            lVar16 = lVar16 + 0x18;
            uVar20 = puVar12[1];
            uVar13 = *puVar12;
            puVar22[2] = puVar12[2];
            puVar22[1] = uVar20;
            *puVar22 = uVar13;
          } while ((ulong)uVar11 * 0x18 - lVar16 != 0);
        }
        if ((*(void **)(param_2 + 0x10) != (void *)0x0) &&
           (param_2[0x18] != (btAlignedObjectArray)0x0)) {
          btAlignedFreeInternal(*(void **)(param_2 + 0x10));
        }
        uVar11 = *(uint *)(param_2 + 4);
        *(long *)(param_2 + 0x10) = lVar14;
        *(int *)(param_2 + 8) = iVar21;
        param_2[0x18] = (btAlignedObjectArray)0x1;
      }
    }
    uVar20 = *(undefined8 *)(lVar10 + 0x20);
    uVar13 = *(undefined8 *)(lVar10 + 0x18);
    puVar22 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar11 * 0x18);
    puVar22[2] = *(undefined8 *)(lVar10 + 0x28);
    puVar22[1] = uVar20;
    *puVar22 = uVar13;
    uVar11 = *(int *)(param_2 + 4) + 1;
    *(uint *)(param_2 + 4) = uVar11;
    if (*(int *)(param_1 + 4) != 2) {
      uVar17 = 2;
      do {
        uVar18 = (ulong)uVar11;
        lVar10 = *(long *)(param_2 + 0x10);
        lVar14 = *(long *)(param_1 + 0x10);
        if (1 < (int)uVar11) {
          pfVar15 = (float *)(lVar14 + uVar17 * 0x18);
          uVar31 = *(undefined4 *)(param_3 + 8);
          uVar30 = *(undefined4 *)param_3;
          fVar23 = *(float *)(param_3 + 4);
          fVar24 = *pfVar15;
          fVar29 = pfVar15[1];
          fVar28 = pfVar15[2];
          do {
            pfVar15 = (float *)(lVar10 + (ulong)((int)uVar18 - 2) * 0x18);
            pfVar19 = (float *)(lVar10 + (uVar18 - 1 & 0xffffffff) * 0x18);
            fVar34 = *pfVar15 - *pfVar19;
            fVar36 = pfVar15[1] - pfVar19[1];
            fVar38 = pfVar15[2] - pfVar19[2];
            fVar37 = pfVar15[2] - fVar28;
            fVar33 = pfVar15[1] - fVar29;
            fVar32 = *pfVar15 - fVar24;
            fVar40 = (float)NEON_fmadd(fVar38,fVar32,fVar37 * -fVar34);
            uVar39 = NEON_fmadd(fVar36,fVar37,fVar33 * -fVar38);
            uVar35 = NEON_fmadd(fVar34,fVar33,fVar32 * -fVar36);
            uVar39 = NEON_fmadd(uVar39,uVar30,fVar23 * fVar40);
            fVar32 = (float)NEON_fmadd(uVar35,uVar31,uVar39);
            if (0.01 < fVar32) goto LAB_00baecf0;
            *(int *)(param_2 + 4) = (int)uVar18 + -1;
            bVar1 = 2 < uVar18;
            uVar18 = uVar18 - 1;
          } while (bVar1);
          uVar18 = 1;
LAB_00baecf0:
          lVar14 = *(long *)(param_1 + 0x10);
        }
        uVar11 = (uint)uVar18;
        if (uVar11 == *(uint *)(param_2 + 8)) {
          iVar21 = uVar11 << 1;
          if (uVar11 == 0) {
            iVar21 = 1;
          }
          if ((int)uVar11 < iVar21) {
            if (iVar21 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = btAlignedAllocInternal((long)iVar21 * 0x18,0x10);
              uVar11 = *(uint *)(param_2 + 4);
              uVar18 = (ulong)uVar11;
            }
            if (0 < (int)uVar11) {
              lVar16 = 0;
              do {
                puVar22 = (undefined8 *)(lVar10 + lVar16);
                puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar16);
                lVar16 = lVar16 + 0x18;
                uVar20 = puVar12[1];
                uVar13 = *puVar12;
                puVar22[2] = puVar12[2];
                puVar22[1] = uVar20;
                *puVar22 = uVar13;
              } while ((uVar18 & 0xffffffff) * 0x18 - lVar16 != 0);
            }
            if ((*(void **)(param_2 + 0x10) != (void *)0x0) &&
               (param_2[0x18] != (btAlignedObjectArray)0x0)) {
              btAlignedFreeInternal(*(void **)(param_2 + 0x10));
            }
            uVar11 = *(uint *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar10;
            *(int *)(param_2 + 8) = iVar21;
          }
        }
        puVar12 = (undefined8 *)(lVar14 + uVar17 * 0x18);
        uVar17 = uVar17 + 1;
        puVar22 = (undefined8 *)(lVar10 + (long)(int)uVar11 * 0x18);
        uVar20 = puVar12[1];
        uVar13 = *puVar12;
        puVar22[2] = puVar12[2];
        puVar22[1] = uVar20;
        *puVar22 = uVar13;
        uVar11 = *(int *)(param_2 + 4) + 1;
        *(uint *)(param_2 + 4) = uVar11;
      } while (uVar17 != *(uint *)(param_1 + 4));
    }
    if (1 < (int)uVar11) {
      puVar22 = *(undefined8 **)(param_2 + 0x10);
      uVar7 = uVar11 - 1;
      if (*(int *)((long)puVar22 + (ulong)uVar7 * 0x18 + 0x14) == *(int *)((long)puVar22 + 0x14)) {
        *(uint *)(param_2 + 4) = uVar7;
        uVar11 = uVar7;
      }
      if (2 < uVar11) {
        puVar12 = puVar22 + (ulong)(uVar11 - 1) * 3;
        fVar29 = *(float *)puVar12 - *(float *)puVar22;
        fVar33 = *(float *)(puVar12 + 1) - *(float *)(puVar22 + 1);
        fVar32 = *(float *)(puVar12 + 1) - *(float *)(puVar22 + 4);
        fVar28 = *(float *)((long)puVar12 + 4) - *(float *)((long)puVar22 + 4);
        fVar24 = *(float *)((long)puVar12 + 4) - *(float *)((long)puVar22 + 0x1c);
        fVar23 = *(float *)puVar12 - *(float *)(puVar22 + 3);
        fVar34 = (float)NEON_fmadd(fVar33,fVar23,fVar32 * -fVar29);
        uVar31 = NEON_fmadd(fVar28,fVar32,fVar24 * -fVar33);
        uVar30 = NEON_fmadd(fVar29,fVar24,fVar23 * -fVar28);
        uVar31 = NEON_fmadd(uVar31,*(undefined4 *)param_3,*(float *)(param_3 + 4) * fVar34);
        fVar23 = (float)NEON_fmadd(uVar30,*(undefined4 *)(param_3 + 8),uVar31);
        if (fVar23 <= 0.01) {
          puVar22[1] = puVar22[4];
          *puVar22 = puVar22[3];
          puVar22[2] = puVar22[5];
          if (*(int *)(param_2 + 4) < 3) {
            uVar17 = (ulong)(*(int *)(param_2 + 4) - 1);
          }
          else {
            lVar14 = 0;
            lVar10 = 1;
            do {
              lVar10 = lVar10 + 1;
              lVar16 = *(long *)(param_2 + 0x10) + lVar14;
              lVar14 = lVar14 + 0x18;
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x38);
              *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar16 + 0x30);
              *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar16 + 0x40);
              uVar17 = (long)*(int *)(param_2 + 4) - 1;
            } while (lVar10 < (long)uVar17);
          }
          *(int *)(param_2 + 4) = (int)uVar17;
        }
      }
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


