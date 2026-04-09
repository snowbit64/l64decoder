// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btDefaultSoftBodySolver
// Entry Point: 00f74704
// Size: 96 bytes
// Signature: undefined __thiscall ~btDefaultSoftBodySolver(btDefaultSoftBodySolver * this)


/* btDefaultSoftBodySolver::~btDefaultSoftBodySolver() */

void __thiscall btDefaultSoftBodySolver::~btDefaultSoftBodySolver(btDefaultSoftBodySolver *this)

{
  *(undefined ***)this = &PTR__btDefaultSoftBodySolver_0101b610;
  if ((*(long *)(this + 0x28) != 0) && (this[0x30] != (btDefaultSoftBodySolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  operator_delete(this);
  return;
}


