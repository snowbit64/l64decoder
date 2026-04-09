// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRollingFriction
// Entry Point: 009946c0
// Size: 60 bytes
// Signature: undefined __thiscall setRollingFriction(Bt2PhysicsRBObject * this, float param_1)


/* Bt2PhysicsRBObject::setRollingFriction(float) */

void __thiscall Bt2PhysicsRBObject::setRollingFriction(Bt2PhysicsRBObject *this,float param_1)

{
  uint uVar1;
  
  if (*(float *)(this + 0x68) != param_1) {
    uVar1 = *(uint *)(this + 0x20);
    *(float *)(this + 0x68) = param_1;
    *(uint *)(this + 0x20) = uVar1 | 0x400000;
    if (((uVar1 == 0) &&
        (*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0)) &&
       (*(long *)(this + 0x30) != 0)) {
      Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
                (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this);
      return;
    }
  }
  return;
}


