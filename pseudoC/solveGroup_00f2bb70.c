// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveGroup
// Entry Point: 00f2bb70
// Size: 412 bytes
// Signature: undefined __cdecl solveGroup(btCollisionObject * * param_1, int param_2, btPersistentManifold * * param_3, int param_4, btTypedConstraint * * param_5, int param_6, btContactSolverInfo * param_7, btIDebugDraw * param_8, btDispatcher * param_9)


/* btSequentialImpulseConstraintSolver::solveGroup(btCollisionObject**, int, btPersistentManifold**,
   int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*, btDispatcher*) */

undefined  [16]
btSequentialImpulseConstraintSolver::solveGroup
          (btCollisionObject **param_1,int param_2,btPersistentManifold **param_3,int param_4,
          btTypedConstraint **param_5,int param_6,btContactSolverInfo *param_7,btIDebugDraw *param_8
          ,btDispatcher *param_9)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  timeval local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = (ulong)param_3 & 0xffffffff;
  CProfileManager::Start_Profile("solveGroup");
  (**(code **)(*param_1 + 0x58))
            (param_1,param_2,uVar5,param_4,(ulong)param_5 & 0xffffffff,param_6,
             (ulong)param_7 & 0xffffffff,param_8,param_9);
  (**(code **)(*param_1 + 0x60))
            (param_1,param_2,uVar5,param_4,(ulong)param_5 & 0xffffffff,param_6,
             (ulong)param_7 & 0xffffffff,param_8,param_9);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1,param_2,uVar5,param_8);
  puVar2 = CProfileManager::CurrentNode;
  iVar4 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar4;
  if ((iVar4 == 0) && (*(int *)(puVar2 + 8) != 0)) {
    uVar3 = gettimeofday(&local_78,(__timezone_ptr_t)0x0);
    uVar5 = (ulong)uVar3;
    iVar4 = *(int *)(puVar2 + 0x18);
    uVar6 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_78.tv_usec +
                                      (local_78.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar2 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar2 + 0xc));
    *(undefined4 *)(puVar2 + 0xc) = uVar6;
  }
  if (iVar4 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


