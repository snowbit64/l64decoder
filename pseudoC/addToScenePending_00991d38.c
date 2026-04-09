// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToScenePending
// Entry Point: 00991d38
// Size: 20 bytes
// Signature: undefined __thiscall addToScenePending(Bt2ContextPhysicsObject * this, Bt2ScenegraphPhysicsContext * param_1)


/* Bt2ContextPhysicsObject::addToScenePending(Bt2ScenegraphPhysicsContext*) */

void __thiscall
Bt2ContextPhysicsObject::addToScenePending
          (Bt2ContextPhysicsObject *this,Bt2ScenegraphPhysicsContext *param_1)

{
  *(Bt2ScenegraphPhysicsContext **)(this + 0x10) = param_1;
  *(uint *)(this + 8) = *(uint *)(this + 8) | 2;
  return;
}


