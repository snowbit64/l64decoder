// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setConstraintSolver
// Entry Point: 00f34034
// Size: 96 bytes
// Signature: undefined __thiscall setConstraintSolver(btDiscreteDynamicsWorld * this, btConstraintSolver * param_1)


/* btDiscreteDynamicsWorld::setConstraintSolver(btConstraintSolver*) */

void __thiscall
btDiscreteDynamicsWorld::setConstraintSolver
          (btDiscreteDynamicsWorld *this,btConstraintSolver *param_1)

{
  if ((this[0x179] != (btDiscreteDynamicsWorld)0x0) && (*(long *)(this + 0x110) != 0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x179] = (btDiscreteDynamicsWorld)0x0;
  *(btConstraintSolver **)(this + 0x110) = param_1;
  *(btConstraintSolver **)(*(long *)(this + 0x108) + 0x10) = param_1;
  return;
}


