// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStaticFriction
// Entry Point: 00994648
// Size: 60 bytes
// Signature: undefined __thiscall setStaticFriction(Bt2PhysicsRBObject * this, float param_1)


/* Bt2PhysicsRBObject::setStaticFriction(float) */

void __thiscall Bt2PhysicsRBObject::setStaticFriction(Bt2PhysicsRBObject *this,float param_1)

{
  uint uVar1;
  
  if (*(float *)(this + 0x60) != param_1) {
    uVar1 = *(uint *)(this + 0x20);
    *(float *)(this + 0x60) = param_1;
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


