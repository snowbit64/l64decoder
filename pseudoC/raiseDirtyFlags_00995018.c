// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raiseDirtyFlags
// Entry Point: 00995018
// Size: 48 bytes
// Signature: undefined __thiscall raiseDirtyFlags(Bt2PhysicsRBObject * this, uint param_1)


/* Bt2PhysicsRBObject::raiseDirtyFlags(unsigned int) */

void __thiscall Bt2PhysicsRBObject::raiseDirtyFlags(Bt2PhysicsRBObject *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  *(uint *)(this + 0x20) = uVar1 | param_1;
  if (((uVar1 == 0) &&
      (*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0)) &&
     (*(long *)(this + 0x30) != 0)) {
    Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this);
    return;
  }
  return;
}


