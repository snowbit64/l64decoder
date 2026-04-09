// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildAndProcessIslands
// Entry Point: 00f569f4
// Size: 1156 bytes
// Signature: undefined __thiscall buildAndProcessIslands(btSimulationIslandManager * this, btDispatcher * param_1, btCollisionWorld * param_2, IslandCallback * param_3)


/* btSimulationIslandManager::buildAndProcessIslands(btDispatcher*, btCollisionWorld*,
   btSimulationIslandManager::IslandCallback*) */

void __thiscall
btSimulationIslandManager::buildAndProcessIslands
          (btSimulationIslandManager *this,btDispatcher *param_1,btCollisionWorld *param_2,
          IslandCallback *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  timeval local_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  buildIslands(this,param_1,param_2);
  uVar3 = *(uint *)(this + 0xc);
  CProfileManager::Start_Profile("processIslands");
  if (this[0x68] == (btSimulationIslandManager)0x0) {
    uVar10 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
    uVar22 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
    (**(code **)(*(long *)param_3 + 0x10))
              (param_3,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0xc),uVar10,uVar22,
               0xffffffff);
  }
  else {
    iVar13 = *(int *)(this + 0x2c);
    if (1 < iVar13) {
      btAlignedObjectArray<btPersistentManifold*>::
      quickSortInternal<btPersistentManifoldSortPredicate>
                ((btAlignedObjectArray<btPersistentManifold*> *)(this + 0x28),
                 (btPersistentManifoldSortPredicate *)&local_78,0,iVar13 + -1);
    }
    if (0 < (int)uVar3) {
      uVar19 = 0;
      iVar14 = 0;
      iVar21 = 1;
      do {
        lVar17 = *(long *)(this + 0x18);
        iVar4 = *(int *)(lVar17 + (-(uVar19 >> 0x1f & 1) & 0xfffffff800000000 |
                                  (uVar19 & 0xffffffff) << 3));
        if ((int)uVar19 < (int)uVar3) {
          uVar15 = *(uint *)(this + 0x4c);
          uVar12 = *(uint *)(this + 0x50);
          uVar19 = (ulong)(int)uVar19;
          bVar8 = true;
          do {
            lVar17 = *(long *)(*(long *)(param_2 + 0x18) +
                              (long)*(int *)(lVar17 + uVar19 * 8 + 4) * 8);
            if (uVar15 == uVar12) {
              uVar5 = uVar12 << 1;
              if (uVar12 == 0) {
                uVar5 = 1;
              }
              uVar15 = uVar12;
              if ((int)uVar12 < (int)uVar5) {
                if (uVar5 == 0) {
                  lVar9 = 0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  lVar9 = (*(code *)PTR_FUN_01048e38)
                                    (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar5 << 3,0x10);
                  uVar12 = *(uint *)(this + 0x4c);
                }
                if (0 < (int)uVar12) {
                  lVar16 = 0;
                  do {
                    *(undefined8 *)(lVar9 + lVar16) =
                         *(undefined8 *)(*(long *)(this + 0x58) + lVar16);
                    lVar16 = lVar16 + 8;
                  } while ((ulong)uVar12 * 8 - lVar16 != 0);
                }
                if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btSimulationIslandManager)0x0))
                {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                  uVar12 = *(uint *)(this + 0x4c);
                }
                *(long *)(this + 0x58) = lVar9;
                *(uint *)(this + 0x50) = uVar5;
                this[0x60] = (btSimulationIslandManager)0x1;
                uVar15 = uVar12;
                uVar12 = uVar5;
              }
            }
            uVar19 = uVar19 + 1;
            *(long *)(*(long *)(this + 0x58) + (long)(int)uVar15 * 8) = lVar17;
            uVar15 = uVar15 + 1;
            *(uint *)(this + 0x4c) = uVar15;
            iVar20 = *(int *)(lVar17 + 0xec);
            bVar8 = (bool)((iVar20 == 2 || iVar20 == 5) & bVar8);
            if (uVar19 == uVar3) {
              uVar19 = (ulong)uVar3;
              break;
            }
            lVar17 = *(long *)(this + 0x18);
          } while (*(int *)(lVar17 + uVar19 * 8) == iVar4);
          if (iVar13 <= iVar14) goto LAB_00f56cb0;
LAB_00f56c28:
          plVar11 = (long *)(*(long *)(this + 0x38) + (long)iVar14 * 8);
          iVar20 = *(int *)(*(long *)(*plVar11 + 0x308) + 0xe4);
          if (iVar20 < 0) {
            iVar20 = *(int *)(*(long *)(*plVar11 + 0x310) + 0xe4);
          }
          if (iVar20 != iVar4) goto LAB_00f56cb0;
          lVar17 = (long)iVar14;
          iVar20 = iVar14;
          iVar2 = iVar13;
          if (iVar13 <= iVar14 + 1) {
            iVar2 = iVar14 + 1;
          }
          do {
            lVar17 = lVar17 + 1;
            iVar21 = iVar2;
            if (iVar13 <= lVar17) break;
            lVar9 = *(long *)(*(long *)(this + 0x38) + lVar17 * 8);
            iVar18 = *(int *)(*(long *)(lVar9 + 0x308) + 0xe4);
            if (iVar18 < 0) {
              iVar18 = *(int *)(*(long *)(lVar9 + 0x310) + 0xe4);
            }
            iVar20 = iVar20 + 1;
            iVar21 = iVar20;
          } while (iVar4 == iVar18);
          iVar20 = iVar21 - iVar14;
        }
        else {
          bVar8 = true;
          if (iVar14 < iVar13) goto LAB_00f56c28;
LAB_00f56cb0:
          iVar20 = 0;
          plVar11 = (long *)0x0;
        }
        if (!bVar8) {
          (**(code **)(*(long *)param_3 + 0x10))
                    (param_3,*(undefined8 *)(this + 0x58),*(undefined4 *)(this + 0x4c),plVar11,
                     iVar20,iVar4);
        }
        lVar17 = (long)*(int *)(this + 0x4c);
        if (iVar20 != 0) {
          iVar14 = iVar21;
        }
        if (*(int *)(this + 0x4c) < 0) {
          if (*(int *)(this + 0x50) < 0) {
            if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btSimulationIslandManager)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            *(undefined8 *)(this + 0x58) = 0;
            *(undefined4 *)(this + 0x50) = 0;
            this[0x60] = (btSimulationIslandManager)0x1;
          }
          do {
            *(undefined8 *)(*(long *)(this + 0x58) + lVar17 * 8) = 0;
            bVar8 = lVar17 != -1;
            lVar17 = lVar17 + 1;
          } while (bVar8);
        }
        *(undefined4 *)(this + 0x4c) = 0;
      } while ((int)uVar19 < (int)uVar3);
    }
  }
  puVar7 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar13 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar13;
  if (iVar13 == 0 && *piVar1 != 0) {
    gettimeofday(&local_78,(__timezone_ptr_t)0x0);
    iVar13 = *(int *)(puVar7 + 0x18);
    uVar22 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_78.tv_usec +
                                       (local_78.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar7 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar7 + 0xc));
    *(undefined4 *)(puVar7 + 0xc) = uVar22;
  }
  if (iVar13 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


