// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDensity
// Entry Point: 00994774
// Size: 76 bytes
// Signature: undefined __thiscall setDensity(Bt2PhysicsRBObject * this, float param_1)


/* Bt2PhysicsRBObject::setDensity(float) */

void __thiscall Bt2PhysicsRBObject::setDensity(Bt2PhysicsRBObject *this,float param_1)

{
  uint uVar1;
  
  if (param_1 <= 0.0001) {
    param_1 = 0.0001;
  }
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffdffff;
  *(float *)(this + 0x74) = param_1;
  if (((*(long *)(this + 0x30) != 0) &&
      (uVar1 = *(uint *)(this + 0x20), *(uint *)(this + 0x20) = uVar1 | 0x1000000, uVar1 == 0)) &&
     (*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0)) {
    Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this);
    return;
  }
  return;
}


