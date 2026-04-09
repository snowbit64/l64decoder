// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveSplitPenetrationSIMD
// Entry Point: 00f2b880
// Size: 4 bytes
// Signature: undefined __cdecl resolveSplitPenetrationSIMD(btSolverBody * param_1, btSolverBody * param_2, btSolverConstraint * param_3)


/* btSequentialImpulseConstraintSolver::resolveSplitPenetrationSIMD(btSolverBody&, btSolverBody&,
   btSolverConstraint const&) */

void btSequentialImpulseConstraintSolver::resolveSplitPenetrationSIMD
               (btSolverBody *param_1,btSolverBody *param_2,btSolverConstraint *param_3)

{
  btSolverConstraint *in_x3;
  
  resolveSplitPenetrationImpulseCacheFriendly
            ((btSequentialImpulseConstraintSolver *)param_1,param_2,(btSolverBody *)param_3,in_x3);
  return;
}


