// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFrictionVelocity
// Entry Point: 00995a5c
// Size: 60 bytes
// Signature: undefined __thiscall setFrictionVelocity(Bt2PhysicsRBObject * this, float param_1)


/* Bt2PhysicsRBObject::setFrictionVelocity(float) */

void __thiscall Bt2PhysicsRBObject::setFrictionVelocity(Bt2PhysicsRBObject *this,float param_1)

{
  uint uVar1;
  
  if (*(float *)(this + 0x88) != param_1) {
    uVar1 = *(uint *)(this + 0x20);
    *(float *)(this + 0x88) = param_1;
    *(uint *)(this + 0x20) = uVar1 | 0x40000000;
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


