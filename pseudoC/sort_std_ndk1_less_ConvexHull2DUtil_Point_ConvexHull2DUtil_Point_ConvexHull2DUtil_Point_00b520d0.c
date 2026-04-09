// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
// Entry Point: 00b520d0
// Size: 1812 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>(Point * param_1, Point * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<ConvexHull2DUtil::Point, ConvexHull2DUtil::Point>&,
   ConvexHull2DUtil::Point*>(ConvexHull2DUtil::Point*, ConvexHull2DUtil::Point*,
   std::__ndk1::__less<ConvexHull2DUtil::Point, ConvexHull2DUtil::Point>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
               (Point *param_1,Point *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 *puVar13;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
LAB_00b52118:
  do {
    puVar18 = (undefined8 *)((long)param_2 + -0xc);
    puVar19 = (undefined8 *)param_1;
LAB_00b52124:
    while( true ) {
      param_1 = (Point *)puVar19;
      uVar9 = (long)param_2 - (long)param_1;
      switch(((long)uVar9 >> 2) * -0x5555555555555555) {
      case 0:
      case 1:
        goto switchD_00b52510_caseD_0;
      case 2:
        puVar19 = (undefined8 *)((long)param_2 + -0xc);
        if ((*(float *)puVar19 < *(float *)param_1) ||
           ((*(float *)puVar19 == *(float *)param_1 &&
            (*(float *)((long)param_2 + -8) < *(float *)((long)param_1 + 4))))) {
          uVar2 = *(undefined4 *)((long)param_1 + 8);
          uVar14 = *(undefined8 *)param_1;
          uVar15 = *puVar19;
          *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + -4);
          *(undefined8 *)param_1 = uVar15;
          *(undefined4 *)((long)param_2 + -4) = uVar2;
          *puVar19 = uVar14;
        }
        goto switchD_00b52510_caseD_0;
      case 3:
        __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                  (param_1,(Point *)((long)param_1 + 0xc),(Point *)puVar18,param_3);
        goto switchD_00b52510_caseD_0;
      case 4:
        puVar19 = (undefined8 *)((long)param_1 + 0xc);
        puVar18 = (undefined8 *)((long)param_1 + 0x18);
        __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                  (param_1,(Point *)puVar19,(Point *)puVar18,param_3);
        puVar11 = (undefined8 *)((long)param_2 + -0xc);
        if ((*(float *)puVar11 < *(float *)((long)param_1 + 0x18)) ||
           ((*(float *)puVar11 == *(float *)((long)param_1 + 0x18) &&
            (*(float *)((long)param_2 + -8) < *(float *)((long)param_1 + 0x1c))))) {
          uVar14 = *puVar18;
          uVar2 = *(undefined4 *)((long)param_1 + 0x20);
          uVar3 = *(undefined4 *)((long)param_2 + -4);
          *puVar18 = *puVar11;
          *(undefined4 *)((long)param_1 + 0x20) = uVar3;
          *(undefined4 *)((long)param_2 + -4) = uVar2;
          *puVar11 = uVar14;
          if ((*(float *)puVar18 < *(float *)puVar19) ||
             ((*(float *)puVar18 == *(float *)puVar19 &&
              (*(float *)((long)param_1 + 0x1c) < *(float *)((long)param_1 + 0x10))))) {
            uVar14 = *puVar19;
            *puVar19 = *puVar18;
            uVar2 = *(undefined4 *)((long)param_1 + 0x14);
            *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0x20);
            *puVar18 = uVar14;
            *(undefined4 *)((long)param_1 + 0x20) = uVar2;
            if ((*(float *)((long)param_1 + 0xc) < *(float *)param_1) ||
               ((*(float *)((long)param_1 + 0xc) == *(float *)param_1 &&
                (*(float *)((long)param_1 + 0x10) < *(float *)((long)param_1 + 4))))) {
              uVar2 = *(undefined4 *)((long)param_1 + 8);
              uVar14 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *puVar19;
              *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_1 + 0x14);
              *puVar19 = uVar14;
              *(undefined4 *)((long)param_1 + 0x14) = uVar2;
            }
          }
        }
        goto switchD_00b52510_caseD_0;
      case 5:
        FUN_00b52988(param_1,(long)param_1 + 0xc,(undefined8 *)((long)param_1 + 0x18),
                     (long)param_1 + 0x24,puVar18,param_3);
        goto switchD_00b52510_caseD_0;
      }
      if ((long)uVar9 < 0x174) {
        __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                  (param_1,(Point *)((long)param_1 + 0xc),
                   (Point *)(undefined8 *)((long)param_1 + 0x18),param_3);
        if ((undefined8 *)((long)param_1 + 0x24) == (undefined8 *)param_2)
        goto switchD_00b52510_caseD_0;
        lVar10 = 0;
        puVar19 = (undefined8 *)((long)param_1 + 0x24);
        puVar18 = (undefined8 *)((long)param_1 + 0x18);
        goto LAB_00b526f8;
      }
      if (uVar9 < 0x2ed5) {
        puVar19 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar9 & 0xffff) / 0x18) * 0xc);
        uVar7 = __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                          (param_1,(Point *)puVar19,(Point *)puVar18,param_3);
      }
      else {
        puVar19 = (undefined8 *)((long)param_1 + (uVar9 / 0x18) * 0xc);
        lVar10 = (uVar9 / 0x30) * 0xc;
        uVar7 = FUN_00b52988(param_1,(long)param_1 + lVar10,puVar19,(long)puVar19 + lVar10,puVar18,
                             param_3);
      }
      fVar20 = *(float *)param_1;
      fVar21 = *(float *)puVar19;
      puVar11 = puVar18;
      if ((fVar20 < fVar21) ||
         ((puVar12 = (undefined8 *)((long)param_2 + -0x18), fVar20 == fVar21 &&
          (*(float *)((long)param_1 + 4) < *(float *)((long)puVar19 + 4))))) break;
      for (; (undefined8 *)param_1 != puVar12; puVar12 = (undefined8 *)((long)puVar12 - 0xc)) {
        if ((*(float *)puVar12 < fVar21) ||
           ((*(float *)puVar12 == fVar21 &&
            (*(float *)((long)puVar12 + 4) < *(float *)((long)puVar19 + 4))))) {
          uVar2 = *(undefined4 *)((long)param_1 + 8);
          uVar7 = uVar7 + 1;
          uVar14 = *(undefined8 *)param_1;
          uVar15 = *puVar12;
          *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(puVar12 + 1);
          *(undefined8 *)param_1 = uVar15;
          *(undefined4 *)(puVar12 + 1) = uVar2;
          *puVar12 = uVar14;
          puVar11 = puVar12;
          goto LAB_00b521d8;
        }
      }
      puVar11 = (undefined8 *)((long)param_1 + 0xc);
      if ((*(float *)puVar18 <= fVar20) &&
         ((fVar20 != *(float *)puVar18 ||
          (*(float *)((long)param_2 + -8) <= *(float *)((long)param_1 + 4))))) {
        while( true ) {
          if (puVar11 == puVar18) goto switchD_00b52510_caseD_0;
          if ((fVar20 < *(float *)puVar11) ||
             ((fVar20 == *(float *)puVar11 &&
              (*(float *)((long)param_1 + 4) < *(float *)((long)puVar11 + 4))))) break;
          puVar11 = (undefined8 *)((long)puVar11 + 0xc);
        }
        uVar2 = *(undefined4 *)(puVar11 + 1);
        uVar14 = *puVar11;
        uVar15 = *puVar18;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((long)param_2 + -4);
        *puVar11 = uVar15;
        *(undefined4 *)((long)param_2 + -4) = uVar2;
        *puVar18 = uVar14;
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
      }
      puVar12 = puVar18;
      if (puVar11 == puVar18) goto switchD_00b52510_caseD_0;
      while( true ) {
        fVar20 = *(float *)param_1;
        fVar21 = *(float *)puVar11;
        puVar19 = puVar11;
        while ((fVar21 <= fVar20 &&
               ((fVar20 != fVar21 ||
                (*(float *)((long)puVar19 + 4) <= *(float *)((long)param_1 + 4)))))) {
          puVar19 = (undefined8 *)((long)puVar19 + 0xc);
          fVar21 = *(float *)puVar19;
        }
        do {
          do {
            puVar13 = puVar12;
            puVar12 = (undefined8 *)((long)puVar13 - 0xc);
          } while (fVar20 < *(float *)puVar12);
        } while ((fVar20 == *(float *)puVar12) &&
                (*(float *)((long)param_1 + 4) < *(float *)(puVar13 + -1)));
        if (puVar12 <= puVar19) break;
        uVar2 = *(undefined4 *)(puVar19 + 1);
        uVar14 = *puVar19;
        uVar15 = *puVar12;
        *(undefined4 *)(puVar19 + 1) = *(undefined4 *)((long)puVar13 - 4);
        puVar11 = (undefined8 *)((long)puVar19 + 0xc);
        *puVar19 = uVar15;
        *(undefined4 *)((long)puVar13 - 4) = uVar2;
        *puVar12 = uVar14;
      }
    }
LAB_00b521d8:
    puVar12 = (undefined8 *)((long)param_1 + 0xc);
    if (puVar12 < puVar11) {
      do {
        fVar20 = *(float *)puVar19;
        for (; (*(float *)puVar12 < fVar20 ||
               ((*(float *)puVar12 == fVar20 &&
                (*(float *)((long)puVar12 + 4) < *(float *)((long)puVar19 + 4)))));
            puVar12 = (undefined8 *)((long)puVar12 + 0xc)) {
        }
        do {
          puVar13 = puVar11;
          puVar11 = (undefined8 *)((long)puVar13 - 0xc);
          if (*(float *)puVar11 < fVar20) break;
        } while ((*(float *)puVar11 != fVar20) ||
                (*(float *)((long)puVar19 + 4) <= *(float *)(puVar13 + -1)));
        if (puVar11 < puVar12) break;
        uVar2 = *(undefined4 *)(puVar12 + 1);
        uVar14 = *puVar12;
        uVar7 = uVar7 + 1;
        puVar1 = puVar11;
        if (puVar12 != puVar19) {
          puVar1 = puVar19;
        }
        uVar15 = *puVar11;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)((long)puVar13 - 4);
        *puVar12 = uVar15;
        puVar12 = (undefined8 *)((long)puVar12 + 0xc);
        *(undefined4 *)((long)puVar13 - 4) = uVar2;
        *puVar11 = uVar14;
        puVar19 = puVar1;
      } while( true );
    }
    if ((puVar12 != puVar19) &&
       ((*(float *)puVar19 < *(float *)puVar12 ||
        ((*(float *)puVar19 == *(float *)puVar12 &&
         (*(float *)((long)puVar19 + 4) < *(float *)((long)puVar12 + 4))))))) {
      uVar2 = *(undefined4 *)(puVar12 + 1);
      uVar7 = uVar7 + 1;
      uVar14 = *puVar12;
      uVar15 = *puVar19;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar19 + 1);
      *puVar12 = uVar15;
      *(undefined4 *)(puVar19 + 1) = uVar2;
      *puVar19 = uVar14;
    }
    if (uVar7 != 0) goto LAB_00b52314;
    bVar5 = __insertion_sort_incomplete<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                      (param_1,(Point *)puVar12,param_3);
    bVar6 = __insertion_sort_incomplete<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                      ((Point *)(undefined8 *)((long)puVar12 + 0xc),param_2,param_3);
    if (!bVar6) goto code_r0x00b52310;
    param_2 = (Point *)puVar12;
  } while (!bVar5);
  goto switchD_00b52510_caseD_0;
LAB_00b526f8:
  puVar11 = puVar19;
  fVar20 = *(float *)puVar11;
  if (*(float *)puVar18 <= fVar20) {
    if ((fVar20 == *(float *)puVar18) &&
       (fVar21 = *(float *)((long)puVar11 + 4), fVar21 < *(float *)((long)puVar18 + 4)))
    goto LAB_00b5272c;
  }
  else {
    fVar21 = *(float *)((long)puVar11 + 4);
LAB_00b5272c:
    uVar2 = *(undefined4 *)(puVar18 + 1);
    uVar3 = *(undefined4 *)(puVar11 + 1);
    *puVar11 = *puVar18;
    *(undefined4 *)(puVar11 + 1) = uVar2;
    puVar19 = (undefined8 *)param_1;
    lVar17 = lVar10;
    if (puVar18 != (undefined8 *)param_1) {
      do {
        fVar22 = *(float *)((long)param_1 + lVar17 + 0xc);
        if (fVar22 <= fVar20) {
          if (fVar20 != fVar22) {
            puVar19 = (undefined8 *)((long)param_1 + lVar17 + 0x18);
            break;
          }
          puVar19 = puVar18;
          if (*(float *)((long)param_1 + lVar17 + 0x10) <= fVar21) break;
        }
        puVar18 = (undefined8 *)((long)puVar18 + -0xc);
        lVar16 = lVar17 + -0xc;
        *(undefined8 *)((long)param_1 + lVar17 + 0x18) =
             *(undefined8 *)((long)param_1 + lVar17 + 0xc);
        *(undefined4 *)((long)param_1 + lVar17 + 0x20) =
             *(undefined4 *)((long)param_1 + lVar17 + 0x14);
        puVar19 = (undefined8 *)param_1;
        lVar17 = lVar16;
      } while (lVar16 != -0x18);
    }
    *(float *)puVar19 = fVar20;
    *(float *)((long)puVar19 + 4) = fVar21;
    *(undefined4 *)(puVar19 + 1) = uVar3;
  }
  lVar10 = lVar10 + 0xc;
  puVar19 = (undefined8 *)((long)puVar11 + 0xc);
  puVar18 = puVar11;
  if ((undefined8 *)((long)puVar11 + 0xc) == (undefined8 *)param_2) {
switchD_00b52510_caseD_0:
    if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_00b526f8;
code_r0x00b52310:
  puVar19 = (undefined8 *)((long)puVar12 + 0xc);
  if (!bVar5) {
LAB_00b52314:
    if (((long)param_2 - (long)puVar12 >> 2) * -0x5555555555555555 <=
        ((long)puVar12 - (long)param_1 >> 2) * -0x5555555555555555) {
      __sort<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                ((Point *)((long)puVar12 + 0xc),param_2,param_3);
      param_2 = (Point *)puVar12;
      goto LAB_00b52118;
    }
    __sort<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
              (param_1,(Point *)puVar12,param_3);
    puVar19 = (undefined8 *)((long)puVar12 + 0xc);
  }
  goto LAB_00b52124;
}


