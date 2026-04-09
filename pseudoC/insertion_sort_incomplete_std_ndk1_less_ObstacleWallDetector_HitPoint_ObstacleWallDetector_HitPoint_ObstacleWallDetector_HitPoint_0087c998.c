// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
// Entry Point: 0087c998
// Size: 1144 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>(HitPoint * param_1, HitPoint * param_2, __less * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<ObstacleWallDetector::HitPoint,
   ObstacleWallDetector::HitPoint>&,
   ObstacleWallDetector::HitPoint*>(ObstacleWallDetector::HitPoint*,
   ObstacleWallDetector::HitPoint*, std::__ndk1::__less<ObstacleWallDetector::HitPoint,
   ObstacleWallDetector::HitPoint>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
               (HitPoint *param_1,HitPoint *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  lVar4 = tpidr_el0;
  uVar7 = ((long)param_2 - (long)param_1 >> 2) * -0x3333333333333333;
  lVar12 = *(long *)(lVar4 + 0x28);
  if (uVar7 < 6) {
    bVar6 = true;
    switch(uVar7) {
    default:
      goto switchD_0087ca00_caseD_0;
    case 2:
      if (*(float *)(param_2 + -4) < *(float *)(param_1 + 0x10)) {
        uVar14 = *(undefined8 *)(param_2 + -0x14);
        bVar6 = true;
        uVar3 = *(undefined4 *)(param_2 + -4);
        uVar17 = *(undefined8 *)(param_1 + 8);
        uVar16 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0xc);
        *(undefined8 *)param_1 = uVar14;
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        *(undefined8 *)(param_2 + -0xc) = uVar17;
        *(undefined8 *)(param_2 + -0x14) = uVar16;
        *(undefined4 *)(param_2 + -4) = uVar2;
        goto switchD_0087ca00_caseD_0;
      }
      break;
    case 3:
      fVar15 = *(float *)(param_1 + 0x24);
      puVar8 = (undefined8 *)(param_1 + 0x14);
      puVar9 = (undefined8 *)(param_2 + -0x14);
      if (*(float *)(param_1 + 0x10) <= fVar15) {
        if (*(float *)(param_2 + -4) < fVar15) {
          uVar14 = *puVar9;
          uVar2 = *(undefined4 *)(param_2 + -4);
          uVar17 = *(undefined8 *)(param_1 + 0x1c);
          uVar16 = *puVar8;
          uVar3 = *(undefined4 *)(param_1 + 0x24);
          *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + -0xc);
          *puVar8 = uVar14;
          *(undefined4 *)(param_1 + 0x24) = uVar2;
          *(undefined8 *)(param_2 + -0xc) = uVar17;
          *puVar9 = uVar16;
          *(undefined4 *)(param_2 + -4) = uVar3;
          if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x10)) {
            bVar6 = true;
            uVar16 = *(undefined8 *)(param_1 + 8);
            uVar14 = *(undefined8 *)param_1;
            uVar2 = *(undefined4 *)(param_1 + 0x10);
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x1c);
            *(undefined8 *)param_1 = *puVar8;
            *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x24);
            *(undefined8 *)(param_1 + 0x1c) = uVar16;
            *puVar8 = uVar14;
            *(undefined4 *)(param_1 + 0x24) = uVar2;
            goto switchD_0087ca00_caseD_0;
          }
        }
      }
      else {
        if (*(float *)(param_2 + -4) < fVar15) {
          uVar14 = *puVar9;
          bVar6 = true;
          uVar2 = *(undefined4 *)(param_2 + -4);
          uVar17 = *(undefined8 *)(param_1 + 8);
          uVar16 = *(undefined8 *)param_1;
          uVar3 = *(undefined4 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0xc);
          *(undefined8 *)param_1 = uVar14;
          *(undefined4 *)(param_1 + 0x10) = uVar2;
          *(undefined8 *)(param_2 + -0xc) = uVar17;
          *puVar9 = uVar16;
          *(undefined4 *)(param_2 + -4) = uVar3;
          goto switchD_0087ca00_caseD_0;
        }
        uVar16 = *(undefined8 *)(param_1 + 8);
        uVar14 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x1c);
        *(undefined8 *)param_1 = *puVar8;
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x24);
        *(undefined8 *)(param_1 + 0x1c) = uVar16;
        *puVar8 = uVar14;
        *(undefined4 *)(param_1 + 0x24) = uVar2;
        if (*(float *)(param_2 + -4) < *(float *)(param_1 + 0x24)) {
          uVar14 = *puVar9;
          bVar6 = true;
          uVar2 = *(undefined4 *)(param_2 + -4);
          uVar17 = *(undefined8 *)(param_1 + 0x1c);
          uVar16 = *puVar8;
          uVar3 = *(undefined4 *)(param_1 + 0x24);
          *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + -0xc);
          *puVar8 = uVar14;
          *(undefined4 *)(param_1 + 0x24) = uVar2;
          *(undefined8 *)(param_2 + -0xc) = uVar17;
          *puVar9 = uVar16;
          *(undefined4 *)(param_2 + -4) = uVar3;
          goto switchD_0087ca00_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
                (param_1,param_1 + 0x14,param_1 + 0x28,param_2 + -0x14,param_3);
      break;
    case 5:
      puVar8 = (undefined8 *)(param_1 + 0x14);
      puVar9 = (undefined8 *)(param_1 + 0x28);
      puVar1 = (undefined8 *)(param_1 + 0x3c);
      __sort4<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
                (param_1,(HitPoint *)puVar8,(HitPoint *)puVar9,(HitPoint *)puVar1,param_3);
      if (*(float *)(param_2 + -4) < *(float *)(param_1 + 0x4c)) {
        uVar14 = *(undefined8 *)(param_2 + -0x14);
        uVar3 = *(undefined4 *)(param_2 + -4);
        uVar17 = *(undefined8 *)(param_1 + 0x44);
        uVar16 = *puVar1;
        uVar2 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + -0xc);
        *puVar1 = uVar14;
        *(undefined4 *)(param_1 + 0x4c) = uVar3;
        *(undefined8 *)(param_2 + -0xc) = uVar17;
        *(undefined8 *)(param_2 + -0x14) = uVar16;
        *(undefined4 *)(param_2 + -4) = uVar2;
        if (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0x38)) {
          uVar2 = *(undefined4 *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
          uVar16 = *(undefined8 *)(param_1 + 0x30);
          uVar14 = *puVar9;
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x44);
          *puVar9 = *puVar1;
          *(undefined8 *)(param_1 + 0x44) = uVar16;
          *puVar1 = uVar14;
          if (*(float *)(param_1 + 0x38) < *(float *)(param_1 + 0x24)) {
            uVar2 = *(undefined4 *)(param_1 + 0x24);
            *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x38);
            *(undefined4 *)(param_1 + 0x38) = uVar2;
            uVar16 = *(undefined8 *)(param_1 + 0x1c);
            uVar14 = *puVar8;
            *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x30);
            *puVar8 = *puVar9;
            *(undefined8 *)(param_1 + 0x30) = uVar16;
            *puVar9 = uVar14;
            if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x10)) {
              bVar6 = true;
              uVar16 = *(undefined8 *)(param_1 + 8);
              uVar14 = *(undefined8 *)param_1;
              uVar2 = *(undefined4 *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x1c);
              *(undefined8 *)param_1 = *puVar8;
              *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x24);
              *(undefined8 *)(param_1 + 0x1c) = uVar16;
              *puVar8 = uVar14;
              *(undefined4 *)(param_1 + 0x24) = uVar2;
              goto switchD_0087ca00_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    fVar18 = *(float *)(param_1 + 0x24);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    puVar9 = (undefined8 *)(param_1 + 0x14);
    fVar15 = *(float *)(param_1 + 0x38);
    if (*(float *)(param_1 + 0x10) <= fVar18) {
      if (fVar15 < fVar18) {
        uVar2 = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x38);
        uVar16 = *(undefined8 *)(param_1 + 0x1c);
        uVar14 = *puVar9;
        *(undefined4 *)(param_1 + 0x38) = uVar2;
        *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x30);
        *puVar9 = *puVar8;
        *(undefined8 *)(param_1 + 0x30) = uVar16;
        *puVar8 = uVar14;
        if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x10)) {
          uVar16 = *(undefined8 *)(param_1 + 8);
          uVar14 = *(undefined8 *)param_1;
          uVar2 = *(undefined4 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x1c);
          *(undefined8 *)param_1 = *puVar9;
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x24);
          *(undefined8 *)(param_1 + 0x1c) = uVar16;
          *puVar9 = uVar14;
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
      }
    }
    else if (fVar18 <= fVar15) {
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x10);
      uVar16 = *(undefined8 *)(param_1 + 8);
      uVar14 = *(undefined8 *)param_1;
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)param_1 = *puVar9;
      *(undefined8 *)(param_1 + 0x1c) = uVar16;
      *puVar9 = uVar14;
      if (fVar15 < *(float *)(param_1 + 0x24)) {
        uVar16 = *(undefined8 *)(param_1 + 0x1c);
        uVar14 = *puVar9;
        uVar2 = *(undefined4 *)(param_1 + 0x24);
        *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x30);
        *puVar9 = *puVar8;
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = uVar16;
        *puVar8 = uVar14;
        *(undefined4 *)(param_1 + 0x38) = uVar2;
      }
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 8);
      uVar14 = *(undefined8 *)param_1;
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)param_1 = *puVar8;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = uVar16;
      *puVar8 = uVar14;
      *(undefined4 *)(param_1 + 0x38) = uVar2;
    }
    if (param_1 + 0x3c != param_2) {
      lVar10 = 0;
      iVar11 = 0;
      puVar9 = (undefined8 *)(param_1 + 0x3c);
      do {
        fVar15 = *(float *)(puVar9 + 2);
        if (fVar15 < *(float *)(puVar8 + 2)) {
          uVar16 = puVar9[1];
          uVar14 = *puVar9;
          lVar5 = lVar10;
          do {
            lVar13 = lVar5;
            *(undefined8 *)(param_1 + lVar13 + 0x44) = *(undefined8 *)(param_1 + lVar13 + 0x30);
            *(undefined8 *)(param_1 + lVar13 + 0x3c) = *(undefined8 *)(param_1 + lVar13 + 0x28);
            *(undefined4 *)(param_1 + lVar13 + 0x4c) = *(undefined4 *)(param_1 + lVar13 + 0x38);
            puVar8 = (undefined8 *)param_1;
            if (lVar13 == -0x28) goto LAB_0087cd48;
            lVar5 = lVar13 + -0x14;
          } while (fVar15 < *(float *)(param_1 + lVar13 + 0x24));
          puVar8 = (undefined8 *)(param_1 + lVar13 + 0x28);
LAB_0087cd48:
          iVar11 = iVar11 + 1;
          *(float *)(puVar8 + 2) = fVar15;
          puVar8[1] = uVar16;
          *puVar8 = uVar14;
          if (iVar11 == 8) {
            bVar6 = (HitPoint *)((long)puVar9 + 0x14) == param_2;
            goto switchD_0087ca00_caseD_0;
          }
        }
        puVar1 = (undefined8 *)((long)puVar9 + 0x14);
        lVar10 = lVar10 + 0x14;
        puVar8 = puVar9;
        puVar9 = puVar1;
      } while (puVar1 != (undefined8 *)param_2);
    }
  }
  bVar6 = true;
switchD_0087ca00_caseD_0:
  if (*(long *)(lVar4 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


