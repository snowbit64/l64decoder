// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConstraints
// Entry Point: 00f34d14
// Size: 764 bytes
// Signature: undefined __thiscall solveConstraints(btDiscreteDynamicsWorld * this, btContactSolverInfo * param_1)


/* btDiscreteDynamicsWorld::solveConstraints(btContactSolverInfo&) */

void __thiscall
btDiscreteDynamicsWorld::solveConstraints
          (btDiscreteDynamicsWorld *this,btContactSolverInfo *param_1)

{
  btTypedConstraint **ppbVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  btIDebugDraw *pbVar8;
  ulong uVar9;
  long lVar10;
  InplaceSolverIslandCallback *this_00;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  timeval local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  CProfileManager::Start_Profile("solveConstraints");
  iVar4 = *(int *)(this + 0x124);
  uVar6 = *(uint *)(this + 0xec);
  if ((int)uVar6 < iVar4) {
    lVar12 = (long)(int)uVar6;
    if (*(int *)(this + 0xf0) < iVar4) {
      if (iVar4 == 0) {
        lVar7 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar7 = (*(code *)PTR_FUN_01048e38)((long)iVar4 << 3,0x10);
        uVar6 = *(uint *)(this + 0xec);
      }
      if (0 < (int)uVar6) {
        lVar10 = 0;
        do {
          *(undefined8 *)(lVar7 + lVar10) = *(undefined8 *)(*(long *)(this + 0xf8) + lVar10);
          lVar10 = lVar10 + 8;
        } while ((ulong)uVar6 * 8 - lVar10 != 0);
      }
      if ((*(long *)(this + 0xf8) != 0) && (this[0x100] != (btDiscreteDynamicsWorld)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0xf8) = lVar7;
      *(int *)(this + 0xf0) = iVar4;
      this[0x100] = (btDiscreteDynamicsWorld)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0xf8) + lVar12 * 8) = 0;
      lVar12 = lVar12 + 1;
    } while (iVar4 != lVar12);
  }
  *(int *)(this + 0xec) = iVar4;
  iVar4 = (**(code **)(*(long *)this + 0xd0))(this);
  if (0 < iVar4) {
    lVar12 = 0;
    do {
      lVar7 = lVar12 * 8;
      lVar12 = lVar12 + 1;
      *(undefined8 *)(*(long *)(this + 0xf8) + lVar7) =
           *(undefined8 *)(*(long *)(this + 0x130) + lVar7);
      iVar4 = (**(code **)(*(long *)this + 0xd0))(this);
    } while (lVar12 < iVar4);
  }
  iVar4 = *(int *)(this + 0xec) + -1;
  if (iVar4 != 0 && 0 < *(int *)(this + 0xec)) {
    btAlignedObjectArray<btTypedConstraint*>::quickSortInternal<btSortConstraintOnIslandPredicate>
              ((btAlignedObjectArray<btTypedConstraint*> *)(this + 0xe8),
               (btSortConstraintOnIslandPredicate *)&local_68,0,iVar4);
  }
  iVar4 = (**(code **)(*(long *)this + 0xd0))(this);
  this_00 = *(InplaceSolverIslandCallback **)(this + 0x108);
  ppbVar1 = (btTypedConstraint **)0x0;
  if (iVar4 != 0) {
    ppbVar1 = *(btTypedConstraint ***)(this + 0xf8);
  }
  iVar4 = *(int *)(this + 0xec);
  pbVar8 = (btIDebugDraw *)(**(code **)(*(long *)this + 0x28))(this);
  InplaceSolverIslandCallback::setup(this_00,param_1,ppbVar1,iVar4,pbVar8);
  plVar11 = *(long **)(this + 0x110);
  uVar13 = *(undefined4 *)(this + 0xc);
  uVar5 = (**(code **)(**(long **)(this + 0x28) + 0x48))();
  (**(code **)(*plVar11 + 0x10))(plVar11,uVar13,uVar5);
  btSimulationIslandManager::buildAndProcessIslands
            (*(btSimulationIslandManager **)(this + 0x118),*(btDispatcher **)(this + 0x28),
             (btCollisionWorld *)this,*(IslandCallback **)(this + 0x108));
  InplaceSolverIslandCallback::processConstraints();
  uVar9 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                    (*(long **)(this + 0x110),param_1,*(undefined8 *)(this + 0x68));
  puVar3 = CProfileManager::CurrentNode;
  iVar4 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar4;
  if ((iVar4 == 0) && (*(int *)(puVar3 + 8) != 0)) {
    uVar6 = gettimeofday(&local_68,(__timezone_ptr_t)0x0);
    uVar9 = (ulong)uVar6;
    iVar4 = *(int *)(puVar3 + 0x18);
    uVar13 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_68.tv_usec +
                                       (local_68.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar13;
  }
  if (iVar4 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


