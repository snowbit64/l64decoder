// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f748b0
// Size: 12 bytes
// Signature: undefined __thiscall processCollision(btDefaultSoftBodySolver * this, btSoftBody * param_1, btCollisionObjectWrapper * param_2)


/* btDefaultSoftBodySolver::processCollision(btSoftBody*, btCollisionObjectWrapper const*) */

void __thiscall
btDefaultSoftBodySolver::processCollision
          (btDefaultSoftBodySolver *this,btSoftBody *param_1,btCollisionObjectWrapper *param_2)

{
  btSoftBody::defaultCollisionHandler(param_1,param_2);
  return;
}


