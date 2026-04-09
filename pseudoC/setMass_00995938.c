// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMass
// Entry Point: 00995938
// Size: 76 bytes
// Signature: undefined __thiscall setMass(Bt2PhysicsRBObject * this, float param_1)


/* Bt2PhysicsRBObject::setMass(float) */

void __thiscall Bt2PhysicsRBObject::setMass(Bt2PhysicsRBObject *this,float param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  *(uint *)(this + 8) = *(uint *)(this + 8) | 0x20000;
  if (param_1 <= 1e-05) {
    param_1 = 1e-05;
  }
  *(uint *)(this + 0x20) = uVar1 | 0x2000000;
  *(float *)(this + 0x78) = param_1;
  if (((uVar1 == 0) &&
      (*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0)) &&
     (*(long *)(this + 0x30) != 0)) {
    Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this);
    return;
  }
  return;
}


