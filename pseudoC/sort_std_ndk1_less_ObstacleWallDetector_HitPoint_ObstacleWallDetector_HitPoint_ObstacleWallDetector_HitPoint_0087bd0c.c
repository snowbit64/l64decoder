// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
// Entry Point: 0087bd0c
// Size: 2064 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>(HitPoint * param_1, HitPoint * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<ObstacleWallDetector::HitPoint,
   ObstacleWallDetector::HitPoint>&,
   ObstacleWallDetector::HitPoint*>(ObstacleWallDetector::HitPoint*,
   ObstacleWallDetector::HitPoint*, std::__ndk1::__less<ObstacleWallDetector::HitPoint,
   ObstacleWallDetector::HitPoint>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
               (HitPoint *param_1,HitPoint *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
LAB_0087bd58:
  puVar17 = (undefined8 *)((long)param_2 - 0x14);
  puVar18 = (undefined8 *)param_1;
LAB_0087bd60:
  param_1 = (HitPoint *)puVar18;
  uVar8 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar8 >> 2) * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x0087c334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0087c338 +
              (ulong)*(ushort *)(&DAT_00518fa0 + ((long)uVar8 >> 2) * -0x6666666666666666) * 4))();
    return;
  }
  if ((long)uVar8 < 0x26c) {
    fVar25 = *(float *)((long)param_1 + 0x24);
    puVar18 = (undefined8 *)((long)param_1 + 0x28);
    puVar17 = (undefined8 *)((long)param_1 + 0x14);
    fVar24 = *(float *)((long)param_1 + 0x38);
    if (*(float *)((long)param_1 + 0x10) <= fVar25) {
      if (fVar24 < fVar25) {
        uVar2 = *(undefined4 *)((long)param_1 + 0x24);
        *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + 0x38);
        uVar21 = *(undefined8 *)((long)param_1 + 0x1c);
        uVar20 = *puVar17;
        *(undefined4 *)((long)param_1 + 0x38) = uVar2;
        *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_1 + 0x30);
        *puVar17 = *puVar18;
        *(undefined8 *)((long)param_1 + 0x30) = uVar21;
        *puVar18 = uVar20;
        if (*(float *)((long)param_1 + 0x24) < *(float *)((long)param_1 + 0x10)) {
          uVar2 = *(undefined4 *)((long)param_1 + 0x10);
          uVar21 = *(undefined8 *)((long)param_1 + 8);
          uVar20 = *(undefined8 *)param_1;
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x1c);
          *(undefined8 *)param_1 = *puVar17;
          *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)((long)param_1 + 0x24);
          *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
          *puVar17 = uVar20;
          *(undefined4 *)((long)param_1 + 0x24) = uVar2;
        }
      }
    }
    else if (fVar25 <= fVar24) {
      uVar2 = *(undefined4 *)((long)param_1 + 0x10);
      uVar21 = *(undefined8 *)((long)param_1 + 8);
      uVar20 = *(undefined8 *)param_1;
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x1c);
      *(undefined8 *)param_1 = *puVar17;
      *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)((long)param_1 + 0x24);
      *(undefined4 *)((long)param_1 + 0x24) = uVar2;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
      *puVar17 = uVar20;
      if (fVar24 < *(float *)((long)param_1 + 0x24)) {
        uVar21 = *(undefined8 *)((long)param_1 + 0x1c);
        uVar20 = *puVar17;
        uVar2 = *(undefined4 *)((long)param_1 + 0x24);
        *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_1 + 0x30);
        *puVar17 = *puVar18;
        *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + 0x38);
        *(undefined8 *)((long)param_1 + 0x30) = uVar21;
        *puVar18 = uVar20;
        *(undefined4 *)((long)param_1 + 0x38) = uVar2;
      }
    }
    else {
      uVar2 = *(undefined4 *)((long)param_1 + 0x10);
      uVar21 = *(undefined8 *)((long)param_1 + 8);
      uVar20 = *(undefined8 *)param_1;
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x30);
      *(undefined8 *)param_1 = *puVar18;
      *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)((long)param_1 + 0x38);
      *(undefined8 *)((long)param_1 + 0x30) = uVar21;
      *puVar18 = uVar20;
      *(undefined4 *)((long)param_1 + 0x38) = uVar2;
    }
    if ((undefined8 *)((long)param_1 + 0x3c) == (undefined8 *)param_2) goto LAB_0087c778;
    lVar9 = 0;
    puVar17 = (undefined8 *)((long)param_1 + 0x3c);
    goto LAB_0087c71c;
  }
  if (uVar8 < 0x4e0d) {
    puVar18 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar8 & 0xffff) / 0x28) * 0x14);
    puVar12 = puVar18 + 2;
    fVar24 = *(float *)puVar12;
    if (*(float *)((long)param_1 + 0x10) <= fVar24) {
      if (fVar24 <= *(float *)((long)param_2 + -4)) {
        uVar6 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(puVar18 + 2);
        uVar22 = puVar18[1];
        uVar20 = *puVar18;
        uVar23 = *(undefined8 *)((long)param_2 + -0xc);
        uVar21 = *puVar17;
        *(undefined4 *)(puVar18 + 2) = *(undefined4 *)((long)param_2 + -4);
        puVar18[1] = uVar23;
        *puVar18 = uVar21;
        *(undefined4 *)((long)param_2 + -4) = uVar2;
        *(undefined8 *)((long)param_2 + -0xc) = uVar22;
        *puVar17 = uVar20;
        if (*(float *)((long)param_1 + 0x10) <= *(float *)puVar12) goto LAB_0087c060;
        uVar2 = *(undefined4 *)((long)param_1 + 0x10);
        uVar6 = 2;
        uVar22 = *(undefined8 *)((long)param_1 + 8);
        uVar20 = *(undefined8 *)param_1;
        uVar23 = puVar18[1];
        uVar21 = *puVar18;
        *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(puVar18 + 2);
        *(undefined8 *)((long)param_1 + 8) = uVar23;
        *(undefined8 *)param_1 = uVar21;
        *(undefined4 *)(puVar18 + 2) = uVar2;
        puVar18[1] = uVar22;
        *puVar18 = uVar20;
      }
    }
    else {
      if (fVar24 <= *(float *)((long)param_2 + -4)) {
        uVar2 = *(undefined4 *)((long)param_1 + 0x10);
        uVar22 = *(undefined8 *)((long)param_1 + 8);
        uVar20 = *(undefined8 *)param_1;
        uVar23 = puVar18[1];
        uVar21 = *puVar18;
        *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(puVar18 + 2);
        *(undefined8 *)((long)param_1 + 8) = uVar23;
        *(undefined8 *)param_1 = uVar21;
        *(undefined4 *)(puVar18 + 2) = uVar2;
        puVar18[1] = uVar22;
        *puVar18 = uVar20;
        if (*(float *)puVar12 <= *(float *)((long)param_2 + -4)) {
LAB_0087c060:
          uVar6 = 1;
          goto LAB_0087c07c;
        }
        local_80 = *(undefined4 *)(puVar18 + 2);
        uVar6 = 2;
        uStack_88 = puVar18[1];
        local_90 = *puVar18;
        uVar21 = *(undefined8 *)((long)param_2 + -0xc);
        uVar20 = *puVar17;
        *(undefined4 *)(puVar18 + 2) = *(undefined4 *)((long)param_2 + -4);
        puVar18[1] = uVar21;
        *puVar18 = uVar20;
      }
      else {
        local_80 = *(undefined4 *)((long)param_1 + 0x10);
        uVar6 = 1;
        uStack_88 = *(undefined8 *)((long)param_1 + 8);
        local_90 = *(undefined8 *)param_1;
        uVar21 = *(undefined8 *)((long)param_2 + -0xc);
        uVar20 = *puVar17;
        *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)((long)param_2 + -4);
        *(undefined8 *)((long)param_1 + 8) = uVar21;
        *(undefined8 *)param_1 = uVar20;
      }
      *(undefined4 *)((long)param_2 + -4) = local_80;
      *(undefined8 *)((long)param_2 + -0xc) = uStack_88;
      *puVar17 = local_90;
    }
  }
  else {
    puVar18 = (undefined8 *)((long)param_1 + (uVar8 / 0x28) * 0x14);
    lVar9 = (uVar8 / 0x50) * 0x14;
    puVar12 = (undefined8 *)((long)param_1 + lVar9);
    puVar15 = (undefined8 *)((long)puVar18 + lVar9);
    uVar6 = __sort4<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
                      (param_1,(HitPoint *)puVar12,(HitPoint *)puVar18,(HitPoint *)puVar15,param_3);
    if (*(float *)((long)param_2 + -4) < *(float *)(puVar15 + 2)) {
      uVar2 = *(undefined4 *)(puVar15 + 2);
      uVar22 = puVar15[1];
      uVar20 = *puVar15;
      uVar23 = *(undefined8 *)((long)param_2 + -0xc);
      uVar21 = *puVar17;
      *(undefined4 *)(puVar15 + 2) = *(undefined4 *)((long)param_2 + -4);
      puVar15[1] = uVar23;
      *puVar15 = uVar21;
      *(undefined4 *)((long)param_2 + -4) = uVar2;
      *(undefined8 *)((long)param_2 + -0xc) = uVar22;
      *puVar17 = uVar20;
      pfVar10 = (float *)((long)param_1 + (uVar8 / 0x28) * 0x14 + 0x10);
      if (*(float *)(puVar15 + 2) < *pfVar10) {
        uVar2 = *(undefined4 *)(puVar18 + 2);
        uVar22 = puVar18[1];
        uVar20 = *puVar18;
        uVar23 = puVar15[1];
        uVar21 = *puVar15;
        *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar15 + 2);
        puVar18[1] = uVar23;
        *puVar18 = uVar21;
        *(undefined4 *)(puVar15 + 2) = uVar2;
        fVar24 = *pfVar10;
        puVar15[1] = uVar22;
        *puVar15 = uVar20;
        pfVar10 = (float *)((long)param_1 + (uVar8 / 0x50) * 0x14 + 0x10);
        if (*pfVar10 <= fVar24) {
          uVar6 = uVar6 + 2;
        }
        else {
          uVar2 = *(undefined4 *)(puVar12 + 2);
          uVar22 = puVar12[1];
          uVar20 = *puVar12;
          uVar23 = puVar18[1];
          uVar21 = *puVar18;
          *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar18 + 2);
          puVar12[1] = uVar23;
          *puVar12 = uVar21;
          *(undefined4 *)(puVar18 + 2) = uVar2;
          fVar24 = *pfVar10;
          puVar18[1] = uVar22;
          *puVar18 = uVar20;
          if (*(float *)((long)param_1 + 0x10) <= fVar24) {
            uVar6 = uVar6 + 3;
          }
          else {
            uVar2 = *(undefined4 *)((long)param_1 + 0x10);
            uVar6 = uVar6 + 4;
            uVar22 = *(undefined8 *)((long)param_1 + 8);
            uVar20 = *(undefined8 *)param_1;
            uVar23 = puVar12[1];
            uVar21 = *puVar12;
            *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(puVar12 + 2);
            *(undefined8 *)((long)param_1 + 8) = uVar23;
            *(undefined8 *)param_1 = uVar21;
            *(undefined4 *)(puVar12 + 2) = uVar2;
            puVar12[1] = uVar22;
            *puVar12 = uVar20;
          }
        }
      }
      else {
        uVar6 = uVar6 + 1;
      }
    }
  }
LAB_0087c07c:
  fVar24 = *(float *)((long)param_1 + 0x10);
  puVar12 = puVar17;
  if (*(float *)(puVar18 + 2) <= fVar24) {
    do {
      puVar15 = puVar12;
      puVar12 = (undefined8 *)((long)puVar15 - 0x14);
      if (puVar12 == (undefined8 *)param_1) {
        puVar12 = (undefined8 *)((long)param_1 + 0x14);
        puVar18 = puVar12;
        if (*(float *)((long)param_2 + -4) <= fVar24) goto joined_r0x0087c238;
        goto LAB_0087c288;
      }
    } while (*(float *)(puVar18 + 2) <= *(float *)((long)puVar15 - 4));
    uVar2 = *(undefined4 *)((long)param_1 + 0x10);
    uVar6 = uVar6 + 1;
    uVar22 = *(undefined8 *)((long)param_1 + 8);
    uVar20 = *(undefined8 *)param_1;
    uVar23 = *(undefined8 *)((long)puVar15 - 0xc);
    uVar21 = *puVar12;
    *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)((long)puVar15 - 4);
    *(undefined8 *)((long)param_1 + 8) = uVar23;
    *(undefined8 *)param_1 = uVar21;
    *(undefined4 *)((long)puVar15 - 4) = uVar2;
    *(undefined8 *)((long)puVar15 - 0xc) = uVar22;
    *puVar12 = uVar20;
  }
  puVar15 = (undefined8 *)((long)param_1 + 0x14);
  puVar19 = puVar15;
  if (puVar15 < puVar12) {
    while( true ) {
      puVar15 = (undefined8 *)((long)puVar19 - 0x14);
      do {
        puVar14 = puVar15;
        puVar15 = (undefined8 *)((long)puVar14 + 0x14);
      } while (*(float *)((long)puVar14 + 0x24) < *(float *)(puVar18 + 2));
      puVar19 = puVar14 + 5;
      do {
        puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar11 - 0x14);
      } while (*(float *)(puVar18 + 2) <= *(float *)((long)puVar11 - 4));
      if (puVar12 < puVar15) break;
      uVar2 = *(undefined4 *)((long)puVar14 + 0x24);
      uVar21 = *(undefined8 *)((long)puVar14 + 0x1c);
      uVar20 = *puVar15;
      uVar6 = uVar6 + 1;
      puVar1 = puVar12;
      if (puVar15 != puVar18) {
        puVar1 = puVar18;
      }
      uVar23 = *(undefined8 *)((long)puVar11 - 0xc);
      uVar22 = *puVar12;
      *(undefined4 *)((long)puVar14 + 0x24) = *(undefined4 *)((long)puVar11 - 4);
      *(undefined8 *)((long)puVar14 + 0x1c) = uVar23;
      *puVar15 = uVar22;
      *(undefined4 *)((long)puVar11 - 4) = uVar2;
      *(undefined8 *)((long)puVar11 - 0xc) = uVar21;
      *puVar12 = uVar20;
      puVar18 = puVar1;
    }
  }
  if ((puVar15 != puVar18) && (*(float *)(puVar18 + 2) < *(float *)(puVar15 + 2))) {
    uVar2 = *(undefined4 *)(puVar15 + 2);
    uVar6 = uVar6 + 1;
    uVar22 = puVar15[1];
    uVar20 = *puVar15;
    uVar23 = puVar18[1];
    uVar21 = *puVar18;
    *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar18 + 2);
    puVar15[1] = uVar23;
    *puVar15 = uVar21;
    *(undefined4 *)(puVar18 + 2) = uVar2;
    puVar18[1] = uVar22;
    *puVar18 = uVar20;
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
                      (param_1,(HitPoint *)puVar15,param_3);
    bVar5 = __insertion_sort_incomplete<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
                      ((HitPoint *)(undefined8 *)((long)puVar15 + 0x14),param_2,param_3);
    if (bVar5) goto LAB_0087c314;
    puVar18 = (undefined8 *)((long)puVar15 + 0x14);
    if (bVar4) goto LAB_0087bd60;
  }
  lVar13 = (long)param_2 - (long)puVar15 >> 2;
  lVar9 = ((long)puVar15 - (long)param_1 >> 2) * -0x3333333333333333;
  if (lVar9 + lVar13 * 0x3333333333333333 < 0 == SBORROW8(lVar9,lVar13 * -0x3333333333333333)) {
    __sort<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
              ((HitPoint *)((long)puVar15 + 0x14),param_2,param_3);
    param_2 = (HitPoint *)puVar15;
    goto LAB_0087bd58;
  }
  __sort<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
            (param_1,(HitPoint *)puVar15,param_3);
  puVar18 = (undefined8 *)((long)puVar15 + 0x14);
  goto LAB_0087bd60;
joined_r0x0087c238:
  if (puVar18 == puVar17) goto LAB_0087c778;
  if (fVar24 < *(float *)(puVar18 + 2)) goto LAB_0087c258;
  puVar18 = (undefined8 *)((long)puVar18 + 0x14);
  goto joined_r0x0087c238;
LAB_0087c258:
  uVar2 = *(undefined4 *)(puVar18 + 2);
  uVar22 = puVar18[1];
  uVar20 = *puVar18;
  uVar23 = *(undefined8 *)((long)param_2 + -0xc);
  uVar21 = *puVar17;
  *(undefined4 *)(puVar18 + 2) = *(undefined4 *)((long)param_2 + -4);
  puVar12 = (undefined8 *)((long)puVar18 + 0x14);
  puVar18[1] = uVar23;
  *puVar18 = uVar21;
  *(undefined4 *)((long)param_2 + -4) = uVar2;
  *(undefined8 *)((long)param_2 + -0xc) = uVar22;
  *puVar17 = uVar20;
LAB_0087c288:
  puVar15 = puVar17;
  if (puVar12 == puVar17) goto LAB_0087c778;
  while( true ) {
    puVar18 = (undefined8 *)((long)puVar12 - 0x14);
    do {
      puVar19 = puVar18;
      puVar18 = (undefined8 *)((long)puVar19 + 0x14);
    } while (*(float *)((long)puVar19 + 0x24) <= *(float *)((long)param_1 + 0x10));
    puVar12 = puVar19 + 5;
    do {
      puVar14 = puVar15;
      puVar15 = (undefined8 *)((long)puVar14 - 0x14);
    } while (*(float *)((long)param_1 + 0x10) < *(float *)((long)puVar14 - 4));
    if (puVar15 <= puVar18) break;
    uVar2 = *(undefined4 *)((long)puVar19 + 0x24);
    uVar22 = *(undefined8 *)((long)puVar19 + 0x1c);
    uVar20 = *puVar18;
    uVar23 = *(undefined8 *)((long)puVar14 - 0xc);
    uVar21 = *puVar15;
    *(undefined4 *)((long)puVar19 + 0x24) = *(undefined4 *)((long)puVar14 - 4);
    *(undefined8 *)((long)puVar19 + 0x1c) = uVar23;
    *puVar18 = uVar21;
    *(undefined4 *)((long)puVar14 - 4) = uVar2;
    *(undefined8 *)((long)puVar14 - 0xc) = uVar22;
    *puVar15 = uVar20;
  }
  goto LAB_0087bd60;
LAB_0087c314:
  param_2 = (HitPoint *)puVar15;
  if (bVar4) goto LAB_0087c778;
  goto LAB_0087bd58;
LAB_0087c71c:
  do {
    fVar24 = *(float *)(puVar17 + 2);
    if (fVar24 < *(float *)(puVar18 + 2)) {
      uVar21 = puVar17[1];
      uVar20 = *puVar17;
      lVar13 = lVar9;
      do {
        lVar16 = lVar13;
        *(undefined8 *)((long)param_1 + lVar16 + 0x44) =
             *(undefined8 *)((long)param_1 + lVar16 + 0x30);
        *(undefined8 *)((long)param_1 + lVar16 + 0x3c) =
             *(undefined8 *)((long)param_1 + lVar16 + 0x28);
        *(undefined4 *)((long)param_1 + lVar16 + 0x4c) =
             *(undefined4 *)((long)param_1 + lVar16 + 0x38);
        puVar18 = (undefined8 *)param_1;
        if (lVar16 == -0x28) goto LAB_0087c700;
        lVar13 = lVar16 + -0x14;
      } while (fVar24 < *(float *)((long)param_1 + lVar16 + 0x24));
      puVar18 = (undefined8 *)((long)param_1 + lVar16 + 0x28);
LAB_0087c700:
      *(float *)(puVar18 + 2) = fVar24;
      puVar18[1] = uVar21;
      *puVar18 = uVar20;
    }
    puVar12 = (undefined8 *)((long)puVar17 + 0x14);
    lVar9 = lVar9 + 0x14;
    puVar18 = puVar17;
    puVar17 = puVar12;
  } while (puVar12 != (undefined8 *)param_2);
LAB_0087c778:
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


