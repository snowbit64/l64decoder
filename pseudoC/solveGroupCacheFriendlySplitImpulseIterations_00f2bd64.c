// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveGroupCacheFriendlySplitImpulseIterations
// Entry Point: 00f2bd64
// Size: 348 bytes
// Signature: undefined __cdecl solveGroupCacheFriendlySplitImpulseIterations(btCollisionObject * * param_1, int param_2, btPersistentManifold * * param_3, int param_4, btTypedConstraint * * param_5, int param_6, btContactSolverInfo * param_7, btIDebugDraw * param_8)


/* btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySplitImpulseIterations(btCollisionObject**,
   int, btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&,
   btIDebugDraw*) */

void btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySplitImpulseIterations
               (btCollisionObject **param_1,int param_2,btPersistentManifold **param_3,int param_4,
               btTypedConstraint **param_5,int param_6,btContactSolverInfo *param_7,
               btIDebugDraw *param_8)

{
  uint uVar1;
  btCollisionObject **ppbVar2;
  btSolverConstraint *pbVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if (*(int *)(param_8 + 0x2c) != 0) {
    iVar4 = *(int *)(param_8 + 0x14);
    uVar1 = *(uint *)((long)param_1 + 0x2c);
    if (((byte)param_8[0x41] & 1) == 0) {
      if (0 < iVar4 && 0 < (int)uVar1) {
        iVar5 = 0;
        ppbVar2 = param_1;
        while( true ) {
          if (0 < (int)uVar1) {
            lVar6 = 0;
            do {
              pbVar3 = (btSolverConstraint *)
                       (param_1[7] + (long)*(int *)(param_1[0x17] + lVar6) * 0xa0);
              ppbVar2 = (btCollisionObject **)
                        resolveSplitPenetrationImpulseCacheFriendly
                                  ((btSequentialImpulseConstraintSolver *)ppbVar2,
                                   (btSolverBody *)
                                   (param_1[3] + (long)*(int *)(pbVar3 + 0x98) * 0xf8),
                                   (btSolverBody *)
                                   (param_1[3] + (long)*(int *)(pbVar3 + 0xa0) * 0xf8),pbVar3);
              lVar6 = lVar6 + 4;
            } while ((ulong)uVar1 * 4 - lVar6 != 0);
            iVar4 = *(int *)(param_8 + 0x14);
          }
          iVar5 = iVar5 + 1;
          if (iVar4 <= iVar5) break;
          uVar1 = *(uint *)((long)param_1 + 0x2c);
        }
      }
    }
    else if (0 < iVar4 && 0 < (int)uVar1) {
      iVar5 = 0;
      ppbVar2 = param_1;
      while( true ) {
        if (0 < (int)uVar1) {
          lVar6 = 0;
          do {
            pbVar3 = (btSolverConstraint *)
                     (param_1[7] + (long)*(int *)(param_1[0x17] + lVar6) * 0xa0);
            ppbVar2 = (btCollisionObject **)
                      resolveSplitPenetrationImpulseCacheFriendly
                                ((btSequentialImpulseConstraintSolver *)ppbVar2,
                                 (btSolverBody *)(param_1[3] + (long)*(int *)(pbVar3 + 0x98) * 0xf8)
                                 ,(btSolverBody *)
                                  (param_1[3] + (long)*(int *)(pbVar3 + 0xa0) * 0xf8),pbVar3);
            lVar6 = lVar6 + 4;
          } while ((ulong)uVar1 * 4 - lVar6 != 0);
          iVar4 = *(int *)(param_8 + 0x14);
        }
        iVar5 = iVar5 + 1;
        if (iVar4 <= iVar5) break;
        uVar1 = *(uint *)((long)param_1 + 0x2c);
      }
    }
  }
  return;
}


