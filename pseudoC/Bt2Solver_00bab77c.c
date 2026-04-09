// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2Solver
// Entry Point: 00bab77c
// Size: 40 bytes
// Signature: undefined __thiscall ~Bt2Solver(Bt2Solver * this)


/* Bt2Solver::~Bt2Solver() */

void __thiscall Bt2Solver::~Bt2Solver(Bt2Solver *this)

{
  btSequentialImpulseConstraintSolver::~btSequentialImpulseConstraintSolver
            ((btSequentialImpulseConstraintSolver *)this);
                    /* try { // try from 00bab790 to 00bab797 has its CatchHandler @ 00bab7a4 */
  btAlignedFreeInternal(this);
  return;
}


