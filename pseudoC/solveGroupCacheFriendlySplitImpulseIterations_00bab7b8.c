// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveGroupCacheFriendlySplitImpulseIterations
// Entry Point: 00bab7b8
// Size: 380 bytes
// Signature: undefined __cdecl solveGroupCacheFriendlySplitImpulseIterations(btCollisionObject * * param_1, int param_2, btPersistentManifold * * param_3, int param_4, btTypedConstraint * * param_5, int param_6, btContactSolverInfo * param_7, btIDebugDraw * param_8)


/* Bt2Solver::solveGroupCacheFriendlySplitImpulseIterations(btCollisionObject**, int,
   btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*)
    */

void Bt2Solver::solveGroupCacheFriendlySplitImpulseIterations
               (btCollisionObject **param_1,int param_2,btPersistentManifold **param_3,int param_4,
               btTypedConstraint **param_5,int param_6,btContactSolverInfo *param_7,
               btIDebugDraw *param_8)

{
  uint uVar1;
  uint uVar2;
  btSolverConstraint *pbVar3;
  long **unaff_x23;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long **pplVar7;
  
  uVar1 = *(uint *)((long)param_1 + 0x15c);
  if ((int)uVar1 < 1) {
    iVar4 = *(int *)(param_8 + 0x2c);
  }
  else {
    unaff_x23 = (long **)(*(long *)(param_1[0x29] + 0x10) + (long)*(int *)(param_1 + 0x2b) * 8);
    iVar4 = *(int *)(param_8 + 0x2c);
  }
  if ((iVar4 != 0) && (0 < *(int *)(param_8 + 0x14))) {
    iVar4 = 0;
    do {
      uVar5 = (ulong)uVar1;
      pplVar7 = unaff_x23;
      if (0 < (int)uVar1) {
        do {
          (**(code **)(**pplVar7 + 0x30))
                    (*(undefined4 *)(param_8 + 0xc),*pplVar7,param_1[0x2a],param_1 + 1);
          uVar5 = uVar5 - 1;
          pplVar7 = pplVar7 + 1;
        } while (uVar5 != 0);
      }
      uVar2 = *(uint *)((long)param_1 + 0x2c);
      if (((byte)param_8[0x41] & 1) == 0) {
        if (0 < (int)uVar2) {
          lVar6 = 0;
          do {
            pbVar3 = (btSolverConstraint *)
                     (param_1[7] + (long)*(int *)(param_1[0x17] + lVar6) * 0xa0);
            btSequentialImpulseConstraintSolver::resolveSplitPenetrationImpulseCacheFriendly
                      ((btSequentialImpulseConstraintSolver *)param_1,
                       (btSolverBody *)(param_1[3] + (long)*(int *)(pbVar3 + 0x98) * 0xf8),
                       (btSolverBody *)(param_1[3] + (long)*(int *)(pbVar3 + 0xa0) * 0xf8),pbVar3);
            lVar6 = lVar6 + 4;
          } while ((ulong)uVar2 * 4 - lVar6 != 0);
        }
      }
      else if (0 < (int)uVar2) {
        lVar6 = 0;
        do {
          btSequentialImpulseConstraintSolver::resolveSplitPenetrationSIMD
                    ((btSolverBody *)param_1,
                     (btSolverBody *)
                     (param_1[3] +
                     (long)*(int *)(param_1[7] + (long)*(int *)(param_1[0x17] + lVar6) * 0xa0 + 0x98
                                   ) * 0xf8),
                     (btSolverConstraint *)
                     (param_1[3] +
                     (long)*(int *)(param_1[7] + (long)*(int *)(param_1[0x17] + lVar6) * 0xa0 + 0xa0
                                   ) * 0xf8));
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 * 4 - lVar6 != 0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_8 + 0x14));
  }
  return;
}


