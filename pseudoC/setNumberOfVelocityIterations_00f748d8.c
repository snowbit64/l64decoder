// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNumberOfVelocityIterations
// Entry Point: 00f748d8
// Size: 8 bytes
// Signature: undefined __thiscall setNumberOfVelocityIterations(btSoftBodySolver * this, int param_1)


/* btSoftBodySolver::setNumberOfVelocityIterations(int) */

void __thiscall btSoftBodySolver::setNumberOfVelocityIterations(btSoftBodySolver *this,int param_1)

{
  *(int *)(this + 0xc) = param_1;
  return;
}


