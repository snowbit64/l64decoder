// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildIslands
// Entry Point: 00f56494
// Size: 1376 bytes
// Signature: undefined __thiscall buildIslands(btSimulationIslandManager * this, btDispatcher * param_1, btCollisionWorld * param_2)


/* btSimulationIslandManager::buildIslands(btDispatcher*, btCollisionWorld*) */

void __thiscall
btSimulationIslandManager::buildIslands
          (btSimulationIslandManager *this,btDispatcher *param_1,btCollisionWorld *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined4 uVar23;
  timeval local_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  CProfileManager::Start_Profile("islandUnionFindAndQuickSort");
  lVar22 = (long)*(int *)(this + 0x2c);
  if (*(int *)(this + 0x2c) < 0) {
    if (*(int *)(this + 0x30) < 0) {
      if ((*(long *)(this + 0x38) != 0) && (this[0x40] != (btSimulationIslandManager)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x30) = 0;
      this[0x40] = (btSimulationIslandManager)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x38) + lVar22 * 8) = 0;
      bVar9 = lVar22 != -1;
      lVar22 = lVar22 + 1;
    } while (bVar9);
  }
  uVar11 = *(uint *)(this + 0xc);
  *(undefined4 *)(this + 0x2c) = 0;
  if (0 < (int)uVar11) {
    uVar14 = 0;
    lVar22 = *(long *)(this + 0x18);
    do {
      puVar2 = (uint *)(lVar22 + uVar14 * 8);
      uVar15 = (uint)uVar14;
      uVar18 = (ulong)*puVar2;
      puVar17 = puVar2;
      if (uVar14 != uVar18) {
        do {
          uVar18 = -(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3;
          *puVar17 = *(uint *)(lVar22 + uVar18);
          uVar15 = *(uint *)(lVar22 + uVar18);
          puVar17 = (uint *)(lVar22 + (long)(int)uVar15 * 8);
          uVar3 = *puVar17;
          uVar18 = (ulong)uVar3;
        } while (uVar15 != uVar3);
      }
      uVar14 = uVar14 + 1;
      *puVar2 = uVar15;
    } while (uVar14 != uVar11);
    if (uVar11 - 1 != 0 && 0 < (int)uVar11) {
      btAlignedObjectArray<btElement>::quickSortInternal<btUnionFindElementSortPredicate>
                ((btAlignedObjectArray<btElement> *)(this + 8),
                 (btUnionFindElementSortPredicate *)&local_78,0,uVar11 - 1);
      uVar11 = *(uint *)(this + 0xc);
    }
    if (0 < (int)uVar11) {
      lVar22 = *(long *)(this + 0x18);
      uVar15 = 0;
      do {
        uVar14 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar15 << 3;
        lVar12 = (long)(int)uVar15;
        uVar3 = uVar11;
        if ((int)uVar11 <= (int)(uVar15 + 1)) {
          uVar3 = uVar15 + 1;
        }
        iVar10 = *(int *)(lVar22 + uVar14);
        uVar1 = uVar15;
        uVar18 = uVar14;
        do {
          uVar16 = uVar1;
          lVar12 = lVar12 + 1;
          uVar18 = uVar18 + 8;
          uVar7 = uVar3 - 1;
          uVar1 = uVar3;
          if ((long)(ulong)uVar11 <= lVar12) break;
          uVar1 = uVar16 + 1;
          uVar7 = uVar16;
        } while (*(int *)(lVar22 + uVar18) == iVar10);
        if ((int)uVar15 <= (int)uVar7) {
          lVar20 = uVar14 + 4;
          iVar19 = (uVar7 - uVar15) + 1;
          lVar21 = *(long *)(param_2 + 0x18);
          bVar9 = true;
          lVar12 = lVar20;
          iVar5 = iVar19;
          do {
            lVar13 = *(long *)(lVar21 + (long)*(int *)(lVar22 + lVar12) * 8);
            if (*(int *)(lVar13 + 0xe4) == iVar10) {
              iVar4 = *(int *)(lVar13 + 0xec);
              bVar9 = (bool)((iVar4 != 4 && iVar4 != 1) & bVar9);
            }
            iVar5 = iVar5 + -1;
            lVar12 = lVar12 + 8;
          } while (iVar5 != 0);
          lVar13 = *(long *)(this + 0x18);
          lVar12 = lVar22;
          if (bVar9) {
            do {
              lVar12 = *(long *)(lVar21 + (long)*(int *)(lVar12 + lVar20) * 8);
              if ((*(int *)(lVar12 + 0xe4) == iVar10) &&
                 ((*(uint *)(lVar12 + 0xec) & 0xfffffffe) != 4)) {
                *(undefined4 *)(lVar12 + 0xec) = 2;
              }
              iVar19 = iVar19 + -1;
              lVar20 = lVar20 + 8;
              lVar12 = lVar13;
            } while (iVar19 != 0);
          }
          else {
            do {
              lVar12 = *(long *)(lVar21 + (long)*(int *)(lVar12 + lVar20) * 8);
              if ((*(int *)(lVar12 + 0xe4) == iVar10) && (*(int *)(lVar12 + 0xec) == 2)) {
                *(undefined8 *)(lVar12 + 0xec) = 3;
              }
              iVar19 = iVar19 + -1;
              lVar20 = lVar20 + 8;
              lVar12 = lVar13;
            } while (iVar19 != 0);
          }
        }
        uVar15 = uVar1;
      } while ((int)uVar1 < (int)uVar11);
    }
  }
  uVar14 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  iVar10 = (int)uVar14;
  if (0 < iVar10) {
    iVar19 = 0;
    do {
      uVar18 = (**(code **)(*(long *)param_1 + 0x50))(param_1,iVar19);
      lVar22 = *(long *)(uVar18 + 0x308);
      lVar12 = *(long *)(uVar18 + 0x310);
      uVar14 = uVar18;
      if (((lVar22 != 0) && (*(int *)(lVar22 + 0xec) != 2)) ||
         ((lVar12 != 0 && (*(int *)(lVar12 + 0xec) != 2)))) {
        uVar11 = *(uint *)(lVar22 + 0xe0);
        if ((((uVar11 >> 1 & 1) == 0) || (*(int *)(lVar22 + 0xec) == 2 || (uVar11 & 4) != 0)) ||
           ((*(byte *)(lVar12 + 0xe0) & 3) != 0)) {
          uVar15 = *(uint *)(lVar12 + 0xe0);
        }
        else {
          if ((*(uint *)(lVar12 + 0xec) & 0xfffffffe) != 4) {
            *(undefined4 *)(lVar12 + 0xec) = 1;
          }
          *(undefined4 *)(lVar12 + 0xf0) = 0;
          uVar15 = *(uint *)(lVar12 + 0xe0);
        }
        if (((uVar15 >> 1 & 1) != 0) &&
           ((*(int *)(lVar12 + 0xec) != 2 && (uVar15 & 4) == 0) && (uVar11 & 3) == 0)) {
          if ((*(uint *)(lVar22 + 0xec) & 0xfffffffe) != 4) {
            *(undefined4 *)(lVar22 + 0xec) = 1;
          }
          *(undefined4 *)(lVar22 + 0xf0) = 0;
        }
        if ((this[0x68] != (btSimulationIslandManager)0x0) &&
           (uVar14 = (**(code **)(*(long *)param_1 + 0x38))(param_1), (uVar14 & 1) != 0)) {
          uVar11 = *(uint *)(this + 0x2c);
          if (uVar11 == *(uint *)(this + 0x30)) {
            uVar15 = uVar11 << 1;
            if (uVar11 == 0) {
              uVar15 = 1;
            }
            if ((int)uVar11 < (int)uVar15) {
              if (uVar15 == 0) {
                lVar22 = 0;
              }
              else {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                lVar22 = (*(code *)PTR_FUN_01048e38)
                                   (-(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar15 << 3,0x10);
                uVar11 = *(uint *)(this + 0x2c);
              }
              if (0 < (int)uVar11) {
                lVar12 = 0;
                do {
                  *(undefined8 *)(lVar22 + lVar12) =
                       *(undefined8 *)(*(long *)(this + 0x38) + lVar12);
                  lVar12 = lVar12 + 8;
                } while ((ulong)uVar11 * 8 - lVar12 != 0);
              }
              uVar14 = *(ulong *)(this + 0x38);
              if ((uVar14 != 0) && (this[0x40] != (btSimulationIslandManager)0x0)) {
                gNumAlignedFree = gNumAlignedFree + 1;
                uVar14 = (*(code *)PTR_FUN_01048e40)();
                uVar11 = *(uint *)(this + 0x2c);
              }
              this[0x40] = (btSimulationIslandManager)0x1;
              *(long *)(this + 0x38) = lVar22;
              *(uint *)(this + 0x30) = uVar15;
            }
          }
          *(ulong *)(*(long *)(this + 0x38) + (long)(int)uVar11 * 8) = uVar18;
          *(uint *)(this + 0x2c) = uVar11 + 1;
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 != iVar10);
  }
  puVar8 = CProfileManager::CurrentNode;
  iVar10 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar10;
  if ((iVar10 == 0) && (*(int *)(puVar8 + 8) != 0)) {
    uVar11 = gettimeofday(&local_78,(__timezone_ptr_t)0x0);
    uVar14 = (ulong)uVar11;
    iVar10 = *(int *)(puVar8 + 0x18);
    uVar23 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_78.tv_usec +
                                       (local_78.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar8 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar8 + 0xc));
    *(undefined4 *)(puVar8 + 0xc) = uVar23;
  }
  if (iVar10 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}


