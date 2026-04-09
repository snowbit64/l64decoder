// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processIsland
// Entry Point: 00f32518
// Size: 1428 bytes
// Signature: undefined __thiscall processIsland(InplaceSolverIslandCallback * this, btCollisionObject * * param_1, int param_2, btPersistentManifold * * param_3, int param_4, int param_5)


/* InplaceSolverIslandCallback::processIsland(btCollisionObject**, int, btPersistentManifold**, int,
   int) */

void __thiscall
InplaceSolverIslandCallback::processIsland
          (InplaceSolverIslandCallback *this,btCollisionObject **param_1,int param_2,
          btPersistentManifold **param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  btCollisionObject **ppbVar4;
  btPersistentManifold **ppbVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  
  if (param_5 < 0) {
    plVar10 = *(long **)(this + 0x10);
    plVar20 = *(long **)(this + 0x18);
    uVar11 = *(undefined8 *)(this + 0x28);
    uVar14 = *(undefined8 *)(this + 0x30);
    lVar8 = *plVar10;
    uVar21 = *(uint *)(this + 0x20);
    lVar6 = *(long *)(this + 8);
    goto LAB_00f326a0;
  }
  uVar9 = *(uint *)(this + 0x20);
  plVar10 = *(long **)(this + 0x18);
  if ((int)uVar9 < 1) {
    uVar12 = 0;
    plVar20 = (long *)0x0;
LAB_00f325c4:
    if ((int)(uint)uVar12 < (int)uVar9) {
      uVar13 = uVar12 & 0xffffffff;
      uVar21 = uVar9 + ~(uint)uVar12;
      if (uVar21 == 0) {
        uVar21 = 0;
      }
      else {
        uVar12 = (ulong)uVar21 + 1;
        uVar16 = uVar12 & 0x1fffffffe;
        iVar15 = 0;
        iVar17 = 0;
        plVar18 = plVar10 + uVar13 + 1;
        ppbVar4 = param_1;
        ppbVar5 = param_3;
        uVar19 = uVar16;
        do {
          iVar1 = *(int *)(*(long *)(plVar18[-1] + 0x28) + 0xe4);
          if (iVar1 < 0) {
            ppbVar4 = *(btCollisionObject ***)(plVar18[-1] + 0x30);
          }
          iVar3 = *(int *)(*(long *)(*plVar18 + 0x28) + 0xe4);
          if (iVar3 < 0) {
            ppbVar5 = *(btPersistentManifold ***)(*plVar18 + 0x30);
          }
          if (iVar1 < 0) {
            iVar1 = *(int *)((long)ppbVar4 + 0xe4);
          }
          if (iVar3 < 0) {
            iVar3 = *(int *)((long)ppbVar5 + 0xe4);
          }
          plVar18 = plVar18 + 2;
          if (iVar1 == param_5) {
            iVar15 = iVar15 + 1;
          }
          if (iVar3 == param_5) {
            iVar17 = iVar17 + 1;
          }
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
        uVar21 = iVar17 + iVar15;
        if (uVar12 == uVar16) goto LAB_00f32674;
        uVar13 = uVar16 + uVar13;
      }
      do {
        iVar15 = *(int *)(*(long *)(plVar10[uVar13] + 0x28) + 0xe4);
        if (iVar15 < 0) {
          iVar15 = *(int *)(*(long *)(plVar10[uVar13] + 0x30) + 0xe4);
        }
        uVar13 = uVar13 + 1;
        if (iVar15 == param_5) {
          uVar21 = uVar21 + 1;
        }
      } while ((int)uVar13 < (int)uVar9);
    }
    else {
      uVar21 = 0;
    }
  }
  else {
    uVar12 = 0;
    plVar20 = plVar10;
    do {
      iVar15 = *(int *)(*(long *)(*plVar20 + 0x28) + 0xe4);
      if (iVar15 < 0) {
        iVar15 = *(int *)(*(long *)(*plVar20 + 0x30) + 0xe4);
      }
      if (iVar15 == param_5) goto LAB_00f325c4;
      uVar12 = uVar12 + 1;
      plVar20 = plVar20 + 1;
    } while (uVar9 != uVar12);
    plVar20 = (long *)0x0;
    uVar21 = 0;
  }
LAB_00f32674:
  lVar6 = *(long *)(this + 8);
  if (1 < *(int *)(lVar6 + 0x48)) {
    if (0 < param_2) {
      uVar9 = *(uint *)(this + 0x3c);
      uVar7 = *(uint *)(this + 0x40);
      uVar12 = 0;
      do {
        if (uVar9 == uVar7) {
          uVar2 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar2 = 1;
          }
          uVar9 = uVar7;
          if ((int)uVar7 < (int)uVar2) {
            if (uVar2 == 0) {
              lVar6 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar6 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                                 0x10);
              uVar7 = *(uint *)(this + 0x3c);
            }
            if (0 < (int)uVar7) {
              lVar8 = 0;
              do {
                *(undefined8 *)(lVar6 + lVar8) = *(undefined8 *)(*(long *)(this + 0x48) + lVar8);
                lVar8 = lVar8 + 8;
              } while ((ulong)uVar7 * 8 - lVar8 != 0);
            }
            if ((*(long *)(this + 0x48) != 0) && (this[0x50] != (InplaceSolverIslandCallback)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar7 = *(uint *)(this + 0x3c);
            }
            *(long *)(this + 0x48) = lVar6;
            *(uint *)(this + 0x40) = uVar2;
            this[0x50] = (InplaceSolverIslandCallback)0x1;
            uVar9 = uVar7;
            uVar7 = uVar2;
          }
        }
        ppbVar4 = param_1 + uVar12;
        uVar12 = uVar12 + 1;
        *(btCollisionObject **)(*(long *)(this + 0x48) + (long)(int)uVar9 * 8) = *ppbVar4;
        uVar9 = uVar9 + 1;
        *(uint *)(this + 0x3c) = uVar9;
      } while (uVar12 != (uint)param_2);
    }
    if (0 < param_4) {
      uVar12 = 0;
      uVar9 = *(uint *)(this + 0x5c);
      uVar7 = *(uint *)(this + 0x60);
      do {
        if (uVar9 == uVar7) {
          uVar2 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar2 = 1;
          }
          uVar9 = uVar7;
          if ((int)uVar7 < (int)uVar2) {
            if (uVar2 == 0) {
              lVar6 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar6 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                                 0x10);
              uVar7 = *(uint *)(this + 0x5c);
            }
            if (0 < (int)uVar7) {
              lVar8 = 0;
              do {
                *(undefined8 *)(lVar6 + lVar8) = *(undefined8 *)(*(long *)(this + 0x68) + lVar8);
                lVar8 = lVar8 + 8;
              } while ((ulong)uVar7 * 8 - lVar8 != 0);
            }
            if ((*(long *)(this + 0x68) != 0) && (this[0x70] != (InplaceSolverIslandCallback)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar7 = *(uint *)(this + 0x5c);
            }
            this[0x70] = (InplaceSolverIslandCallback)0x1;
            *(long *)(this + 0x68) = lVar6;
            *(uint *)(this + 0x60) = uVar2;
            uVar9 = uVar7;
            uVar7 = uVar2;
          }
        }
        ppbVar5 = param_3 + uVar12;
        uVar12 = uVar12 + 1;
        *(btPersistentManifold **)(*(long *)(this + 0x68) + (long)(int)uVar9 * 8) = *ppbVar5;
        uVar9 = uVar9 + 1;
        *(uint *)(this + 0x5c) = uVar9;
      } while (uVar12 != (uint)param_4);
    }
    if (uVar21 == 0) {
      uVar9 = *(uint *)(this + 0x7c);
    }
    else {
      uVar9 = *(uint *)(this + 0x7c);
      uVar7 = *(uint *)(this + 0x80);
      uVar12 = 0;
      do {
        if (uVar9 == uVar7) {
          uVar2 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar2 = 1;
          }
          uVar9 = uVar7;
          if ((int)uVar7 < (int)uVar2) {
            if (uVar2 == 0) {
              lVar6 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar6 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                                 0x10);
              uVar7 = *(uint *)(this + 0x7c);
            }
            if (0 < (int)uVar7) {
              lVar8 = 0;
              do {
                *(undefined8 *)(lVar6 + lVar8) = *(undefined8 *)(*(long *)(this + 0x88) + lVar8);
                lVar8 = lVar8 + 8;
              } while ((ulong)uVar7 * 8 - lVar8 != 0);
            }
            if ((*(long *)(this + 0x88) != 0) && (this[0x90] != (InplaceSolverIslandCallback)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar7 = *(uint *)(this + 0x7c);
            }
            this[0x90] = (InplaceSolverIslandCallback)0x1;
            *(long *)(this + 0x88) = lVar6;
            *(uint *)(this + 0x80) = uVar2;
            uVar9 = uVar7;
            uVar7 = uVar2;
          }
        }
        plVar10 = plVar20 + uVar12;
        uVar12 = uVar12 + 1;
        *(long *)(*(long *)(this + 0x88) + (long)(int)uVar9 * 8) = *plVar10;
        uVar9 = uVar9 + 1;
        *(uint *)(this + 0x7c) = uVar9;
      } while (uVar12 != uVar21);
    }
    if ((int)(*(int *)(this + 0x5c) + uVar9) <= *(int *)(*(long *)(this + 8) + 0x48)) {
      return;
    }
    processConstraints();
    return;
  }
  plVar10 = *(long **)(this + 0x10);
  uVar11 = *(undefined8 *)(this + 0x28);
  uVar14 = *(undefined8 *)(this + 0x30);
  lVar8 = *plVar10;
LAB_00f326a0:
  (**(code **)(lVar8 + 0x18))
            (plVar10,param_1,(ulong)(uint)param_2,param_3,param_4,plVar20,uVar21,lVar6,uVar11,uVar14
            );
  return;
}


