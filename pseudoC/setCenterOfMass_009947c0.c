// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCenterOfMass
// Entry Point: 009947c0
// Size: 76 bytes
// Signature: undefined __thiscall setCenterOfMass(Bt2PhysicsRBObject * this, float * param_1)


/* Bt2PhysicsRBObject::setCenterOfMass(float*) */

void __thiscall Bt2PhysicsRBObject::setCenterOfMass(Bt2PhysicsRBObject *this,float *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(this + 0x20);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(this + 0x84) = param_1[2];
  *(undefined8 *)(this + 0x7c) = uVar2;
  *(uint *)(this + 8) = *(uint *)(this + 8) | 0x10000;
  *(uint *)(this + 0x20) = uVar1 | 0x4000000;
  if (((uVar1 == 0) &&
      (*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0)) &&
     (*(long *)(this + 0x30) != 0)) {
    Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this);
    return;
  }
  return;
}


