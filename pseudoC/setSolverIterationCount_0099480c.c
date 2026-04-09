// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSolverIterationCount
// Entry Point: 0099480c
// Size: 52 bytes
// Signature: undefined __thiscall setSolverIterationCount(Bt2PhysicsRBObject * this, uint param_1)


/* Bt2PhysicsRBObject::setSolverIterationCount(unsigned int) */

void __thiscall Bt2PhysicsRBObject::setSolverIterationCount(Bt2PhysicsRBObject *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  *(uint *)(this + 0x8c) = param_1;
  *(uint *)(this + 0x20) = uVar1 | 0x8000000;
  if (((uVar1 == 0) &&
      (*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0)) &&
     (*(long *)(this + 0x30) != 0)) {
    Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this);
    return;
  }
  return;
}


