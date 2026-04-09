// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSequentialImpulseConstraintSolver
// Entry Point: 00f2bb30
// Size: 64 bytes
// Signature: undefined __thiscall ~btSequentialImpulseConstraintSolver(btSequentialImpulseConstraintSolver * this)


/* btSequentialImpulseConstraintSolver::~btSequentialImpulseConstraintSolver() */

void __thiscall
btSequentialImpulseConstraintSolver::~btSequentialImpulseConstraintSolver
          (btSequentialImpulseConstraintSolver *this)

{
  ~btSequentialImpulseConstraintSolver(this);
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f2bb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(this);
  return;
}


