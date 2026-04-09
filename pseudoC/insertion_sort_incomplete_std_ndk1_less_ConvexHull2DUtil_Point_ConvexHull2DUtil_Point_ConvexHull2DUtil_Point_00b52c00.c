// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
// Entry Point: 00b52c00
// Size: 804 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>(Point * param_1, Point * param_2, __less * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<ConvexHull2DUtil::Point,
   ConvexHull2DUtil::Point>&, ConvexHull2DUtil::Point*>(ConvexHull2DUtil::Point*,
   ConvexHull2DUtil::Point*, std::__ndk1::__less<ConvexHull2DUtil::Point, ConvexHull2DUtil::Point>&)
    */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
               (Point *param_1,Point *param_2,__less *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  
  lVar3 = tpidr_el0;
  uVar5 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  lVar10 = *(long *)(lVar3 + 0x28);
  if (uVar5 < 6) {
    bVar4 = true;
    switch(uVar5) {
    default:
      goto switchD_00b52c64_caseD_0;
    case 2:
      puVar6 = (undefined8 *)(param_2 + -0xc);
      if ((*(float *)puVar6 < *(float *)param_1) ||
         ((*(float *)puVar6 == *(float *)param_1 &&
          (*(float *)(param_2 + -8) < *(float *)(param_1 + 4))))) {
        bVar4 = true;
        uVar1 = *(undefined4 *)(param_2 + -4);
        uVar12 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *puVar6;
        *(undefined4 *)(param_1 + 8) = uVar1;
        *puVar6 = uVar12;
        *(undefined4 *)(param_2 + -4) = uVar2;
        goto switchD_00b52c64_caseD_0;
      }
      break;
    case 3:
      __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                (param_1,param_1 + 0xc,param_2 + -0xc,param_3);
      break;
    case 4:
      puVar6 = (undefined8 *)(param_1 + 0xc);
      puVar11 = (undefined8 *)(param_1 + 0x18);
      __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                (param_1,(Point *)puVar6,(Point *)puVar11,param_3);
      puVar8 = (undefined8 *)(param_2 + -0xc);
      if ((*(float *)puVar8 < *(float *)(param_1 + 0x18)) ||
         ((*(float *)puVar8 == *(float *)(param_1 + 0x18) &&
          (*(float *)(param_2 + -8) < *(float *)(param_1 + 0x1c))))) {
        uVar1 = *(undefined4 *)(param_2 + -4);
        uVar12 = *puVar11;
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        *puVar11 = *puVar8;
        *(undefined4 *)(param_1 + 0x20) = uVar1;
        *puVar8 = uVar12;
        *(undefined4 *)(param_2 + -4) = uVar2;
        if ((*(float *)puVar11 < *(float *)puVar6) ||
           ((*(float *)puVar11 == *(float *)puVar6 &&
            (*(float *)(param_1 + 0x1c) < *(float *)(param_1 + 0x10))))) {
          uVar12 = *puVar6;
          *puVar6 = *puVar11;
          uVar1 = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
          *puVar11 = uVar12;
          *(undefined4 *)(param_1 + 0x20) = uVar1;
          if ((*(float *)(param_1 + 0xc) < *(float *)param_1) ||
             ((*(float *)(param_1 + 0xc) == *(float *)param_1 &&
              (*(float *)(param_1 + 0x10) < *(float *)(param_1 + 4))))) {
            bVar4 = true;
            uVar12 = *(undefined8 *)param_1;
            uVar1 = *(undefined4 *)(param_1 + 8);
            *(undefined8 *)param_1 = *puVar6;
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
            *puVar6 = uVar12;
            *(undefined4 *)(param_1 + 0x14) = uVar1;
            goto switchD_00b52c64_caseD_0;
          }
        }
      }
      break;
    case 5:
      FUN_00b52988(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc);
    }
  }
  else {
    __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
              (param_1,param_1 + 0xc,param_1 + 0x18,param_3);
    if (param_1 + 0x24 != param_2) {
      lVar7 = 0;
      iVar9 = 0;
      puVar6 = (undefined8 *)(param_1 + 0x24);
      puVar11 = (undefined8 *)(param_1 + 0x18);
      do {
        puVar8 = puVar6;
        fVar15 = *(float *)puVar8;
        if (*(float *)puVar11 <= fVar15) {
          if ((fVar15 == *(float *)puVar11) &&
             (fVar16 = *(float *)((long)puVar8 + 4), fVar16 < *(float *)((long)puVar11 + 4)))
          goto LAB_00b52d5c;
        }
        else {
          fVar16 = *(float *)((long)puVar8 + 4);
LAB_00b52d5c:
          uVar1 = *(undefined4 *)(puVar11 + 1);
          uVar2 = *(undefined4 *)(puVar8 + 1);
          *puVar8 = *puVar11;
          *(undefined4 *)(puVar8 + 1) = uVar1;
          puVar6 = (undefined8 *)param_1;
          lVar14 = lVar7;
          if (puVar11 != (undefined8 *)param_1) {
            do {
              if (*(float *)(param_1 + lVar14 + 0xc) <= fVar15) {
                puVar6 = puVar11;
                if (fVar15 != *(float *)(param_1 + lVar14 + 0xc)) break;
                if (*(float *)(param_1 + lVar14 + 0x10) <= fVar16) {
                  puVar6 = (undefined8 *)(param_1 + lVar14 + 0x18);
                  break;
                }
              }
              puVar11 = (undefined8 *)((long)puVar11 + -0xc);
              lVar13 = lVar14 + -0xc;
              *(undefined8 *)(param_1 + lVar14 + 0x18) = *(undefined8 *)(param_1 + lVar14 + 0xc);
              *(undefined4 *)(param_1 + lVar14 + 0x20) = *(undefined4 *)(param_1 + lVar14 + 0x14);
              puVar6 = (undefined8 *)param_1;
              lVar14 = lVar13;
            } while (lVar13 != -0x18);
          }
          iVar9 = iVar9 + 1;
          *(float *)puVar6 = fVar15;
          *(float *)((long)puVar6 + 4) = fVar16;
          *(undefined4 *)(puVar6 + 1) = uVar2;
          if (iVar9 == 8) {
            bVar4 = (Point *)((long)puVar8 + 0xc) == param_2;
            goto switchD_00b52c64_caseD_0;
          }
        }
        lVar7 = lVar7 + 0xc;
        puVar6 = (undefined8 *)((long)puVar8 + 0xc);
        puVar11 = puVar8;
      } while ((undefined8 *)((long)puVar8 + 0xc) != (undefined8 *)param_2);
    }
  }
  bVar4 = true;
switchD_00b52c64_caseD_0:
  if (*(long *)(lVar3 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


