// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveGroupCacheFriendlyFinish
// Entry Point: 00bab934
// Size: 148 bytes
// Signature: undefined __thiscall solveGroupCacheFriendlyFinish(Bt2Solver * this, btCollisionObject * * param_1, int param_2, btContactSolverInfo * param_3)


/* Bt2Solver::solveGroupCacheFriendlyFinish(btCollisionObject**, int, btContactSolverInfo const&) */

void __thiscall
Bt2Solver::solveGroupCacheFriendlyFinish
          (Bt2Solver *this,btCollisionObject **param_1,int param_2,btContactSolverInfo *param_3)

{
  ulong uVar1;
  long **pplVar2;
  
  uVar1 = (ulong)*(uint *)(this + 0x15c);
  if (0 < (int)*(uint *)(this + 0x15c)) {
    pplVar2 = (long **)(*(long *)(*(long *)(this + 0x148) + 0x10) + (long)*(int *)(this + 0x158) * 8
                       );
    do {
      (**(code **)(**pplVar2 + 0x38))
                (*(undefined4 *)(param_3 + 0xc),*pplVar2,*(undefined8 *)(this + 0x150),this + 8);
      uVar1 = uVar1 - 1;
      pplVar2 = pplVar2 + 1;
    } while (uVar1 != 0);
  }
  btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyFinish
            ((btSequentialImpulseConstraintSolver *)this,param_1,param_2,param_3);
  return;
}


