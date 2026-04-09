// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRestitution
// Entry Point: 0099460c
// Size: 60 bytes
// Signature: undefined __thiscall setRestitution(Bt2PhysicsRBObject * this, float param_1)


/* Bt2PhysicsRBObject::setRestitution(float) */

void __thiscall Bt2PhysicsRBObject::setRestitution(Bt2PhysicsRBObject *this,float param_1)

{
  uint uVar1;
  
  if (*(float *)(this + 0x5c) != param_1) {
    uVar1 = *(uint *)(this + 0x20);
    *(float *)(this + 0x5c) = param_1;
    *(uint *)(this + 0x20) = uVar1 | 0x200000;
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


