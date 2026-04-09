// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionMask
// Entry Point: 009945cc
// Size: 64 bytes
// Signature: undefined __thiscall setCollisionMask(Bt2PhysicsRBObject * this, uint param_1)


/* Bt2PhysicsRBObject::setCollisionMask(unsigned int) */

void __thiscall Bt2PhysicsRBObject::setCollisionMask(Bt2PhysicsRBObject *this,uint param_1)

{
  uint uVar1;
  
  if (*(uint *)(this + 0x58) != param_1) {
    uVar1 = *(uint *)(this + 0x20);
    *(uint *)(this + 0x58) = param_1;
    *(uint *)(this + 0x20) = uVar1 | 0x100000;
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


