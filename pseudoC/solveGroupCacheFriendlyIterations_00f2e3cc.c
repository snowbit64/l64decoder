// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveGroupCacheFriendlyIterations
// Entry Point: 00f2e3cc
// Size: 476 bytes
// Signature: undefined __thiscall solveGroupCacheFriendlyIterations(btSequentialImpulseConstraintSolver * this, btCollisionObject * * param_1, int param_2, btPersistentManifold * * param_3, int param_4, btTypedConstraint * * param_5, int param_6, btContactSolverInfo * param_7, btIDebugDraw * param_8)


/* btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyIterations(btCollisionObject**, int,
   btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*)
    */

undefined  [16] __thiscall
btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyIterations
          (btSequentialImpulseConstraintSolver *this,btCollisionObject **param_1,int param_2,
          btPersistentManifold **param_3,int param_4,btTypedConstraint **param_5,int param_6,
          btContactSolverInfo *param_7,btIDebugDraw *param_8)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  timeval local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  CProfileManager::Start_Profile("solveGroupCacheFriendlyIterations");
  uVar4 = (**(code **)(*(long *)this + 0x40))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar5 = *(int *)(this + 0x128);
  if (*(int *)(this + 0x128) <= *(int *)(param_7 + 0x14)) {
    iVar5 = *(int *)(param_7 + 0x14);
  }
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      uVar4 = (**(code **)(*(long *)this + 0x50))
                        (this,iVar6,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  puVar2 = CProfileManager::CurrentNode;
  iVar5 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar5;
  if ((iVar5 == 0) && (*(int *)(puVar2 + 8) != 0)) {
    uVar3 = gettimeofday(&local_78,(__timezone_ptr_t)0x0);
    uVar4 = (ulong)uVar3;
    iVar5 = *(int *)(puVar2 + 0x18);
    uVar7 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_78.tv_usec +
                                      (local_78.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar2 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar2 + 0xc));
    *(undefined4 *)(puVar2 + 0xc) = uVar7;
  }
  if (iVar5 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


