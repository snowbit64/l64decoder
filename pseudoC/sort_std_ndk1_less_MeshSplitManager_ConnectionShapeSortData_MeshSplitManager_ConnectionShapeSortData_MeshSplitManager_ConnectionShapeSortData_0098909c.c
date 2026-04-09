// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
// Entry Point: 0098909c
// Size: 1672 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>(ConnectionShapeSortData * param_1, ConnectionShapeSortData * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,
   MeshSplitManager::ConnectionShapeSortData>&,
   MeshSplitManager::ConnectionShapeSortData*>(MeshSplitManager::ConnectionShapeSortData*,
   MeshSplitManager::ConnectionShapeSortData*,
   std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,
   MeshSplitManager::ConnectionShapeSortData>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
               (ConnectionShapeSortData *param_1,ConnectionShapeSortData *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined (*pauVar3) [16];
  undefined4 uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined (*pauVar10) [16];
  ulong uVar11;
  undefined (*pauVar12) [16];
  undefined8 uVar13;
  undefined (*pauVar14) [16];
  undefined8 uVar15;
  undefined (*pauVar16) [16];
  long lVar17;
  undefined (*pauVar18) [16];
  long lVar19;
  float fVar20;
  undefined auVar21 [16];
  float fVar22;
  float fVar23;
  
LAB_009890c8:
  pauVar16 = (undefined (*) [16])(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
  pauVar14 = (undefined (*) [16])param_1;
LAB_009890d0:
  param_1 = (ConnectionShapeSortData *)pauVar14;
  uVar11 = (long)param_2 - (long)param_1;
  lVar9 = (long)uVar11 >> 3;
  switch(lVar9) {
  case 0:
  case 1:
    goto switchD_009894a0_caseD_0;
  case 2:
    if (*(float *)(*(undefined (*) [16])param_1 + 4) <
        *(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc)) {
      uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
      *(undefined8 *)*(undefined (*) [16])param_1 =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
      return;
    }
    return;
  case 3:
    fVar20 = *(float *)(*(undefined (*) [16])param_1 + 0xc);
    if (fVar20 <= *(float *)(*(undefined (*) [16])param_1 + 4)) {
      if (*(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc) <= fVar20) {
        return;
      }
      uVar15 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
      if (*(float *)(*(undefined (*) [16])param_1 + 4) <
          *(float *)(*(undefined (*) [16])param_1 + 0xc)) {
        auVar21 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
        *(long *)(*(undefined (*) [16])param_1 + 8) = auVar21._8_8_;
        *(long *)*(undefined (*) [16])param_1 = auVar21._0_8_;
        return;
      }
      return;
    }
    uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
    if (fVar20 < *(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc)) {
      *(undefined8 *)*(undefined (*) [16])param_1 =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
      return;
    }
    *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar15;
    if ((float)((ulong)uVar15 >> 0x20) <
        *(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc)) {
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
      return;
    }
    return;
  case 4:
    __sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
              (param_1,(ConnectionShapeSortData *)(*(undefined (*) [16])param_1 + 8),
               (ConnectionShapeSortData *)((long)param_1 + 0x10),(ConnectionShapeSortData *)pauVar16
               ,param_3);
    return;
  case 5:
    __sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
              (param_1,(ConnectionShapeSortData *)(*(undefined (*) [16])param_1 + 8),
               (ConnectionShapeSortData *)((long)param_1 + 0x10),
               (ConnectionShapeSortData *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8),param_3)
    ;
    if (*(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc) <=
        *(float *)(*(undefined (*) [16])((long)param_1 + 0x10) + 0xc)) {
      return;
    }
    uVar15 = *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8);
    *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8) =
         *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
    if (*(float *)(*(undefined (*) [16])((long)param_1 + 0x10) + 0xc) <=
        *(float *)(*(undefined (*) [16])((long)param_1 + 0x10) + 4)) {
      return;
    }
    uVar15 = *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8);
    fVar22 = *(float *)(*(undefined (*) [16])param_1 + 0xc);
    fVar20 = (float)((ulong)uVar15 >> 0x20);
    uVar13 = *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
    *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar15;
    *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8) = uVar13;
    if (fVar20 <= fVar22) {
      return;
    }
    fVar22 = *(float *)(*(undefined (*) [16])param_1 + 4);
    uVar13 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar15;
    *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar13;
    if (fVar20 <= fVar22) {
      return;
    }
    uVar13 = *(undefined8 *)*(undefined (*) [16])param_1;
    *(undefined8 *)*(undefined (*) [16])param_1 = uVar15;
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar13;
    return;
  default:
    if (0xf7 < (long)uVar11) {
      lVar19 = lVar9;
      if (lVar9 < 0) {
        lVar19 = lVar9 + 1;
      }
      lVar19 = lVar19 >> 1;
      pauVar14 = (undefined (*) [16])(*(undefined (*) [16])param_1 + lVar19 * 8);
      if (uVar11 < 0x1f39) {
        fVar20 = *(float *)(*pauVar14 + 4);
        if (fVar20 <= *(float *)(*(undefined (*) [16])param_1 + 4)) {
          if (*(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc) <= fVar20) {
            uVar8 = 0;
          }
          else {
            uVar15 = *(undefined8 *)*pauVar14;
            *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar16;
            *(undefined8 *)*pauVar16 = uVar15;
            if (*(float *)(*pauVar14 + 4) <= *(float *)(*(undefined (*) [16])param_1 + 4))
            goto LAB_00989280;
            uVar8 = 2;
            uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
            *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar14;
            *(undefined8 *)*pauVar14 = uVar15;
          }
        }
        else {
          uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
          if (*(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc) <= fVar20) {
            *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar14;
            *(undefined8 *)*pauVar14 = uVar15;
            if (*(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc) <=
                (float)((ulong)uVar15 >> 0x20)) {
LAB_00989280:
              uVar8 = 1;
              goto LAB_00989294;
            }
            uVar8 = 2;
            *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar16;
          }
          else {
            uVar8 = 1;
            *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar16;
          }
          *(undefined8 *)*pauVar16 = uVar15;
        }
      }
      else {
        lVar17 = lVar9 + 3;
        if (-1 < lVar9) {
          lVar17 = lVar9;
        }
        lVar9 = (lVar17 >> 2) * 8;
        puVar1 = (undefined8 *)(*(undefined (*) [16])param_1 + lVar9);
        puVar2 = (undefined8 *)(*pauVar14 + lVar9);
        uVar8 = __sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
                          (param_1,(ConnectionShapeSortData *)puVar1,
                           (ConnectionShapeSortData *)pauVar14,(ConnectionShapeSortData *)puVar2,
                           param_3);
        if (*(float *)((long)puVar2 + 4) <
            *(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc)) {
          uVar15 = *puVar2;
          *puVar2 = *(undefined8 *)*pauVar16;
          *(undefined8 *)*pauVar16 = uVar15;
          if (*(float *)((long)puVar2 + 4) <=
              *(float *)(*(undefined (*) [16])param_1 + lVar19 * 8 + 4)) {
            uVar8 = uVar8 + 1;
          }
          else {
            uVar15 = *(undefined8 *)*pauVar14;
            *(undefined8 *)*pauVar14 = *(undefined8 *)(*pauVar14 + lVar9);
            *(undefined8 *)(*pauVar14 + lVar9) = uVar15;
            if (*(float *)(*(undefined (*) [16])param_1 + lVar19 * 8 + 4) <=
                *(float *)(*(undefined (*) [16])param_1 + lVar9 + 4)) {
              uVar8 = uVar8 + 2;
            }
            else {
              uVar15 = *puVar1;
              *puVar1 = *(undefined8 *)*pauVar14;
              *(undefined8 *)*pauVar14 = uVar15;
              if (*(float *)(*(undefined (*) [16])param_1 + lVar9 + 4) <=
                  *(float *)(*(undefined (*) [16])param_1 + 4)) {
                uVar8 = uVar8 + 3;
              }
              else {
                uVar8 = uVar8 + 4;
                uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
                *(undefined8 *)*(undefined (*) [16])param_1 = *puVar1;
                *puVar1 = uVar15;
              }
            }
          }
        }
      }
LAB_00989294:
      fVar20 = *(float *)(*(undefined (*) [16])param_1 + 4);
      pauVar10 = pauVar16;
      pauVar12 = pauVar16;
      if (fVar20 <= *(float *)(*(undefined (*) [16])param_1 + lVar19 * 8 + 4)) break;
      goto LAB_009892e4;
    }
    fVar23 = *(float *)(*(undefined (*) [16])param_1 + 0xc);
    fVar20 = *(float *)(*(undefined (*) [16])param_1 + 4);
    fVar22 = *(float *)(*(undefined (*) [16])((long)param_1 + 0x10) + 4);
    if (fVar23 <= fVar20) {
      if (fVar23 < fVar22) {
        uVar15 = *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
        uVar13 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
        *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar15;
        *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar13;
        if (fVar20 < (float)((ulong)uVar15 >> 0x20)) {
          uVar13 = *(undefined8 *)*(undefined (*) [16])param_1;
          *(undefined8 *)*(undefined (*) [16])param_1 = uVar15;
          goto LAB_00989680;
        }
      }
    }
    else {
      uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
      if (fVar22 <= fVar23) {
        *(undefined8 *)*(undefined (*) [16])param_1 =
             *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
        *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar15;
        if ((float)((ulong)uVar15 >> 0x20) < fVar22) {
          uVar13 = *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
          *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar15;
LAB_00989680:
          *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar13;
        }
      }
      else {
        uVar13 = *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
        *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar15;
        *(undefined8 *)*(undefined (*) [16])param_1 = uVar13;
      }
    }
    if ((undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + 8) ==
        (undefined (*) [16])param_2) {
      return;
    }
    lVar9 = 0;
    pauVar14 = (undefined (*) [16])((long)param_1 + 0x10);
    pauVar16 = (undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + 8);
    goto LAB_009896b8;
  }
  while (pauVar10 = (undefined (*) [16])(pauVar12[-1] + 8), pauVar10 != (undefined (*) [16])param_1)
  {
    pauVar18 = pauVar12 + -1;
    pauVar12 = pauVar10;
    if (*(float *)(*(undefined (*) [16])param_1 + lVar19 * 8 + 4) < *(float *)(*pauVar18 + 0xc))
    goto code_r0x009892d0;
  }
  pauVar10 = (undefined (*) [16])(*(undefined (*) [16])param_1 + 8);
  pauVar14 = pauVar10;
  if (fVar20 <= *(float *)(*(undefined (*) [16])((long)param_2 + -0x10) + 0xc)) {
    while( true ) {
      if (pauVar14 == pauVar16) {
        return;
      }
      if (*(float *)(*pauVar14 + 4) < fVar20) break;
      pauVar14 = (undefined (*) [16])(*pauVar14 + 8);
    }
    uVar15 = *(undefined8 *)*pauVar14;
    pauVar10 = (undefined (*) [16])(*pauVar14 + 8);
    *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar16;
    *(undefined8 *)*pauVar16 = uVar15;
  }
  pauVar12 = pauVar16;
  if (pauVar10 == pauVar16) {
    return;
  }
  while( true ) {
    pauVar14 = (undefined (*) [16])(pauVar10[-1] + 8);
    do {
      pauVar10 = pauVar14;
      pauVar14 = (undefined (*) [16])(*pauVar10 + 8);
    } while (*(float *)(*(undefined (*) [16])param_1 + 4) <= *(float *)(*pauVar10 + 0xc));
    pauVar10 = pauVar10 + 1;
    do {
      pauVar18 = pauVar12 + -1;
      pauVar12 = (undefined (*) [16])(pauVar12[-1] + 8);
    } while (*(float *)(*pauVar18 + 0xc) < *(float *)(*(undefined (*) [16])param_1 + 4));
    if (pauVar12 <= pauVar14) break;
    uVar15 = *(undefined8 *)*pauVar14;
    *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar12;
    *(undefined8 *)*pauVar12 = uVar15;
  }
  goto LAB_009890d0;
code_r0x009892d0:
  uVar8 = uVar8 + 1;
  uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
  *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar10;
  *(undefined8 *)*pauVar10 = uVar15;
LAB_009892e4:
  pauVar12 = (undefined (*) [16])(*(undefined (*) [16])param_1 + 8);
  pauVar18 = pauVar12;
  if (pauVar12 < pauVar10) {
    while( true ) {
      pauVar12 = (undefined (*) [16])(pauVar18[-1] + 8);
      do {
        pauVar18 = pauVar12;
        pauVar12 = (undefined (*) [16])(*pauVar18 + 8);
      } while (*(float *)(*pauVar14 + 4) < *(float *)(*pauVar18 + 0xc));
      pauVar18 = pauVar18 + 1;
      do {
        pauVar3 = pauVar10 + -1;
        pauVar10 = (undefined (*) [16])(pauVar10[-1] + 8);
      } while (*(float *)(*pauVar3 + 0xc) <= *(float *)(*pauVar14 + 4));
      if (pauVar10 < pauVar12) break;
      uVar15 = *(undefined8 *)*pauVar12;
      uVar8 = uVar8 + 1;
      pauVar3 = pauVar10;
      if (pauVar12 != pauVar14) {
        pauVar3 = pauVar14;
      }
      *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar10;
      *(undefined8 *)*pauVar10 = uVar15;
      pauVar14 = pauVar3;
    }
  }
  if ((pauVar12 != pauVar14) && (*(float *)(*pauVar12 + 4) < *(float *)(*pauVar14 + 4))) {
    uVar8 = uVar8 + 1;
    uVar15 = *(undefined8 *)*pauVar12;
    *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar14;
    *(undefined8 *)*pauVar14 = uVar15;
  }
  if (uVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
                      (param_1,(ConnectionShapeSortData *)pauVar12,param_3);
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
                      ((ConnectionShapeSortData *)(undefined (*) [16])(*pauVar12 + 8),param_2,
                       param_3);
    if (bVar7) goto LAB_00989480;
    pauVar14 = (undefined (*) [16])(*pauVar12 + 8);
    if (bVar6) goto LAB_009890d0;
  }
  if ((long)param_2 - (long)pauVar12 <= (long)pauVar12 - (long)param_1) {
    __sort<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
              ((ConnectionShapeSortData *)(*pauVar12 + 8),param_2,param_3);
    param_2 = (ConnectionShapeSortData *)pauVar12;
    goto LAB_009890c8;
  }
  __sort<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
            (param_1,(ConnectionShapeSortData *)pauVar12,param_3);
  pauVar14 = (undefined (*) [16])(*pauVar12 + 8);
  goto LAB_009890d0;
LAB_00989480:
  param_2 = (ConnectionShapeSortData *)pauVar12;
  if (bVar6) {
    return;
  }
  goto LAB_009890c8;
LAB_009896b8:
  fVar20 = *(float *)(*pauVar16 + 4);
  if (*(float *)(*pauVar14 + 4) < fVar20) {
    uVar4 = *(undefined4 *)*pauVar16;
    lVar19 = lVar9;
    do {
      lVar17 = lVar19;
      *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + lVar17 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + lVar17);
      pauVar14 = (undefined (*) [16])param_1;
      if (lVar17 == -0x10) goto LAB_009896a0;
      lVar19 = lVar17 + -8;
    } while (*(float *)(*(undefined (*) [16])param_1 + lVar17 + 0xc) < fVar20);
    pauVar14 = (undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + lVar17);
LAB_009896a0:
    *(undefined4 *)*pauVar14 = uVar4;
    *(float *)(*pauVar14 + 4) = fVar20;
  }
  puVar5 = *pauVar16;
  lVar9 = lVar9 + 8;
  pauVar14 = pauVar16;
  pauVar16 = (undefined (*) [16])(puVar5 + 8);
  if ((undefined (*) [16])(puVar5 + 8) == (undefined (*) [16])param_2) {
switchD_009894a0_caseD_0:
    return;
  }
  goto LAB_009896b8;
}


