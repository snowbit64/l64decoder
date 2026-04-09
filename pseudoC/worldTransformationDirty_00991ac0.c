// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirty
// Entry Point: 00991ac0
// Size: 48 bytes
// Signature: undefined __thiscall worldTransformationDirty(Bt2PhysicsJointObject * this, ScenegraphNode * param_1, uint param_2)


/* non-virtual thunk to Bt2PhysicsJointObject::worldTransformationDirty(ScenegraphNode*, unsigned
   int) */

void __thiscall
Bt2PhysicsJointObject::worldTransformationDirty
          (Bt2PhysicsJointObject *this,ScenegraphNode *param_1,uint param_2)

{
  if (((param_2 != 1) &&
      (*(Bt2ScenegraphPhysicsContext **)(this + -8) != (Bt2ScenegraphPhysicsContext *)0x0)) &&
     (this[0x18] == (Bt2PhysicsJointObject)0x0)) {
    this[0x18] = (Bt2PhysicsJointObject)0x1;
    Bt2ScenegraphPhysicsContext::enqueueJointTransformationUpdate
              (*(Bt2ScenegraphPhysicsContext **)(this + -8),this + -0x18);
    return;
  }
  return;
}


