// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveSingleIteration
// Entry Point: 00bab9c8
// Size: 204 bytes
// Signature: undefined __cdecl solveSingleIteration(int param_1, btCollisionObject * * param_2, int param_3, btPersistentManifold * * param_4, int param_5, btTypedConstraint * * param_6, int param_7, btContactSolverInfo * param_8, btIDebugDraw * param_9)


/* Bt2Solver::solveSingleIteration(int, btCollisionObject**, int, btPersistentManifold**, int,
   btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*) */

void Bt2Solver::solveSingleIteration
               (int param_1,btCollisionObject **param_2,int param_3,btPersistentManifold **param_4,
               int param_5,btTypedConstraint **param_6,int param_7,btContactSolverInfo *param_8,
               btIDebugDraw *param_9)

{
  ulong uVar1;
  ulong uVar2;
  long **pplVar3;
  
  uVar1 = (ulong)(uint)param_1;
  uVar2 = (ulong)*(uint *)(uVar1 + 0x15c);
  if (0 < (int)*(uint *)(uVar1 + 0x15c)) {
    pplVar3 = (long **)(*(long *)(*(long *)(uVar1 + 0x148) + 0x10) +
                       (long)*(int *)(uVar1 + 0x158) * 8);
    do {
      (**(code **)(**pplVar3 + 0x28))
                (*(undefined4 *)(param_9 + 0xc),*pplVar3,*(undefined8 *)(uVar1 + 0x150),uVar1 + 8);
      uVar2 = uVar2 - 1;
      pplVar3 = pplVar3 + 1;
    } while (uVar2 != 0);
  }
  btSequentialImpulseConstraintSolver::solveSingleIteration
            (param_1,(btCollisionObject **)((ulong)param_2 & 0xffffffff),param_3,
             (btPersistentManifold **)((ulong)param_4 & 0xffffffff),param_5,
             (btTypedConstraint **)((ulong)param_6 & 0xffffffff),param_7,
             (btContactSolverInfo *)((ulong)param_8 & 0xffffffff),param_9);
  return;
}


